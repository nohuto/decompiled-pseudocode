/*
 * XREFs of sub_14037556C @ 0x14037556C
 * Callers:
 *     sub_14025E9D0 @ 0x14025E9D0 (sub_14025E9D0.c)
 * Callees:
 *     sub_140238294 @ 0x140238294 (sub_140238294.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14037592C @ 0x14037592C (sub_14037592C.c)
 *     sub_1403792D8 @ 0x1403792D8 (sub_1403792D8.c)
 *     sub_140379A64 @ 0x140379A64 (sub_140379A64.c)
 *     sub_140383620 @ 0x140383620 (sub_140383620.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14037556C(__int64 a1)
{
  void *v2; // r12
  void *v3; // r13
  __int64 v4; // r14
  signed __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r15
  unsigned int v8; // ebx
  unsigned int v9; // r10d
  __int64 v10; // rdx
  unsigned int v11; // r9d
  _DWORD *v12; // r11
  _DWORD *v13; // r8
  int v14; // edx
  unsigned int v15; // ecx
  unsigned int i; // eax
  __int64 v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // r8d
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  _DWORD *v24; // r8
  int v25; // ebx
  int v26; // r8d
  int v27; // r9d
  struct _KTHREAD *v28; // rax
  _DWORD *v29; // rsi
  struct _KTHREAD *v31; // rax
  bool v32; // zf
  __int64 v33; // r10
  struct _KTHREAD *v34; // rax
  int v35; // [rsp+20h] [rbp-48h]
  PVOID PoolWithTag; // [rsp+30h] [rbp-38h]
  __int64 v37; // [rsp+40h] [rbp-28h]
  int v38; // [rsp+B0h] [rbp+48h]
  int v39; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v40; // [rsp+C0h] [rbp+58h]
  PVOID P; // [rsp+C8h] [rbp+60h] BYREF

  P = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  sub_140238294((_SLIST_HEADER *)a1);
  v5 = *(_QWORD *)(a1 + 6568);
  if ( (unsigned __int64)(v5 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v25 = -1073700861;
    goto LABEL_48;
  }
  if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6568), -1LL, v5) )
    return (unsigned int)-1073700861;
  if ( *(_QWORD *)v5 )
  {
    v7 = v5;
    v25 = -1073741791;
LABEL_45:
    _InterlockedExchange64((volatile __int64 *)(a1 + 6568), v7);
    goto LABEL_46;
  }
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v2 = (void *)v5;
  v38 = 1;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(4 * *(_DWORD *)(a1 + 6212)), 0x77536D73u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v25 = -1073741670;
    goto LABEL_61;
  }
  v39 = 0;
  v8 = 0;
  do
  {
LABEL_6:
    v9 = *(_DWORD *)(v5 + 8);
    if ( v9 <= v8 )
    {
LABEL_69:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
      sub_1402AFC00(a1 + 6024);
      v34 = KeGetCurrentThread();
      v32 = (*((_WORD *)v34 + 243))++ == 0xFFFF;
      if ( v32 && *((struct _KTHREAD **)v34 + 19) != (struct _KTHREAD *)((char *)v34 + 152) )
        KiCheckForKernelApcDelivery();
      v38 = 0;
      if ( (_DWORD)v4 )
      {
        v25 = sub_14037592C(1LL);
        if ( v25 < 0 )
          goto LABEL_55;
        v7 = v5;
        *(_QWORD *)v5 = 0LL;
        v2 = 0LL;
        v25 = 0;
LABEL_39:
        v28 = KeGetCurrentThread();
        v38 = 1;
        --*((_WORD *)v28 + 243);
        ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
LABEL_40:
        v29 = PoolWithTag;
        do
        {
          sub_140379A64(a1, *v29++, v26, v27, v35, 2);
          --v4;
        }
        while ( v4 );
        v3 = PoolWithTag;
        goto LABEL_43;
      }
      v25 = -1073741607;
      v2 = (void *)v5;
      goto LABEL_45;
    }
    v10 = *(_QWORD *)(v5 + 16);
    v11 = v8;
    v12 = (_DWORD *)(v10 + 4 * ((unsigned __int64)(v9 - 1) >> 5));
    v13 = (_DWORD *)(v10 + 4 * ((unsigned __int64)v8 >> 5));
    if ( v13 != v12 )
    {
      v23 = v8 & 0x1F;
      if ( (*v13 | *((_DWORD *)qword_140015FA0 + v23)) == -1 )
      {
        v11 = v8 - v23 + 32;
        for ( ++v13; v13 < v12 && *v13 == -1; ++v13 )
          v11 += 32;
      }
    }
    for ( ; v11 < v9; ++v11 )
    {
      if ( !_bittest(*(const signed __int32 **)(v5 + 16), v11) )
        break;
    }
    v14 = 0;
    if ( v13 != v12 )
    {
      v33 = v11 & 0x1F;
      if ( (*v13 & ~*((_DWORD *)qword_140015FA0 + v33)) == 0 )
      {
        v14 = 32 - v33;
        if ( (_DWORD)v33 == 33 )
          goto LABEL_16;
        v24 = v13 + 1;
        while ( v24 < v12 && !*v24 )
        {
          ++v24;
          v14 += 32;
          if ( v14 == -1 )
            goto LABEL_16;
        }
      }
    }
    v15 = *(_DWORD *)(v5 + 8);
    for ( i = v14 + v11; i < v15; ++v14 )
    {
      if ( _bittest(*(const signed __int32 **)(v5 + 16), i) )
        break;
      if ( v14 == -1 )
        break;
      ++i;
    }
LABEL_16:
    v8 = v11;
    if ( !v14 )
      goto LABEL_69;
    v40 = v14 + v11;
  }
  while ( v11 >= v14 + v11 );
  v17 = 8LL * v11;
  while ( 1 )
  {
    v18 = *(_QWORD *)(v17 + *(_QWORD *)(a1 + 6216));
    if ( (v18 & 0x7FFFFFFFFFFF0000LL) == 0 || v18 < 0 )
      goto LABEL_23;
    v37 = sub_1403792D8(a1, v8, 0, v11, 4);
    if ( !(unsigned int)sub_140383620((unsigned int)v4, v19, &v39, &P) )
      break;
    v21 = P;
    *((_DWORD *)PoolWithTag + v4) = v8;
    v22 = 2LL * (unsigned int)v4;
    v4 = (unsigned int)(v4 + 1);
    v21[v22] = v37;
    v21[v22 + 1] = *(unsigned int *)(a1 + 6208);
LABEL_23:
    ++v8;
    v17 += 8LL;
    if ( v8 >= v40 )
      goto LABEL_6;
  }
  sub_140379A64(a1, v8, v20, v11, v35, 2);
  v25 = -1073741670;
LABEL_55:
  v2 = (void *)v5;
  v7 = 0LL;
  if ( (_DWORD)v4 )
  {
    v4 = (unsigned int)v4;
    if ( v38 )
      goto LABEL_40;
    goto LABEL_39;
  }
LABEL_43:
  if ( v38 )
  {
LABEL_61:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
    sub_1402AFC00(a1 + 6024);
    v31 = KeGetCurrentThread();
    v32 = (*((_WORD *)v31 + 243))++ == 0xFFFF;
    if ( v32 && *((struct _KTHREAD **)v31 + 19) != (struct _KTHREAD *)((char *)v31 + 152) )
      KiCheckForKernelApcDelivery();
  }
  if ( v7 != -1 )
    goto LABEL_45;
LABEL_46:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
LABEL_48:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v25;
}
