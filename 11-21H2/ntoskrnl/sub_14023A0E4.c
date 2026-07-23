/*
 * XREFs of sub_14023A0E4 @ 0x14023A0E4
 * Callers:
 *     sub_14031B510 @ 0x14031B510 (sub_14031B510.c)
 *     sub_14031D740 @ 0x14031D740 (sub_14031D740.c)
 *     NaptrDnsRecordConvert_0 @ 0x14036CF60 (NaptrDnsRecordConvert_0.c)
 * Callees:
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

_BOOL8 __fastcall sub_14023A0E4(__int64 a1)
{
  unsigned __int64 v1; // rax
  _BOOL8 result; // rax
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rdx

  v1 = sub_140317A10(a1);
  result = 1;
  if ( (v1 & 1) == 0 && v1 && (v1 & 0x400) == 0 )
  {
    if ( (v1 & 0x800) != 0 )
    {
      v3 = ((v1 >> 5) & 0x1F) == 24;
    }
    else
    {
      v4 = sub_1402CCC50(512LL, v1);
      v3 = v5 == v4;
    }
    if ( v3 )
      return 0;
  }
  return result;
}
