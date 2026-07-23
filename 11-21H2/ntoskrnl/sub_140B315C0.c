/*
 * XREFs of sub_140B315C0 @ 0x140B315C0
 * Callers:
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 * Callees:
 *     sub_1403BF6EC @ 0x1403BF6EC (sub_1403BF6EC.c)
 *     sub_1406538B4 @ 0x1406538B4 (sub_1406538B4.c)
 *     sub_140B4EAD0 @ 0x140B4EAD0 (sub_140B4EAD0.c)
 */

__int64 __fastcall sub_140B315C0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 132) & 0x100) != 0 )
  {
    result = sub_1403BF6EC(a1);
    if ( (int)result >= 0 )
    {
      sub_1406538B4();
      return sub_140B4EAD0();
    }
  }
  return result;
}
