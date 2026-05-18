/*
 * XREFs of sub_180025C4C @ 0x180025C4C
 * Callers:
 *     sub_180022BC8 @ 0x180022BC8 (sub_180022BC8.c)
 *     sub_180023190 @ 0x180023190 (sub_180023190.c)
 *     sub_1800232D0 @ 0x1800232D0 (sub_1800232D0.c)
 *     sub_180023410 @ 0x180023410 (sub_180023410.c)
 *     sub_180023630 @ 0x180023630 (sub_180023630.c)
 *     sub_180023900 @ 0x180023900 (sub_180023900.c)
 *     sub_180023B10 @ 0x180023B10 (sub_180023B10.c)
 *     sub_180023DE0 @ 0x180023DE0 (sub_180023DE0.c)
 *     sub_1800241F0 @ 0x1800241F0 (sub_1800241F0.c)
 *     sub_180024400 @ 0x180024400 (sub_180024400.c)
 *     sub_1800246C0 @ 0x1800246C0 (sub_1800246C0.c)
 *     sub_180024958 @ 0x180024958 (sub_180024958.c)
 *     sub_180024A10 @ 0x180024A10 (sub_180024A10.c)
 *     sub_180024B70 @ 0x180024B70 (sub_180024B70.c)
 *     sub_180024E00 @ 0x180024E00 (sub_180024E00.c)
 *     sub_180024FB0 @ 0x180024FB0 (sub_180024FB0.c)
 *     sub_1800253C0 @ 0x1800253C0 (sub_1800253C0.c)
 *     sub_180025520 @ 0x180025520 (sub_180025520.c)
 *     sub_1800257C0 @ 0x1800257C0 (sub_1800257C0.c)
 *     sub_180025B00 @ 0x180025B00 (sub_180025B00.c)
 *     sub_180025D00 @ 0x180025D00 (sub_180025D00.c)
 *     sub_180025EC0 @ 0x180025EC0 (sub_180025EC0.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18000BFAA (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18000C268 @ 0x18000C268 (sub_18000C268.c)
 *     memcpy @ 0x18000CA6D (memcpy.c)
 */

bool __fastcall sub_180025C4C(_QWORD *Src, __int64 a2, _BYTE *a3)
{
  size_t v3; // r10

  if ( !a3 )
    return 0;
  *a3 = 0;
  v3 = Src[19];
  if ( WORD2(a2) )
  {
    if ( v3 < WORD2(a2) )
    {
      memset(a3, 0, v3);
      *(_DWORD *)o__errno() = 34;
      o__invalid_parameter_noinfo();
      return 0;
    }
    memcpy(a3, Src, WORD2(a2));
  }
  return (unsigned int)sub_18000C268() != -1;
}
