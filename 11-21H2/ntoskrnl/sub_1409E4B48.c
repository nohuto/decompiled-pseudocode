/*
 * XREFs of sub_1409E4B48 @ 0x1409E4B48
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 */

__int64 __fastcall sub_1409E4B48(__int64 a1, unsigned __int16 *a2, void *a3, unsigned int *a4)
{
  unsigned int v5; // r12d
  unsigned int v6; // edi
  __int64 v8; // rbp
  unsigned int v9; // esi

  v5 = *a4;
  v6 = 0;
  v8 = sub_140797594(a1, *a2, 0);
  if ( v8 )
  {
    memset(a3, 0, *a4);
    ExAcquirePushLockSharedEx(v8 + 688, 0LL);
    v9 = 16 * *(unsigned __int16 *)(v8 + 1064);
    if ( v9 > v5 )
      v6 = -1073741789;
    else
      memmove(a3, *(const void **)(v8 + 1072), v9);
    *a4 = v9;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 688), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 688));
    sub_1402AFC00(v8 + 688);
    sub_1407981E8((unsigned int *)v8, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
