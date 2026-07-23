/*
 * XREFs of sub_1407E2D60 @ 0x1407E2D60
 * Callers:
 *     sub_1407E2B70 @ 0x1407E2B70 (sub_1407E2B70.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406E1A90 @ 0x1406E1A90 (sub_1406E1A90.c)
 *     sub_1407E17A4 @ 0x1407E17A4 (sub_1407E17A4.c)
 *     sub_1407E4118 @ 0x1407E4118 (sub_1407E4118.c)
 */

__int64 __fastcall sub_1407E2D60(__int64 a1, int a2, PVOID *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rbx
  int v8; // r14d
  int v9; // esi
  int v10; // ebx
  int v11; // ebp
  __int64 v12; // rax
  volatile signed __int64 *v13; // r8
  struct _KTHREAD *v14; // rax
  bool v15; // zf
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rbx
  volatile signed __int64 *v21; // r14
  char v22; // al
  struct _KTHREAD *v23; // rax
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  --*((_WORD *)CurrentThread + 243);
  v7 = sub_140347C10((__int64)&qword_140C5A6F8, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C5A6F8, 17LL, 0LL) )
    sub_14029F350((signed __int64 *)&qword_140C5A6F8, 0, v7, (__int64)&qword_140C5A6F8);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v8 = 0;
  v9 = dword_140C5A6D4 - 1;
  v10 = -1073741198;
  if ( dword_140C5A6D4 - 1 >= 0 )
  {
    while ( 1 )
    {
      v11 = (v9 + v8) / 2;
      v12 = sub_14042A5E0(*(_QWORD *)((unsigned int)(v11 * dword_140C5A6D0) + qword_140C5A6E0), a1);
      if ( !v12 )
        break;
      if ( v12 < 0 )
        v9 = v11 - 1;
      else
        v8 = v11 + 1;
      if ( v8 > v9 )
        goto LABEL_10;
    }
    v10 = 0;
    v13 = *(volatile signed __int64 **)((unsigned int)(v11 * dword_140C5A6D0) + qword_140C5A6E0);
    if ( v13 )
      _InterlockedIncrement64(v13 + 29);
    P = (PVOID)v13;
  }
LABEL_10:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C5A6F8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C5A6F8);
  sub_1402AFC00((ULONG_PTR)&qword_140C5A6F8);
  v14 = KeGetCurrentThread();
  v15 = (*((_WORD *)v14 + 243))++ == 0xFFFF;
  if ( v15 && *((struct _KTHREAD **)v14 + 19) != (struct _KTHREAD *)((char *)v14 + 152) )
    KiCheckForKernelApcDelivery();
  if ( v10 == -1073741198 )
  {
    if ( !a2 )
      goto LABEL_39;
    v10 = sub_1406E1A90(a1, &P);
    if ( v10 < 0 )
      goto LABEL_39;
    v17 = KeGetCurrentThread();
    --*((_WORD *)v17 + 243);
    v18 = sub_140347C10((__int64)&qword_140C5A6F8, 0LL);
    v20 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C5A6F8, 0LL) )
      sub_14029F120(&qword_140C5A6F8, v18, (__int64)&qword_140C5A6F8);
    if ( v20 )
      *(_BYTE *)(v20 + 18) = 1;
    v21 = (volatile signed __int64 *)P;
    v10 = sub_1407E4118((unsigned int)&dword_140C5A6D0, (_DWORD)P, v19, *(_QWORD *)P, 8, -1);
    if ( v10 >= 0 )
      _InterlockedIncrement64(v21 + 29);
    v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C5A6F8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v22 & 2) != 0 && (v22 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C5A6F8);
    sub_1402AFC00((ULONG_PTR)&qword_140C5A6F8);
    v23 = KeGetCurrentThread();
    v15 = (*((_WORD *)v23 + 243))++ == 0xFFFF;
    if ( v15 && *((struct _KTHREAD **)v23 + 19) != (struct _KTHREAD *)((char *)v23 + 152) )
      KiCheckForKernelApcDelivery();
  }
  if ( v10 >= 0 && a3 )
  {
    *a3 = P;
    return (unsigned int)v10;
  }
LABEL_39:
  if ( P && _InterlockedExchangeAdd64((volatile signed __int64 *)P + 29, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    sub_1407E17A4(P);
  return (unsigned int)v10;
}
