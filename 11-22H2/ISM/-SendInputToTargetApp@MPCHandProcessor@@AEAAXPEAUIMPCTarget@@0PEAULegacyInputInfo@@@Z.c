/*
 * XREFs of ?SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z @ 0x1800D0844
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800D04B0 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800D7284 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 */

void __fastcall MPCHandProcessor::SendInputToTargetApp(
        MPCHandProcessor *this,
        struct IMPCTarget *a2,
        struct IMPCTarget *a3,
        struct LegacyInputInfo *a4)
{
  bool v7; // cl
  int v8; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v11; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v7 = *((_DWORD *)a4 + 16) == 5 && *((_BYTE *)this + 3568) || *((_DWORD *)a4 + 16) == 4 && !*((_BYTE *)this + 3568);
    v11 = v7;
    if ( !v7 )
    {
      MPCInputProviderBase::ProcessSourceDetectedAndLost(this, a2, a3, &v11, v9);
      v7 = v11;
    }
    if ( *((_BYTE *)this + 3568) && !v7 && (unsigned int)(*((_DWORD *)a4 + 16) - 4) > 1 )
    {
      v8 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 24LL))(a3, a4);
      if ( v8 == -2147417853 )
      {
        *((_BYTE *)this + 3568) = 0;
      }
      else if ( v8 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x262,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
          (const char *)(unsigned int)v8);
      }
    }
  }
}
