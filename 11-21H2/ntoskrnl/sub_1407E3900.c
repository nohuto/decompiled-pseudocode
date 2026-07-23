/*
 * XREFs of sub_1407E3900 @ 0x1407E3900
 * Callers:
 *     sub_1407E3070 @ 0x1407E3070 (sub_1407E3070.c)
 *     sub_1407E3F30 @ 0x1407E3F30 (sub_1407E3F30.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406E62A8 @ 0x1406E62A8 (sub_1406E62A8.c)
 *     sub_1406E73B0 @ 0x1406E73B0 (sub_1406E73B0.c)
 *     sub_1407E4118 @ 0x1407E4118 (sub_1407E4118.c)
 */

__int64 __fastcall sub_1407E3900(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r13
  signed __int64 *v6; // rdi
  __int64 v7; // rbx
  int v8; // r12d
  int v9; // ebx
  int v10; // r14d
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rdx
  struct _KTHREAD *v14; // rax
  bool v15; // zf
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rbx
  _QWORD *v21; // r12
  char v22; // al
  struct _KTHREAD *v23; // rax
  struct _KTHREAD *v24; // [rsp+70h] [rbp+8h]
  _QWORD *v25; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v25 = 0LL;
  v24 = CurrentThread;
  --*((_WORD *)CurrentThread + 243);
  v6 = (signed __int64 *)(a1 + 128);
  v7 = sub_140347C10(a1 + 128, 0LL);
  if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
    sub_14029F350(v6, 0, v7, (__int64)v6);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v8 = 0;
  v9 = -1073741198;
  v10 = *(_DWORD *)(a1 + 92) - 1;
  if ( v10 >= 0 )
  {
    while ( 1 )
    {
      v11 = (v10 + v8) / 2;
      v12 = sub_14042A5E0(*(_QWORD *)((unsigned int)(v11 * *(_DWORD *)(a1 + 88)) + *(_QWORD *)(a1 + 104)), v24);
      if ( !v12 )
        break;
      if ( v12 < 0 )
        v10 = v11 - 1;
      else
        v8 = v11 + 1;
      if ( v8 > v10 )
      {
        CurrentThread = v24;
        goto LABEL_10;
      }
    }
    v9 = 0;
    v13 = *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)(a1 + 88)) + *(_QWORD *)(a1 + 104));
    if ( v13 )
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 8));
    CurrentThread = v24;
    v25 = (_QWORD *)v13;
  }
LABEL_10:
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  sub_1402AFC00((ULONG_PTR)v6);
  v14 = KeGetCurrentThread();
  v15 = (*((_WORD *)v14 + 243))++ == 0xFFFF;
  if ( v15 && *((struct _KTHREAD **)v14 + 19) != (struct _KTHREAD *)((char *)v14 + 152) )
    KiCheckForKernelApcDelivery();
  if ( v9 == -1073741198 )
  {
    v9 = sub_1406E73B0(a1, (__int64)CurrentThread, &v25);
    if ( v9 < 0 )
      goto LABEL_39;
    v17 = KeGetCurrentThread();
    --*((_WORD *)v17 + 243);
    v18 = sub_140347C10((__int64)v6, 0LL);
    v20 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      sub_14029F120((unsigned __int64 *)v6, v18, (__int64)v6);
    if ( v20 )
      *(_BYTE *)(v20 + 18) = 1;
    v21 = v25;
    v9 = sub_1407E4118((int)a1 + 88, (_DWORD)v25, v19, *v25, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v21 + 1);
    v22 = _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v22 & 2) != 0 && (v22 & 4) == 0 )
      ExfTryToWakePushLock(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    v23 = KeGetCurrentThread();
    v15 = (*((_WORD *)v23 + 243))++ == 0xFFFF;
    if ( v15 && *((struct _KTHREAD **)v23 + 19) != (struct _KTHREAD *)((char *)v23 + 152) )
      KiCheckForKernelApcDelivery();
  }
  if ( v9 >= 0 && a3 )
  {
    *a3 = v25;
    return (unsigned int)v9;
  }
LABEL_39:
  if ( v25 && _InterlockedExchangeAdd64(v25 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    sub_1406E62A8(a1, v25);
  return (unsigned int)v9;
}
