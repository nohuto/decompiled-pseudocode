/*
 * XREFs of sub_1409DA178 @ 0x1409DA178
 * Callers:
 *     sub_1409D9700 @ 0x1409D9700 (sub_1409D9700.c)
 * Callees:
 *     sub_1402A10EC @ 0x1402A10EC (sub_1402A10EC.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407F5540 @ 0x1407F5540 (sub_1407F5540.c)
 */

__int64 __fastcall sub_1409DA178(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r12d
  struct _KTHREAD *v6; // rax
  volatile signed __int64 *v7; // rsi
  unsigned int v8; // eax
  int v9; // edi
  int v10; // r14d
  int i; // r14d
  bool v12; // zf
  int v13; // edi
  struct _KTHREAD *v14; // rax
  unsigned int v15; // ecx
  int v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+24h] [rbp-Ch]

  CurrentThread = KeGetCurrentThread();
  v5 = 4;
  --*((_WORD *)CurrentThread + 242);
  v6 = KeGetCurrentThread();
  --*((_WORD *)v6 + 242);
  v7 = (volatile signed __int64 *)(a1 + 112);
  ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
  v8 = *(_DWORD *)(a1 + 120);
  if ( (v8 & 1) != 0 )
  {
    v9 = -1073740682;
    goto LABEL_31;
  }
  v10 = (v8 >> 1) & 3;
  if ( a2 )
  {
    if ( v10 >= a2 )
    {
      v9 = -1073741811;
      goto LABEL_31;
    }
  }
  else if ( !v10 )
  {
    v9 = 1075380276;
    goto LABEL_31;
  }
  *(_DWORD *)(a1 + 120) = v8 | 1;
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  sub_1402AFC00((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
  v18 = 0LL;
  v17 = 3;
  if ( a2 )
  {
    for ( i = v10 + 1; ; ++i )
    {
      if ( i > a2 )
      {
        v5 = a2;
        goto LABEL_28;
      }
      if ( i == 1 )
      {
        if ( *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1800LL) << 12 >> 20 > (unsigned __int64)(unsigned int)dword_140D052A8 )
          continue;
        v18 = 0LL;
      }
      else
      {
        if ( (unsigned int)(i - 2) > 1
          || !*(_DWORD *)(sub_14032A72C(*((_QWORD *)KeGetCurrentThread() + 23)) + 1176) && i != 3 )
        {
          continue;
        }
        v12 = (*(_BYTE *)(a1 + 104) & 1) == 0;
        v13 = 3;
        LODWORD(v18) = 1;
        if ( !v12 )
          v13 = 35;
        HIDWORD(v18) = v13;
        if ( sub_1402A10EC() )
        {
          HIDWORD(v18) = v13 | 8;
          if ( i == 3 )
            HIDWORD(v18) = v13 | 0x18;
        }
      }
      v9 = sub_1407F5540(0xFFFFFFFFFFFFFFFFuLL, (__int64 *)&v17, 0xCu, 0);
      if ( v9 < 0 )
        goto LABEL_29;
    }
  }
  HIDWORD(v18) = 1;
  sub_1407F5540(0xFFFFFFFFFFFFFFFFuLL, (__int64 *)&v17, 0xCu, 0);
  v5 = 0;
LABEL_28:
  v9 = 0;
LABEL_29:
  v14 = KeGetCurrentThread();
  --*((_WORD *)v14 + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
  v15 = *(_DWORD *)(a1 + 120) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 120) = v15;
  if ( v5 != 4 )
    *(_DWORD *)(a1 + 120) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(2 * v5)) & 6;
LABEL_31:
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  sub_1402AFC00((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
