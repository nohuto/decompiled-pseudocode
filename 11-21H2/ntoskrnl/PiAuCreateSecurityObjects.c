/*
 * XREFs of PiAuCreateSecurityObjects @ 0x140B22134
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     PiAuFreeUserSids @ 0x140B22190 (PiAuFreeUserSids.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B22228 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140B223B4 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B225D8 (PiAuCreateStandardSecurityObject.c)
 */

__int64 PiAuCreateSecurityObjects()
{
  int UserSids; // ebx
  _BYTE v2[72]; // [rsp+20h] [rbp-48h] BYREF

  memset(v2, 0, 0x40uLL);
  UserSids = PiAuCreateUserSids(v2);
  if ( UserSids >= 0 )
  {
    UserSids = PiAuCreateStandardSecurityObject(v2);
    if ( UserSids >= 0 )
      UserSids = PiAuCreateLocalSystemSecurityObject(v2);
  }
  PiAuFreeUserSids(v2);
  return (unsigned int)UserSids;
}
