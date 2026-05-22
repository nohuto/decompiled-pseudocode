/*
 * XREFs of ?OnVoiceEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@56789@AEBUHitObjectMsg@56789@@Z @ 0x18013BD24
 * Callers:
 *     ?OnVoiceEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@45678@AEBUHitObjectMsg@45678@@Z @ 0x18013BCA0 (-OnVoiceEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@I.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180031F48 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180031FC8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::OnVoiceEvent(
        BamoImpl::BamoMPCInputObjectProxyImpl *this,
        const struct MPCTraceInfo *a2,
        const enum Windows::UI::Input::Spatial::Internal::PhrasePriv *a3,
        const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *a4,
        const struct Windows::UI::Input::Spatial::Internal::HitObjectMsg *a5)
{
  char *v6; // rbx
  __int64 v7; // r9
  __int64 v11; // r9
  int v13; // eax
  unsigned int v14; // r14d
  struct IMessageCallSendHost *v15; // rcx
  __int64 v16; // rdx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  char *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  unsigned int v33[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct IMessageCallSendHost *v34; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v35[3]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v36; // [rsp+80h] [rbp-80h]
  __int128 v37; // [rsp+90h] [rbp-70h]
  __int128 v38; // [rsp+A0h] [rbp-60h]
  char v39; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]
  unsigned int v41; // [rsp+250h] [rbp+150h] BYREF

  v6 = 0LL;
  v7 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v7 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xDFD4,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v7);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v11 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v11 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDFDD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v13 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v34, &v41, v33);
    v14 = v13;
    if ( v13 >= 0 )
    {
      v15 = v34;
      if ( *((_BYTE *)this + 31) )
      {
        if ( v34 )
          v6 = (char *)v34 - 16;
        v6[72] = 1;
      }
      v16 = 2LL;
      v17 = *((_OWORD *)a5 + 1);
      v36 = *(_OWORD *)a5;
      v18 = *((_OWORD *)a5 + 2);
      v19 = &v39;
      v37 = v17;
      v38 = v18;
      do
      {
        v20 = *((_OWORD *)a4 + 1);
        *(_OWORD *)v19 = *(_OWORD *)a4;
        v21 = *((_OWORD *)a4 + 2);
        *((_OWORD *)v19 + 1) = v20;
        v22 = *((_OWORD *)a4 + 3);
        *((_OWORD *)v19 + 2) = v21;
        v23 = *((_OWORD *)a4 + 4);
        *((_OWORD *)v19 + 3) = v22;
        v24 = *((_OWORD *)a4 + 5);
        *((_OWORD *)v19 + 4) = v23;
        v25 = *((_OWORD *)a4 + 6);
        *((_OWORD *)v19 + 5) = v24;
        v26 = *((_OWORD *)a4 + 7);
        a4 = (const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *)((char *)a4 + 128);
        *((_OWORD *)v19 + 6) = v25;
        v19 += 128;
        *((_OWORD *)v19 - 1) = v26;
        --v16;
      }
      while ( v16 );
      v27 = *((_OWORD *)a4 + 1);
      *(_OWORD *)v19 = *(_OWORD *)a4;
      v28 = *((_OWORD *)a4 + 2);
      *((_OWORD *)v19 + 1) = v27;
      v29 = *((_OWORD *)a4 + 3);
      *((_OWORD *)v19 + 2) = v28;
      v30 = *((_OWORD *)a4 + 4);
      *((_OWORD *)v19 + 3) = v29;
      v31 = *((_OWORD *)a4 + 5);
      *((_OWORD *)v19 + 4) = v30;
      v32 = *((_OWORD *)a4 + 6);
      *((_OWORD *)v19 + 5) = v31;
      *((_OWORD *)v19 + 6) = v32;
      v33[2] = *(_DWORD *)a3;
      LODWORD(v34) = *(_DWORD *)a2;
      v35[0] = v41;
      v35[1] = v33[0];
      return CoreUICallSend(v15, v35, 2LL, 62LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDFE4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v13);
      return v14;
    }
  }
}
