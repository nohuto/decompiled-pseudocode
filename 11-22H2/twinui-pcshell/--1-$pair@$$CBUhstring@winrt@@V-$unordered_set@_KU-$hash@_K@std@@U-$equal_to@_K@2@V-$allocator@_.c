/*
 * XREFs of ??1?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@QEAA@XZ @ 0x18070E890
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetAllWindows_::_1_::dtor$2 @ 0x1802B5C0D (_winrt--Windows--Internal--Shell--implementation--RemoteSessionPersistenceHelper--G_ea_1802B5C0D.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>::~pair<winrt::hstring const,std::unordered_set<unsigned __int64>>(
        __int64 a1)
{
  void *v2; // rcx
  _QWORD **v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)(a1 + 32);
  v7 = v2;
  v6 = (*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v6 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v7, &v6);
    v2 = v7;
  }
  operator delete(v2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v3 = *(_QWORD ***)(a1 + 16);
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
  std::_Deallocate<16,0>(*(void **)(a1 + 16), 0x18uLL);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1);
}
