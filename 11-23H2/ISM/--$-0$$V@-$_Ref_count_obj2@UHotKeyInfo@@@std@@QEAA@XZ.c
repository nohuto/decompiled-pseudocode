/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@UHotKeyInfo@@@std@@QEAA@XZ @ 0x1801EEE58
 * Callers:
 *     _lambda_c0e0b7aaf59f49f216d7dff859f9f140_::operator() @ 0x180064B40 (_lambda_c0e0b7aaf59f49f216d7dff859f9f140_--operator().c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj2<HotKeyInfo>::_Ref_count_obj2<HotKeyInfo>(__int64 a1)
{
  _QWORD *v2; // rax

  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<HotKeyInfo>::`vftable';
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *(_QWORD *)(a1 + 56) = v2;
  return a1;
}
