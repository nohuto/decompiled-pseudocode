/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180007CCC
 * Callers:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x1800079B0 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_0374aa0a5d1201b2358c6bce99369c58_@@CA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180012B50 (-_lambda_invoker_cdecl_@_lambda_0374aa0a5d1201b2358c6bce99369c58_@@CA@PEAU_TP_CALLBACK_INSTANCE@.c)
 *     ?_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CA@PEAX@Z @ 0x180012CF0 (-_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CA@PEAX@Z.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x18004E410 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180007964 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     __security_check_cookie @ 0x18004B4D0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  int *v2; // rdi
  int *v3; // rbx
  __int64 v4; // r9
  unsigned int v5; // r12d
  unsigned __int32 v6; // edx
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // r14d
  _QWORD *v13; // r15
  _DWORD v14[16]; // [rsp+30h] [rbp-50h] BYREF

  v2 = (int *)*((_QWORD *)this + 7);
  v3 = (int *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)((char *)v2 - (char *)v3) >= 0x10 )
  {
    while ( v3 != v2 )
    {
      v4 = *((_QWORD *)v3 + 1);
      v5 = *v3;
      _m_prefetchw((const void *)v4);
      v6 = _InterlockedAnd((volatile signed __int32 *)v4, 0xFFC0401E);
      v7 = (v6 >> 1) & 0xF;
      if ( v7 )
      {
        _m_prefetchw((const void *)(v4 + 4));
        v7 &= ~_InterlockedOr((volatile signed __int32 *)(v4 + 4), v7);
      }
      v14[0] = 2;
      v14[1] = v7 & 1;
      v14[2] = 6;
      v14[3] = (v7 >> 1) & 1;
      v14[4] = 3;
      v14[5] = (v7 >> 2) & 1;
      v14[6] = 7;
      v14[7] = v7 >> 3;
      v14[8] = 0;
      v8 = (v6 >> 5) & 0x1FF;
      if ( (v6 & 0x4000) != 0 )
        v8 = 0;
      v14[9] = v8;
      v14[10] = 4;
      v14[11] = (v6 & 0x4000) != 0 ? (v6 >> 5) & 0x1FF : 0;
      v14[12] = 1;
      v9 = (v6 >> 15) & 0x7F;
      v10 = v6 & 0x400000;
      v11 = v9;
      if ( v10 )
        v11 = 0;
      v14[13] = v11;
      v14[14] = 5;
      v14[15] = v10 != 0 ? v9 : 0;
      v12 = 0;
      v13 = v14;
      do
      {
        if ( HIDWORD(*v13) )
          wil::details::WilApi_RecordFeatureUsage((wil::details *)v5);
        ++v12;
        ++v13;
      }
      while ( v12 < 8 );
      v3 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      g_wil_details_internalRecordFeatureUsage(0LL);
    }
    else if ( g_wil_details_apiRecordFeatureUsage )
    {
      g_wil_details_apiRecordFeatureUsage(0LL);
    }
  }
}
