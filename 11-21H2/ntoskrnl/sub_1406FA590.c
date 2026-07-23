/*
 * XREFs of sub_1406FA590 @ 0x1406FA590
 * Callers:
 *     sub_14029C970 @ 0x14029C970 (sub_14029C970.c)
 *     sub_140329470 @ 0x140329470 (sub_140329470.c)
 *     sub_14035E3C4 @ 0x14035E3C4 (sub_14035E3C4.c)
 * Callees:
 *     sub_140233A4C @ 0x140233A4C (sub_140233A4C.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1406AC9A4 @ 0x1406AC9A4 (sub_1406AC9A4.c)
 *     sub_1406F4E78 @ 0x1406F4E78 (sub_1406F4E78.c)
 *     sub_1406FACF8 @ 0x1406FACF8 (sub_1406FACF8.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406FA590(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        PVOID *a8)
{
  _QWORD *v8; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v13; // ebp
  __int64 v14; // r12
  PVOID *v15; // rbx
  __int64 result; // rax
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  P = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = a5;
  v14 = **(_QWORD **)(a1 + 40);
  if ( dword_140C52B68 && a5 >= dword_140C52B6C )
    v8 = sub_1406AC9A4(a1, a4 >> 12);
  if ( (int)sub_1407BCB30((_DWORD)v8, v14, a2, a3, a4, v13, -1, (__int64)&P) >= 0 && P )
  {
    v15 = a8;
    *((_DWORD *)P + 26) = 1;
    if ( !*v15 )
      --*((_WORD *)CurrentThread + 243);
    if ( (int)sub_1402715A0((__int64)P, 0) >= 0 && *((PVOID *)P + 15) != (char *)P + 120 )
    {
      if ( v8 )
        sub_140233A4C(v8, 1);
      sub_1406F4E78((__int64)P, 1, 0xFFFFFFFF, a7);
      result = 1LL;
      *(_QWORD *)P = *v15;
      *v15 = P;
      return result;
    }
    if ( !*v15
      && (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
      && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    {
      KiCheckForKernelApcDelivery();
    }
    sub_1406FACF8(P);
    ExFreePoolWithTag(P, 0);
  }
  if ( v8 )
    sub_140233A4C(v8, 0);
  return 0LL;
}
