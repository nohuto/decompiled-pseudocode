/*
 * XREFs of GreSetWindowOrg @ 0x1C02D075C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0222580 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C02CF8A8 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetWindowOrg(HDC a1, int a2, int a3)
{
  DC *v6; // rdx
  DC *v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-40h] BYREF
  DC *v10[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+50h] [rbp-20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( v10[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v9, (struct XDCOBJ *)v10, -2147483132);
    v6 = v10[0];
    if ( (*(_DWORD *)(*((_QWORD *)v10[0] + 122) + 152LL) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v8, (struct XDCOBJ *)v10, 1026);
      if ( v8[0] )
        EXFORMOBJ::bXform(
          (EXFORMOBJ *)v8,
          (struct _POINTFIX *)(*((_QWORD *)v10[0] + 122) + 8LL),
          (struct _POINTL *)(*((_QWORD *)v10[0] + 122) + 216LL),
          1uLL);
      *(_DWORD *)(*((_QWORD *)v10[0] + 122) + 152LL) &= ~0x100u;
      v6 = v10[0];
    }
    *(_DWORD *)(*((_QWORD *)v6 + 122) + 152LL) |= 0x200u;
    *(_DWORD *)(*((_QWORD *)v10[0] + 122) + 340LL) |= 0x2010u;
    *(_DWORD *)(*((_QWORD *)v10[0] + 122) + 308LL) = a2;
    *(_DWORD *)(*((_QWORD *)v10[0] + 122) + 312LL) = a3;
    v7 = v10[0];
    *(_DWORD *)(*((_QWORD *)v10[0] + 122) + 304LL) = a2;
    DC::MirrorWindowOrg(v7);
    EXFORMOBJ::vInit((EXFORMOBJ *)v9, (struct XDCOBJ *)v10, 0x402u, 0);
    if ( v10[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v10);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v11);
    return 1LL;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v10);
    return 0LL;
  }
}
