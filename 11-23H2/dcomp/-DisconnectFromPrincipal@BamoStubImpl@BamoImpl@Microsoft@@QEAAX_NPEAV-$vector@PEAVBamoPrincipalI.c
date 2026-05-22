/*
 * XREFs of ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x18016C00C
 * Callers:
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAPEAVBamoStubImpl@23@2@Z @ 0x18016D27C (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalImpl@B.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@QEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x18016A010 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 */

char __fastcall Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal(__int64 a1, char a2, _QWORD *a3)
{
  _QWORD *i; // rax
  _QWORD **v6; // rsi
  __int64 v7; // rcx
  _BYTE *v8; // rdx

  LOBYTE(i) = *(_BYTE *)(a1 + 56);
  *(_BYTE *)(a1 + 56) = 0;
  if ( (_BYTE)i && !a2 )
    LOBYTE(i) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  if ( a3 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v6 = (_QWORD **)(a1 + 24);
      v7 = *(_QWORD *)(a1 + 24);
      if ( *(int *)(v7 + 8) <= 0 )
      {
        for ( i = (_QWORD *)*a3; i != (_QWORD *)a3[1]; ++i )
        {
          if ( *i == v7 )
            goto LABEL_14;
        }
        (**(void (__fastcall ***)(__int64))v7)(v7);
        v8 = (_BYTE *)a3[1];
        if ( v8 == (_BYTE *)a3[2] )
        {
          LOBYTE(i) = (unsigned __int8)std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
                                         (__int64)a3,
                                         v8,
                                         (_QWORD *)(a1 + 24));
        }
        else
        {
          i = *v6;
          *(_QWORD *)v8 = *v6;
          a3[1] += 8LL;
        }
      }
    }
  }
LABEL_14:
  *(_QWORD *)(a1 + 24) = 0LL;
  return (char)i;
}
