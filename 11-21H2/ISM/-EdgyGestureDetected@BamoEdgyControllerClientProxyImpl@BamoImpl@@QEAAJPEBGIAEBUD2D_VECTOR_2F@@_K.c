/*
 * XREFs of ?EdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x18014C2F8
 * Callers:
 *     ?EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x18014C240 (-EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoEdgyControllerClientProxyImpl::EdgyGestureDetected(
        BamoImpl::BamoEdgyControllerClientProxyImpl *this,
        const unsigned __int16 *a2,
        __int64 a3,
        const struct D2D_VECTOR_2F *a4,
        unsigned __int64 a5,
        const struct D2D_VECTOR_2F *a6)
{
  int v9; // eax
  unsigned int v10; // edi
  struct IMessageCallSendHost *v11; // rcx
  char *v12; // rax
  struct IMessageCallSendHost *v13; // xmm0_8
  unsigned int v14; // [rsp+70h] [rbp-21h] BYREF
  struct IMessageCallSendHost *v15[2]; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v16[3]; // [rsp+88h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+37h]
  unsigned int v18; // [rsp+D0h] [rbp+3Fh] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      20570LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x505E,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v15, &v18, &v14);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = v15[0];
      if ( *((_BYTE *)this + 31) )
      {
        v12 = (char *)v15[0] - 16;
        if ( !v15[0] )
          v12 = 0LL;
        v12[72] = 1;
      }
      v15[1] = (struct IMessageCallSendHost *)*a4;
      v13 = (struct IMessageCallSendHost *)*a6;
      v16[0] = v18;
      v16[1] = v14;
      v15[0] = v13;
      return CoreUICallSend(v11, v16, 2LL, 34LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5065,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
}
