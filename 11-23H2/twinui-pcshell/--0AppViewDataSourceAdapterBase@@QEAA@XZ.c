/*
 * XREFs of ??0AppViewDataSourceAdapterBase@@QEAA@XZ @ 0x180080F30
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180080E70 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VAppViewDataSourceAdapterBase@@UIAppVi.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180093A9C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
AppViewDataSourceAdapterBase *__fastcall AppViewDataSourceAdapterBase::AppViewDataSourceAdapterBase(
        AppViewDataSourceAdapterBase *this)
{
  __int64 *v2; // rbx
  __int64 size_of; // rax
  __int64 v4; // rax

  *(_QWORD *)this = &AppViewDataSourceAdapterBase::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 1) = &AppViewDataSourceAdapterBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveShellHookNotification>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = this;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = (char *)this + 8;
  v2 = (__int64 *)((char *)this + 96);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  size_of = std::_Get_size_of_n<48>(1LL);
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *v2 = v4;
  *((_QWORD *)this + 14) = 0LL;
  return this;
}
