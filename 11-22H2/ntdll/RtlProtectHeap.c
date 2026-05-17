/*
 * XREFs of RtlProtectHeap @ 0x180049280
 * Callers:
 *     RtlDeleteGrowableFunctionTable @ 0x180071CC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180072210 (RtlAddGrowableFunctionTable.c)
 *     RtlpCallVectoredHandlers @ 0x1800779F8 (RtlpCallVectoredHandlers.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081A04 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x180082860 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180084410 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x1800854A0 (RtlpRemoveVectoredHandler.c)
 *     RtlDeleteFunctionTable @ 0x18008C490 (RtlDeleteFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18008C840 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800EB1E0 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800EB500 (RtlGrowFunctionTable.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18002A180 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlpGetHeapProtection @ 0x180046824 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapValidateProtection @ 0x180046858 (RtlpHpHeapValidateProtection.c)
 *     RtlpAddHeapToUnprotectedList @ 0x180048EDC (RtlpAddHeapToUnprotectedList.c)
 *     RtlpRemoveHeapFromUnprotectedList @ 0x180048FEC (RtlpRemoveHeapFromUnprotectedList.c)
 *     RtlpProtectHeap @ 0x1800493DC (RtlpProtectHeap.c)
 *     RtlpAddHeapToProtectedList @ 0x1800499EC (RtlpAddHeapToProtectedList.c)
 *     RtlpRemoveHeapFromProtectedList @ 0x180049A64 (RtlpRemoveHeapFromProtectedList.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpHpHeapProtect @ 0x180121E14 (RtlpHpHeapProtect.c)
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
    if ( !--dword_180182FCC )
    {
      qword_180182FD0 = 0LL;
      v8 = _InterlockedCompareExchange(&dword_180182FC8, -1, -2);
      if ( v8 != -2 )
      {
        if ( (dword_180182FC8 & 1) != 0 )
          RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
        DeferredCriticalSectionEvent = qword_180182FD8;
        if ( !qword_180182FD8 )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(&RtlpProcessHeapsListLock);
        v10 = 0;
        while ( v8 != _InterlockedCompareExchange(&dword_180182FC8, (v8 & 2 | 1) + v8, v8) )
        {
          RtlBackoff(&v10);
          _m_prefetchw(&dword_180182FC8);
          v8 = dword_180182FC8;
        }
        if ( (v8 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx((__int64)&RtlpProcessHeapsListLock, DeferredCriticalSectionEvent);
      }
    }
  }
}
