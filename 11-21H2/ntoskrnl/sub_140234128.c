/*
 * XREFs of sub_140234128 @ 0x140234128
 * Callers:
 *     sub_14031A5C0 @ 0x14031A5C0 (sub_14031A5C0.c)
 * Callees:
 *     sub_1402341A4 @ 0x1402341A4 (sub_1402341A4.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140234128(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rax
  char v4; // r8
  int v6; // eax
  int v7; // edi
  char v8; // r8

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 160);
  v4 = *(_BYTE *)(a1 + 4) | 2;
  *(_BYTE *)(a1 + 4) = v4;
  if ( v3 )
  {
    v6 = sub_14042A5E0(a1, a2);
    v4 = *(_BYTE *)(a1 + 4);
    v7 = v6;
  }
  else
  {
    v7 = 0;
    if ( *(_BYTE *)(a1 + 7) == 17 )
    {
      *(_BYTE *)(a1 + 4) = v4 & 0xFD;
      return 0LL;
    }
  }
  v8 = v4 & 0xFD;
  *(_BYTE *)(a1 + 4) = v8;
  if ( (v8 & 1) == 0 && v7 < 4 )
  {
    if ( v2 )
      sub_1402341A4(a1);
  }
  return (unsigned int)v7;
}
