/*
 * XREFs of ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x18056A014
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180569E60 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18056A14C (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     IsPicRetrieveFileInfoPresent @ 0x18018D368 (IsPicRetrieveFileInfoPresent.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_FILE_INFO@@P6AJPEAU1@@Z$1?PicFreeFileInfo@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180569C54 (--1-$unique_storage@U-$resource_policy@PEAU_FILE_INFO@@P6AJPEAU1@@Z$1-PicFreeFileInfo@@YAJ0@ZU-$.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetAppInventoryData(__int64 a1, __int64 a2)
{
  _WORD *v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  _WORD *v7; // rdx
  unsigned __int64 v8; // r8
  _WORD *v9; // rdx
  _QWORD *v11; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_WORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 7LL;
  *(_WORD *)(a1 + 64) = 0;
  if ( IsPicRetrieveFileInfoPresent() )
  {
    v11 = 0LL;
    if ( (int)PicRetrieveFileInfo(a2, 16LL, &v11) >= 0 )
    {
      v4 = (_WORD *)v11[6];
      v5 = -1LL;
      v6 = -1LL;
      do
        ++v6;
      while ( v4[v6] );
      std::wstring::assign((char *)a1, v4, v6);
      v7 = (_WORD *)v11[7];
      v8 = -1LL;
      do
        ++v8;
      while ( v7[v8] );
      std::wstring::assign((char *)(a1 + 32), v7, v8);
      v9 = (_WORD *)v11[2];
      do
        ++v5;
      while ( v9[v5] );
      std::wstring::assign((char *)(a1 + 64), v9, v5);
    }
    wil::details::unique_storage<wil::details::resource_policy<_FILE_INFO *,long (*)(_FILE_INFO *),&long PicFreeFileInfo(_FILE_INFO *),wistd::integral_constant<unsigned __int64,0>,_FILE_INFO *,_FILE_INFO *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_INFO *,long (*)(_FILE_INFO *),&long PicFreeFileInfo(_FILE_INFO *),wistd::integral_constant<unsigned __int64,0>,_FILE_INFO *,_FILE_INFO *,0,std::nullptr_t>>(&v11);
  }
  return a1;
}
