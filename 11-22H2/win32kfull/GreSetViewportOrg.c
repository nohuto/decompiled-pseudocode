/*
 * XREFs of GreSetViewportOrg @ 0x1C02D05C4
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C00BAA10 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNInvertItem @ 0x1C0235660 (xxxMNInvertItem.c)
 *     xxxMenuDraw @ 0x1C02361F4 (xxxMenuDraw.c)
 *     xxxDrawState @ 0x1C023F6F0 (xxxDrawState.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetViewportOrg(HDC a1, int a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // edi
  _QWORD v10[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v5 = v12[0];
  v6 = 0;
  if ( !v12[0] )
  {
LABEL_11:
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    return v6;
  }
  v7 = *(_QWORD *)(v12[0] + 976LL);
  v8 = -a2;
  if ( (*(_DWORD *)(v7 + 108) & 1) == 0 )
    v8 = a2;
  if ( (unsigned int)(v8 + 134217726) <= 0xFFFFFFC && (unsigned int)(a3 + 134217726) <= 0xFFFFFFC )
  {
    if ( (*(_DWORD *)(v7 + 152) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v12, 1026);
      if ( v10[0] )
        EXFORMOBJ::bXform(
          (EXFORMOBJ *)v10,
          (struct _POINTFIX *)(*(_QWORD *)(v12[0] + 976LL) + 8LL),
          (struct _POINTL *)(*(_QWORD *)(v12[0] + 976LL) + 216LL),
          1uLL);
      *(_DWORD *)(*(_QWORD *)(v12[0] + 976LL) + 152LL) &= ~0x100u;
      v5 = v12[0];
    }
    *(_DWORD *)(*(_QWORD *)(v5 + 976) + 152LL) |= 0x200u;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v12, -2147483132);
    *(_DWORD *)(*(_QWORD *)(v12[0] + 976LL) + 340LL) |= 0x2010u;
    *(_DWORD *)(*(_QWORD *)(v12[0] + 976LL) + 324LL) = v8;
    *(_DWORD *)(*(_QWORD *)(v12[0] + 976LL) + 328LL) = a3;
    EXFORMOBJ::vInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v12, 0x402u, 0);
    v6 = 1;
    goto LABEL_11;
  }
  XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v13);
  return 0LL;
}
