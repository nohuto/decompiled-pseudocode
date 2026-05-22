/*
 * XREFs of ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180088350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800879B0 (-DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180087A2C (-EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x180087A80 (-FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rsi
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v8; // rdx
  __int64 i; // rax
  __int64 v10; // r9
  __int64 j; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 2) + 32LL);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisableLockDrops(v5, a2, a3, a4);
  v8 = *((unsigned int *)this + 6);
  *((_DWORD *)this + 6) = 0;
  if ( *((_QWORD *)v5 + 8) && (_DWORD)v8 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItem((const void **)v5, v8);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 48) )
  {
    v10 = *(_QWORD *)(i + 40);
    v8 = 0LL;
    for ( j = *(_QWORD *)(v10 + 56); j; j = *(_QWORD *)(j + 56) )
    {
      if ( j == i )
      {
        v6 = *(_QWORD *)(i + 56);
        if ( v8 )
          *(_QWORD *)(v8 + 56) = v6;
        else
          *(_QWORD *)(v10 + 56) = v6;
        *(_QWORD *)(i + 56) = 0LL;
        break;
      }
      v8 = j;
    }
    v7 = (const char *)retaddr;
    if ( !j )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        258LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPeer.inl",
        (const char *)retaddr);
    *(_QWORD *)(i + 24) = 0LL;
    *(_BYTE *)(i + 32) = 0;
  }
  v12 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::EnableLockDrops(v5, v8, v6, v7);
  if ( v12 )
  {
    do
    {
      v13 = (_QWORD *)v12[6];
      v12[6] = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
      v12 = v13;
    }
    while ( v13 );
  }
}
