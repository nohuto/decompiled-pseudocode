/*
 * XREFs of TabletModeDragPattern::GetWindowTitleWithMap @ 0x1805DCD08
 * Callers:
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x1805DC6F4 (TabletModeDragPattern--GenerateStringWithMap.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUIApplicationView@@AEBQEBGPEAPEBG@Z @ 0x1805DCE70 (-_AddUpdateItem@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicat.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUIApplicationView@@@Z @ 0x1805DD020 (-s_LookupEntry@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicati.c)
 */

__int64 __fastcall TabletModeDragPattern::GetWindowTitleWithMap(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64),
        __int64 a2,
        LPWSTR *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  HRESULT v8; // ebx
  __int64 v9; // rdx
  HWND WindowForView; // rax
  __int64 v11; // rdx
  __int64 (__fastcall ***v13)(ApplicationViewHelpers *, GUID *, __int64); // [rsp+30h] [rbp-248h] BYREF
  LPWSTR ppwsz; // [rsp+38h] [rbp-240h] BYREF
  WCHAR pString[264]; // [rsp+40h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  *a3 = 0LL;
  v13 = this;
  v5 = *(_QWORD *)(a2 + 16);
  if ( v5
    && (v7 = CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
               v5,
               *(unsigned int *)(a2 + 4),
               &v13),
        *(_DWORD *)v7 == 1) )
  {
    v8 = SHStrDupW(*(LPCWSTR *)(v7 + 16), a3);
    if ( v8 < 0 )
    {
      v9 = 21LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v8);
    }
  }
  else
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(this, (struct IApplicationView *)a2);
    if ( !WindowForView )
    {
      v8 = -2147467259;
      v9 = 26LL;
      goto LABEL_12;
    }
    InternalGetWindowText(WindowForView, pString, 260);
    if ( SHStrDupW(pString, &ppwsz) >= 0
      && (int)CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
                a2,
                v11,
                &v13,
                &ppwsz) < 0 )
    {
      CoTaskMemFree(ppwsz);
    }
    v8 = SHStrDupW(pString, a3);
    if ( v8 < 0 )
    {
      v9 = 40LL;
      goto LABEL_12;
    }
  }
  return (unsigned int)v8;
}
