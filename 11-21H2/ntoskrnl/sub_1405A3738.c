/*
 * XREFs of sub_1405A3738 @ 0x1405A3738
 * Callers:
 *     sub_1409778EC @ 0x1409778EC (sub_1409778EC.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall sub_1405A3738(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rbp
  volatile LONG *v4; // rbx
  KIRQL v5; // al
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = *((_QWORD *)CurrentThread + 23);
  v4 = (volatile LONG *)sub_140282AD0(v3 + 1664);
  v5 = ExAcquireSpinLockExclusive(v4);
  *((_DWORD *)v4 + 1) = 0;
  v6 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v7 = (_QWORD *)a1[1], (_QWORD *)*v7 != a1) )
LABEL_12:
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  sub_14030FA80(v3 + 1664, v5);
  v8 = a1 + 4;
  while ( 1 )
  {
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      break;
    if ( (_QWORD *)v9[1] != v8 )
      goto LABEL_12;
    v10 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_12;
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    KeSetEvent((PRKEVENT)(v9 + 2), 0, 0);
  }
  v11 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v11 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
}
