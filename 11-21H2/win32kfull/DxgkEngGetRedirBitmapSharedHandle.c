/*
 * XREFs of DxgkEngGetRedirBitmapSharedHandle @ 0x1C02751C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00907C4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00920F0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreGetDxSharedSurface @ 0x1C00ED940 (GreGetDxSharedSurface.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngGetRedirBitmapSharedHandle(HDC a1, _QWORD *a2)
{
  __int64 *v3; // rcx
  HWND v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v7[2]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v8[48]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v9; // [rsp+88h] [rbp+10h] BYREF
  int v10; // [rsp+90h] [rbp+18h] BYREF
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  v3 = v7[0];
  *a2 = 0LL;
  if ( v3 )
  {
    v4 = (HWND)v3[59];
    LODWORD(v9) = 0;
    v11 = 0LL;
    GreGetDxSharedSurface(v4, a2, &v11, &v10, &v9, &v6);
    if ( v7[0] )
      XDCOBJ::vAltUnlockFast(v7);
  }
  return UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
}
