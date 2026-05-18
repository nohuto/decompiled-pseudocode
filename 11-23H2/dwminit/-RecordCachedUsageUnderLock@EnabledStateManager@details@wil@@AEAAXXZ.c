/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180007174
 * Callers:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180004300 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_0374aa0a5d1201b2358c6bce99369c58_@@CA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000D1F0 (-_lambda_invoker_cdecl_@_lambda_0374aa0a5d1201b2358c6bce99369c58_@@CA@PEAU_TP_CALLBACK_INSTANCE@.c)
 *     ?_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CA@PEAX@Z @ 0x18000D250 (-_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CA@PEAX@Z.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x18000FAA0 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     __security_check_cookie @ 0x180001CB0 (__security_check_cookie.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180009738 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000F9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  int *v1; // r15
  int *v3; // rbx
  __int64 v4; // r9
  unsigned int v5; // r12d
  unsigned __int32 v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // edi
  unsigned int *v9; // rsi
  __int64 v10; // rax
  const char *v11; // [rsp+20h] [rbp-60h]
  _DWORD v12[9]; // [rsp+30h] [rbp-50h] BYREF
  int v13; // [rsp+54h] [rbp-2Ch]
  int v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+5Ch] [rbp-24h]
  int v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+64h] [rbp-1Ch]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]

  v1 = (int *)*((_QWORD *)this + 7);
  v3 = (int *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)((char *)v1 - (char *)v3) >= 0x10 )
  {
    while ( v3 != v1 )
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
      v12[0] = 2;
      v12[1] = v7 & 1;
      v12[2] = 6;
      v12[3] = ((unsigned __int8)v7 >> 1) & 1;
      v12[4] = 3;
      v12[5] = ((unsigned __int8)v7 >> 2) & 1;
      v12[6] = 7;
      v14 = 4;
      v12[8] = 0;
      v12[7] = v7 >= 8;
      if ( (v6 & 0x4000) != 0 )
      {
        v13 = 0;
        v15 = (v6 >> 5) & 0x1FF;
      }
      else
      {
        v15 = 0;
        v13 = (v6 >> 5) & 0x1FF;
      }
      v16 = 1;
      v18 = 5;
      if ( (v6 & 0x400000) != 0 )
      {
        v17 = 0;
        v19 = (v6 >> 15) & 0x7F;
      }
      else
      {
        v19 = 0;
        v17 = (v6 >> 15) & 0x7F;
      }
      v8 = 0;
      v9 = v12;
      do
      {
        v10 = HIDWORD(*(_QWORD *)v9);
        if ( (_DWORD)v10 )
          wil::details::WilApi_RecordFeatureUsage((wil::details *)v5, *v9, v10, 0, v11);
        ++v8;
        v9 += 2;
      }
      while ( v8 < 8 );
      v3 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      g_wil_details_internalRecordFeatureUsage(0LL, 254LL, 0LL, 0LL);
    }
    else if ( g_wil_details_apiRecordFeatureUsage )
    {
      g_wil_details_apiRecordFeatureUsage(0LL, 254LL, 0LL, 0LL);
    }
  }
}
