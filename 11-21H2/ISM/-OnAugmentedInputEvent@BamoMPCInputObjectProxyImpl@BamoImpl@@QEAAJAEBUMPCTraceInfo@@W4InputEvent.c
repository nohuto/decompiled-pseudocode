/*
 * XREFs of ?OnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@56789@_JAEBUHitObjectMsg@56789@@Z @ 0x18010E100
 * Callers:
 *     ?OnAugmentedInputEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@45678@_JAEBUHitObjectMsg@45678@@Z @ 0x18010E070 (-OnAugmentedInputEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
  int v11; // eax
  unsigned int v12; // esi
  struct IMessageCallSendHost *v13; // r10
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  __int128 *v23; // r14
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  unsigned int v31; // [rsp+60h] [rbp-A0h] BYREF
  struct IMessageCallSendHost *v32; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v33[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v34; // [rsp+80h] [rbp-80h]
  __int128 v35; // [rsp+90h] [rbp-70h]
  __int128 v36; // [rsp+A0h] [rbp-60h]
  __int128 v37; // [rsp+B0h] [rbp-50h]
  __int128 v38; // [rsp+C0h] [rbp-40h]
  __int128 v39; // [rsp+D0h] [rbp-30h]
  __int128 v40; // [rsp+E0h] [rbp-20h]
  __int128 v41; // [rsp+F0h] [rbp-10h]
  __int128 v42; // [rsp+100h] [rbp+0h]
  __int128 v43; // [rsp+110h] [rbp+10h]
  __int128 v44; // [rsp+120h] [rbp+20h]
  __int128 v45; // [rsp+130h] [rbp+30h]
  __int128 v46; // [rsp+140h] [rbp+40h]
  __int128 v47; // [rsp+150h] [rbp+50h]
  __int128 v48; // [rsp+160h] [rbp+60h]
  __int128 v49; // [rsp+170h] [rbp+70h]
  __int128 v50; // [rsp+180h] [rbp+80h]
  __int128 v51; // [rsp+190h] [rbp+90h]
  __int64 v52; // [rsp+1A0h] [rbp+A0h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]
  unsigned int v54; // [rsp+1E0h] [rbp+E0h] BYREF

  v6 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      42938LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7BE,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            &v32,
            &v54,
            &v31);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v13 = v32;
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v32 )
          v6 = (char *)v32 - 16;
        v6[72] = 1;
      }
      v14 = a6[1];
      v34 = *a6;
      v15 = a6[2];
      v35 = v14;
      v16 = a4[1];
      v36 = v15;
      v37 = *a4;
      v17 = a4[2];
      v38 = v16;
      v18 = a4[3];
      v39 = v17;
      v19 = a4[4];
      v40 = v18;
      v20 = a4[5];
      v41 = v19;
      v21 = a4[6];
      v42 = v20;
      v43 = v21;
      v22 = a4[7];
      v23 = a4 + 8;
      v44 = v22;
      v24 = *((_QWORD *)v23 + 14);
      v25 = v23[1];
      v45 = *v23;
      v26 = v23[2];
      v46 = v25;
      v27 = v23[3];
      v47 = v26;
      v28 = v23[4];
      v48 = v27;
      v29 = v23[5];
      v49 = v28;
      v30 = v23[6];
      v50 = v29;
      v51 = v30;
      v52 = v24;
      LODWORD(v32) = *a2;
      v33[0] = v54;
      v33[1] = v31;
      return CoreUICallSend(v13, v33, 2LL, 60LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA7C5,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v11);
      return v12;
    }
  }
}
