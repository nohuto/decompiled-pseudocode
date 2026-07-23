/*
 * XREFs of RtlpQueryLowBoxId @ 0x140297DA8
 * Callers:
 *     RtlpLookupLowBox @ 0x140297944 (RtlpLookupLowBox.c)
 *     RtlpLookupOrCreateLowBox @ 0x140297C28 (RtlpLookupOrCreateLowBox.c)
 *     RtlpAllocateAtomTableEntry @ 0x1402F87B8 (RtlpAllocateAtomTableEntry.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140232A90 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140297F10 (ObFastDereferenceObject.c)
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
 *     PsReferenceEffectiveToken @ 0x14071D8EC (PsReferenceEffectiveToken.c)
 */

__int64 RtlpQueryLowBoxId()
{
  __int64 v0; // rax
  int v1; // edi
  void *v2; // rbx
  void *v4; // rdi
  PVOID TokenInformation; // [rsp+30h] [rbp-18h] BYREF
  char v6; // [rsp+70h] [rbp+28h] BYREF
  int v7; // [rsp+78h] [rbp+30h] BYREF
  int v8; // [rsp+80h] [rbp+38h] BYREF
  PVOID v9; // [rsp+88h] [rbp+40h] BYREF

  LODWORD(v9) = 0;
  v7 = 0;
  v8 = 0;
  v0 = PsReferenceEffectiveToken(
         (unsigned int)KeGetCurrentThread(),
         1836020801,
         (unsigned int)&v7,
         (unsigned int)&v6,
         (__int64)&v8,
         0LL);
  v1 = v7;
  v2 = (void *)v0;
  if ( v7 == 2 && v8 < 2 )
  {
    v4 = (void *)PsReferencePrimaryTokenWithTag((__int64)KeGetCurrentThread()->ApcState.Process, 0x6D6F7441u);
    SeQueryInformationToken(v4, TokenIsAppContainer, &v9);
    if ( (_DWORD)v9 == 1 )
    {
      if ( v2 )
        ObfDereferenceObjectWithTag(v2, 0x6D6F7441u);
      v2 = v4;
      v1 = 1;
    }
    else
    {
      ObfDereferenceObjectWithTag(v4, 0x6D6F7441u);
      v1 = v7;
    }
  }
  LODWORD(TokenInformation) = 0;
  SeQueryInformationToken(v2, TokenAppContainerNumber, &TokenInformation);
  if ( v1 == 1 )
  {
    ObFastDereferenceObject(&KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5], v2, 1836020801LL);
  }
  else if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x6D6F7441u);
  }
  return (unsigned int)TokenInformation;
}
