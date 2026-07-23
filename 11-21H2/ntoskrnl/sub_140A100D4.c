/*
 * XREFs of sub_140A100D4 @ 0x140A100D4
 * Callers:
 *     sub_1407E2B70 @ 0x1407E2B70 (sub_1407E2B70.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140A0F1D4 @ 0x140A0F1D4 (sub_140A0F1D4.c)
 *     sub_140A0F914 @ 0x140A0F914 (sub_140A0F914.c)
 *     sub_140A101C8 @ 0x140A101C8 (sub_140A101C8.c)
 */

__int64 __fastcall sub_140A100D4(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  struct _KTHREAD *v8; // rax
  bool v9; // zf
  volatile signed __int64 *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( a3 >= 0x10 )
  {
    v3 = sub_140A0F914(a1, a2, a3, &v11);
    if ( v3 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 243);
      v5 = (unsigned __int64 *)(v11 + 1);
      v6 = sub_140347C10((__int64)(v11 + 1), 0LL);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        sub_14029F120(v5, v6, (__int64)v5);
      if ( v7 )
        *(_BYTE *)(v7 + 18) = 1;
      v3 = sub_140A101C8(v11);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      sub_1402AFC00((ULONG_PTR)v5);
      v8 = KeGetCurrentThread();
      v9 = (*((_WORD *)v8 + 243))++ == 0xFFFF;
      if ( v9 && *((struct _KTHREAD **)v8 + 19) != (struct _KTHREAD *)((char *)v8 + 152) )
        KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    v3 = -1073741811;
  }
  sub_140A0F1D4(v11);
  return (unsigned int)v3;
}
