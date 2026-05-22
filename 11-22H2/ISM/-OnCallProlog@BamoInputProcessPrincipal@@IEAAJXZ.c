/*
 * XREFs of ?OnCallProlog@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800D9FDC
 * Callers:
 *     ??0?$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputProcessPrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800D980C (--0-$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@Q_ea_1800D980C.c)
 *     ?AllocateStubThunk@BamoInputProcessPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x1800D9DB0 (-AllocateStubThunk@BamoInputProcessPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@.c)
 *     ?InitializeProxyThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800D9EC0 (-InitializeProxyThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?OnConnectedThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800DA010 (-OnConnectedThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ.c)
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
