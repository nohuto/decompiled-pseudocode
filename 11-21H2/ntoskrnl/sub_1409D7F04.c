/*
 * XREFs of sub_1409D7F04 @ 0x1409D7F04
 * Callers:
 *     sub_1409D50C0 @ 0x1409D50C0 (sub_1409D50C0.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409D59E8 @ 0x1409D59E8 (sub_1409D59E8.c)
 *     sub_1409D7C2C @ 0x1409D7C2C (sub_1409D7C2C.c)
 */

__int64 __fastcall sub_1409D7F04(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // edi
  unsigned int v7; // ecx
  int v8; // edi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v10; // rbp
  _DWORD *v11; // rsi
  __int64 v12; // rdx

  memset(a2 + 2, 0, 0x460uLL);
  v4 = sub_1409D7C2C(a1, a2[1]);
  v5 = v4;
  if ( v4 )
  {
    v7 = a2[7] & 0xFFFFFFC0 | 1;
    a2[7] = v7;
    *((_QWORD *)a2 + 1) = *(_QWORD *)(v4 + 16);
    a2[5] = *(_DWORD *)(v4 + 8);
    a2[6] = *(_DWORD *)(v4 + 24);
    a2[25] = *(_DWORD *)(v4 + 32);
    a2[7] = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v4 + 28) << 6)) & 0x40;
    if ( (*a2 & 0x100) != 0 || (v6 = sub_1409D59E8(v4 + 40, a2 + 26, 0x400u), v6 >= 0) )
    {
      a2[24] = 0;
      v8 = 0;
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v10 = (signed __int64 *)(v5 + 160);
      ExAcquirePushLockSharedEx(v5 + 160, 0LL);
      v11 = (_DWORD *)(v5 + 168);
      v12 = 16LL;
      do
      {
        if ( *v11 != -1 )
        {
          a2[v8 + 8] = *v11;
          if ( (v11[1] & 3) == 0 )
            a2[24] |= 1 << v8;
          ++v8;
        }
        v11 += 6;
        --v12;
      }
      while ( v12 );
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v10);
      sub_1402AFC00((ULONG_PTR)v10);
      KeLeaveCriticalRegion();
      a2[4] = v8;
      v6 = 0;
    }
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(32LL * (a2[1] & 0xF) + a1 + 8));
  }
  else
  {
    return (unsigned int)-1073741672;
  }
  return (unsigned int)v6;
}
