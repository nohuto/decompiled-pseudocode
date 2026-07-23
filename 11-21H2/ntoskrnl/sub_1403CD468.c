/*
 * XREFs of sub_1403CD468 @ 0x1403CD468
 * Callers:
 *     sub_14084685C @ 0x14084685C (sub_14084685C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1403CD468(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned __int64 v3; // rax

  v2 = *(_DWORD *)(a1 + 440);
  if ( v2 < 0x40 )
    v3 = (1LL << v2) - 1;
  else
    v3 = -1LL;
  return (*(_DWORD *)(a1 + 512) & 0xFFFFFFFD) == 0
      && *(_BYTE *)(a1 + 437)
      && *(_BYTE *)(a1 + 433)
      && *(_BYTE *)(a1 + 434)
      && v3 >= qword_140C4E038;
}
