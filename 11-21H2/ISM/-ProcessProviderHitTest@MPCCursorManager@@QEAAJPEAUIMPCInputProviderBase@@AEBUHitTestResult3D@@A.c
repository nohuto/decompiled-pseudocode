/*
 * XREFs of ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x1800A533C
 * Callers:
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x1800A023C (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _lambda_2c96748461f4900de3746577f815c647_::operator() @ 0x1800A4FBC (_lambda_2c96748461f4900de3746577f815c647_--operator().c)
 *     ?Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x1800A503C (-Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 *     ?Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x1800A505C (-Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCCursorManager::ProcessProviderHitTest(
        MPCCursorManager *this,
        struct IMPCInputProviderBase *a2,
        const struct HitTestResult3D *a3,
        bool *a4)
{
  __int64 v7; // rdx
  const char *v8; // r9
  bool v9; // cl
  bool v10; // al
  char v12; // [rsp+28h] [rbp-19h] BYREF
  bool v13; // [rsp+29h] [rbp-18h] BYREF
  __int128 v14; // [rsp+30h] [rbp-11h]
  __int128 v15; // [rsp+40h] [rbp-1h]
  __int128 v16; // [rsp+50h] [rbp+Fh]
  _OWORD v17[3]; // [rsp+60h] [rbp+1Fh] BYREF
  char v18; // [rsp+90h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]
  char v20; // [rsp+A8h] [rbp+67h] BYREF

  if ( *((_BYTE *)this + 64) )
  {
    v13 = 0;
    v20 = MPCCursorManager::Is2DCursorVisible(this);
    v12 = MPCCursorManager::Is3DCursorVisible(this);
    *(_QWORD *)&v14 = this;
    *((_QWORD *)&v14 + 1) = v8;
    *(_QWORD *)&v15 = &v20;
    *((_QWORD *)&v15 + 1) = &v12;
    *(_QWORD *)&v16 = &v13;
    *((_QWORD *)&v16 + 1) = a3;
    v17[0] = v14;
    v17[1] = v15;
    v17[2] = v16;
    v18 = 1;
    if ( !*((_BYTE *)this + 56) || !*((_BYTE *)this + 65) )
      goto LABEL_24;
    if ( !a2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        121LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
        v8);
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 256LL))(a2)
      && ((*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2) & 2) != 0 )
    {
      v9 = *(_DWORD *)this < *((_DWORD *)this + 2) && *((_DWORD *)this + 1) < *((_DWORD *)this + 3);
      v10 = *((_DWORD *)a3 + 95) < *((_DWORD *)a3 + 97) && *((_DWORD *)a3 + 96) < *((_DWORD *)a3 + 98);
      v13 = v10;
      if ( v9 )
      {
        if ( v10 )
        {
          if ( *((_DWORD *)this + 8) == *((_DWORD *)a3 + 94) )
          {
LABEL_24:
            v18 = 0;
            lambda_2c96748461f4900de3746577f815c647_::operator()((__int64)v17);
            return 0LL;
          }
LABEL_22:
          v12 = 0;
          v20 = 1;
          goto LABEL_24;
        }
      }
      else if ( v10 )
      {
        goto LABEL_22;
      }
    }
    v12 = 1;
    v20 = 0;
    goto LABEL_24;
  }
  *a4 = 0;
  return 0LL;
}
