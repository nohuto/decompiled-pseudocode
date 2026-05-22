/*
 * XREFs of ?Thunk_ClearPrincipalReady_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18009B690
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x18009BC48 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_ClearPrincipalReady_5(
        __int64 a1,
        unsigned int **a2)
{
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  __int64 i; // rdx

  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(
                *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL),
                **a2);
  if ( Principal )
  {
    for ( i = *((_QWORD *)Principal + 4); i; i = *(_QWORD *)(i + 48) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) == *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Principal + 2) + 32LL) + 32LL) )
        break;
    }
    *(_BYTE *)(i + 33) = 0;
  }
  return 0LL;
}
