/*
 * XREFs of ?DragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@7@2W4DragProcessorType@@@Z @ 0x180108FBC
 * Callers:
 *     ?DragStarted@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@6@2W4DragProcessorType@@@Z @ 0x180108EE0 (-DragStarted@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModi.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDragManagerClientProxyImpl::DragStarted(
        __int64 a1,
        __int64 a2,
        struct IMessageCallSendHost **a3,
        const char *a4,
        struct IMessageCallSendHost **a5,
        struct IMessageCallSendHost **a6)
{
  int v10; // eax
  unsigned int v11; // edi
  struct IMessageCallSendHost *v12; // r10
  char *v13; // rax
  struct IMessageCallSendHost *v14; // rcx
  unsigned int v15; // [rsp+90h] [rbp-39h] BYREF
  struct IMessageCallSendHost *v16[4]; // [rsp+98h] [rbp-31h] BYREF
  _QWORD v17[3]; // [rsp+B8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+2Fh]
  unsigned int v19; // [rsp+100h] [rbp+37h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      16602LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40DE,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v10 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            v16,
            &v19,
            &v15);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = v16[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        v13 = (char *)v16[0] - 16;
        if ( !v16[0] )
          v13 = 0LL;
        v13[72] = 1;
      }
      v16[0] = *a6;
      v14 = *a5;
      v16[2] = *(struct IMessageCallSendHost **)a4;
      v16[3] = *a3;
      v17[0] = v19;
      v17[1] = v15;
      v16[1] = v14;
      return CoreUICallSend(v12, v17, 2LL, 29LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40E5,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
}
