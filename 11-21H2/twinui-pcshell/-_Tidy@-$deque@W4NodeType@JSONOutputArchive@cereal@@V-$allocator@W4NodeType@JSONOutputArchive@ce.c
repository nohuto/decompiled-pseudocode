/*
 * XREFs of ?_Tidy@?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@AEAAXXZ @ 0x180089004
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x180085E80 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x180121074 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     ??1?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@QEAA@XZ @ 0x18022C2EC (--1-$deque@W4NodeType@JSONOutputArchive@cereal@@V-$allocator@W4NodeType@JSONOutputArchive@cereal.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::deque<enum cereal::JSONOutputArchive::NodeType>::_Tidy(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1[4];
  while ( v1 )
  {
    a1[4] = --v1;
    if ( !v1 )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(a1[1] + 8 * v3);
    if ( v4 )
      operator delete(v4, 0x10uLL);
  }
  v5 = (void *)a1[1];
  if ( v5 )
  {
    v6 = 8LL * a1[2];
    v7 = v6;
    v8 = v5;
    if ( v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v8, &v7);
      v6 = v7;
      v5 = v8;
    }
    operator delete(v5, v6);
  }
  a1[2] = 0LL;
  a1[1] = 0LL;
}
