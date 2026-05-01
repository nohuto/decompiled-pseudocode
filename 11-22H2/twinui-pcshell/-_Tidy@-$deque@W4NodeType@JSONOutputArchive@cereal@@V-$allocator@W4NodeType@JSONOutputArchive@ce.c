/*
 * XREFs of ?_Tidy@?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@AEAAXXZ @ 0x1800C0FB4
 * Callers:
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x1800C2604 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     ??1?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@QEAA@XZ @ 0x1802D3C04 (--1-$deque@W4NodeType@JSONOutputArchive@cereal@@V-$allocator@W4NodeType@JSONOutputArchive@cereal.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::deque<enum cereal::JSONOutputArchive::NodeType>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  void *v4; // rcx
  __int64 v5; // rax
  void *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v5 = v2 - 1;
    a1[4] = v5;
    if ( !v5 )
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
  v6 = (void *)a1[1];
  if ( v6 )
  {
    v7 = 8LL * a1[2];
    v8 = v7;
    v9 = v6;
    if ( v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v9, &v8);
      v7 = v8;
      v6 = v9;
    }
    operator delete(v6, v7);
  }
  a1[2] = 0LL;
  a1[1] = 0LL;
}
