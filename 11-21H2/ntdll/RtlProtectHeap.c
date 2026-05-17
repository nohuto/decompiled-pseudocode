/*
 * XREFs of RtlProtectHeap @ 0x180030B10
 * Callers:
 *     RtlDeleteFunctionTable @ 0x1800775B0 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180077780 (RtlAddFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800779E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180077F10 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x1800781D0 (RtlAddGrowableFunctionTable.c)
 *     RtlpCallVectoredHandlers @ 0x18007C918 (RtlpCallVectoredHandlers.c)
 *     LdrEnsureMrdataHeapExists @ 0x180087234 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x180087700 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180087D70 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180088BC0 (RtlpRemoveVectoredHandler.c)
 *     RtlGrowFunctionTable @ 0x1800EBD50 (RtlGrowFunctionTable.c)
 * Callees:
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlpGetHeapProtection @ 0x1800202FC (RtlpGetHeapProtection.c)
 *     RtlpHpHeapValidateProtection @ 0x1800227CC (RtlpHpHeapValidateProtection.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18002F674 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpRemoveHeapFromUnprotectedList @ 0x18003099C (RtlpRemoveHeapFromUnprotectedList.c)
 *     RtlpProtectHeap @ 0x180030C68 (RtlpProtectHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18005B090 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpRemoveHeapFromProtectedList @ 0x18008476C (RtlpRemoveHeapFromProtectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x180085118 (RtlpAddHeapToProtectedList.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpHpHeapProtect @ 0x18011F8D8 (RtlpHpHeapProtect.c)
 */

void __fastcall RtlProtectHeap(_DWORD *a1, char a2)
{
  unsigned int HeapProtection; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  signed __int32 v9; // edi
  __int64 DeferredCriticalSectionEvent; // rbx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[4] == -571548178 || (a1[29] & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    if ( a1[4] == -571548178 )
      HeapProtection = RtlpHpHeapValidateProtection((__int64)a1, (a1[5] & 0x40000000) != 0 ? 64 : 4);
    else
      HeapProtection = RtlpGetHeapProtection((__int64)a1, 1);
    v5 = HeapProtection;
    if ( a2 )
    {
      RtlpRemoveHeapFromUnprotectedList((__int64)a1);
      RtlpAddHeapToProtectedList(v6);
      v7 = 2;
      if ( v5 == 64 )
        v7 = 32;
      v5 = v7;
    }
    if ( a1[4] == -571548178 )
      v8 = RtlpHpHeapProtect(a1, v5);
    else
      v8 = RtlpProtectHeap(a1, v5);
    if ( v8 >= 0 && !a2 )
    {
      RtlpRemoveHeapFromProtectedList(a1);
      RtlpAddHeapToUnprotectedList((__int64)a1);
    }
    if ( !--dword_180178D4C )
    {
      qword_180178D50 = 0LL;
      v9 = _InterlockedCompareExchange(&dword_180178D48, -1, -2);
      if ( v9 != -2 )
      {
        if ( (dword_180178D48 & 1) != 0 )
          RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
        DeferredCriticalSectionEvent = qword_180178D58;
        if ( !qword_180178D58 )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(&RtlpProcessHeapsListLock);
        v11 = 0;
        while ( v9 != _InterlockedCompareExchange(&dword_180178D48, (v9 & 2 | 1) + v9, v9) )
        {
          RtlBackoff(&v11);
          _m_prefetchw(&dword_180178D48);
          v9 = dword_180178D48;
        }
        if ( (v9 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(&RtlpProcessHeapsListLock, DeferredCriticalSectionEvent);
      }
    }
  }
}
