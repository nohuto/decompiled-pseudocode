/*
 * XREFs of ?Base32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAEK@Z @ 0x18056AEF8
 * Callers:
 *     ?HashAndBase32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18056B098 (-HashAndBase32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18033CC7C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?GetChars@Base32Encoding@Common@@SAJPEBEKKPEAGPEAK@Z @ 0x1805E6F1C (-GetChars@Base32Encoding@Common@@SAJPEBEKKPEAGPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Base32Encode(__int64 a1, const unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v5; // edx
  unsigned __int16 *v6; // r9
  int Chars; // eax
  const char *v8; // r9
  int v10; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  std::wstring::append((wchar_t *)a1, 0xDuLL, 0);
  v6 = (unsigned __int16 *)a1;
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    v6 = *(unsigned __int16 **)a1;
  Chars = Common::Base32Encoding::GetChars(a2, v5, 0xDu, v6, &v12);
  if ( Chars < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x47,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      (const char *)(unsigned int)Chars,
      v10);
  if ( v12 != 13 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x48,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v8);
  return a1;
}
