/*
 * XREFs of ?OnActivate@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJW4InputActivationState@Input@UI@Windows@@@Z @ 0x180007370
 * Callers:
 *     ?OnActivate@BamoActivationListenerInputObjectProxy@@UEAAJW4InputActivationState@Input@UI@Windows@@@Z @ 0x180007240 (-OnActivate@BamoActivationListenerInputObjectProxy@@UEAAJW4InputActivationState@Input@UI@Windows.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z @ 0x1800B32E4 (--0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoActivationListenerInputObjectProxyImpl::OnActivate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // r8
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v13; // rbp
  __int64 v14; // r10
  __int64 v15; // rax
  const char *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-48h]
  _QWORD v20[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  Microsoft::BamoImpl::BufferingMessageCallHost *v22; // [rsp+70h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v5 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2B4D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  v6 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v5 + 24) + 32LL);
  if ( *(_BYTE *)(a1 + 29) || !*((_QWORD *)v6 + 8) )
  {
    if ( v5 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v6, -2018375660, 0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B56,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL,
      v19);
    return 2276591636LL;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_QWORD *)(v8 + 24);
    if ( *(_BYTE *)(v8 + 48) )
    {
      v13 = *(_QWORD *)(v9 + 32);
      v14 = *(_QWORD *)(v13 + 88);
      if ( !v14 )
      {
        v22 = (Microsoft::BamoImpl::BufferingMessageCallHost *)operator new(0x68uLL);
        v15 = Microsoft::BamoImpl::BufferingMessageCallHost::BufferingMessageCallHost(
                v22,
                *(struct IMessageCallSendHost **)(v13 + 72));
        v17 = *(_QWORD *)(v13 + 88);
        *(_QWORD *)(v13 + 88) = v15;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        v14 = *(_QWORD *)(v13 + 88);
        if ( !v14 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x295,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v16);
        v8 = *(_QWORD *)(a1 + 16);
      }
      v10 = v14 + 16;
    }
    else
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 72LL);
    }
    v11 = *(unsigned int *)(v8 + 36);
    if ( *(_BYTE *)(a1 + 31) )
    {
      v18 = v10 + 56;
      if ( !v10 )
        v18 = 72LL;
      *(_BYTE *)v18 = 1;
    }
    v20[0] = v11;
    v20[1] = v7;
    return CoreUICallSend(v10, v20, 2LL, 4LL);
  }
}
