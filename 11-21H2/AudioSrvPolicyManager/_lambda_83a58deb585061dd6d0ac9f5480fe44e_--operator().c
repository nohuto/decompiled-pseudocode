/*
 * XREFs of _lambda_83a58deb585061dd6d0ac9f5480fe44e_::operator() @ 0x18000FCE0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_83a58deb585061dd6d0ac9f5480fe44e__long_IAudioSessionInfo___::_Do_call @ 0x180012FE0 (std--_Func_impl_no_alloc__lambda_83a58deb585061dd6d0ac9f5480fe44e__long_IAudioSessi_ea_180012FE0.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180010ABC (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_83a58deb585061dd6d0ac9f5480fe44e_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  ATL::CAtlException *v7; // r14
  ATL::CAtlException *v8; // rax
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v13; // [rsp+40h] [rbp-18h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_e74777e2ae65337d95908bedb110e863_Traceguids, v4);
  }
  v5 = 0;
  v6 = *a1;
  v7 = *(ATL::CAtlException **)a1[1];
  try
  {
    v8 = (ATL::CAtlException *)(*(__int64 (**)(void))(*(_QWORD *)a2 + 64LL))();
    v12[1] = (ATL::CAtlException *)&CGenerateDuckingNotification::`vftable';
    v12[2] = v7;
    v12[3] = v8;
    v13 = 257;
    CLockedList<CDuckingNotification,1,0>::ForEachEntry((LPCRITICAL_SECTION)(v6 + 72));
  }
  catch ( ATL::CAtlException *v12 )
  {
    v11 = v12[0];
    if ( *(_DWORD *)v12[0] == -1073741571 )
      _o__resetstkoflw();
    return *(unsigned int *)v11;
  }
  return v5;
}
