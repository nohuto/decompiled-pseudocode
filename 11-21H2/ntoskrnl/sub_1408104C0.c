/*
 * XREFs of sub_1408104C0 @ 0x1408104C0
 * Callers:
 *     sub_1403A5AF0 @ 0x1403A5AF0 (sub_1403A5AF0.c)
 * Callees:
 *     sub_14075D8DC @ 0x14075D8DC (sub_14075D8DC.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 */

__int64 __fastcall sub_1408104C0(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    sub_14075D8DC(*(_QWORD *)(a1 + 32), 2u);
    *(_DWORD *)(v1 + 16) |= 1u;
    return sub_1407838E0((__int64 *)&off_140C037E0, v1);
  }
  return result;
}
