/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_967c2ed818824c5314a20ec3af46b793_@@_KPEB_W_K@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_967c2ed818824c5314a20ec3af46b793_@@_KPEB_W2@Z @ 0x18001EAD4
 * Callers:
 *     ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_KQEB_W0@Z @ 0x18001F88C (-insert@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_KQEB_W0@Z.c)
 * Callees:
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180011B60 (-_Xlen_string@std@@YAXXZ.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18001217C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@CA_K_K00@Z @ 0x18001E5D0 (-_Calculate_growth@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@CA_K_K00@Z.c)
 */

void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_967c2ed818824c5314a20ec3af46b793_,unsigned __int64,wchar_t const *,unsigned __int64>(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  void *v6; // r14
  unsigned __int64 v8; // r15
  char *v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 size_of; // rax
  char *v12; // rbp
  size_t v13; // r14
  size_t v14; // r8
  char *v15; // rdi
  void *v16; // rbx

  v6 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v6 < a2 )
    std::_Xlen_string();
  v8 = (unsigned __int64)Src[3];
  v9 = (char *)v6 + a2;
  v10 = std::wstring::_Calculate_growth((__int64)v6 + a2, v8, 0x7FFFFFFFFFFFFFFEuLL);
  size_of = std::_Get_size_of_n<2>(v10 + 1);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  Src[2] = v9;
  v13 = 2LL * (_QWORD)v6 + 2;
  Src[3] = (void *)v10;
  v14 = 2 * a6;
  v15 = &v12[2 * a6];
  if ( v8 < 8 )
  {
    memcpy_0(v12, L"FL_", v14);
    memcpy_0(v15, Src, v13);
  }
  else
  {
    v16 = *Src;
    memcpy_0(v12, L"FL_", v14);
    memcpy_0(v15, v16, v13);
    std::_Deallocate<16,0>(v16, 2 * v8 + 2);
  }
  *Src = v12;
  return Src;
}
