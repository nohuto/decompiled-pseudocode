/*
 * XREFs of sub_1403A3520 @ 0x1403A3520
 * Callers:
 *     sub_1403A24DC @ 0x1403A24DC (sub_1403A24DC.c)
 *     sub_1403A2E08 @ 0x1403A2E08 (sub_1403A2E08.c)
 *     sub_1403A2F5C @ 0x1403A2F5C (sub_1403A2F5C.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403A340C @ 0x1403A340C (sub_1403A340C.c)
 *     sub_1403A34E0 @ 0x1403A34E0 (sub_1403A34E0.c)
 *     x86BiosReadMemory @ 0x1403CBB60 (x86BiosReadMemory.c)
 *     sub_1403CC31C @ 0x1403CC31C (sub_1403CC31C.c)
 *     sub_1403CC390 @ 0x1403CC390 (sub_1403CC390.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     sub_1403D04EC @ 0x1403D04EC (sub_1403D04EC.c)
 *     x86BiosWriteMemory @ 0x1403D2040 (x86BiosWriteMemory.c)
 *     sub_1403D20CC @ 0x1403D20CC (sub_1403D20CC.c)
 *     sub_1403D75CC @ 0x1403D75CC (sub_1403D75CC.c)
 *     sub_1405361F0 @ 0x1405361F0 (sub_1405361F0.c)
 * Callees:
 *     <none>
 */

int *__fastcall sub_1403A3520(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rax
  unsigned int v5; // r8d
  char *v6; // rcx

  v2 = (a2 + 16 * a1) & 0xFFFFF;
  if ( v2 > 0x8FFFF && v2 - 655360 > 0x1FFFF )
    return (int *)(qword_140C4C838 + v2);
  if ( v2 >= 0xA0000 )
  {
    v4 = qword_140C4C818;
    v6 = (char *)v2;
    if ( !qword_140C4C818 )
      v4 = qword_140C4C838;
    return (int *)&v6[v4];
  }
  v4 = (unsigned __int16)(a2 + 16 * a1);
  v5 = HIWORD(v2);
  if ( v5 )
  {
    if ( v5 != 1 && v5 <= 3 && (unsigned int)v4 < dword_140C54B68 )
      return (int *)(qword_140C54B70 + v4);
  }
  else if ( (unsigned int)v4 <= 0x800 )
  {
    v6 = (char *)&unk_140C4C840;
    return (int *)&v6[v4];
  }
  dword_140C4C820 = 0;
  return &dword_140C4C820;
}
