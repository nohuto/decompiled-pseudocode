/*
 * XREFs of ?SetWindowId@BamoActivatableEntityPrincipal@@UEAAX_K@Z @ 0x180005F30
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x180012230 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800064A8 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?UpdateWindowIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18008FFC4 (-UpdateWindowIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImp.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall BamoActivatableEntityPrincipal::SetWindowId(BamoActivatableEntityPrincipal *this, __int64 a2)
{
  __int64 v4; // rdi
  Microsoft::BamoImpl::BamoImplObject *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  __int64 i; // rdi
  int v11; // esi
  __int64 v12; // rdi
  const char *v13; // r9
  int updated; // eax
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 3);
  v5 = 0LL;
  v6 = *(_QWORD *)(v4 + 32);
  if ( *(_DWORD *)(v6 + 184) != GetCurrentThreadId() )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 16) + 24LL))(*(_QWORD *)(v6 + 16));
    *(_DWORD *)(v6 + 184) = GetCurrentThreadId();
    v5 = (Microsoft::BamoImpl::BamoImplObject *)v4;
  }
  *((_QWORD *)this + 6) = a2;
  for ( i = *((_QWORD *)this + 5); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
    {
      v11 = 0;
      goto LABEL_6;
    }
    if ( *(_BYTE *)(i + 32) )
    {
      updated = BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateWindowIdRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  (BamoActivatableEntityPrincipal *)((char *)this + 8));
      v11 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x225,
    (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated,
    v15);
LABEL_6:
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xFA57,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v11,
      v15);
  if ( v5 )
  {
    v12 = *((_QWORD *)v5 + 4);
    if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v12) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x8CF,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v13);
    *(_DWORD *)(v12 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 16) + 32LL))(*(_QWORD *)(v12 + 16));
  }
  if ( v5 )
    Microsoft::BamoImpl::BamoImplObject::Release(v5, v7, v8, v9);
}
