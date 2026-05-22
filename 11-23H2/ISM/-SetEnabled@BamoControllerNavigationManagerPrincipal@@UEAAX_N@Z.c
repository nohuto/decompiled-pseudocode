/*
 * XREFs of ?SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x180025490
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180006B80 (-UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBa.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall BamoControllerNavigationManagerPrincipal::SetEnabled(
        BamoControllerNavigationManagerPrincipal *this,
        char a2)
{
  __int64 v4; // rdi
  Microsoft::BamoImpl::BamoImplObject *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi
  int updated; // eax
  int v9; // esi
  __int64 v10; // rdi
  const char *v11; // r9
  int v12; // [rsp+20h] [rbp-18h]
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
  *((_BYTE *)this + 48) = a2;
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v7 + 56) )
      {
        updated = BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdateEnabledRemoteCacheStatic(
                    (struct Microsoft::BamoImpl::BamoStubImpl *)v7,
                    (BamoControllerNavigationManagerPrincipal *)((char *)this + 8));
        v9 = updated;
        if ( updated < 0 )
          break;
      }
      v7 = *(_QWORD *)(v7 + 40);
      if ( !v7 )
        goto LABEL_7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26C,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)updated,
      v12);
  }
  else
  {
LABEL_7:
    v9 = 0;
  }
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x48E1,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v12);
  if ( v5 )
  {
    v10 = *((_QWORD *)v5 + 4);
    if ( *(_DWORD *)(v10 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v11);
    *(_DWORD *)(v10 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 16) + 32LL))(*(_QWORD *)(v10 + 16));
  }
  if ( v5 )
    Microsoft::BamoImpl::BamoImplObject::Release(v5);
}
