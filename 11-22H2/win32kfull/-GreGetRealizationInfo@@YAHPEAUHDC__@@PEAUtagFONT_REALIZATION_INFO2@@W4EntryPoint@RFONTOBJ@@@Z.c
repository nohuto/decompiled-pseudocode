/*
 * XREFs of ?GreGetRealizationInfo@@YAHPEAUHDC__@@PEAUtagFONT_REALIZATION_INFO2@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C007CF04
 * Callers:
 *     NtGdiGetRealizationInfo @ 0x1C007CDF0 (NtGdiGetRealizationInfo.c)
 * Callees:
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C007CFD0 (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetRealizationInfo(HDC a1, struct tagFONT_REALIZATION_INFO2 *a2)
{
  unsigned int RealizationInfo; // ebx
  int v4; // eax
  _DWORD v6[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v9; // [rsp+98h] [rbp+28h] BYREF

  RealizationInfo = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = *(unsigned __int16 *)(v7[0] + 12LL);
    v9 = 0LL;
    v6[1] = v4;
    v6[0] = 12;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v9, (struct XDCOBJ *)v7, 0, 2u, (const struct RFONTOBJ::Tag *)v6) )
      GreAcquireSemaphore(*(_QWORD *)(v9 + 504));
    if ( v9 )
      RealizationInfo = RFONTOBJ::GetRealizationInfo((RFONTOBJ *)&v9, a2);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
    if ( v7[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v8);
  return RealizationInfo;
}
