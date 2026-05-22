/*
 * XREFs of ?OnHandEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@56789@AEBUHitObjectMsg@56789@@Z @ 0x1801106C4
 * Callers:
 *     ?OnHandEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@45678@AEBUHitObjectMsg@45678@@Z @ 0x180110640 (-OnHandEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@In.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::OnHandEvent(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        const char *a4,
        __int128 *a5)
{
  const char *v5; // rbx
  int v9; // eax
  unsigned int v10; // esi
  struct IMessageCallSendHost *v11; // r10
  char *v12; // rax
  char *v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  unsigned int v30; // [rsp+50h] [rbp-B0h] BYREF
  struct IMessageCallSendHost *v31; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v32[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+70h] [rbp-90h]
  __int128 v34; // [rsp+80h] [rbp-80h]
  __int128 v35; // [rsp+90h] [rbp-70h]
  char v36; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5B8h] [rbp+4B8h]
  unsigned int v38; // [rsp+5C0h] [rbp+4C0h] BYREF

  v5 = a4;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      42861LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA771,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           &v31,
           &v38,
           &v30);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = v31;
      if ( *(_BYTE *)(a1 + 31) )
      {
        v12 = (char *)v31 - 16;
        if ( !v31 )
          v12 = 0LL;
        v12[72] = 1;
      }
      v13 = &v36;
      v14 = a5[1];
      v33 = *a5;
      v15 = a5[2];
      v16 = 9LL;
      v34 = v14;
      v35 = v15;
      do
      {
        v17 = *((_OWORD *)v5 + 1);
        *(_OWORD *)v13 = *(_OWORD *)v5;
        v18 = *((_OWORD *)v5 + 2);
        *((_OWORD *)v13 + 1) = v17;
        v19 = *((_OWORD *)v5 + 3);
        *((_OWORD *)v13 + 2) = v18;
        v20 = *((_OWORD *)v5 + 4);
        *((_OWORD *)v13 + 3) = v19;
        v21 = *((_OWORD *)v5 + 5);
        *((_OWORD *)v13 + 4) = v20;
        v22 = *((_OWORD *)v5 + 6);
        *((_OWORD *)v13 + 5) = v21;
        v23 = *((_OWORD *)v5 + 7);
        v5 += 128;
        *((_OWORD *)v13 + 6) = v22;
        v13 += 128;
        *((_OWORD *)v13 - 1) = v23;
        --v16;
      }
      while ( v16 );
      v24 = *((_QWORD *)v5 + 12);
      v25 = *((_OWORD *)v5 + 1);
      *(_OWORD *)v13 = *(_OWORD *)v5;
      v26 = *((_OWORD *)v5 + 2);
      *((_OWORD *)v13 + 1) = v25;
      v27 = *((_OWORD *)v5 + 3);
      *((_OWORD *)v13 + 2) = v26;
      v28 = *((_OWORD *)v5 + 4);
      *((_OWORD *)v13 + 3) = v27;
      v29 = *((_OWORD *)v5 + 5);
      *((_OWORD *)v13 + 4) = v28;
      *((_OWORD *)v13 + 5) = v29;
      *((_QWORD *)v13 + 12) = v24;
      LODWORD(v31) = *a2;
      v32[0] = v38;
      v32[1] = v30;
      return CoreUICallSend(v11, v32, 2LL, 60LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA778,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
}
