/*
 * XREFs of sub_140989788 @ 0x140989788
 * Callers:
 *     sub_1405DC298 @ 0x1405DC298 (sub_1405DC298.c)
 *     sub_140819D40 @ 0x140819D40 (sub_140819D40.c)
 *     sub_1409974E8 @ 0x1409974E8 (sub_1409974E8.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1408111A0 @ 0x1408111A0 (sub_1408111A0.c)
 */

char __fastcall sub_140989788(_BYTE *a1)
{
  __int64 v1; // rcx
  int v2; // r8d
  char v3; // al

  if ( sub_1408111A0(a1) || dword_140D06B48 != v2 )
  {
    v3 = v2;
    if ( *(_BYTE *)(v1 + 7) != (_BYTE)v2 )
      v3 = 1;
    LOBYTE(v2) = v3;
  }
  return v2;
}
