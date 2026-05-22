/*
 * XREFs of ?OnReportQueryCallback@DockDeviceCollection@@AEAAJXZ @ 0x1800E26C0
 * Callers:
 *     ?OnReportQueryCallbackStatic@DockDeviceCollection@@SAJPEAXK0@Z @ 0x1800E2840 (-OnReportQueryCallbackStatic@DockDeviceCollection@@SAJPEAXK0@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4U?$default_delete@$$BY0A@E@std@@$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800E19C8 (--$-4U-$default_delete@$$BY0A@E@std@@$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DockDeviceCollection::OnReportQueryCallback(DockDeviceCollection *this)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  int *v4; // rdi
  unsigned int v5; // edi
  void *v6; // rcx
  __int64 v8; // r9
  void *v9; // rdi
  int v10; // eax
  unsigned int v12; // [rsp+30h] [rbp-28h]
  void *v13; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (DockDeviceCollection *)((char *)this + 2816);
  while ( 1 )
  {
    v13 = 0LL;
    v3 = _Mtx_lock(v2);
    if ( v3 )
      break;
    if ( !*((_QWORD *)this + 351) )
    {
      _Mtx_unlock(v2);
      return 0LL;
    }
    v4 = *(int **)(*((_QWORD *)this + 348) + 8 * (*((_QWORD *)this + 350) & (*((_QWORD *)this + 349) - 1LL)));
    v12 = *v4;
    std::unique_ptr<unsigned char [0]>::operator=<std::default_delete<unsigned char [0]>,0>(&v13, (void **)v4 + 1);
    v5 = v4[4];
    v14 = v5;
    v6 = *(void **)(*(_QWORD *)(*((_QWORD *)this + 348) + 8
                                                        * (*((_QWORD *)this + 350) & (*((_QWORD *)this + 349) - 1LL)))
                  + 8LL);
    if ( v6 )
      operator delete[](v6);
    if ( (*((_QWORD *)this + 351))-- == 1LL )
      *((_QWORD *)this + 350) = 0LL;
    else
      ++*((_QWORD *)this + 350);
    _Mtx_unlock(v2);
    v8 = v5;
    v9 = v13;
    v10 = (*(__int64 (__fastcall **)(DockDeviceCollection *, _QWORD, void *, __int64))(*(_QWORD *)this + 80LL))(
            this,
            v12,
            v13,
            v8);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        201LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
        (const char *)(unsigned int)v10);
    if ( v9 )
      operator delete[](v9);
  }
  std::_Throw_C_error(v3);
  __debugbreak();
  return DockDeviceCollection::OnReportQueryCallback_::_1_::dtor_0();
}
