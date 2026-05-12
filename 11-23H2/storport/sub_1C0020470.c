/*
 * XREFs of sub_1C0020470 @ 0x1C0020470
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C0019CFC @ 0x1C0019CFC (sub_1C0019CFC.c)
 *     sub_1C0020508 @ 0x1C0020508 (sub_1C0020508.c)
 *     sub_1C00441C8 @ 0x1C00441C8 (sub_1C00441C8.c)
 */

__int64 __fastcall sub_1C0020470(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  int v6; // ecx
  int v7; // r8d

  if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
    sub_1C00441C8(a1, (unsigned int)&unk_1C0089700, a3, **(_QWORD **)(a1 + 4896), *(_DWORD *)(a1 + 56), a2);
  *(_DWORD *)(*(_QWORD *)(a1 + 4896) + 20LL) &= ~1u;
  sub_1C0019CFC(a1);
  if ( (unsigned int)sub_1C0007798(a1, 8) )
    sub_1C0020508(a1, a2, 0LL);
  result = PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 4896), a2);
  if ( byte_1C0093BE8 )
  {
    if ( (byte_1C0093A02 & 0x10) != 0 )
      return sub_1C00441C8(v6, (unsigned int)&unk_1C0088EE8, v7, **(_QWORD **)(a1 + 4896), *(_DWORD *)(a1 + 56), a2);
  }
  return result;
}
