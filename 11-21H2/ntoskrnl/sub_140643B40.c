/*
 * XREFs of sub_140643B40 @ 0x140643B40
 * Callers:
 *     sub_1406433D0 @ 0x1406433D0 (sub_1406433D0.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 * Callees:
 *     sub_1403C07F4 @ 0x1403C07F4 (sub_1403C07F4.c)
 *     sub_140643F80 @ 0x140643F80 (sub_140643F80.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140643B40(__int64 a1, int *a2)
{
  unsigned int v4; // ecx
  __int64 Pool2; // rax
  __int64 v6; // r11
  __int64 v7; // rax

  v4 = *(_DWORD *)(a1 + 32);
  *a2 = v4;
  if ( KeGetCurrentIrql() > 2u )
  {
    v7 = sub_140643F80(a1);
    v6 = v7;
    if ( v7 )
    {
      *(_DWORD *)(v7 + 24) = 1;
      goto LABEL_6;
    }
LABEL_7:
    *a2 = 0;
    return v6;
  }
  Pool2 = ExAllocatePool2(64LL, v4, *(unsigned int *)(a1 + 36));
  v6 = Pool2;
  if ( !Pool2 )
    goto LABEL_7;
  sub_1403C07F4(Pool2, *a2, a1);
LABEL_6:
  *(_QWORD *)(v6 + 32) = a1;
  return v6;
}
