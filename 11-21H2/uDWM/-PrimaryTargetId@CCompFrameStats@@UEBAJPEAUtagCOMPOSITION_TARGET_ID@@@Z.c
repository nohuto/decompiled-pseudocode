/*
 * XREFs of ?PrimaryTargetId@CCompFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x180002910
 * Callers:
 *     ?PrimaryTargetId@CAnimationFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x180002900 (-PrimaryTargetId@CAnimationFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z.c)
 * Callees:
 *     ?_DCompositionGetStatistics@CCompFrameStats@@CAJ_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOSITION_TARGET_ID@@PEAI@Z @ 0x180002CEC (-_DCompositionGetStatistics@CCompFrameStats@@CAJ_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOS.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompFrameStats::PrimaryTargetId(CCompFrameStats *this, struct tagCOMPOSITION_TARGET_ID *a2)
{
  unsigned __int64 v3; // rax
  __int64 result; // rax
  int v5; // ecx
  __int64 v6; // xmm1_8
  unsigned int v7; // [rsp+30h] [rbp-58h] BYREF
  __int128 v8; // [rsp+38h] [rbp-50h] BYREF
  __int64 v9; // [rsp+48h] [rbp-40h]
  int v10; // [rsp+50h] [rbp-38h]
  _BYTE v11[24]; // [rsp+58h] [rbp-30h] BYREF

  v3 = (*(__int64 (__fastcall **)(CCompFrameStats *, __int64))(*(_QWORD *)this + 64LL))(this, 1LL);
  result = CCompFrameStats::_DCompositionGetStatistics(
             v3,
             (struct tagCOMPOSITION_FRAME_STATS *)v11,
             1u,
             (struct tagCOMPOSITION_TARGET_ID *)&v8,
             &v7);
  if ( (int)result >= 0 )
  {
    if ( v7 )
    {
      v5 = v10;
      v6 = v9;
      *(_OWORD *)a2 = v8;
      *((_QWORD *)a2 + 2) = v6;
      *((_DWORD *)a2 + 6) = v5;
    }
  }
  return result;
}
