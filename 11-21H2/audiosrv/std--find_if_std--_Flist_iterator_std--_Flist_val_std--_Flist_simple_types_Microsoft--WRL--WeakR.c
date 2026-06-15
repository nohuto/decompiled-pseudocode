/*
 * XREFs of std::find_if_std::_Flist_iterator_std::_Flist_val_std::_Flist_simple_types_Microsoft::WRL::WeakRef_______lambda_8ea9f2c5e3a9fcb3919d37e759784c23___ @ 0x1800D27A8
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800D31F8 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_8ea9f2c5e3a9fcb3919d37e759784c23_::operator() @ 0x1800D2E38 (_lambda_8ea9f2c5e3a9fcb3919d37e759784c23_--operator().c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::find_if_std::_Flist_iterator_std::_Flist_val_std::_Flist_simple_types_Microsoft::WRL::WeakRef_______lambda_8ea9f2c5e3a9fcb3919d37e759784c23___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  while ( a2 != a3 )
  {
    v8 = a2[1];
    v10 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    if ( (unsigned __int8)lambda_8ea9f2c5e3a9fcb3919d37e759784c23_::operator()(a4, &v10) )
      break;
    a2 = (_QWORD *)*a2;
  }
  *a1 = a2;
  return a1;
}
