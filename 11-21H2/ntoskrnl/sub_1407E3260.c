/*
 * XREFs of sub_1407E3260 @ 0x1407E3260
 * Callers:
 *     sub_1407E3070 @ 0x1407E3070 (sub_1407E3070.c)
 * Callees:
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1407E1968 @ 0x1407E1968 (sub_1407E1968.c)
 *     sub_1407E1B90 @ 0x1407E1B90 (sub_1407E1B90.c)
 *     sub_1407E1DC8 @ 0x1407E1DC8 (sub_1407E1DC8.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     sub_1407E3440 @ 0x1407E3440 (sub_1407E3440.c)
 *     sub_1407E3770 @ 0x1407E3770 (sub_1407E3770.c)
 *     sub_1407E3B7C @ 0x1407E3B7C (sub_1407E3B7C.c)
 *     sub_1407E3F10 @ 0x1407E3F10 (sub_1407E3F10.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407E3260(__int64 a1, __int64 a2, volatile signed __int64 **a3)
{
  int v5; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // ebx
  void *v11; // rdx
  struct _KTHREAD *v12; // rax
  bool v13; // zf
  volatile signed __int64 *v14; // rdi
  int v16; // eax
  volatile signed __int64 *v17; // rsi
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF
  PVOID v24; // [rsp+88h] [rbp+20h] BYREF

  v5 = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 56);
  P = 0LL;
  v24 = 0LL;
  sub_1407E1968((unsigned __int64 *)a1, v5);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v8 = sub_140347C10(a1 + 48, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    sub_14029F350((signed __int64 *)(a1 + 48), 0, v8, a1 + 48);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v9 = *(_QWORD *)(a2 + 272);
  v22 = 0LL;
  v10 = sub_1407E3440((int)a1 + 8, v9, 8, (unsigned int)&v22, 0LL);
  if ( v10 >= 0 )
  {
    v10 = sub_1407E3F10(v22);
    if ( v10 >= 0 )
      P = v11;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  sub_1402AFC00(a1 + 48);
  v12 = KeGetCurrentThread();
  v13 = (*((_WORD *)v12 + 243))++ == 0xFFFF;
  if ( v13 && *((struct _KTHREAD **)v12 + 19) != (struct _KTHREAD *)((char *)v12 + 152) )
    KiCheckForKernelApcDelivery();
  if ( v10 == -1073741198 )
  {
    v16 = sub_1407E2434(a1, a2, &P);
    v14 = (volatile signed __int64 *)P;
    v10 = v16;
    if ( v16 < 0 )
      goto LABEL_23;
    v10 = sub_1407E1DC8(a1, (__int64)P, &v24);
    if ( v10 < 0 )
      goto LABEL_23;
    v17 = (volatile signed __int64 *)v24;
    if ( v24 )
    {
      sub_1407E3B7C(a1, v14);
      v14 = v17;
      P = (PVOID)v17;
      v24 = 0LL;
    }
  }
  else
  {
    v14 = (volatile signed __int64 *)P;
    if ( v10 < 0 )
      goto LABEL_23;
  }
  sub_1407E3770(a1, v14);
  if ( a3 )
  {
    *a3 = v14;
    goto LABEL_17;
  }
LABEL_23:
  if ( v14 && _InterlockedExchangeAdd64(v14 + 10, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v18 = P;
    v19 = *((_QWORD *)P + 5);
    if ( v19 )
    {
      sub_1407E1B90(a1, v19);
      v18[5] = 0LL;
      v18[3] = 0LL;
      v18[4] = 0LL;
      *((_DWORD *)v18 + 18) = 0;
    }
    ExFreePoolWithTag(v18, 0);
  }
LABEL_17:
  if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 10, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v20 = v24;
    v21 = *((_QWORD *)v24 + 5);
    if ( v21 )
    {
      sub_1407E1B90(a1, v21);
      v20[5] = 0LL;
      v20[3] = 0LL;
      v20[4] = 0LL;
      *((_DWORD *)v20 + 18) = 0;
    }
    ExFreePoolWithTag(v20, 0);
  }
  return (unsigned int)v10;
}
