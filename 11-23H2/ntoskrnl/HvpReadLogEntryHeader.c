/*
 * XREFs of HvpReadLogEntryHeader @ 0x1407FE478
 * Callers:
 *     HvpIncrementalLogFileEnumeratorAdvance @ 0x1407FE348 (HvpIncrementalLogFileEnumeratorAdvance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpReadLogEntryHeader(
        unsigned int a1,
        __int64 (__fastcall *a2)(__int64, _QWORD, __int64, _OWORD **),
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  _OWORD *v6; // rcx
  _OWORD *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  result = a2(a3, a1, 40LL, &v7);
  if ( (int)result >= 0 )
  {
    v6 = v7;
    *(_OWORD *)a4 = *v7;
    *(_OWORD *)(a4 + 16) = v6[1];
    *(_QWORD *)(a4 + 32) = *((_QWORD *)v6 + 4);
  }
  return result;
}
