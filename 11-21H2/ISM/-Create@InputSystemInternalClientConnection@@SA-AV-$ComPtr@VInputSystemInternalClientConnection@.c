/*
 * XREFs of ?Create@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18012077C
 * Callers:
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x1801208EC (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180087D3C (-InternalRelease@-$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalClientConnection@@@Z @ 0x18012057C (--$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 */

// Hidden C++ exception states: #wind=1
Microsoft::Bamo::BaseBamoConnection **__fastcall InputSystemInternalClientConnection::Create(
        Microsoft::Bamo::BaseBamoConnection **a1,
        __int64 *a2)
{
  __int64 v4; // r8
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<AnimationDataProviderConnection>::InternalRelease(a1);
  DWORD2(v7) = 1;
  *(_QWORD *)&v7 = 0LL;
  v5 = Microsoft::Bamo::BaseBamoConnection::CreateClient<InputSystemInternalClientConnection>(a2, &v7, v4, a1);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\system\\inputsysteminternalclientconnection.cpp",
      (const char *)(unsigned int)v5,
      1);
  return a1;
}
