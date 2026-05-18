/*
 * XREFs of sub_18003F4EC @ 0x18003F4EC
 * Callers:
 *     sub_18003F260 @ 0x18003F260 (sub_18003F260.c)
 *     sub_18003F44C @ 0x18003F44C (sub_18003F44C.c)
 *     sub_18003F644 @ 0x18003F644 (sub_18003F644.c)
 *     sub_1800DDA48 @ 0x1800DDA48 (sub_1800DDA48.c)
 *     sub_1800DDC64 @ 0x1800DDC64 (sub_1800DDC64.c)
 *     sub_1800DE810 @ 0x1800DE810 (sub_1800DE810.c)
 * Callees:
 *     sub_18003F0C8 @ 0x18003F0C8 (sub_18003F0C8.c)
 */

__int64 __fastcall sub_18003F4EC(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 *v6; // rbx
  int v7; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v6 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v6;
  while ( !*((_BYTE *)v6 + 25) )
  {
    *(_QWORD *)a2 = v6;
    if ( (unsigned __int8)sub_18003F0C8(v6 + 4, a3) )
    {
      v6 = (__int64 *)v6[2];
      v7 = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = v6;
      v7 = 1;
      v6 = (__int64 *)*v6;
    }
    *(_DWORD *)(a2 + 8) = v7;
  }
  return a2;
}
