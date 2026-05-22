/*
 * XREFs of ?OnVoiceEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@56789@AEBUHitObjectMsg@56789@@Z @ 0x180113054
 * Callers:
 *     ?OnVoiceEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@45678@AEBUHitObjectMsg@45678@@Z @ 0x180112FD0 (-OnVoiceEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@I.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::OnVoiceEvent(
        BamoImpl::BamoMPCInputObjectProxyImpl *this,
        const struct MPCTraceInfo *a2,
        const enum Windows::UI::Input::Spatial::Internal::PhrasePriv *a3,
        const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *a4,
        const struct Windows::UI::Input::Spatial::Internal::HitObjectMsg *a5)
{
  char *v5; // rdi
  const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *v6; // rbx
  int v11; // eax
  unsigned int v12; // r14d
  struct IMessageCallSendHost *v13; // rcx
  __int64 v14; // rdx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  char *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  unsigned int v31[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct IMessageCallSendHost *v32; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v33[3]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v34; // [rsp+80h] [rbp-80h]
  __int128 v35; // [rsp+90h] [rbp-70h]
  __int128 v36; // [rsp+A0h] [rbp-60h]
  char v37; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]
  unsigned int v39; // [rsp+250h] [rbp+150h] BYREF

  v5 = 0LL;
  v6 = a4;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      42899LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA797,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v32, &v39, v31);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v13 = v32;
      if ( *((_BYTE *)this + 31) )
      {
        if ( v32 )
          v5 = (char *)v32 - 16;
        v5[72] = 1;
      }
      v14 = 2LL;
      v15 = *((_OWORD *)a5 + 1);
      v34 = *(_OWORD *)a5;
      v16 = *((_OWORD *)a5 + 2);
      v17 = &v37;
      v35 = v15;
      v36 = v16;
      do
      {
        v18 = *((_OWORD *)v6 + 1);
        *(_OWORD *)v17 = *(_OWORD *)v6;
        v19 = *((_OWORD *)v6 + 2);
        *((_OWORD *)v17 + 1) = v18;
        v20 = *((_OWORD *)v6 + 3);
        *((_OWORD *)v17 + 2) = v19;
        v21 = *((_OWORD *)v6 + 4);
        *((_OWORD *)v17 + 3) = v20;
        v22 = *((_OWORD *)v6 + 5);
        *((_OWORD *)v17 + 4) = v21;
        v23 = *((_OWORD *)v6 + 6);
        *((_OWORD *)v17 + 5) = v22;
        v24 = *((_OWORD *)v6 + 7);
        v6 = (const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *)((char *)v6 + 128);
        *((_OWORD *)v17 + 6) = v23;
        v17 += 128;
        *((_OWORD *)v17 - 1) = v24;
        --v14;
      }
      while ( v14 );
      v25 = *((_OWORD *)v6 + 1);
      *(_OWORD *)v17 = *(_OWORD *)v6;
      v26 = *((_OWORD *)v6 + 2);
      *((_OWORD *)v17 + 1) = v25;
      v27 = *((_OWORD *)v6 + 3);
      *((_OWORD *)v17 + 2) = v26;
      v28 = *((_OWORD *)v6 + 4);
      *((_OWORD *)v17 + 3) = v27;
      v29 = *((_OWORD *)v6 + 5);
      *((_OWORD *)v17 + 4) = v28;
      v30 = *((_OWORD *)v6 + 6);
      *((_OWORD *)v17 + 5) = v29;
      *((_OWORD *)v17 + 6) = v30;
      v31[2] = *(_DWORD *)a3;
      LODWORD(v32) = *(_DWORD *)a2;
      v33[0] = v39;
      v33[1] = v31[0];
      return CoreUICallSend(v13, v33, 2LL, 60LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA79E,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v11);
      return v12;
    }
  }
}
