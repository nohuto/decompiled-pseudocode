/*
 * XREFs of ?SetLuid@BamoActivatableEntityPrincipal@@UEAAXAEBU_LUID@@@Z @ 0x180017FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000F950 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180023290 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateLuidRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B918C (-UpdateLuidRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2M.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall BamoActivatableEntityPrincipal::SetLuid(BamoActivatableEntityPrincipal *this, const struct _LUID *a2)
{
  __int64 v4; // rdi
  Microsoft::BamoImpl::BaseBamoConnectionImpl **v5; // rbx
  __int64 v6; // rsi
  __int64 i; // rdi
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  int updated; // eax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 3);
  v5 = 0LL;
  v6 = *(_QWORD *)(v4 + 32);
  if ( *(_DWORD *)(v6 + 184) != GetCurrentThreadId() )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 16) + 24LL))(*(_QWORD *)(v6 + 16));
    *(_DWORD *)(v6 + 184) = GetCurrentThreadId();
    v5 = (Microsoft::BamoImpl::BaseBamoConnectionImpl **)v4;
  }
  *((struct _LUID *)this + 8) = *a2;
  for ( i = *((_QWORD *)this + 5); ; i = *(_QWORD *)(i + 40) )
  {
    if ( !i )
    {
      v8 = 0;
      goto LABEL_6;
    }
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateLuidRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  (BamoActivatableEntityPrincipal *)((char *)this + 8));
      v8 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26C,
    (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated,
    v13);
LABEL_6:
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D30,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v13);
  if ( v5 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v5[4]);
    Microsoft::BamoImpl::BamoImplObject::Release((Microsoft::BamoImpl::BamoImplObject *)v5, v9, v10, v11);
  }
}
