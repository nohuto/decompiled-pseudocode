/*
 * XREFs of sub_140858820 @ 0x140858820
 * Callers:
 *     sub_1405C9C94 @ 0x1405C9C94 (sub_1405C9C94.c)
 *     sub_140B270C4 @ 0x140B270C4 (sub_140B270C4.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1408588DC @ 0x1408588DC (sub_1408588DC.c)
 *     sub_140858994 @ 0x140858994 (sub_140858994.c)
 */

__int64 __fastcall sub_140858820(__int64 a1)
{
  char v1; // si
  char v2; // di
  __int64 result; // rax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // [rsp+60h] [rbp+8h] BYREF

  v7 = 0;
  v1 = 0;
  v2 = 0;
  result = sub_140858994(a1, &v7);
  v5 = v7;
  if ( (v7 & 1) != 0 )
  {
    v1 = 1;
    v5 = v7 & 0xFFFFFFFE;
  }
  if ( (v5 & 2) != 0 )
  {
    v2 = 1;
    v5 &= ~2u;
  }
  if ( (v5 & 8) == 0 )
  {
    v6 = sub_1408588DC();
    if ( v6 == 1 )
    {
      v2 = 1;
    }
    else if ( v6 )
    {
      v2 = 0;
    }
    result = sub_1402D6B0C((__int64)&unk_140D00B78, 0x12F004Eu, 0, 0, (__int64)&qword_14000FFC8, 0);
  }
  if ( v1 )
    v5 |= 1u;
  if ( v2 )
    v5 |= 2u;
  *(_DWORD *)(a1 + 48) = v5;
  return result;
}
