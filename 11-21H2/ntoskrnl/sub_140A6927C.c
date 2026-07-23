/*
 * XREFs of sub_140A6927C @ 0x140A6927C
 * Callers:
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_140A69140 @ 0x140A69140 (sub_140A69140.c)
 * Callees:
 *     sub_1407FE774 @ 0x1407FE774 (sub_1407FE774.c)
 *     sub_1407FE7BC @ 0x1407FE7BC (sub_1407FE7BC.c)
 *     sub_1408025E8 @ 0x1408025E8 (sub_1408025E8.c)
 *     sub_14098FC84 @ 0x14098FC84 (sub_14098FC84.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 *     sub_140A67C14 @ 0x140A67C14 (sub_140A67C14.c)
 */

__int64 __fastcall sub_140A6927C(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = sub_140A67C14(0);
  v3 = qword_140C448A8;
  *(_DWORD *)(qword_140C448A8 + 33320) = v2;
  *(_BYTE *)(a1 + 29) = 1;
  sub_140A4A768(a1 + 4, v3, v4, v5);
  sub_1408025E8();
  sub_14098FC84((_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 32));
  sub_1407FE7BC(a1 + 36);
  sub_1407FE774(a1 + 36, *(_DWORD *)(a1 + 32));
  *(_DWORD *)(qword_140C448A8 + 33324) = sub_140A67C14(0);
  return 0LL;
}
