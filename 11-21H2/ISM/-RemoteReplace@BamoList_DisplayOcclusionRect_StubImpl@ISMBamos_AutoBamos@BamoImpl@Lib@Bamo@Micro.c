/*
 * XREFs of ?RemoteReplace@BamoList_DisplayOcclusionRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x180135CFC
 * Callers:
 *     ?CallRemoteReplaceOnStub@BamoList_DisplayOcclusionRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IAEBUDisplayOcclusionRect@@@Z @ 0x180133068 (-CallRemoteReplaceOnStub@BamoList_DisplayOcclusionRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl.c)
 *     ?RemoteReplace@BamoList_DisplayOcclusionRect_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x180135C90 (-RemoteReplace@BamoList_DisplayOcclusionRect_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIA.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003EED8 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_StubImpl::RemoteReplace(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_StubImpl *this,
        __int64 a2,
        const struct DisplayOcclusionRect *a3,
        const char *a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  struct IMessageCallSendHost *v17; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v19; // [rsp+60h] [rbp-B8h]
  __int128 v20; // [rsp+70h] [rbp-A8h]
  __int128 v21; // [rsp+80h] [rbp-98h]
  __int128 v22; // [rsp+90h] [rbp-88h]
  __int128 v23; // [rsp+A0h] [rbp-78h]
  __int128 v24; // [rsp+B0h] [rbp-68h]
  __int128 v25; // [rsp+C0h] [rbp-58h]
  __int128 v26; // [rsp+D0h] [rbp-48h]
  __int128 v27; // [rsp+E0h] [rbp-38h]
  __int128 v28; // [rsp+F0h] [rbp-28h]
  __int128 v29; // [rsp+100h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]
  unsigned int v31; // [rsp+120h] [rbp+8h] BYREF
  unsigned int v32; // [rsp+138h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 5) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      63484LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( !*((_BYTE *)this + 32) )
  {
    v5 = -2018375660;
    v6 = 63488LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v17, &v31, &v32);
  if ( v5 < 0 )
  {
    v6 = 63495LL;
    goto LABEL_5;
  }
  v8 = *((_OWORD *)a3 + 1);
  v19 = *(_OWORD *)a3;
  v9 = *((_OWORD *)a3 + 2);
  v20 = v8;
  v10 = *((_OWORD *)a3 + 3);
  v21 = v9;
  v11 = *((_OWORD *)a3 + 4);
  v22 = v10;
  v12 = *((_OWORD *)a3 + 5);
  v23 = v11;
  v13 = *((_OWORD *)a3 + 6);
  v24 = v12;
  v14 = *((_OWORD *)a3 + 8);
  v25 = v13;
  v26 = *((_OWORD *)a3 + 7);
  v15 = *((_OWORD *)a3 + 9);
  v27 = v14;
  v16 = *((_OWORD *)a3 + 10);
  v28 = v15;
  v29 = v16;
  v18[0] = v31;
  v18[1] = v32;
  return CoreUICallSend(v17, v18, 2LL, 96LL);
}
