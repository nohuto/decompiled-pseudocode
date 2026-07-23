/*
 * XREFs of ntoskrnl_27 @ 0x1406A0430
 * Callers:
 *     sub_1406A0140 @ 0x1406A0140 (sub_1406A0140.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14082D870 @ 0x14082D870 (sub_14082D870.c)
 */

__int64 __fastcall ntoskrnl_27(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r11

  v6 = *((_QWORD *)sub_140347DB0() + 113);
  if ( qword_140D3B4B0 )
    return sub_14042A5E0(v6, v9);
  else
    return sub_14082D870(v6, v9, v5, v7, v8, a5);
}
