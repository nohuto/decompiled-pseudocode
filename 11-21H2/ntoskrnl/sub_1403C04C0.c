/*
 * XREFs of sub_1403C04C0 @ 0x1403C04C0
 * Callers:
 *     sub_140A57CB4 @ 0x140A57CB4 (sub_140A57CB4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403C04C0(__int64 a1)
{
  unsigned __int64 v1; // rax

  *(_DWORD *)(a1 + 11672) = 0;
  v1 = *(unsigned int *)(a1 + 68);
  *(_QWORD *)(a1 + 11664) = 1LL;
  if ( !qword_140C2AC18 || v1 < qword_140C2AC18 )
    qword_140C2AC18 = v1;
  return 0LL;
}
