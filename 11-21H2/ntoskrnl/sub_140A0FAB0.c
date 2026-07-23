/*
 * XREFs of sub_140A0FAB0 @ 0x140A0FAB0
 * Callers:
 *     sub_140A0F914 @ 0x140A0F914 (sub_140A0F914.c)
 * Callees:
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140A0EFB4 @ 0x140A0EFB4 (sub_140A0EFB4.c)
 *     sub_140A0F140 @ 0x140A0F140 (sub_140A0F140.c)
 *     sub_140A0F1D4 @ 0x140A0F1D4 (sub_140A0F1D4.c)
 *     sub_140A0F874 @ 0x140A0F874 (sub_140A0F874.c)
 */

__int64 __fastcall sub_140A0FAB0(__int64 a1, __int64 a2, volatile signed __int64 **a3)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v7; // rbx
  __int64 v8; // rdi
  int v9; // edi
  struct _KTHREAD *v10; // rax
  bool v11; // zf
  int v12; // eax
  volatile signed __int64 *v13; // rbx
  volatile signed __int64 *v14; // rsi
  volatile signed __int64 *v16; // [rsp+20h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+40h] BYREF
  volatile signed __int64 *v18; // [rsp+88h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v18 = 0LL;
  v16 = 0LL;
  --*((_WORD *)CurrentThread + 243);
  v7 = (signed __int64 *)(a1 + 176);
  v8 = sub_140347C10(a1 + 176, 0LL);
  if ( _InterlockedCompareExchange64(v7, 17LL, 0LL) )
    sub_14029F350(v7, 0, v8, (__int64)v7);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v9 = sub_140A0F874(a1, a2, &v18, &v17);
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  sub_1402AFC00((ULONG_PTR)v7);
  v10 = KeGetCurrentThread();
  v11 = (*((_WORD *)v10 + 243))++ == 0xFFFF;
  if ( v11 && *((struct _KTHREAD **)v10 + 19) != (struct _KTHREAD *)((char *)v10 + 152) )
    KiCheckForKernelApcDelivery();
  if ( v9 == -1073741198 )
  {
    v12 = sub_140A0F140(a2, &v18);
    v13 = v18;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_18;
    v9 = sub_140A0EFB4(a1, (__int64)v18, &v16);
    if ( v9 < 0 )
      goto LABEL_18;
    v14 = v16;
    if ( v16 )
    {
      sub_140A0F1D4(v13);
      v13 = v14;
    }
  }
  else
  {
    v13 = v18;
    if ( v9 < 0 )
      goto LABEL_18;
  }
  if ( a3 )
  {
    *a3 = v13;
    v13 = 0LL;
  }
LABEL_18:
  sub_140A0F1D4(v13);
  sub_140A0F1D4(v16);
  return (unsigned int)v9;
}
