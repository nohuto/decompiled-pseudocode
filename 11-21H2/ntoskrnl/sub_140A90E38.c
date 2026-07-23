/*
 * XREFs of sub_140A90E38 @ 0x140A90E38
 * Callers:
 *     sub_140A82480 @ 0x140A82480 (sub_140A82480.c)
 *     sub_140A9AFDC @ 0x140A9AFDC (sub_140A9AFDC.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 */

void __fastcall sub_140A90E38(__int16 a1)
{
  if ( (a1 & 0x200) != 0 && !qword_140C1ADE0 )
  {
    if ( (unsigned int)dword_140C0D8C4 > 0x100000 )
      dword_140C0D8C4 = 0x100000;
    qword_140C1ADE0 = ExAllocatePool3(
                        64LL,
                        (unsigned __int64)(unsigned int)dword_140C0D8C4 << 9,
                        0x50466656u,
                        (__int64)&byte_140C5B0E0,
                        1u);
  }
}
