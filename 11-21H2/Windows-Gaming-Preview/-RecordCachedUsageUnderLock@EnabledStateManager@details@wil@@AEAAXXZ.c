/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180007B9C
 * Callers:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180007784 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CAXPEAX@Z @ 0x180008140 (-_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CAXPEAX@Z.c)
 *     ?_lambda_invoker_cdecl_@_lambda_0374aa0a5d1201b2358c6bce99369c58_@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800093E0 (-_lambda_invoker_cdecl_@_lambda_0374aa0a5d1201b2358c6bce99369c58_@@CAXPEAU_TP_CALLBACK_INSTANCE@.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x18004D4F0 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  unsigned int *v2; // rbx
  unsigned int *v3; // rdi
  void *v4; // rdx
  unsigned __int32 v5; // edx
  unsigned int v6; // ecx
  __int64 v7; // r9
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  unsigned int *v12; // rsi
  void (*v13)(unsigned int, unsigned int, unsigned int, const char *); // r11
  void (*v14)(unsigned int, unsigned int, unsigned int, const char *); // rax
  __int64 v15; // r8
  __int64 v16; // [rsp+38h] [rbp-49h]
  __int64 v17; // [rsp+40h] [rbp-41h]
  __int64 v18; // [rsp+48h] [rbp-39h]
  __int64 v19; // [rsp+50h] [rbp-31h]
  __int64 v20; // [rsp+58h] [rbp-29h]
  __int64 v21; // [rsp+60h] [rbp-21h]
  __int64 v22; // [rsp+68h] [rbp-19h]
  __int64 v23; // [rsp+70h] [rbp-11h]
  _QWORD v24[8]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+37h] BYREF

  v2 = (unsigned int *)*((_QWORD *)this + 7);
  v3 = (unsigned int *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)((char *)v2 - (char *)v3) < 0x10 )
    return;
  if ( v3 == v2 )
  {
    v13 = g_wil_details_internalRecordFeatureUsage;
    v14 = g_wil_details_apiRecordFeatureUsage;
    goto LABEL_21;
  }
  LODWORD(v16) = 2;
  LODWORD(v17) = 6;
  LODWORD(v18) = 3;
  LODWORD(v19) = 7;
  LODWORD(v20) = 0;
  LODWORD(v21) = 4;
  LODWORD(v22) = 1;
  LODWORD(v23) = 5;
  do
  {
    v4 = (void *)*((_QWORD *)v3 + 1);
    _m_prefetchw(v4);
    v5 = _InterlockedAnd((volatile signed __int32 *)v4, 0xFFC0401E);
    v6 = (v5 >> 1) & 0xF;
    if ( v6 )
    {
      v7 = *((_QWORD *)v3 + 1);
      _m_prefetchw((const void *)(v7 + 4));
      v6 &= ~_InterlockedOr((volatile signed __int32 *)(v7 + 4), v6);
    }
    HIDWORD(v16) = v6 & 1;
    v24[0] = v16;
    HIDWORD(v17) = (v6 >> 1) & 1;
    v24[1] = v17;
    HIDWORD(v18) = (v6 >> 2) & 1;
    v24[2] = v18;
    HIDWORD(v19) = v6 >> 3;
    v24[3] = v19;
    v8 = (v5 >> 5) & 0x1FF;
    if ( (v5 & 0x4000) != 0 )
      v8 = 0;
    HIDWORD(v20) = v8;
    v24[4] = v20;
    HIDWORD(v21) = (v5 & 0x4000) != 0 ? (v5 >> 5) & 0x1FF : 0;
    v24[5] = v21;
    v9 = (v5 >> 15) & 0x7F;
    v10 = v5 & 0x400000;
    v11 = v9;
    if ( v10 )
      v11 = 0;
    HIDWORD(v22) = v11;
    v24[6] = v22;
    HIDWORD(v23) = v10 != 0 ? v9 : 0;
    v24[7] = v23;
    v12 = (unsigned int *)v24;
    v13 = g_wil_details_internalRecordFeatureUsage;
    v14 = g_wil_details_apiRecordFeatureUsage;
    do
    {
      v15 = v12[1];
      if ( !(_DWORD)v15 )
        goto LABEL_17;
      if ( v13 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v13)(*v3, *v12, v15, 0LL);
      }
      else
      {
        if ( !v14 )
          goto LABEL_17;
        ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v14)(*v3, *v12, v15, 0LL);
      }
      v14 = g_wil_details_apiRecordFeatureUsage;
      v13 = g_wil_details_internalRecordFeatureUsage;
LABEL_17:
      v12 += 2;
    }
    while ( v12 != (unsigned int *)&v25 );
    v3 += 4;
  }
  while ( v3 != v2 );
  v3 = (unsigned int *)*((_QWORD *)this + 6);
LABEL_21:
  *((_QWORD *)this + 7) = v3;
  if ( v13 )
  {
    ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v13)(0LL, 254LL, 0LL, 0LL);
  }
  else if ( v14 )
  {
    ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v14)(0LL, 254LL, 0LL, 0LL);
  }
}
