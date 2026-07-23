/*
 * XREFs of sub_1409743A4 @ 0x1409743A4
 * Callers:
 *     sub_1406C9390 @ 0x1406C9390 (sub_1406C9390.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     sub_1402AC180 @ 0x1402AC180 (sub_1402AC180.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_140970F88 @ 0x140970F88 (sub_140970F88.c)
 *     sub_140972C84 @ 0x140972C84 (sub_140972C84.c)
 *     sub_140973630 @ 0x140973630 (sub_140973630.c)
 *     sub_140973D6C @ 0x140973D6C (sub_140973D6C.c)
 *     sub_14097638C @ 0x14097638C (sub_14097638C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409743A4(const void **a1, _QWORD *a2, int *a3)
{
  int v6; // ebx
  _QWORD *v7; // r15
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v9; // rsi
  bool v10; // r12
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rbp
  bool v15; // zf
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-40h] BYREF
  __int128 v19; // [rsp+60h] [rbp-38h] BYREF
  ULONG DestinationSidLength; // [rsp+B8h] [rbp+20h]

  Handle = 0LL;
  Object = 0LL;
  v19 = 0LL;
  v6 = sub_14097638C((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (unsigned int)&Handle, (__int64)&Object);
  if ( v6 < 0 )
    goto LABEL_25;
  v7 = sub_140970F88(*a3, a3[1], a1);
  if ( !v7 )
    goto LABEL_3;
  CurrentThread = KeGetCurrentThread();
  DestinationSidLength = RtlLengthSid(a2);
  *(_QWORD *)&v19 = sub_1402AC180(a2, DestinationSidLength, 0LL);
  *((_QWORD *)&v19 + 1) = a2;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C533C0, 0LL);
  v9 = (_QWORD *)qword_140C533A8;
  v10 = 0;
  if ( !qword_140C533A8 )
    goto LABEL_8;
  while ( 1 )
  {
    v11 = sub_140972C84(&v19, (__int64)v9);
    if ( v11 > 0 )
      break;
    if ( v11 >= 0 )
      goto LABEL_19;
    v12 = (_QWORD *)*v9;
    if ( !*v9 )
      goto LABEL_8;
LABEL_17:
    v9 = v12;
  }
  v12 = (_QWORD *)v9[1];
  if ( v12 )
    goto LABEL_17;
  v10 = 1;
LABEL_8:
  v13 = sub_1402828F0(256, DestinationSidLength + 40, 0x73486D4Du);
  v14 = v13;
  if ( v13 )
  {
    v13[3] = 0LL;
    v13[4] = v19;
    RtlCopySid(DestinationSidLength, v13 + 5, a2);
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C533A8, (unsigned __int64)v9, v10, v14);
    v9 = v14;
LABEL_19:
    sub_140973D6C(v9 + 3, v7, 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C533C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C533C0);
    sub_1402AFC00((ULONG_PTR)&qword_140C533C0);
    v15 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v15 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    sub_140973630(*a3, a3[1]);
    v6 = 0;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C533C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C533C0);
    sub_1402AFC00((ULONG_PTR)&qword_140C533C0);
    v15 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v15 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    ExFreePoolWithTag(v7, 0);
LABEL_3:
    v6 = -1073741670;
  }
LABEL_25:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v6;
}
