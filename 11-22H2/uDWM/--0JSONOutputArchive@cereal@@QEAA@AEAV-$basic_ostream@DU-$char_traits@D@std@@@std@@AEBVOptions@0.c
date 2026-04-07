/*
 * XREFs of ??0JSONOutputArchive@cereal@@QEAA@AEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEBVOptions@01@@Z @ 0x1800F0CE4
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800F2BC4 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001BD70 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180066340 (_CxxThrowException_0.c)
 *     ??$_Emplace_back_internal@I@?$deque@IV?$allocator@I@std@@@std@@AEAAX$$QEAI@Z @ 0x1800EF32C (--$_Emplace_back_internal@I@-$deque@IV-$allocator@I@std@@@std@@AEAAX$$QEAI@Z.c)
 *     ??$_Emplace_back_internal@W4NodeType@JSONOutputArchive@cereal@@@?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@AEAAX$$QEAW4NodeType@JSONOutputArchive@cereal@@@Z @ 0x1800EF3E0 (--$_Emplace_back_internal@W4NodeType@JSONOutputArchive@cereal@@@-$deque@W4NodeType@JSONOutputArc.c)
 *     ??0?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z @ 0x1800F0808 (--0-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall cereal::JSONOutputArchive::JSONOutputArchive(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  int v8; // ecx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  cereal::OutputArchive<cereal::JSONOutputArchive,0>::OutputArchive<cereal::JSONOutputArchive,0>(a1, a1);
  *(_QWORD *)a1 = &cereal::JSONOutputArchive::`vftable';
  *(_QWORD *)(a1 + 320) = a2;
  *(_QWORD *)(a1 + 328) = a1 + 320;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 512LL;
  *(_DWORD *)(a1 + 384) = 324;
  *(_BYTE *)(a1 + 388) = 0;
  *(_BYTE *)(a1 + 392) = 32;
  *(_QWORD *)(a1 + 396) = 4LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  v13 = a1 + 416;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v6[1] = 0LL;
  *(_QWORD *)(a1 + 416) = v6;
  *v6 = a1 + 416;
  v13 = a1 + 456;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v7[1] = 0LL;
  *(_QWORD *)(a1 + 456) = v7;
  *v7 = a1 + 456;
  *(_DWORD *)(a1 + 384) = *(_DWORD *)a3;
  v8 = *(_DWORD *)(a3 + 8);
  v9 = *(char *)(a3 + 4);
  if ( (unsigned __int8)v9 > 0x20u || (v10 = 0x100002600LL, !_bittest64(&v10, v9)) )
  {
    pExceptionObject[0] = &stdext::exception::`vftable';
    pExceptionObject[1] = "rapidjson";
    throw (stdext::exception *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 392) = v9;
  *(_DWORD *)(a1 + 396) = v8;
  LODWORD(v13) = 0;
  std::deque<unsigned int>::_Emplace_back_internal<unsigned int>(a1 + 416, (unsigned int *)&v13);
  LODWORD(v13) = 0;
  std::deque<enum cereal::JSONOutputArchive::NodeType>::_Emplace_back_internal<enum cereal::JSONOutputArchive::NodeType>(
    a1 + 456,
    (unsigned int *)&v13);
  return a1;
}
