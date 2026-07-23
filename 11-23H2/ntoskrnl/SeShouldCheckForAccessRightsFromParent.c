/*
 * XREFs of SeShouldCheckForAccessRightsFromParent @ 0x1407375F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1402B3680 (RtlSidDominatesForTrust.c)
 *     SeGetTrustLabelAce @ 0x1402B5EB0 (SeGetTrustLabelAce.c)
 *     SepFilterCheck @ 0x1402B5F30 (SepFilterCheck.c)
 *     SepLocateTokenTrustLevel @ 0x140334C20 (SepLocateTokenTrustLevel.c)
 */

bool __fastcall SeShouldCheckForAccessRightsFromParent(__int64 a1, __int64 a2, __int64 a3)
{
  BOOLEAN v4; // si
  char v6; // bl
  __int64 TrustLabelAce; // rax
  _DWORD *v8; // r8
  void *v10; // r14
  void *TokenTrustLevel; // rax
  BOOLEAN DominatesTrust; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v4 = 1;
  v13 = 0LL;
  v6 = 0;
  TrustLabelAce = SeGetTrustLabelAce(a2);
  if ( TrustLabelAce )
  {
    v10 = (void *)(TrustLabelAce + 8);
    if ( TrustLabelAce != -8 )
    {
      DominatesTrust = 0;
      TokenTrustLevel = (void *)SepLocateTokenTrustLevel((__int64 *)(a3 + 32));
      RtlSidDominatesForTrust(TokenTrustLevel, v10, &DominatesTrust);
      v4 = DominatesTrust;
    }
  }
  v8 = *(_DWORD **)(a3 + 32);
  if ( !v8 )
    v8 = *(_DWORD **)(a3 + 48);
  SepFilterCheck(a2, 0LL, v8, 1, (int *)&v13);
  if ( (*(_DWORD *)(a3 + 16) & (unsigned int)v13) == *(_DWORD *)(a3 + 16) )
    v6 = 1;
  return v4 && v6;
}
