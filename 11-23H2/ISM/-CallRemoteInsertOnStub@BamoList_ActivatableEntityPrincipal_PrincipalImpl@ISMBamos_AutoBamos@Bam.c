/*
 * XREFs of ?CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180006240
 * Callers:
 *     ?BroadcastRemoteInsert@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180015640 (-BroadcastRemoteInsert@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo.c)
 * Callees:
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x180007400 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1800A1C60 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::CallRemoteInsertOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        __int64 a2,
        struct BamoActivatableEntityPrincipal *a3)
{
  Microsoft::BamoImpl::BamoPrincipalImpl *v4; // rax
  __int64 v5; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v6; // rcx
  char *v7; // rsi
  __int64 v8; // r8
  unsigned int *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // rcx
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // [rsp+20h] [rbp-48h]
  int v21; // [rsp+20h] [rbp-48h]
  _QWORD v22[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
  {
    if ( !*((_BYTE *)a1 + 56) )
    {
      v15 = *((_QWORD *)a1 + 3);
      v13 = -2018375660;
      if ( v15 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v15 + 16) + 32LL),
          -2018375660,
          0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30C0,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)0x87B20814LL,
        v20);
LABEL_24:
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3012,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v13,
        v20);
    }
    if ( a3 )
    {
      v4 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoActivatableEntityPrincipal *))(*(_QWORD *)a3 + 32LL))(a3);
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v4,
        *((struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1 + 4));
    }
    v5 = *((_QWORD *)a1 + 4);
    v6 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v5 + 24) + 32LL);
    if ( *((_BYTE *)a1 + 56) && *((_QWORD *)v6 + 8) )
    {
      if ( *(_BYTE *)(v5 + 48) )
      {
        v16 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v6);
        if ( v16 )
          v7 = (char *)v16 + 16;
        else
          v7 = 0LL;
      }
      else
      {
        v7 = (char *)*((_QWORD *)v6 + 9);
      }
      v8 = *((_QWORD *)a1 + 3);
      v9 = (unsigned int *)(v8 + 24);
      v10 = *(unsigned int *)(*((_QWORD *)a1 + 4) + 36LL);
      if ( !*(_DWORD *)(v8 + 24) && *(int *)(v8 + 8) > 0 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 32LL);
        v18 = *(_QWORD *)(v17 + 64);
        if ( v18 )
        {
          v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v18 + 24LL))(
                  v18,
                  *(unsigned int *)(v17 + 28),
                  v8,
                  v8 + 24);
          if ( v19 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x423,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v19,
              v20);
        }
      }
      v11 = *v9;
      ++*((_DWORD *)a1 + 4);
      v22[1] = v11;
      *((_BYTE *)a1 + 60) = 1;
      v22[0] = v10;
      LOWORD(v20) = 0;
      v12 = CoreUICallSend(v7, v22, 2LL, 99LL);
      v13 = v12;
      if ( v12 < 0 && v12 != -2018375675 )
        goto LABEL_24;
    }
    else
    {
      if ( v6 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v6, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v20);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30C8,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)0x87B20805LL,
        v21);
    }
  }
  return 0LL;
}
