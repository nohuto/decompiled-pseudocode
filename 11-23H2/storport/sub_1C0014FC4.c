/*
 * XREFs of sub_1C0014FC4 @ 0x1C0014FC4
 * Callers:
 *     sub_1C00188AC @ 0x1C00188AC (sub_1C00188AC.c)
 * Callees:
 *     sub_1C0016EE0 @ 0x1C0016EE0 (sub_1C0016EE0.c)
 *     sub_1C00173C4 @ 0x1C00173C4 (sub_1C00173C4.c)
 *     sub_1C00183B8 @ 0x1C00183B8 (sub_1C00183B8.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C0014FC4(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _BYTE Dst[104]; // [rsp+30h] [rbp-68h] BYREF

  memset_0(Dst, 0, 0x60uLL);
  result = sub_1C0016EE0(a1, a2, Dst);
  if ( (int)result >= 0 )
  {
    sub_1C00173C4((unsigned int)&unk_1C0082060, a1, a2, (unsigned int)Dst, 36);
    sub_1C00183B8(a1, Dst);
    return Dst[93] == 0 ? 0xC000000E : 0;
  }
  return result;
}
