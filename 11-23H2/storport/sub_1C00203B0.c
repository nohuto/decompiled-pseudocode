/*
 * XREFs of sub_1C00203B0 @ 0x1C00203B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C0019D54 @ 0x1C0019D54 (sub_1C0019D54.c)
 *     sub_1C0019ED0 @ 0x1C0019ED0 (sub_1C0019ED0.c)
 *     sub_1C0020508 @ 0x1C0020508 (sub_1C0020508.c)
 *     sub_1C00441C8 @ 0x1C00441C8 (sub_1C00441C8.c)
 */

void __fastcall sub_1C00203B0(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // r8
  int v6; // ecx
  int v7; // r8d
  KIRQL v8; // bl

  if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
    sub_1C00441C8(a1, (unsigned int)&unk_1C0088D60, a3, **(_QWORD **)(a1 + 4896), *(_DWORD *)(a1 + 56), a2);
  *(_DWORD *)(*(_QWORD *)(a1 + 4896) + 20LL) |= 1u;
  if ( (unsigned int)sub_1C0007798(a1, 8) )
  {
    LOBYTE(v5) = 1;
    sub_1C0020508(a1, a2, v5);
  }
  if ( !(unsigned int)sub_1C0019D54(a1) )
  {
    v8 = KfRaiseIrql(2u);
    sub_1C0019ED0(a1, 0LL);
    KeLowerIrql(v8);
  }
  if ( byte_1C0093BE8 )
  {
    if ( (byte_1C0093A02 & 0x10) != 0 )
      sub_1C00441C8(v6, (unsigned int)&unk_1C0089740, v7, **(_QWORD **)(a1 + 4896), *(_DWORD *)(a1 + 56), a2);
  }
}
