/*
 * XREFs of sub_18003D980 @ 0x18003D980
 * Callers:
 *     sub_18003B9D0 @ 0x18003B9D0 (sub_18003B9D0.c)
 *     sub_18003DA14 @ 0x18003DA14 (sub_18003DA14.c)
 * Callees:
 *     sub_180012ED8 @ 0x180012ED8 (sub_180012ED8.c)
 *     sub_18003D8E8 @ 0x18003D8E8 (sub_18003D8E8.c)
 *     sub_18003D938 @ 0x18003D938 (sub_18003D938.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 */

unsigned __int64 __fastcall sub_18003D980(_DWORD *a1, __int64 a2, __int128 *a3, __int64 a4)
{
  int v8; // eax
  int v9; // eax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  sub_18003E370();
  v8 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)&v11 = *(_QWORD *)a2;
  DWORD2(v11) = v8;
  sub_180012ED8(a1, &v11);
  v11 = *a3;
  sub_18003D8E8(a1, &v11);
  v9 = *(_DWORD *)(a4 + 8);
  *(_QWORD *)&v11 = *(_QWORD *)a4;
  DWORD2(v11) = v9;
  return sub_18003D938(a1, &v11);
}
