/*
 * XREFs of ?OnHandEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@56789@AEBUHitObjectMsg@56789@@Z @ 0x180139224
 * Callers:
 *     ?OnHandEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@45678@AEBUHitObjectMsg@45678@@Z @ 0x1801391A0 (-OnHandEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@In.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180031F48 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180031FC8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::OnHandEvent(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        _OWORD *a4,
        __int128 *a5)
{
  __int64 v6; // r9
  __int64 v9; // r9
  int v11; // eax
  unsigned int v12; // esi
  struct IMessageCallSendHost *v13; // r10
  char *v14; // rax
  char *v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  unsigned int v32; // [rsp+50h] [rbp-B0h] BYREF
  struct IMessageCallSendHost *v33; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+70h] [rbp-90h]
  __int128 v36; // [rsp+80h] [rbp-80h]
  __int128 v37; // [rsp+90h] [rbp-70h]
  char v38; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5B8h] [rbp+4B8h]
  unsigned int v40; // [rsp+5C0h] [rbp+4C0h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v6 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xDFA9,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v6);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v9 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v9 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDFB2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            &v33,
            &v40,
            &v32);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v13 = v33;
      if ( *(_BYTE *)(a1 + 31) )
      {
        v14 = (char *)v33 - 16;
        if ( !v33 )
          v14 = 0LL;
        v14[72] = 1;
      }
      v15 = &v38;
      v16 = a5[1];
      v35 = *a5;
      v17 = a5[2];
      v18 = 9LL;
      v36 = v16;
      v37 = v17;
      do
      {
        v19 = a4[1];
        *(_OWORD *)v15 = *a4;
        v20 = a4[2];
        *((_OWORD *)v15 + 1) = v19;
        v21 = a4[3];
        *((_OWORD *)v15 + 2) = v20;
        v22 = a4[4];
        *((_OWORD *)v15 + 3) = v21;
        v23 = a4[5];
        *((_OWORD *)v15 + 4) = v22;
        v24 = a4[6];
        *((_OWORD *)v15 + 5) = v23;
        v25 = a4[7];
        a4 += 8;
        *((_OWORD *)v15 + 6) = v24;
        v15 += 128;
        *((_OWORD *)v15 - 1) = v25;
        --v18;
      }
      while ( v18 );
      v26 = *((_QWORD *)a4 + 12);
      v27 = a4[1];
      *(_OWORD *)v15 = *a4;
      v28 = a4[2];
      *((_OWORD *)v15 + 1) = v27;
      v29 = a4[3];
      *((_OWORD *)v15 + 2) = v28;
      v30 = a4[4];
      *((_OWORD *)v15 + 3) = v29;
      v31 = a4[5];
      *((_OWORD *)v15 + 4) = v30;
      *((_OWORD *)v15 + 5) = v31;
      *((_QWORD *)v15 + 12) = v26;
      LODWORD(v33) = *a2;
      v34[0] = v40;
      v34[1] = v32;
      return CoreUICallSend(v13, v34, 2LL, 62LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDFB9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v11);
      return v12;
    }
  }
}
