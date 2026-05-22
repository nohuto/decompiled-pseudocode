/*
 * XREFs of ?OnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@56789@_JAEBUHitObjectMsg@56789@@Z @ 0x180136DA0
 * Callers:
 *     ?OnAugmentedInputEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@45678@_JAEBUHitObjectMsg@45678@@Z @ 0x180136D10 (-OnAugmentedInputEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180031F48 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180031FC8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::OnAugmentedInputEvent(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int128 *a6)
{
  char *v6; // rbx
  __int64 v10; // r10
  int v12; // eax
  unsigned int v13; // esi
  struct IMessageCallSendHost *v14; // r10
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int128 *v24; // r14
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  unsigned int v32; // [rsp+60h] [rbp-A0h] BYREF
  struct IMessageCallSendHost *v33; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v34[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v35; // [rsp+80h] [rbp-80h]
  __int128 v36; // [rsp+90h] [rbp-70h]
  __int128 v37; // [rsp+A0h] [rbp-60h]
  __int128 v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-40h]
  __int128 v40; // [rsp+D0h] [rbp-30h]
  __int128 v41; // [rsp+E0h] [rbp-20h]
  __int128 v42; // [rsp+F0h] [rbp-10h]
  __int128 v43; // [rsp+100h] [rbp+0h]
  __int128 v44; // [rsp+110h] [rbp+10h]
  __int128 v45; // [rsp+120h] [rbp+20h]
  __int128 v46; // [rsp+130h] [rbp+30h]
  __int128 v47; // [rsp+140h] [rbp+40h]
  __int128 v48; // [rsp+150h] [rbp+50h]
  __int128 v49; // [rsp+160h] [rbp+60h]
  __int128 v50; // [rsp+170h] [rbp+70h]
  __int128 v51; // [rsp+180h] [rbp+80h]
  __int128 v52; // [rsp+190h] [rbp+90h]
  __int64 v53; // [rsp+1A0h] [rbp+A0h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]
  unsigned int v55; // [rsp+1E0h] [rbp+E0h] BYREF

  v6 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE000,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v10 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v10 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE009,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v12 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            &v33,
            &v55,
            &v32);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = v33;
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v33 )
          v6 = (char *)v33 - 16;
        v6[72] = 1;
      }
      v15 = a6[1];
      v35 = *a6;
      v16 = a6[2];
      v36 = v15;
      v17 = a4[1];
      v37 = v16;
      v38 = *a4;
      v18 = a4[2];
      v39 = v17;
      v19 = a4[3];
      v40 = v18;
      v20 = a4[4];
      v41 = v19;
      v21 = a4[5];
      v42 = v20;
      v22 = a4[6];
      v43 = v21;
      v44 = v22;
      v23 = a4[7];
      v24 = a4 + 8;
      v45 = v23;
      v25 = *((_QWORD *)v24 + 14);
      v26 = v24[1];
      v46 = *v24;
      v27 = v24[2];
      v47 = v26;
      v28 = v24[3];
      v48 = v27;
      v29 = v24[4];
      v49 = v28;
      v30 = v24[5];
      v50 = v29;
      v31 = v24[6];
      v51 = v30;
      v52 = v31;
      v53 = v25;
      LODWORD(v33) = *a2;
      v34[0] = v55;
      v34[1] = v32;
      return CoreUICallSend(v14, v34, 2LL, 62LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE010,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v12);
      return v13;
    }
  }
}
