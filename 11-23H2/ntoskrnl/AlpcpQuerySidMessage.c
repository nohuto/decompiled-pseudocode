/*
 * XREFs of AlpcpQuerySidMessage @ 0x140714D4C
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x14071AC10 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140714DFC (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpQuerySidToken @ 0x140714EB8 (AlpcpQuerySidToken.c)
 *     SeDeleteClientSecurity @ 0x14071D380 (SeDeleteClientSecurity.c)
 */

__int64 __fastcall AlpcpQuerySidMessage(int a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  unsigned int SidToken; // ebx
  _BYTE v11[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v13[80]; // [rsp+40h] [rbp-58h] BYREF

  memset(v13, 0, 0x44uLL);
  v12 = 0LL;
  v11[0] = 0;
  result = AlpcpGetEffectiveTokenMessage(a1, a2, (unsigned int)&v12, (unsigned int)v13, (__int64)v11);
  if ( (int)result >= 0 )
  {
    SidToken = AlpcpQuerySidToken(v12, a3, a4, a5);
    if ( v11[0] )
      SeDeleteClientSecurity(v13);
    return SidToken;
  }
  return result;
}
