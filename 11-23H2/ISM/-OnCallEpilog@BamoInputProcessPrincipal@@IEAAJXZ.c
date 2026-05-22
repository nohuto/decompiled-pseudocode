/*
 * XREFs of ?OnCallEpilog@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800CAD5C
 * Callers:
 *     ??1?$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800CA92C (--1-$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AllocateStubThunk@BamoInputProcessPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x1800CAB60 (-AllocateStubThunk@BamoInputProcessPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@.c)
 *     ?InitializeProxyThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800CAC70 (-InitializeProxyThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?OnConnectedThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800CADC0 (-OnConnectedThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputProcessPrincipal::OnCallEpilog(BamoInputProcessPrincipal *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, BamoInputProcessPrincipal *))(*(_QWORD *)v2 + 64LL))(v2, this);
  else
    return 0LL;
}
