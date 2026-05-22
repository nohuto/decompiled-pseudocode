/*
 * XREFs of ?Thunk_RequestDisposeProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18009B990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x18009BC48 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_RequestDisposeProxy_5(
        __int64 a1,
        unsigned int **a2)
{
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  __int64 *i; // rbx
  __int64 v5; // rax

  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(
                *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL),
                **a2);
  if ( Principal )
  {
    for ( i = (__int64 *)*((_QWORD *)Principal + 4); i; i = (__int64 *)i[6] )
    {
      if ( *(_DWORD *)(i[5] + 36) == *(_DWORD *)(a1 + 36) )
        break;
    }
    if ( *((int *)i + 4) <= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *((unsigned int *)Principal + 6));
      v5 = *i;
      *((_BYTE *)i + 32) = 0;
      (*(void (__fastcall **)(__int64 *))(v5 + 56))(i);
    }
  }
  return 0LL;
}
