/*
 * XREFs of sub_14027C6DC @ 0x14027C6DC
 * Callers:
 *     sub_14027DB4C @ 0x14027DB4C (sub_14027DB4C.c)
 *     sub_140329470 @ 0x140329470 (sub_140329470.c)
 *     sub_14035E3C4 @ 0x14035E3C4 (sub_14035E3C4.c)
 * Callees:
 *     sub_1402792E0 @ 0x1402792E0 (sub_1402792E0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1406FACF8 @ 0x1406FACF8 (sub_1406FACF8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14027C6DC(_DWORD *P)
{
  unsigned int v1; // ebp
  _QWORD *v2; // r14
  int v3; // esi
  _QWORD *v4; // rdi
  int v5; // ebx
  struct _KTHREAD *CurrentThread; // rcx

  v1 = 0;
  v2 = P;
  v3 = P[26] & 1;
  do
  {
    v4 = (_QWORD *)*v2;
    v5 = sub_1402792E0(v2 + 15, 0LL, 0LL);
    sub_1406FACF8(v2);
    ExFreePoolWithTag(v2, 0);
    v2 = v4;
    if ( v5 < 0 )
      v1 = v5;
  }
  while ( v4 );
  if ( v3 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
      && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v1;
}
