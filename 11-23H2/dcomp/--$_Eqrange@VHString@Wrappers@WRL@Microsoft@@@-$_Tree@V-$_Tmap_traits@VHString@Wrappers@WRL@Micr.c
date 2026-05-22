/*
 * XREFs of ??$_Eqrange@VHString@Wrappers@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@std@@PEAU12@@1@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180194764
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@QEAA_KAEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180195380 (-erase@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$RefPtr@VCompositionAnimation@.c)
 * Callees:
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18005CCEC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>,0>>::_Eqrange<Microsoft::WRL::Wrappers::HString>(
        __int64 *a1,
        __int64 *a2,
        Microsoft::WRL::Wrappers::Details **a3)
{
  __int64 v3; // rbp
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 i; // rbx
  __int64 *result; // rax

  v3 = *a1;
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 8);
  while ( !*(_BYTE *)(v8 + 25) )
  {
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         *(Microsoft::WRL::Wrappers::Details **)(v8 + 32),
                         (HSTRING)*a3,
                         (HSTRING)a3) == -1 )
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
    else
    {
      if ( *(_BYTE *)(v7 + 25)
        && (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                           *a3,
                           *(HSTRING *)(v8 + 32),
                           (HSTRING)a3) == -1 )
      {
        v7 = v8;
      }
      v3 = v8;
      v8 = *(_QWORD *)v8;
    }
  }
  if ( *(_BYTE *)(v7 + 25) )
    i = *a1 + 8;
  else
    i = v7;
LABEL_12:
  for ( i = *(_QWORD *)i; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
  {
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a3, *(HSTRING *)(i + 32), (HSTRING)a3) == -1 )
    {
      v7 = i;
      goto LABEL_12;
    }
  }
  result = a2;
  *a2 = v3;
  a2[1] = v7;
  return result;
}
