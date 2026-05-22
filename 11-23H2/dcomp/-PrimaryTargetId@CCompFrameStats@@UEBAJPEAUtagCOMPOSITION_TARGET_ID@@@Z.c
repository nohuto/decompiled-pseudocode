/*
 * XREFs of ?PrimaryTargetId@CCompFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x18000A420
 * Callers:
 *     ?PrimaryTargetId@CTouchFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x18000A410 (-PrimaryTargetId@CTouchFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompFrameStats::PrimaryTargetId(CCompFrameStats *this, struct tagCOMPOSITION_TARGET_ID *a2)
{
  int Statistics; // eax
  __int64 result; // rax
  int v5; // ecx
  __int64 v6; // xmm1_8
  int v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+38h] [rbp-50h] BYREF
  __int128 v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+50h] [rbp-38h]
  int v11; // [rsp+58h] [rbp-30h]
  _BYTE v12[24]; // [rsp+60h] [rbp-28h] BYREF

  v8 = (*(__int64 (__fastcall **)(CCompFrameStats *, __int64))(*(_QWORD *)this + 64LL))(this, 1LL);
  Statistics = NtDCompositionGetStatistics(&v8, v12, 1LL, &v9, &v7);
  result = DirectComposition::CDevice::HRESULTFromNTSTATUS(Statistics);
  if ( (int)result >= 0 )
  {
    if ( v7 )
    {
      v5 = v11;
      v6 = v10;
      *(_OWORD *)a2 = v9;
      *((_QWORD *)a2 + 2) = v6;
      *((_DWORD *)a2 + 6) = v5;
    }
  }
  return result;
}
