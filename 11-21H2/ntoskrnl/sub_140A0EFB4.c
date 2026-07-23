/*
 * XREFs of sub_140A0EFB4 @ 0x140A0EFB4
 * Callers:
 *     sub_140A0FAB0 @ 0x140A0FAB0 (sub_140A0FAB0.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407E4118 @ 0x1407E4118 (sub_1407E4118.c)
 *     sub_140A0F1D4 @ 0x140A0F1D4 (sub_140A0F1D4.c)
 *     sub_140A0F874 @ 0x140A0F874 (sub_140A0F874.c)
 *     sub_140A0FC08 @ 0x140A0FC08 (sub_140A0FC08.c)
 */

__int64 __fastcall sub_140A0EFB4(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // r8
  int v13; // edi
  __int64 v14; // rdx
  struct _KTHREAD *v15; // rax
  bool v16; // zf
  int v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+48h] [rbp-18h]
  int v22; // [rsp+4Ch] [rbp-14h]

  v3 = *(_DWORD *)(a2 + 24);
  v22 = 0;
  v19 = 0LL;
  v18 = 0;
  v21 = v3;
  v20 = *(_QWORD *)(a2 + 32);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v8 = (unsigned __int64 *)(a1 + 176);
  v9 = sub_140347C10(a1 + 176, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    sub_14029F120(v8, v9, (__int64)v8);
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
  v11 = sub_140A0F874(a1, &v20, &v19, &v18);
  v13 = v11;
  if ( v11 )
  {
    if ( v11 == -1073741198 )
    {
      v13 = sub_1407E4118(a1 + 136, a2, v12, (__int64)&v20, 0x10u, v18);
      if ( v13 >= 0 )
        v13 = sub_140A0FC08(a2);
    }
  }
  else if ( a3 )
  {
    sub_140A0FC08(v19);
    v19 = 0LL;
    *a3 = v14;
  }
  sub_140A0F1D4(v19);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  sub_1402AFC00((ULONG_PTR)v8);
  v15 = KeGetCurrentThread();
  v16 = (*((_WORD *)v15 + 243))++ == 0xFFFF;
  if ( v16 && *((struct _KTHREAD **)v15 + 19) != (struct _KTHREAD *)((char *)v15 + 152) )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v13;
}
