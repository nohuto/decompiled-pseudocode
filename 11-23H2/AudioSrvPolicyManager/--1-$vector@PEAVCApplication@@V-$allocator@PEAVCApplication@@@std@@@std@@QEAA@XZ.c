/*
 * XREFs of ??1?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@QEAA@XZ @ 0x1800115D8
 * Callers:
 *     _TSSession::TSSession_::_1_::dtor$3 @ 0x18004985C (_TSSession--TSSession_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18001EB70 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::vector<CApplication *>::~vector<CApplication *>(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 16) - (_QWORD)v2;
    v6 = v2;
    v4 = v3 & 0xFFFFFFFFFFFFFFF8uLL;
    v5 = v4;
    if ( v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v5);
      v4 = v5;
      v2 = v6;
    }
    operator delete(v2, v4);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
