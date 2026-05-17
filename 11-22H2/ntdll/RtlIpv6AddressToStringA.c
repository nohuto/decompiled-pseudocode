/*
 * XREFs of RtlIpv6AddressToStringA @ 0x180080F50
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x18008A2B0 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     sprintf_s @ 0x18009A220 (sprintf_s.c)
 */

PSTR __stdcall RtlIpv6AddressToStringA(const struct in6_addr *Addr, PSTR S)
{
  unsigned int v2; // ebp
  PSTR v3; // r14
  char *v4; // rdi
  int v6; // r10d
  int v7; // r11d
  int v8; // esi
  int v9; // edx
  __int64 i; // r8
  int v11; // r9d
  int v12; // eax
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r13
  int v17; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // eax
  const char *v23; // r9
  int v24; // eax

  v2 = 8;
  v3 = S + 46;
  v4 = S;
  if ( !*(_DWORD *)Addr->u.Byte && !Addr->u.Word[2] && !Addr->u.Word[3] && Addr->u.Word[6] )
  {
    if ( Addr->u.Word[4] )
    {
      if ( Addr->u.Word[4] == 0xFFFF && !Addr->u.Word[5] )
      {
        v24 = sprintf_s(
                S,
                0x2EuLL,
                "::ffff:0:%u.%u.%u.%u",
                Addr->u.Byte[12],
                Addr->u.Byte[13],
                Addr->u.Byte[14],
                Addr->u.Byte[15]);
        return &v4[v24];
      }
    }
    else if ( ((Addr->u.Word[5] + 1) & 0xFFFE) == 0 )
    {
      v23 = (const char *)&unk_180136DCA;
      if ( Addr->u.Word[5] )
        v23 = "ffff:";
      v24 = sprintf_s(
              S,
              0x2EuLL,
              "::%hs%u.%u.%u.%u",
              v23,
              Addr->u.Byte[12],
              Addr->u.Byte[13],
              Addr->u.Byte[14],
              Addr->u.Byte[15]);
      return &v4[v24];
    }
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( (Addr->u.Word[4] & 0xFFFD) == 0 && Addr->u.Word[5] == 0xFE5E )
    v2 = 6;
  v9 = 0;
  for ( i = 0LL; i < v2; ++i )
  {
    v11 = v9 + 1;
    if ( Addr->u.Word[i] )
    {
      v8 = v9 + 1;
    }
    else
    {
      v19 = v6 - v7;
      v20 = v9 - v8 + 1;
      v21 = v8;
      if ( v20 <= v6 - v7 )
        v21 = v7;
      v7 = v21;
      v22 = v11;
      if ( v20 <= v19 )
        v22 = v6;
      v6 = v22;
    }
    v9 = v11;
  }
  v12 = 0;
  if ( v6 - v7 > 1 )
    v12 = v6;
  v13 = v12;
  v14 = 0;
  if ( v6 - v7 > 1 )
    v14 = v7;
  v15 = 0LL;
  v16 = v14;
  do
  {
    if ( v15 < v13 && v16 <= v15 )
    {
      v17 = sprintf_s(v4, v3 - v4, "::");
      v15 = v13 - 1;
    }
    else
    {
      if ( v15 && v15 != v13 )
        v4 += sprintf_s(v4, v3 - v4, ":");
      v17 = sprintf_s(v4, v3 - v4, "%x", (unsigned __int16)__ROR2__(Addr->u.Word[v15], 8));
    }
    ++v15;
    v4 += v17;
  }
  while ( v15 < v2 );
  if ( v2 < 8 )
    v4 += sprintf_s(v4, v3 - v4, ":%u.%u.%u.%u", Addr->u.Byte[12], Addr->u.Byte[13], Addr->u.Byte[14], Addr->u.Byte[15]);
  return v4;
}
