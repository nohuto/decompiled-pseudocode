/*
 * XREFs of ?UpdatePenDeviceManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001B8A8
 * Callers:
 *     ?SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001CB40 (-SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAV.c)
 *     ?PushStateToProxy@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180120FC8 (-PushStateToProxy@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z.c)
 *     ?UpdatePenDeviceManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012235C (-UpdatePenDeviceManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x18008AB08 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x18008DEE8 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenDeviceManagerRemoteCache(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  struct Microsoft::Bamo::BamoPrincipal *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  char *v7; // rdi
  __int64 v8; // r8
  unsigned int v9; // ebp
  unsigned int *v10; // rsi
  unsigned int v11; // ecx
  unsigned int v12; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // [rsp+20h] [rbp-48h]
  _QWORD v18[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char *v20; // [rsp+70h] [rbp+8h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v3 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 14);
    if ( v3 )
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v3,
        *(struct Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 5) + 16LL));
    if ( *((_BYTE *)a2 + 32)
      && (v4 = *((_QWORD *)a2 + 5), v5 = *(_QWORD *)(v4 + 24), v6 = *(_QWORD *)(v5 + 32), *(_QWORD *)(v6 + 64)) )
    {
      if ( *(_BYTE *)(v4 + 48) )
      {
        v13 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v5 + 32));
        if ( v13 )
          v7 = (char *)v13 + 16;
        else
          v7 = 0LL;
        v4 = *((_QWORD *)a2 + 5);
      }
      else
      {
        v7 = *(char **)(v6 + 72);
      }
      v8 = *((_QWORD *)a2 + 3);
      v9 = *(_DWORD *)(v4 + 36);
      v10 = (unsigned int *)(v8 + 24);
      if ( !*(_DWORD *)(v8 + 24) && *(int *)(v8 + 8) > 0 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 32LL);
        v15 = *(_QWORD *)(v14 + 64);
        if ( v15 )
        {
          v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v15 + 24LL))(
                  v15,
                  *(unsigned int *)(v14 + 28),
                  v8,
                  v8 + 24);
          if ( v16 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3FF,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v16,
              v17);
        }
      }
      v11 = *v10;
      _InterlockedIncrement((volatile signed __int32 *)a2 + 4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v17);
      v11 = (unsigned int)v20;
      v9 = (unsigned int)v20;
      v7 = v20;
    }
    v18[0] = v9;
    v18[1] = v11;
    LOWORD(v17) = 9;
    v12 = CoreUICallSend(v7, v18, 2LL, 58LL);
    if ( (int)(v12 + 0x80000000) >= 0 && v12 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9998,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v12,
        v17);
  }
}
