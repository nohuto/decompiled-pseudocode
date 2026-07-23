/*
 * XREFs of sub_1407F4B20 @ 0x1407F4B20
 * Callers:
 *     sub_1407AFBE0 @ 0x1407AFBE0 (sub_1407AFBE0.c)
 * Callees:
 *     sub_14021F640 @ 0x14021F640 (sub_14021F640.c)
 *     SeTokenIsRestricted @ 0x14021F680 (SeTokenIsRestricted.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     sub_1402FD65C @ 0x1402FD65C (sub_1402FD65C.c)
 *     RtlIsMultiSessionSku @ 0x1407F4B80 (RtlIsMultiSessionSku.c)
 *     sub_1409CC77C @ 0x1409CC77C (sub_1409CC77C.c)
 */

BOOLEAN __fastcall sub_1407F4B20(char *Token, __int64 a2)
{
  bool v2; // si
  BOOLEAN result; // al
  char v6; // bp
  char v7; // bp
  char v8; // al
  char v9; // bp
  char v10; // cl
  bool v11; // sf
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(a2 + 120) != *((_DWORD *)Token + 30)
    || (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 0x10) != 0
    || RtlIsMultiSessionSku() )
  {
    return 0;
  }
  v6 = sub_14021F640((__int64)Token, 0LL, (__int64)qword_140C1BA10, 0LL, 0, 0);
  if ( v6 )
  {
    if ( SeTokenIsRestricted(Token) )
      v6 = sub_14021F640((__int64)Token, 0LL, (__int64)qword_140C1BA10, 0LL, 1, 0);
    v2 = v6 != 0;
  }
  if ( dword_140D3B1C8 && (*((_DWORD *)Token + 50) & 0x4000) == 0 )
  {
    v7 = sub_14021F640((__int64)Token, 0LL, (__int64)qword_140C1BA20, 0LL, 0, 0);
    if ( v7 )
    {
      if ( SeTokenIsRestricted(Token) )
        v7 = sub_14021F640((__int64)Token, 0LL, (__int64)qword_140C1BA20, 0LL, 1, 0);
      if ( v7 )
        return 1;
    }
    v8 = v7;
    if ( v2 )
      v8 = 1;
    if ( v8 )
      return 1;
  }
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
    return 0;
  v9 = sub_14021F640((__int64)Token, 0LL, (__int64)CapabilityGroupSid, 0LL, 0, 0);
  if ( v9 )
  {
    if ( SeTokenIsRestricted(Token) )
      v9 = sub_14021F640((__int64)Token, 0LL, (__int64)CapabilityGroupSid, 0LL, 1, 0);
    if ( v9 )
      goto LABEL_27;
  }
  v10 = v9;
  if ( v2 )
    v10 = 1;
  if ( v10 )
  {
LABEL_27:
    if ( (*((_DWORD *)Token + 50) & 0x4000) == 0 )
      return 1;
  }
  result = sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(Token + 808), 0LL, qword_140C1BA28, 0, 1, 0);
  LOBYTE(v12) = result;
  if ( result )
  {
    v11 = (int)sub_1409CC77C(Token, (__int64)&v12) < 0;
    result = v12;
    if ( !v11 && !(_BYTE)v12 )
      return RtlEqualSid(*((PSID *)Token + 98), *(PSID *)(a2 + 784));
  }
  return result;
}
