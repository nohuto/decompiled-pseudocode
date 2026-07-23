/*
 * XREFs of sub_140A7042C @ 0x140A7042C
 * Callers:
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 *     sub_140A70018 @ 0x140A70018 (sub_140A70018.c)
 *     sub_140A73514 @ 0x140A73514 (sub_140A73514.c)
 *     sub_140A73D80 @ 0x140A73D80 (sub_140A73D80.c)
 * Callees:
 *     sub_140A749D0 @ 0x140A749D0 (sub_140A749D0.c)
 */

char __fastcall sub_140A7042C(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  int v3; // eax

  v1 = (unsigned int)(a1 - 1);
  if ( (unsigned int)(a1 - 1) > 0x1F )
    return 0;
  v2 = 5 * v1;
  v3 = *((_DWORD *)&unk_140C33EE0 + 10 * v1);
  if ( !v3 )
    return 0;
  if ( (v3 & 0xC) == 4 )
  {
    *((_DWORD *)&unk_140C33EE0 + 10 * v1) = 0;
    ++dword_140C33EA0;
  }
  else if ( (unsigned __int8)sub_140A749D0((unsigned int)v1) )
  {
    *((_DWORD *)&unk_140C33EE0 + 2 * v2) = 0;
  }
  return 1;
}
