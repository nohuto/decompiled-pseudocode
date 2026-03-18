/*
 * XREFs of ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C01DE300
 * Callers:
 *     ?StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C01D437C (-StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x1C01DE1A8 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     DxgkAttemptOpmVmBusRedirect @ 0x1C02C2704 (DxgkAttemptOpmVmBusRedirect.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0314EAC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGGLOBAL::IsVmConnectedToHost(DXGGLOBAL *this)
{
  __int64 v1; // rdx
  unsigned __int8 result; // al

  v1 = *((_QWORD *)this + 214);
  result = 0;
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 68) )
      return 1;
  }
  return result;
}
