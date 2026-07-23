/*
 * XREFs of sub_14024F014 @ 0x14024F014
 * Callers:
 *     sub_140230F28 @ 0x140230F28 (sub_140230F28.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402EACBC @ 0x1402EACBC (sub_1402EACBC.c)
 * Callees:
 *     sub_14024F0F8 @ 0x14024F0F8 (sub_14024F0F8.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140352E50 @ 0x140352E50 (sub_140352E50.c)
 */

_BOOL8 __fastcall sub_14024F014(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF

  LODWORD(v5) = 0;
  memset(v4, 0, 32);
  sub_140352E50(a1, v4);
  result = 0;
  if ( (unsigned int)sub_14024F0F8(v4, &v5) )
  {
    if ( !(_DWORD)v5 )
    {
      if ( a2 == -1 )
        return 1;
      v5 = sub_140317A10(v4[0]);
      if ( (v5 & 1) != 0
        && ((((unsigned __int64)sub_140317A10(&v5) >> 12) & 0xFFFFFFFFFFLL) == a2
         || v4[0] == 0xFFFFF6FB7DBEDF68uLL
         && (*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) & 0xFFFFFFFFFFLL) == a2
         && a2 == *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 904LL) >> 12) )
      {
        return 1;
      }
    }
  }
  return result;
}
