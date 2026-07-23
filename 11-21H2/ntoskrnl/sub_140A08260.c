/*
 * XREFs of sub_140A08260 @ 0x140A08260
 * Callers:
 *     sub_1409ABFB0 @ 0x1409ABFB0 (sub_1409ABFB0.c)
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140A083CC @ 0x140A083CC (sub_140A083CC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

int __fastcall sub_140A08260(PVOID *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID v3; // rax

  if ( *a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    sub_140A083CC(*a1, 2LL);
    sub_140A083CC(*a1, 0LL);
    ExFreePoolWithTag(*a1, 0x20666E57u);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( a1[1] )
    ZwClose(a1[1]);
  v3 = a1[2];
  if ( v3 )
    LODWORD(v3) = ZwClose(a1[2]);
  return (int)v3;
}
