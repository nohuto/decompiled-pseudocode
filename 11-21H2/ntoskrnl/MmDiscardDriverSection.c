/*
 * XREFs of MmDiscardDriverSection @ 0x140B2FE74
 * Callers:
 *     KeFreeInitializationCode @ 0x140AD6B50 (KeFreeInitializationCode.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402FDA80 (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     MiFreeInitializationCode @ 0x14075F23C (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x140760B20 (MiSnapDriverRange.c)
 */

_QWORD *__fastcall MmDiscardDriverSection(unsigned __int64 a1)
{
  _QWORD *v2; // rdi
  unsigned __int64 v3; // rbx
  _QWORD *result; // rax
  unsigned __int64 v5; // rsi
  struct _KTHREAD *Lock; // rbx
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  v2 = MiLookupDataTableEntry(a1, 1);
  v3 = v2[6];
  result = (_QWORD *)MI_IS_PHYSICAL_ADDRESS(v3);
  if ( !(_DWORD)result || v3 == PsNtosImageBase || v3 == PsHalImageBase )
  {
    result = (_QWORD *)MiSnapDriverRange((__int64)v2, 0, 0, a1, &v7, (unsigned __int64 *)&v8);
    v5 = v7;
    if ( v7 )
    {
      Lock = MmAcquireLoadLock();
      MiFreeInitializationCode((unsigned __int64)v2, v5, v8, 0);
      return MmReleaseLoadLock((__int64)Lock);
    }
  }
  return result;
}
