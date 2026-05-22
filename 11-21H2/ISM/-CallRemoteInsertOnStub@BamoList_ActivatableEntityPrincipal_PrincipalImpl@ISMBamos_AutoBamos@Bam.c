/*
 * XREFs of ?CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18001EED0
 * Callers:
 *     ?BroadcastRemoteInsert@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18000B5B0 (-BroadcastRemoteInsert@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18001F8D0 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl@23@@Z @ 0x18001F9F0 (-AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z @ 0x180089B14 (--0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::CallRemoteInsertOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        __int64 a2,
        struct BamoActivatableEntityPrincipal *a3)
{
  __int64 v4; // r9
  Microsoft::BamoImpl::BamoPrincipalImpl *v5; // r14
  __int64 v6; // rdx
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rbx
  void (__fastcall *v8)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct IMessageCallSendHost *, struct Microsoft::BamoImpl::BamoStubImpl *); // rdi
  struct IMessageCallSendHost *SendHost; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // r8
  unsigned int *v17; // rbx
  __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 v21; // rax
  const char *v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // [rsp+20h] [rbp-58h]
  int v28; // [rsp+20h] [rbp-58h]
  _QWORD v29[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  Microsoft::BamoImpl::BufferingMessageCallHost *v31; // [rsp+80h] [rbp+8h]

  v4 = *((_QWORD *)a1 + 5);
  if ( *(_DWORD *)(v4 + 44) )
    return 0LL;
  if ( !*((_BYTE *)a1 + 32) )
  {
    v19 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF422,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL,
      v27);
    goto LABEL_22;
  }
  if ( a3 )
  {
    v5 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoActivatableEntityPrincipal *))(*(_QWORD *)a3 + 32LL))(a3);
    v6 = *((_QWORD *)a1 + 5);
    if ( *(_QWORD *)(v6 + 24) != *((_QWORD *)v5 + 2) )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x164,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
        (const char *)0x87B20819LL,
        v27);
    Stub = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v5 + 4);
    if ( !Stub )
      goto LABEL_9;
    do
    {
      if ( *(_DWORD *)(*((_QWORD *)Stub + 5) + 36LL) == *(_DWORD *)(v6 + 36) )
        break;
      Stub = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)Stub + 6);
    }
    while ( Stub );
    if ( !Stub )
LABEL_9:
      Stub = Microsoft::BamoImpl::BamoPrincipalImpl::AllocateStub(
               v5,
               (struct Microsoft::BamoImpl::BaseBamoPeerImpl *)v6);
    if ( !*((_BYTE *)Stub + 32) )
    {
      *((_BYTE *)Stub + 32) = 1;
      v8 = *(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct IMessageCallSendHost *, struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)v5 + 64LL);
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)Stub + 5));
      v8(v5, SendHost, Stub);
      v10 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 48LL))(Stub);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x183,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)v10,
          v27);
    }
    _InterlockedIncrement((volatile signed __int32 *)Stub + 4);
    v4 = *((_QWORD *)a1 + 5);
    v11 = v4;
    v12 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 32LL);
    v13 = v12;
    if ( !*((_BYTE *)a1 + 32) )
      goto LABEL_37;
  }
  else
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 32LL);
    v11 = *((_QWORD *)a1 + 5);
    v13 = v12;
  }
  if ( !*(_QWORD *)(v13 + 64) )
  {
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x144,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
      (const char *)0x87B20805LL,
      v27);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF42A,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20805LL,
      v28);
    return 0LL;
  }
  if ( *(_BYTE *)(v11 + 48) )
  {
    v21 = *(_QWORD *)(v12 + 88);
    if ( !v21 )
    {
      v31 = (Microsoft::BamoImpl::BufferingMessageCallHost *)operator new(0x68uLL);
      v21 = Microsoft::BamoImpl::BufferingMessageCallHost::BufferingMessageCallHost(
              v31,
              *(struct IMessageCallSendHost **)(v12 + 72));
      v23 = *(_QWORD *)(v12 + 88);
      *(_QWORD *)(v12 + 88) = v21;
      if ( v23 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        v21 = *(_QWORD *)(v12 + 88);
      }
      if ( !v21 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x27D,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          v22);
      v4 = *((_QWORD *)a1 + 5);
    }
    v14 = v21 + 16;
  }
  else
  {
    v14 = *(_QWORD *)(v12 + 72);
  }
  v15 = *(unsigned int *)(v4 + 36);
  v16 = *((_QWORD *)a1 + 3);
  v17 = (unsigned int *)(v16 + 24);
  if ( !*(_DWORD *)(v16 + 24) && *(int *)(v16 + 8) > 0 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 32LL);
    v25 = *(_QWORD *)(v24 + 64);
    if ( v25 )
    {
      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v25 + 24LL))(
              v25,
              *(unsigned int *)(v24 + 28),
              v16,
              v16 + 24);
      if ( v26 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3FF,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v26,
          v27);
    }
  }
  v18 = *v17;
  _InterlockedIncrement((volatile signed __int32 *)a1 + 4);
  v29[0] = v15;
  v29[1] = v18;
  LOWORD(v27) = 0;
  v19 = CoreUICallSend(v14, v29, 2LL, 95LL);
  if ( (int)(v19 + 0x80000000) >= 0 && v19 != -2018375675 )
LABEL_22:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF379,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v19,
      v27);
  return 0LL;
}
