/*
 * XREFs of ??1?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@QEAA@XZ @ 0x180417168
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetAllWindows_::_1_::dtor$4 @ 0x1802B5C31 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionPersistenceHelper--G_ea_1802B5C31.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetWindowTabAllotment_::_1_::dtor$0 @ 0x1802E7DD9 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--GetWindowTabAllotment_--_1_--dt.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::unordered_set<unsigned __int64>::~unordered_set<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>,std::allocator<unsigned __int64>>(
        __int64 a1)
{
  void *v2; // rcx
  _QWORD **v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)(a1 + 24);
  v7 = v2;
  v6 = (*(_QWORD *)(a1 + 32) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v6 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v7, &v6);
    v2 = v7;
  }
  operator delete(v2);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v3 = *(_QWORD ***)(a1 + 8);
  *v3[1] = 0LL;
  v4 = *v3;
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      std::_Deallocate<16,0>(v4, 0x18uLL);
      v4 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x18uLL);
}
