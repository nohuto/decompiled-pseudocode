/*
 * XREFs of sub_14051CB78 @ 0x14051CB78
 * Callers:
 *     sub_14051C710 @ 0x14051C710 (sub_14051C710.c)
 * Callees:
 *     sub_14051C2D8 @ 0x14051C2D8 (sub_14051C2D8.c)
 */

void __fastcall sub_14051CB78(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  if ( ((v1 & 0x4000000000000000LL) == 0 || byte_140D0159C) && (v1 & 0x400000000000000LL) != 0 )
  {
    v2 = 0;
    v3 = *(_QWORD *)(a1 + 48);
    if ( byte_140D016E8 )
      v2 = (v1 & 0x100000000000LL) != 0;
    sub_14051C2D8(v3, 0, 0LL, 0, v1, 0, 1, v2);
  }
}
