/*
 * XREFs of CmInitBootFeatureConfigurations @ 0x140B3886C
 * Callers:
 *     KiInitializeBootStructures @ 0x140A8B590 (KiInitializeBootStructures.c)
 * Callees:
 *     CmFcManagerInitialize @ 0x140B385A8 (CmFcManagerInitialize.c)
 *     CmFcManagerStartBootPhase @ 0x140B3879C (CmFcManagerStartBootPhase.c)
 *     wil_InitializeFeatureStagingFromBuffers @ 0x140B388EC (wil_InitializeFeatureStagingFromBuffers.c)
 */

char __fastcall CmInitBootFeatureConfigurations(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+40h] [rbp-18h]

  CmFcManagerInitialize();
  v2 = *(_QWORD *)(a1 + 240);
  v3 = *(_QWORD *)(v2 + 3872);
  v4 = (__int64 *)(v2 + 3600);
  wil_InitializeFeatureStagingFromBuffers(v2 + 3600);
  v6 = 0LL;
  if ( v3 )
  {
    LOBYTE(v5) = *(_BYTE *)(v3 + 24);
    v6 = *(_QWORD *)(v3 + 8);
  }
  else
  {
    LOBYTE(v5) = 0;
  }
  return CmFcManagerStartBootPhase(v5, *v4, v4[1], v4[2], v4[3], v4[4], v8, v6, v9, v5);
}
