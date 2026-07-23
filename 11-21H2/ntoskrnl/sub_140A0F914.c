/*
 * XREFs of sub_140A0F914 @ 0x140A0F914
 * Callers:
 *     sub_140A0F208 @ 0x140A0F208 (sub_140A0F208.c)
 *     sub_140A100D4 @ 0x140A100D4 (sub_140A100D4.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A0F1D4 @ 0x140A0F1D4 (sub_140A0F1D4.c)
 *     sub_140A0FAB0 @ 0x140A0FAB0 (sub_140A0FAB0.c)
 *     sub_140A0FC24 @ 0x140A0FC24 (sub_140A0FC24.c)
 *     sub_140A10548 @ 0x140A10548 (sub_140A10548.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A0F914(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v7; // rdi
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // r15
  struct _KTHREAD *v13; // rax
  bool v14; // zf
  __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  PVOID P[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF

  v7 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  *(_OWORD *)P = 0LL;
  v8 = sub_140A10548(a2, a3, P, &v19);
  if ( v8 < 0 )
    goto LABEL_21;
  v8 = sub_140A0FAB0(a1, &v19, &v16);
  if ( v8 < 0 )
    goto LABEL_20;
  v7 = v16;
  if ( !*(_DWORD *)(v16 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    v10 = (unsigned __int64 *)(v16 + 8);
    v11 = sub_140347C10(v16 + 8, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      sub_14029F120(v10, v11, (__int64)v10);
    if ( v12 )
      *(_BYTE *)(v12 + 18) = 1;
    if ( !*(_DWORD *)(v7 + 16) )
    {
      v18 = *(_OWORD *)P;
      v8 = sub_140A0FC24(&v18, a2, v16);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    sub_1402AFC00((ULONG_PTR)v10);
    v13 = KeGetCurrentThread();
    v14 = (*((_WORD *)v13 + 243))++ == 0xFFFF;
    if ( v14 && *((struct _KTHREAD **)v13 + 19) != (struct _KTHREAD *)((char *)v13 + 152) )
      KiCheckForKernelApcDelivery();
    if ( v8 >= 0 )
    {
      v7 = v16;
      goto LABEL_17;
    }
LABEL_20:
    v7 = v16;
    goto LABEL_21;
  }
LABEL_17:
  v8 = *(_DWORD *)(v7 + 20);
  if ( v8 >= 0 && a4 )
  {
    *a4 = v7;
    v7 = 0LL;
  }
LABEL_21:
  sub_140A0F1D4((volatile signed __int64 *)v7);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return (unsigned int)v8;
}
