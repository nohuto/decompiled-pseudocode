/*
 * XREFs of sub_18001306C @ 0x18001306C
 * Callers:
 *     sub_18001207C @ 0x18001207C (sub_18001207C.c)
 *     sub_180013280 @ 0x180013280 (sub_180013280.c)
 *     sub_180016F04 @ 0x180016F04 (sub_180016F04.c)
 *     sub_18002E5A8 @ 0x18002E5A8 (sub_18002E5A8.c)
 *     sub_180071228 @ 0x180071228 (sub_180071228.c)
 *     sub_180093AFC @ 0x180093AFC (sub_180093AFC.c)
 *     sub_180097288 @ 0x180097288 (sub_180097288.c)
 *     sub_1800DA840 @ 0x1800DA840 (sub_1800DA840.c)
 *     sub_1800E0590 @ 0x1800E0590 (sub_1800E0590.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001203C @ 0x18001203C (sub_18001203C.c)
 */

__int64 __fastcall sub_18001306C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18001203C((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  return result;
}
