/*
 * XREFs of sub_140988CC0 @ 0x140988CC0
 * Callers:
 *     sub_140989028 @ 0x140989028 (sub_140989028.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140988C68 @ 0x140988C68 (sub_140988C68.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140988CC0(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // rdx
  void *v8; // r9
  unsigned __int64 *v9; // rcx
  unsigned __int64 *i; // rdx
  void *v11; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h]

  *(_DWORD *)(a1 + 152) &= ~1u;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v3 = *(_QWORD **)(a1 + 8);
  v4 = v3;
  if ( v3 )
  {
    v5 = *v3;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = *v3;
    if ( (v5 & 1) == 0 )
    {
LABEL_20:
      while ( v5 )
      {
        v8 = (void *)v5;
        v13 = *(_QWORD *)(v5 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
        v9 = (unsigned __int64 *)v5;
        v5 = *(_QWORD *)v5;
        if ( (v5 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v5 = *v9;
        if ( (v5 & 1) != 0 )
        {
          for ( i = (unsigned __int64 *)(*(_QWORD *)(a1 + 8)
                                       + 8LL
                                       + 8LL
                                       * ((37
                                         * (BYTE6(v13)
                                          + 37
                                          * (BYTE5(v13)
                                           + 37
                                           * (BYTE4(v13)
                                            + 37
                                            * (BYTE3(v13)
                                             + 37
                                             * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                                         + HIBYTE(v13)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1)));
                (unsigned __int64)i < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
                ++i )
          {
            v5 = *i;
            if ( (*i & 1) == 0 )
              goto LABEL_19;
          }
          v5 = 0LL;
        }
LABEL_19:
        ExFreePoolWithTag(v8, 0);
      }
      goto LABEL_21;
    }
    v4 = *(_QWORD **)(a1 + 8);
  }
  v6 = v3 + 1;
  v7 = (unsigned __int64)&v4[(unsigned __int64)*(unsigned int *)(a1 + 4) >> 5];
  while ( (unsigned __int64)v6 < v7 )
  {
    v5 = *v6;
    if ( (*v6 & 1) == 0 )
      goto LABEL_20;
    ++v6;
  }
LABEL_21:
  v11 = *(void **)(a1 + 8);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 48);
  sub_1402AFC00(a1 + 48);
  KeLeaveCriticalRegion();
  return sub_140988C68(a1);
}
