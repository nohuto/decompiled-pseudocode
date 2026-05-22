/*
 * XREFs of ?OnCallProlog@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800CAD8C
 * Callers:
 *     ??0?$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputProcessPrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800CA5B0 (--0-$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@Q_ea_1800CA5B0.c)
 *     ?AllocateStubThunk@BamoInputProcessPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x1800CAB60 (-AllocateStubThunk@BamoInputProcessPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@.c)
 *     ?InitializeProxyThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800CAC70 (-InitializeProxyThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?OnConnectedThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800CADC0 (-OnConnectedThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputProcessPrincipal::OnCallProlog(BamoInputProcessPrincipal *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, BamoInputProcessPrincipal *))(*(_QWORD *)v2 + 56LL))(v2, this);
  else
    return 0LL;
}
