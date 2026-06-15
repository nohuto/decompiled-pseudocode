/*
 * XREFs of ??1?$list@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x180014C6C
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x180015100 (--1CProcess@@MEAA@XZ.c)
 *     _CProcess::CProcess_::_1_::dtor$25 @ 0x1800458A9 (_CProcess--CProcess_--_1_--dtor$25.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::list<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>::~list<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
        char **a1)
{
  char *v2; // rdx
  char *v3; // rbx
  char *v4; // rsi
  __int64 v5; // rcx

  v2 = *a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *(char **)v2;
  if ( *(_QWORD *)v2 )
  {
    do
    {
      v4 = *(char **)v3;
      v5 = *((_QWORD *)v3 + 3);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      std::_Deallocate<16,0>(v3, 0x20uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
