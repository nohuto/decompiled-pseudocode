/*
 * XREFs of ?SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x180006370
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18001F120 (-UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall BamoControllerNavigationManagerPrincipal::SetEnabled(
        BamoControllerNavigationManagerPrincipal *this,
        char a2)
{
  __int64 v4; // rdi
  Microsoft::BamoImpl::BamoImplObject *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // rdi
  int updated; // eax
  int v12; // esi
  __int64 v13; // rdi
  const char *v14; // r9
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
  *((_BYTE *)this + 48) = a2;
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v10 + 32) )
      {
        updated = BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdateEnabledRemoteCacheStatic(
                    (struct Microsoft::BamoImpl::BamoStubImpl *)v10,
                    (BamoControllerNavigationManagerPrincipal *)((char *)this + 8));
        v12 = updated;
        if ( updated < 0 )
          break;
      }
      v10 = *(_QWORD *)(v10 + 48);
      if ( !v10 )
        goto LABEL_7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x225,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)updated,
      v15);
  }
  else
  {
LABEL_7:
    v12 = 0;
  }
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2135,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v12,
      v15);
  if ( v5 )
  {
    v13 = *((_QWORD *)v5 + 4);
    if ( *(_DWORD *)(v13 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x8CF,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v14);
    *(_DWORD *)(v13 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 16) + 32LL))(*(_QWORD *)(v13 + 16));
  }
  if ( v5 )
    Microsoft::BamoImpl::BamoImplObject::Release(v5, v7, v8, v9);
}
