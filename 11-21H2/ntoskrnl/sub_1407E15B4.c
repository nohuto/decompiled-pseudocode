/*
 * XREFs of sub_1407E15B4 @ 0x1407E15B4
 * Callers:
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 *     sub_1407E2B70 @ 0x1407E2B70 (sub_1407E2B70.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406E1BD4 @ 0x1406E1BD4 (sub_1406E1BD4.c)
 *     sub_1407E1754 @ 0x1407E1754 (sub_1407E1754.c)
 *     sub_1407E1B0C @ 0x1407E1B0C (sub_1407E1B0C.c)
 */

__int64 __fastcall sub_1407E15B4(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  int v4; // ebx
  struct _KTHREAD *v5; // rax
  bool v6; // zf
  struct _KTHREAD *v8; // rax
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbx
  char v12; // di
  struct _KTHREAD *v13; // rax
  volatile signed __int64 *v14; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  --*((_WORD *)CurrentThread + 243);
  v3 = sub_140347C10((__int64)&qword_140C5A6F8, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C5A6F8, 17LL, 0LL) )
    sub_14029F350((signed __int64 *)&qword_140C5A6F8, 0, v3, (__int64)&qword_140C5A6F8);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  v4 = sub_1407E1754(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C5A6F8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C5A6F8);
  sub_1402AFC00((ULONG_PTR)&qword_140C5A6F8);
  v5 = KeGetCurrentThread();
  v6 = (*((_WORD *)v5 + 243))++ == 0xFFFF;
  if ( v6 && *((struct _KTHREAD **)v5 + 19) != (struct _KTHREAD *)((char *)v5 + 152) )
    KiCheckForKernelApcDelivery();
  if ( v4 >= 0 )
  {
    v8 = KeGetCurrentThread();
    --*((_WORD *)v8 + 243);
    v9 = sub_140347C10((__int64)&qword_140C5A6F8, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C5A6F8, 0LL);
    v11 = v9;
    if ( v10 )
      sub_14029F120(&qword_140C5A6F8, v9, (__int64)&qword_140C5A6F8);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
    v4 = sub_1407E1B0C((unsigned int)&dword_140C5A6D0, a1, 8, -1, (__int64)&v14);
    v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C5A6F8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C5A6F8);
    sub_1402AFC00((ULONG_PTR)&qword_140C5A6F8);
    v13 = KeGetCurrentThread();
    v6 = (*((_WORD *)v13 + 243))++ == 0xFFFF;
    if ( v6 && *((struct _KTHREAD **)v13 + 19) != (struct _KTHREAD *)((char *)v13 + 152) )
      KiCheckForKernelApcDelivery();
    sub_1406E1BD4(v14);
  }
  return (unsigned int)v4;
}
