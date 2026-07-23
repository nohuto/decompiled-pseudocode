/*
 * XREFs of sub_14082DE40 @ 0x14082DE40
 * Callers:
 *     sub_14082D870 @ 0x14082D870 (sub_14082D870.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_140639FC4 @ 0x140639FC4 (sub_140639FC4.c)
 *     sub_14082E084 @ 0x14082E084 (sub_14082E084.c)
 *     sub_14082E0E8 @ 0x14082E0E8 (sub_14082E0E8.c)
 *     ntoskrnl_24 @ 0x1409F9AA0 (ntoskrnl_24.c)
 */

__int64 __fastcall sub_14082DE40(__int64 a1)
{
  signed __int64 *v2; // rdi
  int v3; // eax
  unsigned int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rsi
  int v8; // r14d
  _DWORD *v9; // r12
  void *v10; // rcx
  char v11; // r15
  int v12; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *v14; // [rsp+48h] [rbp-40h]
  char v15; // [rsp+98h] [rbp+10h]
  char v16; // [rsp+A0h] [rbp+18h]

  v12 = 0;
  v16 = 0;
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v2 = (signed __int64 *)(a1 + 46840);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  if ( *(_BYTE *)(a1 + 46992) )
  {
    v12 = -1073741762;
  }
  else if ( *(_BYTE *)(a1 + 46828) )
  {
    v3 = 0;
    if ( !*(_DWORD *)(a1 + 46824) )
      v3 = -1073741772;
    v12 = v3;
  }
  else
  {
    v16 = 1;
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  sub_1402AFC00((ULONG_PTR)v2);
  sub_1402F9540((__int64)KeGetCurrentThread());
  v4 = v12;
  if ( v12 >= 0 && v16 == 1 )
  {
    v14 = KeGetCurrentThread();
    --*((_WORD *)v14 + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
    if ( *(_BYTE *)(a1 + 46828) == 1 )
      goto LABEL_30;
    v7 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      v8 = sub_14082E084(a1);
      v12 = v8;
      if ( v8 < 0 )
        goto LABEL_30;
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 46832);
      if ( !v7 )
        goto LABEL_28;
      v8 = v12;
    }
    if ( (*(_DWORD *)(v7 + 12) & 1) != 0 )
      sub_140639FC4(a1, 2);
    v9 = (_DWORD *)(a1 + 46824);
    v10 = (void *)(a1 + 24);
    if ( !*(_DWORD *)(a1 + 46824) )
    {
      LOBYTE(v6) = 1;
      v8 = sub_14082E0E8(v7, v6, a1 + 24, 2925LL, a1 + 46824);
      v12 = v8;
      v10 = (void *)(a1 + 24);
    }
    if ( v8 >= 0 )
    {
      if ( *v9 )
      {
        qsort(v10, (unsigned int)*v9, 0x10uLL, sub_14083F230);
        *(_BYTE *)(a1 + 46828) = 1;
      }
      else
      {
        *(_BYTE *)(a1 + 46828) = 1;
        v12 = -1073741772;
      }
      goto LABEL_30;
    }
    if ( v8 != -1073741789 )
    {
LABEL_30:
      v11 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
        ExfTryToWakePushLock(v2);
      sub_1402AFC00((ULONG_PTR)v2);
      sub_1402F9540((__int64)KeGetCurrentThread());
      v4 = v12;
      goto LABEL_12;
    }
LABEL_28:
    v12 = -1073741762;
    *(_BYTE *)(a1 + 46992) = 1;
    v15 = 1;
    goto LABEL_30;
  }
LABEL_12:
  if ( v15 )
    ntoskrnl_24(&stru_140039080);
  return v4;
}
