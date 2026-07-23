/*
 * XREFs of sub_1407E1DC8 @ 0x1407E1DC8
 * Callers:
 *     sub_1407E3260 @ 0x1407E3260 (sub_1407E3260.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407E1EF8 @ 0x1407E1EF8 (sub_1407E1EF8.c)
 *     sub_1407E1FE0 @ 0x1407E1FE0 (sub_1407E1FE0.c)
 *     sub_1407E3F10 @ 0x1407E3F10 (sub_1407E3F10.c)
 *     sub_1407E4118 @ 0x1407E4118 (sub_1407E4118.c)
 */

__int64 __fastcall sub_1407E1DC8(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  int v11; // r8d
  int v12; // edi
  struct _KTHREAD *v13; // rax
  bool v14; // zf
  int v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16 = 0;
  v17 = 0LL;
  --*((_WORD *)CurrentThread + 243);
  v7 = (unsigned __int64 *)(a1 + 48);
  v8 = sub_140347C10(a1 + 48, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    sub_14029F120(v7, v8, (__int64)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v10 = sub_1407E1FE0(a1, *(_QWORD *)(a2 + 48), &v17, &v16);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a3 )
      *a3 = v17;
  }
  else if ( v10 == -1073741198 )
  {
    v12 = sub_1407E4118((int)a1 + 8, a2, v11, *(_QWORD *)(a2 + 48), 8, v16);
    if ( v12 >= 0 )
    {
      v12 = sub_1407E3F10(a2);
      if ( v12 >= 0 )
      {
        if ( a3 )
          *a3 = 0LL;
        v12 = sub_1407E1EF8(a1, a2);
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  sub_1402AFC00((ULONG_PTR)v7);
  v13 = KeGetCurrentThread();
  v14 = (*((_WORD *)v13 + 243))++ == 0xFFFF;
  if ( v14 && *((struct _KTHREAD **)v13 + 19) != (struct _KTHREAD *)((char *)v13 + 152) )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v12;
}
