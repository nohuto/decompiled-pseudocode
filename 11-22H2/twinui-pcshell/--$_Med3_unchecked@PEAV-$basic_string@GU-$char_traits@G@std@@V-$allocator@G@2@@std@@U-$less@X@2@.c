/*
 * XREFs of ??$_Med3_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x1803F5D08
 * Callers:
 *     ??$_Guess_median_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x1803F5798 (--$_Guess_median_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$l.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x1802D3736 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

char __fastcall std::_Med3_unchecked<std::wstring *,std::less<void>>(char *a1, char *a2, char *a3)
{
  int v6; // eax
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  int v9; // eax
  __int128 v10; // xmm2
  __int128 v11; // xmm3

  LOBYTE(v6) = std::wstring::compare(a2, a1);
  if ( v6 < 0 )
  {
    v7 = *(_OWORD *)a2;
    v8 = *((_OWORD *)a2 + 1);
    *(_OWORD *)a2 = *(_OWORD *)a1;
    *((_OWORD *)a2 + 1) = *((_OWORD *)a1 + 1);
    *(_OWORD *)a1 = v7;
    *((_OWORD *)a1 + 1) = v8;
  }
  LOBYTE(v9) = std::wstring::compare(a3, a2);
  if ( v9 < 0 )
  {
    v10 = *(_OWORD *)a3;
    v11 = *((_OWORD *)a3 + 1);
    *(_OWORD *)a3 = *(_OWORD *)a2;
    *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
    *(_OWORD *)a2 = v10;
    *((_OWORD *)a2 + 1) = v11;
    LOBYTE(v9) = std::wstring::compare(a2, a1);
    if ( v9 < 0 )
    {
      *(_OWORD *)a2 = *(_OWORD *)a1;
      *((_OWORD *)a2 + 1) = *((_OWORD *)a1 + 1);
      *(_OWORD *)a1 = v10;
      *((_OWORD *)a1 + 1) = v11;
    }
  }
  return v9;
}
