/*
 * XREFs of ?GetModuleVersion@@YAXPEBGPEAPEAG@Z @ 0x140065A98
 * Callers:
 *     ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@@@Z @ 0x140065668 (-GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014E00 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002850C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x140064AFC (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 */

void __fastcall GetModuleVersion(LPCWSTR lptstrFilename, unsigned __int16 **a2)
{
  DWORD FileVersionInfoSizeW; // eax
  DWORD v5; // esi
  void *v6; // rax
  void *v7; // rbx
  __int64 v8; // r8
  const char *v9; // r9
  int v10; // [rsp+20h] [rbp-E8h]
  int v11; // [rsp+28h] [rbp-E0h]
  int v12; // [rsp+30h] [rbp-D8h]
  unsigned int puLen; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID lpBuffer; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 *v15; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 v16[64]; // [rsp+60h] [rbp-A8h] BYREF

  if ( lptstrFilename )
  {
    FileVersionInfoSizeW = GetFileVersionInfoSizeW(lptstrFilename, 0LL);
    v5 = FileVersionInfoSizeW;
    if ( FileVersionInfoSizeW )
    {
      v6 = operator new[](FileVersionInfoSizeW, (const struct std::nothrow_t *)&std::nothrow);
      v7 = v6;
      if ( v6 )
      {
        memset_0(v6, 0, v5);
        if ( GetFileVersionInfoW(lptstrFilename, 0, v5, v7) )
        {
          lpBuffer = 0LL;
          puLen = 0;
          if ( VerQueryValueW(v7, L"\\", &lpBuffer, &puLen) )
          {
            if ( puLen )
            {
              memset_0(v16, 0, sizeof(v16));
              v12 = *((unsigned __int16 *)lpBuffer + 6);
              v11 = *((unsigned __int16 *)lpBuffer + 7);
              v10 = *((unsigned __int16 *)lpBuffer + 4);
              if ( StringCchPrintfW(
                     v16,
                     0x40uLL,
                     (size_t *)L"%d.%d.%d.%d",
                     *((unsigned __int16 *)lpBuffer + 5),
                     v10,
                     v11,
                     v12) >= 0 )
              {
                wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                  &v15,
                  (char *)v16,
                  v8,
                  v9);
                if ( v15 )
                  *a2 = v15;
              }
            }
          }
        }
        operator delete(v7);
      }
    }
  }
}
