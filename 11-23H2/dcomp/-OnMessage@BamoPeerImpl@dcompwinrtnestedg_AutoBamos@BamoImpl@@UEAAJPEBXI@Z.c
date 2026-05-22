/*
 * XREFs of ?OnMessage@BamoPeerImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@UEAAJPEBXI@Z @ 0x18016D430
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18016EC24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::dcompwinrtnestedg_AutoBamos::BamoPeerImpl::OnMessage(
        BamoImpl::dcompwinrtnestedg_AutoBamos::BamoPeerImpl *this,
        const void *a2,
        int a3)
{
  int v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = CoreUICallReceive(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 80LL),
         &IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive<BamoImpl::dcompwinrtnestedg_AutoBamos::BamoPeerImpl>::Type,
         &Microsoft::CoreUI::MessageCall::dcompwinrtnestedg_g_parameters_sdevGguFXwOtP5_Hldukq$D2_sg_BamoGroup$e6b704d7,
         41LL,
         this,
         a2,
         a3);
  v7 = v4;
  if ( v4 == -2018375668 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL),
      v5,
      v6);
  }
  else if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      5261LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\objfre\\amd64\\dcompwinrtnestedg.bamo.h",
      (const char *)(unsigned int)v4,
      v9);
  }
  return v7;
}
