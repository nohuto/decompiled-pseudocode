/*
 * XREFs of ?RemoteReplace@BamoList_DisplayOcclusionRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18015E66C
 * Callers:
 *     ?CallRemoteReplaceOnStub@BamoList_DisplayOcclusionRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IAEBUDisplayOcclusionRect@@@Z @ 0x18015B924 (-CallRemoteReplaceOnStub@BamoList_DisplayOcclusionRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl.c)
 *     ?RemoteReplace@BamoList_DisplayOcclusionRect_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18015E600 (-RemoteReplace@BamoList_DisplayOcclusionRect_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIA.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180008434 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_StubImpl::RemoteReplace(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_StubImpl *this,
        __int64 a2,
        const struct DisplayOcclusionRect *a3,
        const char *a4)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  struct IMessageCallSendHost *v18; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+60h] [rbp-B8h]
  __int128 v21; // [rsp+70h] [rbp-A8h]
  __int128 v22; // [rsp+80h] [rbp-98h]
  __int128 v23; // [rsp+90h] [rbp-88h]
  __int128 v24; // [rsp+A0h] [rbp-78h]
  __int128 v25; // [rsp+B0h] [rbp-68h]
  __int128 v26; // [rsp+C0h] [rbp-58h]
  __int128 v27; // [rsp+D0h] [rbp-48h]
  __int128 v28; // [rsp+E0h] [rbp-38h]
  __int128 v29; // [rsp+F0h] [rbp-28h]
  __int128 v30; // [rsp+100h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]
  unsigned int v32; // [rsp+120h] [rbp+8h] BYREF
  unsigned int v33; // [rsp+138h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x391E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( !*((_BYTE *)this + 56) )
  {
    v5 = *((_QWORD *)this + 3);
    v6 = -2018375660;
    if ( v5 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v5 + 16) + 32LL),
        0x87B20814,
        0);
    v7 = 14631LL;
    goto LABEL_7;
  }
  v6 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v18, &v32, &v33);
  if ( v6 < 0 )
  {
    v7 = 14638LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *((_OWORD *)a3 + 1);
  v20 = *(_OWORD *)a3;
  v10 = *((_OWORD *)a3 + 2);
  v21 = v9;
  v11 = *((_OWORD *)a3 + 3);
  v22 = v10;
  v12 = *((_OWORD *)a3 + 4);
  v23 = v11;
  v13 = *((_OWORD *)a3 + 5);
  v24 = v12;
  v14 = *((_OWORD *)a3 + 6);
  v25 = v13;
  v15 = *((_OWORD *)a3 + 8);
  v26 = v14;
  v27 = *((_OWORD *)a3 + 7);
  v16 = *((_OWORD *)a3 + 9);
  v28 = v15;
  v17 = *((_OWORD *)a3 + 10);
  v29 = v16;
  v30 = v17;
  v19[0] = v32;
  v19[1] = v33;
  return CoreUICallSend(v18, v19, 2LL, 100LL);
}
