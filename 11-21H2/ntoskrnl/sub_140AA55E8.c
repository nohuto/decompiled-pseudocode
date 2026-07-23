/*
 * XREFs of sub_140AA55E8 @ 0x140AA55E8
 * Callers:
 *     sub_140AA41F0 @ 0x140AA41F0 (sub_140AA41F0.c)
 *     sub_140AA4270 @ 0x140AA4270 (sub_140AA4270.c)
 *     sub_140AA42B0 @ 0x140AA42B0 (sub_140AA42B0.c)
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

char __fastcall sub_140AA55E8(unsigned __int8 a1, unsigned __int8 a2)
{
  _UNKNOWN **v2; // rax
  ULONG_PTR v3; // rbx
  ULONG_PTR v4; // rdi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = a2;
  v4 = a1;
  if ( a1 < a2 )
    LOBYTE(v2) = sub_140A8C924(0xC4u, 0x31uLL, a1, a2, 0LL);
  if ( (unsigned __int8)v4 < 2u || (unsigned __int8)v3 >= 2u )
  {
    if ( (unsigned __int8)v3 > 0xFu )
      LOBYTE(v2) = sub_140A8C924(0xC4u, 0x31uLL, v4, v3, 0LL);
  }
  else
  {
    LOBYTE(v2) = KeGetPcr()[36].Unused0[2];
    if ( ((unsigned __int8)v2 & 1) != 0 )
      LOBYTE(v2) = sub_140A8C924(0xC4u, 0x31uLL, v4, v3, 1LL);
  }
  return (char)v2;
}
