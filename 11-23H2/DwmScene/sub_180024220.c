/*
 * XREFs of sub_180024220 @ 0x180024220
 * Callers:
 *     sub_180021A28 @ 0x180021A28 (sub_180021A28.c)
 *     sub_180021D04 @ 0x180021D04 (sub_180021D04.c)
 *     sub_180022990 @ 0x180022990 (sub_180022990.c)
 *     sub_1800230D0 @ 0x1800230D0 (sub_1800230D0.c)
 *     sub_180023260 @ 0x180023260 (sub_180023260.c)
 *     sub_1800236D0 @ 0x1800236D0 (sub_1800236D0.c)
 *     sub_180023E70 @ 0x180023E70 (sub_180023E70.c)
 *     sub_180024160 @ 0x180024160 (sub_180024160.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18000BF9A (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000C258 @ 0x18000C258 (sub_18000C258.c)
 *     memcpy @ 0x18000CA61 (memcpy.c)
 */

bool __fastcall sub_180024220(_QWORD *Src, __int64 a2, _BYTE *a3)
{
  size_t v3; // rax

  if ( a3 )
  {
    *a3 = 0;
    v3 = Src[19];
    if ( !WORD2(a2) )
      return (unsigned int)sub_18000C258() != -1;
    if ( v3 >= WORD2(a2) )
    {
      memcpy(a3, Src, WORD2(a2));
      return (unsigned int)sub_18000C258() != -1;
    }
    memset(a3, 0, v3);
    *(_DWORD *)o__errno() = 34;
    o__invalid_parameter_noinfo();
  }
  return 0;
}
