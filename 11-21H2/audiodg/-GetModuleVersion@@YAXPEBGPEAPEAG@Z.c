/*
 * XREFs of ?GetModuleVersion@@YAXPEBGPEAPEAG@Z @ 0x140026CD4
 * Callers:
 *     ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG4PEA_N@Z @ 0x140008030 (-GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG4PEA_N@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140009BF4 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014AC8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     memcpy_s @ 0x140026F40 (memcpy_s.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC8C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 */

void __fastcall GetModuleVersion(LPCWSTR lptstrFilename, unsigned __int16 **a2)
{
  DWORD FileVersionInfoSizeW; // eax
  DWORD v5; // r14d
  void *v6; // rax
  void *v7; // rbx
  __int64 v8; // rcx
  unsigned __int16 *v9; // rax
  rsize_t v10; // r14
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // rsi
  unsigned int puLen; // [rsp+40h] [rbp-79h] BYREF
  LPVOID lpBuffer; // [rsp+48h] [rbp-71h] BYREF
  void *v15; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int16 Source[64]; // [rsp+60h] [rbp-59h] BYREF

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
              memset_0(Source, 0, sizeof(Source));
              if ( (int)StringCchPrintfW(
                          Source,
                          64LL,
                          L"%d.%d.%d.%d",
                          *((unsigned __int16 *)lpBuffer + 5),
                          *((unsigned __int16 *)lpBuffer + 4),
                          *((unsigned __int16 *)lpBuffer + 7),
                          *((unsigned __int16 *)lpBuffer + 6)) >= 0 )
              {
                v8 = 0x7FFFFFFFLL;
                v9 = Source;
                do
                {
                  if ( !*v9 )
                    break;
                  ++v9;
                  --v8;
                }
                while ( v8 );
                v10 = 2 * (v9 - Source);
                v11 = (unsigned __int16 *)CoTaskMemAlloc(v10 + 2);
                v12 = v11;
                if ( v11 )
                {
                  memcpy_s(v11, v10 + 2, Source, v10);
                  v12[v10 / 2] = 0;
                  *a2 = v12;
                }
                v15 = 0LL;
                wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v15);
              }
            }
          }
        }
        operator delete(v7);
      }
    }
  }
}
