/*
 * XREFs of sub_18001D3F8 @ 0x18001D3F8
 * Callers:
 *     sub_18001D840 @ 0x18001D840 (sub_18001D840.c)
 *     sub_180028C50 @ 0x180028C50 (sub_180028C50.c)
 *     sub_180028EE8 @ 0x180028EE8 (sub_180028EE8.c)
 *     sub_1800298CC @ 0x1800298CC (sub_1800298CC.c)
 *     sub_18002C5EC @ 0x18002C5EC (sub_18002C5EC.c)
 *     sub_18002DE00 @ 0x18002DE00 (sub_18002DE00.c)
 *     sub_18002EE38 @ 0x18002EE38 (sub_18002EE38.c)
 *     sub_1800386F8 @ 0x1800386F8 (sub_1800386F8.c)
 *     sub_180040EEC @ 0x180040EEC (sub_180040EEC.c)
 *     sub_180041190 @ 0x180041190 (sub_180041190.c)
 *     sub_1800422EC @ 0x1800422EC (sub_1800422EC.c)
 *     sub_180042568 @ 0x180042568 (sub_180042568.c)
 *     sub_18004F698 @ 0x18004F698 (sub_18004F698.c)
 *     sub_18004F904 @ 0x18004F904 (sub_18004F904.c)
 *     sub_18004FAB8 @ 0x18004FAB8 (sub_18004FAB8.c)
 *     sub_18004FBD8 @ 0x18004FBD8 (sub_18004FBD8.c)
 *     sub_18005033C @ 0x18005033C (sub_18005033C.c)
 *     sub_180050550 @ 0x180050550 (sub_180050550.c)
 *     sub_1800508F0 @ 0x1800508F0 (sub_1800508F0.c)
 *     sub_180054CC0 @ 0x180054CC0 (sub_180054CC0.c)
 *     sub_1800569EC @ 0x1800569EC (sub_1800569EC.c)
 *     sub_18005851C @ 0x18005851C (sub_18005851C.c)
 *     sub_1800590C0 @ 0x1800590C0 (sub_1800590C0.c)
 *     sub_18005B98C @ 0x18005B98C (sub_18005B98C.c)
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_180060610 @ 0x180060610 (sub_180060610.c)
 *     sub_18006102C @ 0x18006102C (sub_18006102C.c)
 *     sub_1800615A8 @ 0x1800615A8 (sub_1800615A8.c)
 *     sub_180085E18 @ 0x180085E18 (sub_180085E18.c)
 *     sub_1800A1684 @ 0x1800A1684 (sub_1800A1684.c)
 *     sub_1800A1A68 @ 0x1800A1A68 (sub_1800A1A68.c)
 *     sub_1800C5B04 @ 0x1800C5B04 (sub_1800C5B04.c)
 *     sub_1800C5B8C @ 0x1800C5B8C (sub_1800C5B8C.c)
 *     sub_1800C8AFC @ 0x1800C8AFC (sub_1800C8AFC.c)
 *     sub_1800CA060 @ 0x1800CA060 (sub_1800CA060.c)
 *     sub_1800CA57C @ 0x1800CA57C (sub_1800CA57C.c)
 *     sub_1800CB584 @ 0x1800CB584 (sub_1800CB584.c)
 *     sub_1800D94E0 @ 0x1800D94E0 (sub_1800D94E0.c)
 *     sub_1800D9650 @ 0x1800D9650 (sub_1800D9650.c)
 *     sub_1800D99A0 @ 0x1800D99A0 (sub_1800D99A0.c)
 *     sub_1800DF000 @ 0x1800DF000 (sub_1800DF000.c)
 *     sub_1800DF56C @ 0x1800DF56C (sub_1800DF56C.c)
 *     sub_1800E0100 @ 0x1800E0100 (sub_1800E0100.c)
 * Callees:
 *     sub_18001DD84 @ 0x18001DD84 (sub_18001DD84.c)
 */

__int64 *__fastcall sub_18001D3F8(__int64 *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rcx
  __int64 i; // rax

  v1 = a1;
  v2 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 16) + 25LL) )
  {
    for ( i = *(_QWORD *)(v2 + 8); !*(_BYTE *)(i + 25) && v2 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
    {
      *v1 = i;
      v2 = i;
    }
  }
  else
  {
    i = sub_18001DD84(*(_QWORD *)(v2 + 16), 0LL, v1);
  }
  *v1 = i;
  return v1;
}
