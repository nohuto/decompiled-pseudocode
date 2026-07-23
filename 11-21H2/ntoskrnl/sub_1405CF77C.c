/*
 * XREFs of sub_1405CF77C @ 0x1405CF77C
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 */

void __fastcall sub_1405CF77C(__int64 a1)
{
  bool v2; // zf
  _DWORD *v3; // rdx

  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  v2 = byte_140D069E0 == 0;
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  if ( !v2 )
  {
    v3 = (_DWORD *)*((_QWORD *)KeGetCurrentPrcb() + 4246);
    *(_BYTE *)a1 = 1;
    *(_DWORD *)(a1 + 16) = v3[122];
    *(_DWORD *)(a1 + 4) = v3[123];
    *(_DWORD *)(a1 + 8) = v3[124];
    *(_DWORD *)(a1 + 12) = v3[125];
  }
  sub_140224C00(&qword_140C22FE0);
}
