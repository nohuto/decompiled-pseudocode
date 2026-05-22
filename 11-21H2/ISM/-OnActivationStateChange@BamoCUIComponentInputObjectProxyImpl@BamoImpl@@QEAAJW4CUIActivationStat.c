/*
 * XREFs of ?OnActivationStateChange@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@QEAAJW4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x18012683C
 * Callers:
 *     ?OnActivationStateChange@BamoCUIComponentInputObjectProxy@@UEAAJW4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x1801267D0 (-OnActivationStateChange@BamoCUIComponentInputObjectProxy@@UEAAJW4CUIActivationState@Input@Inter.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoCUIComponentInputObjectProxyImpl::OnActivationStateChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char *v4; // rbx
  int v7; // eax
  unsigned int v8; // esi
  struct IMessageCallSendHost *v9; // rcx
  struct IMessageCallSendHost *v10[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      4703LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1263,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v10,
           &v12,
           &v13);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = v10[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v10[0] )
          v4 = (char *)v10[0] - 16;
        v4[72] = 1;
      }
      v10[0] = (struct IMessageCallSendHost *)v12;
      v10[1] = (struct IMessageCallSendHost *)v13;
      return CoreUICallSend(v9, v10, 2LL, 10LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x126A,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
}
