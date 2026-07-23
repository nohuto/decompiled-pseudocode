/*
 * XREFs of sub_140792A4C @ 0x140792A4C
 * Callers:
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_140792A4C @ 0x140792A4C (sub_140792A4C.c)
 *     sub_140796798 @ 0x140796798 (sub_140796798.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406D708C @ 0x1406D708C (sub_1406D708C.c)
 *     sub_140792A4C @ 0x140792A4C (sub_140792A4C.c)
 *     sub_140792BF0 @ 0x140792BF0 (sub_140792BF0.c)
 *     sub_1407968D0 @ 0x1407968D0 (sub_1407968D0.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     sub_140796BF4 @ 0x140796BF4 (sub_140796BF4.c)
 */

__int64 *__fastcall sub_140792A4C(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rsi
  _QWORD *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 *v9; // r15
  struct _KTHREAD *v10; // rax
  volatile signed __int64 *v11; // r14
  __int64 *i; // rsi
  __int64 v13; // rcx
  __int64 *v14; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rdx

  v3 = a3;
  v6 = 0LL;
  v7 = sub_140792BF0();
  if ( !v7 )
    return 0LL;
  if ( a1 == qword_140D05008
    || (v6 = (_QWORD *)sub_1407968D0(qword_140D05008, a2, (unsigned int)v3)) != 0LL
    || (v6 = (_QWORD *)sub_140792A4C(qword_140D05008, a2, (unsigned int)v3)) != 0LL )
  {
    v8 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 464;
    v9 = (__int64 *)(v8 + 16 * v3);
    if ( v6 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v6 + 51), 0LL);
      v17 = v6 + 2;
      v6[52] = KeGetCurrentThread();
      v18 = (_QWORD *)(v7 + 16);
      *(_QWORD *)(v7 + 400) = v6;
      v19 = v6[2];
      if ( *(_QWORD **)(v19 + 8) != v6 + 2 )
        goto LABEL_32;
      *v18 = v19;
      *(_QWORD *)(v7 + 24) = v17;
      *(_QWORD *)(v19 + 8) = v18;
      *v17 = v18;
    }
    v10 = KeGetCurrentThread();
    --*((_WORD *)v10 + 242);
    v11 = (volatile signed __int64 *)(v8 + 48);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v11, 0LL);
    for ( i = (__int64 *)*v9; ; i = (__int64 *)*i )
    {
      if ( i == v9 )
        goto LABEL_10;
      v13 = *(_QWORD *)a2 - i[5];
      if ( *(_QWORD *)a2 == i[5] )
        v13 = *((_QWORD *)a2 + 1) - i[6];
      if ( !v13 && (unsigned __int8)sub_140796BF4((ULONG_PTR)i) )
        break;
    }
    if ( i )
    {
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v11);
      sub_1402AFC00((ULONG_PTR)v11);
      KeLeaveCriticalRegion();
      if ( !v6 )
        goto LABEL_20;
      v20 = *(_QWORD *)(v7 + 16);
      if ( *(_QWORD *)(v20 + 8) == v7 + 16 )
      {
        v21 = *(_QWORD **)(v7 + 24);
        if ( *v21 == v7 + 16 )
        {
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          *(_QWORD *)(v7 + 400) = 0LL;
LABEL_30:
          v6[52] = 0LL;
          ExReleasePushLockEx((ULONG_PTR)(v6 + 51), 0LL);
          KeLeaveCriticalRegion();
          if ( !v7 )
            return i;
          sub_140796B04(v6);
LABEL_20:
          --*(_QWORD *)(v7 + 32);
          sub_1406D708C((char *)v7);
          return i;
        }
      }
    }
    else
    {
LABEL_10:
      v14 = (__int64 *)*v9;
      if ( *(__int64 **)(*v9 + 8) == v9 )
      {
        *(_QWORD *)v7 = v14;
        i = (__int64 *)v7;
        *(_QWORD *)(v7 + 8) = v9;
        v14[1] = v7;
        *v9 = v7;
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v11);
        sub_1402AFC00((ULONG_PTR)v11);
        KeLeaveCriticalRegion();
        v7 = 0LL;
        if ( !v6 )
          return i;
        goto LABEL_30;
      }
    }
LABEL_32:
    __fastfail(3u);
  }
  --*(_QWORD *)(v7 + 32);
  sub_1406D708C((char *)v7);
  return 0LL;
}
