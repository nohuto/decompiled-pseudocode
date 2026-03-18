/*
 * XREFs of GreCreateHalftonePalette @ 0x1C02D14F0
 * Callers:
 *     CreateDIBPalette @ 0x1C01FD818 (CreateDIBPalette.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0055590 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C005640C (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005848C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C013FEE0 (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateHalftonePalette(Gre::Base *a1)
{
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  HPALETTE *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // r8d
  __int64 v8; // rdi
  __int64 v9; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-1h] BYREF
  int v11; // [rsp+60h] [rbp+7h]
  _QWORD v12[2]; // [rsp+68h] [rbp+Fh] BYREF
  _BYTE v13[56]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v15; // [rsp+D0h] [rbp+77h] BYREF
  char v16; // [rsp+D8h] [rbp+7Fh] BYREF

  Gre::Base::Globals(a1);
  DCOBJ::DCOBJ((DCOBJ *)v12, (HDC)a1);
  if ( !v12[0] )
  {
    EngSetLastError(6u);
LABEL_3:
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    return 0LL;
  }
  v15 = *(_QWORD *)(v12[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)&v16, (struct PDEVOBJ *)&v15);
  v4 = Gre::Base::Globals(v3);
  v14 = *((_QWORD *)v4 + 17);
  GreAcquireSemaphore(v14);
  if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v15) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v15, 0LL) )
  {
LABEL_10:
    SEMOBJ::vUnlock((SEMOBJ *)&v14);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v16);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
    goto LABEL_3;
  }
  v5 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v15);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v9, *v5);
  v11 = 0;
  v10 = 0LL;
  v6 = v9;
  if ( v9 && (v7 = *(_DWORD *)(v9 + 28)) != 0 )
  {
    if ( !PALMEMOBJ::bCreatePalette(
            (PALMEMOBJ *)&v10,
            1u,
            v7,
            *(const unsigned int **)(v9 + 112),
            0,
            0,
            0,
            0x100500u,
            0) )
    {
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v10);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v9);
      goto LABEL_10;
    }
  }
  else if ( !PALMEMOBJ::bCreatePalette(
               (PALMEMOBJ *)&v10,
               1u,
               *((__int16 *)v4 + 1927),
               (const unsigned int *)v4 + 964,
               0,
               0,
               0,
               0x100500u,
               0) )
  {
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v10);
    if ( v6 )
      DEC_SHARE_REF_CNT(v6);
    goto LABEL_10;
  }
  v11 = 1;
  v8 = *v10;
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v10);
  if ( v6 )
    DEC_SHARE_REF_CNT(v6);
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v16);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
  if ( v12[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v13);
  return v8;
}
