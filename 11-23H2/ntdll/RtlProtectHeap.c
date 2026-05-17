/*
 * XREFs of RtlProtectHeap @ 0x180049120
 * Callers:
 *     RtlDeleteGrowableFunctionTable @ 0x180072330 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180072880 (RtlAddGrowableFunctionTable.c)
 *     RtlpCallVectoredHandlers @ 0x180078068 (RtlpCallVectoredHandlers.c)
 *     LdrEnsureMrdataHeapExists @ 0x180082074 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x180082ED0 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180084C10 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180085CA0 (RtlpRemoveVectoredHandler.c)
 *     RtlDeleteFunctionTable @ 0x18008CC90 (RtlDeleteFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18008D040 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800EC510 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800EC830 (RtlGrowFunctionTable.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x180029FB0 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpGetHeapProtection @ 0x1800466C4 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapValidateProtection @ 0x1800466F8 (RtlpHpHeapValidateProtection.c)
 *     RtlpAddHeapToUnprotectedList @ 0x180048D7C (RtlpAddHeapToUnprotectedList.c)
 *     RtlpRemoveHeapFromUnprotectedList @ 0x180048E8C (RtlpRemoveHeapFromUnprotectedList.c)
 *     RtlpProtectHeap @ 0x18004927C (RtlpProtectHeap.c)
 *     RtlpAddHeapToProtectedList @ 0x18004988C (RtlpAddHeapToProtectedList.c)
 *     RtlpRemoveHeapFromProtectedList @ 0x180049904 (RtlpRemoveHeapFromProtectedList.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpHpHeapProtect @ 0x1801232C4 (RtlpHpHeapProtect.c)
 */

void __fastcall RtlProtectHeap(__m128i *a1, char a2)
{
  unsigned int HeapProtection; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  signed __int32 v8; // ebx
  __int64 DeferredCriticalSectionEvent; // rdi
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[1].m128i_i32[0] == -571548178 || (a1[7].m128i_i32[1] & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
    if ( a1[1].m128i_i32[0] == -571548178 )
      HeapProtection = RtlpHpHeapValidateProtection(
                         (__int64)a1,
                         (a1[1].m128i_i32[1] & 0x40000000) != 0 ? 64 : 4,
                         (unsigned __int8)BYTE1(a1->m128i_i64[0]),
                         _mm_srli_si128(*a1, 8).m128i_u64[0]);
    else
      HeapProtection = RtlpGetHeapProtection((__int64)a1, 1);
    v5 = HeapProtection;
    if ( a2 )
    {
      RtlpRemoveHeapFromUnprotectedList((__int64)a1);
      RtlpAddHeapToProtectedList(a1);
      v6 = 2;
      if ( v5 == 64 )
        v6 = 32;
      v5 = v6;
    }
    if ( a1[1].m128i_i32[0] == -571548178 )
      v7 = RtlpHpHeapProtect(a1, v5);
    else
      v7 = RtlpProtectHeap(a1, v5);
    if ( v7 >= 0 && !a2 )
    {
      RtlpRemoveHeapFromProtectedList(a1);
      RtlpAddHeapToUnprotectedList((__int64)a1);
    }
    if ( !--dword_18018606C )
    {
      qword_180186070 = 0LL;
      v8 = _InterlockedCompareExchange(&dword_180186068, -1, -2);
      if ( v8 != -2 )
      {
        if ( (dword_180186068 & 1) != 0 )
          RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
        DeferredCriticalSectionEvent = qword_180186078;
        if ( !qword_180186078 )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(&RtlpProcessHeapsListLock);
        v10 = 0;
        while ( v8 != _InterlockedCompareExchange(&dword_180186068, (v8 & 2 | 1) + v8, v8) )
        {
          RtlBackoff(&v10);
          _m_prefetchw(&dword_180186068);
          v8 = dword_180186068;
        }
        if ( (v8 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx((__int64)&RtlpProcessHeapsListLock, DeferredCriticalSectionEvent);
      }
    }
  }
}
