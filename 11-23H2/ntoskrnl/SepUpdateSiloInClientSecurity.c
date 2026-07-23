/*
 * XREFs of SepUpdateSiloInClientSecurity @ 0x1409CF158
 * Callers:
 *     SeCreateClientSecurityEx @ 0x14071D3B0 (SeCreateClientSecurityEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x1402AFB90 (PsIsHostSilo.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 *     SeQueryServerSiloToken @ 0x1407DECB0 (SeQueryServerSiloToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409C9710 (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x1409CF3F0 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepUpdateSiloInClientSecurity(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v5; // rbx
  int v6; // esi
  PVOID v7; // rbp
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  PVOID v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  v2 = *(_QWORD **)(a1 + 16);
  v9 = 0LL;
  v10 = 0LL;
  v5 = v2[3];
  v11 = v5;
  v6 = SeQueryServerSiloToken((__int64)v2, &v9);
  if ( v6 >= 0 && PsIsHostSilo(v9) && (_DWORD)v5 == 999 && !HIDWORD(v11) )
  {
    v6 = SepCopyClientTokenAndSetSilo((int)v2, *(_DWORD *)(a1 + 4), a2, &v10);
    if ( v6 >= 0 )
    {
      v7 = v10;
      if ( ObpTraceFlags )
      {
        ObpPushStackInfo((__int64)v10 - 48, 0, 1u, 0x746C6644u);
        ObpPushStackInfo((__int64)v7 - 48, 1, 1u, 0x63436553u);
      }
      *(_QWORD *)(a1 + 16) = v7;
      *(_BYTE *)(a1 + 24) = 0;
      ObfDereferenceObjectWithTag(v2, 0x63436553u);
      SeGetTokenControlInformation(v7, a1 + 28);
    }
  }
  return (unsigned int)v6;
}
