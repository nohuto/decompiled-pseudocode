/*
 * XREFs of ??$_Med3_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x180328A14
 * Callers:
 *     ??$_Guess_median_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x1803284A4 (--$_Guess_median_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$l.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180126B5C (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

__int64 __fastcall std::_Med3_unchecked<std::wstring *,std::less<void>>(__int128 *a1, __int128 *a2, __int128 *a3)
{
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int64 result; // rax
  __int128 v9; // xmm2
  __int128 v10; // xmm3

  if ( (int)std::wstring::compare(a2, a1) < 0 )
  {
    v6 = *a2;
    v7 = a2[1];
    *a2 = *a1;
    a2[1] = a1[1];
    *a1 = v6;
    a1[1] = v7;
  }
  result = std::wstring::compare(a3, a2);
  if ( (int)result < 0 )
  {
    v9 = *a3;
    v10 = a3[1];
    *a3 = *a2;
    a3[1] = a2[1];
    *a2 = v9;
    a2[1] = v10;
    result = std::wstring::compare(a2, a1);
    if ( (int)result < 0 )
    {
      *a2 = *a1;
      a2[1] = a1[1];
      *a1 = v9;
      a1[1] = v10;
    }
  }
  return result;
}
