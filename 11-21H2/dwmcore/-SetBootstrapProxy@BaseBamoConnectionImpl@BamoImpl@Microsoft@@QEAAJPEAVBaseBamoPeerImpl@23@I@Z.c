/*
 * XREFs of ?SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x180198054
 * Callers:
 *     ?SetBootstrapProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x180198134 (-SetBootstrapProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800F04C0 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180196B68 (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::SetBootstrapProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        __int64 a3)
{
  __int64 v4; // rdi
  Microsoft::BamoImpl::BamoProxyImpl *v5; // rsi
  __int64 (__fastcall *v6)(__int64, __int64); // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // r8
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoProxyImpl *v14; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, Microsoft::BamoImpl::BamoProxyImpl **))(**((_QWORD **)this + 8)
                                                                                             + 56LL))(
         *((_QWORD *)this + 8),
         *((unsigned int *)a2 + 9),
         a3,
         &v14) < 0 )
  {
    return (unsigned int)-2018375668;
  }
  else
  {
    v4 = *((_QWORD *)this + 2);
    v5 = v14;
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL);
    v7 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)v14 + 56LL))(v14);
    v9 = v6(v4, v7);
    if ( v9 < 0 )
    {
      if ( v9 != -2018375668 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1734LL,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v9,
          v12);
    }
    else if ( *((_BYTE *)v5 + 30) )
    {
      Microsoft::BamoImpl::BamoProxyImpl::Disconnect(v5, 0);
    }
    else
    {
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v5, v8, v10);
    }
  }
  return (unsigned int)v9;
}
