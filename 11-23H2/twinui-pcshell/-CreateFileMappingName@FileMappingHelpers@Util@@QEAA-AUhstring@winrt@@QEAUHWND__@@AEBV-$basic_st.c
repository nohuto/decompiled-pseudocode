/*
 * XREFs of ?CreateFileMappingName@FileMappingHelpers@Util@@QEAA?AUhstring@winrt@@QEAUHWND__@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBU34@@Z @ 0x18070FF08
 * Callers:
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x180716AB0 (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 * Callees:
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1800B54E0 (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x180466940 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18070EFA4 (--Hwinrt@@YA-AUhstring@0@AEBU10@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

// Hidden C++ exception states: #wind=5
struct winrt::impl::shared_hstring_header *__fastcall Util::FileMappingHelpers::CreateFileMappingName(
        _BYTE *a1,
        struct winrt::impl::shared_hstring_header *a2,
        unsigned int a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v7; // rsi
  _BYTE *v8; // r9
  winrt::impl *v9; // rcx
  unsigned __int64 v10; // r8
  _BYTE *v11; // r9
  struct winrt::impl::shared_hstring_header **v12; // rax
  __int64 *v13; // rax
  _BYTE *v14; // r9
  winrt::impl *v15; // rcx
  struct winrt::impl::hstring_header *hstring_on_heap; // [rsp+20h] [rbp-61h] BYREF
  struct winrt::impl::shared_hstring_header *v18[2]; // [rsp+28h] [rbp-59h] BYREF
  volatile signed __int32 *v19; // [rsp+38h] [rbp-49h] BYREF
  winrt::impl *v20[2]; // [rsp+40h] [rbp-41h] BYREF
  winrt::impl *v21; // [rsp+50h] [rbp-31h]
  unsigned __int64 v22; // [rsp+58h] [rbp-29h]
  _QWORD v23[9]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v24[6]; // [rsp+AAh] [rbp+29h] BYREF

  v18[0] = a2;
  if ( *a1 )
  {
    v7 = *a4;
    v8 = v24;
    do
    {
      v8 -= 2;
      *(_WORD *)v8 = a3 % 0xA + 48;
      a3 /= 0xAu;
    }
    while ( a3 );
    std::wstring::wstring((__int64)v20, v8, v24);
    v9 = (winrt::impl *)v20;
    if ( v22 >= 8 )
      v9 = v20[0];
    hstring_on_heap = winrt::impl::create_hstring_on_heap(v9, (winrt::impl *)(unsigned int)v21);
    v10 = a4[1];
    v11 = v24;
    do
    {
      v11 -= 2;
      *(_WORD *)v11 = v10 % 0xA + 48;
      v10 /= 0xAuLL;
    }
    while ( v10 );
    std::wstring::wstring((__int64)v23, v11, v24);
    v12 = winrt::operator+(v18, a5, v23);
    v13 = (__int64 *)winrt::operator+((__int64)&v19, (__int64)v12, (__int64)&hstring_on_heap);
    winrt::operator+((struct winrt::impl::shared_hstring_header **)a2, v13, v7);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v18);
    std::wstring::_Tidy_deallocate((__int64)v23);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&hstring_on_heap);
  }
  else
  {
    v14 = v24;
    do
    {
      v14 -= 2;
      *(_WORD *)v14 = a3 % 0xA + 48;
      a3 /= 0xAu;
    }
    while ( a3 );
    std::wstring::wstring((__int64)v20, v14, v24);
    v15 = (winrt::impl *)v20;
    if ( v22 >= 8 )
      v15 = v20[0];
    hstring_on_heap = winrt::impl::create_hstring_on_heap(v15, (winrt::impl *)(unsigned int)v21);
    winrt::operator+((__int64)a2, (__int64)a5, (__int64)&hstring_on_heap);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&hstring_on_heap);
  }
  std::wstring::_Tidy_deallocate((__int64)v20);
  return a2;
}
