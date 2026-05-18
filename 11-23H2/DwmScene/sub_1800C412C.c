/*
 * XREFs of sub_1800C412C @ 0x1800C412C
 * Callers:
 *     sub_1800C4D60 @ 0x1800C4D60 (sub_1800C4D60.c)
 *     sub_1800C5100 @ 0x1800C5100 (sub_1800C5100.c)
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800C4158 @ 0x1800C4158 (sub_1800C4158.c)
 */

__int64 __fastcall sub_1800C412C(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  sub_1800C4158();
  v3 = *(_QWORD *)(v2 + 8);
  if ( v3 )
    sub_180010530(v3);
  return a1;
}
