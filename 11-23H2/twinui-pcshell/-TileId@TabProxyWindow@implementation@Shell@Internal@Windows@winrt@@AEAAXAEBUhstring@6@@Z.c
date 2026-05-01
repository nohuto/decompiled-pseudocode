/*
 * XREFs of ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x180051930
 * Callers:
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x180050D84 (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x1800511E0 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180051A34 (--4hstring@winrt@@QEAAAEAU01@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x1801E485C (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        const struct winrt::hstring *a2)
{
  const unsigned __int16 *v3; // rax
  char *v4; // r11
  _QWORD *v5; // rax
  char v6; // bl
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  char *v11; // r8
  signed __int64 v12; // rax
  _QWORD v13[2]; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v15; // [rsp+48h] [rbp-11h]
  unsigned __int64 v16; // [rsp+50h] [rbp-9h]
  _BYTE v17[32]; // [rsp+58h] [rbp-1h] BYREF
  _BYTE v18[32]; // [rsp+78h] [rbp+1Fh] BYREF

  v3 = winrt::hstring::c_str(a2);
  std::wstring::wstring(v14, v3);
  v4 = (char *)v14;
  if ( v16 >= 8 )
    v4 = (char *)v14[0];
  if ( !v15 )
    goto LABEL_4;
  v11 = &v4[2 * v15 - 2];
  v12 = v11 - (char *)L":";
  while ( *(_WORD *)v11 != 58 )
  {
    if ( v11 == v4 )
      goto LABEL_4;
    v11 -= 2;
    v12 -= 2LL;
  }
  v10 = (v11 - v4) >> 1;
  if ( v10 == -1 )
  {
LABEL_4:
    v5 = (_QWORD *)std::wstring::wstring(v18, v14);
    v6 = 1;
  }
  else
  {
    v5 = (_QWORD *)std::wstring::substr(v14, v17, v10 + 1, -1LL, 0);
    v6 = 2;
  }
  v7 = v5;
  if ( v5[3] >= 8uLL )
    v7 = (_QWORD *)*v5;
  v8 = v5[2];
  v13[0] = v7;
  v13[1] = v8;
  winrt::hstring::operator=((char *)this + 64, v13);
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    std::wstring::_Tidy_deallocate(v17, v9);
  }
  if ( (v6 & 1) != 0 )
    std::wstring::_Tidy_deallocate(v18, v9);
  std::wstring::_Tidy_deallocate(v14, v9);
}
