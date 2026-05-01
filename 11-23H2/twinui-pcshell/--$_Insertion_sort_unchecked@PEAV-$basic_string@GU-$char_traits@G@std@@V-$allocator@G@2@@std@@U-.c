/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0U?$less@X@0@@Z @ 0x1803F5840
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803F6540 (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x1802D3736 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ??$_Move_backward_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x1803F5DB4 (--$_Move_backward_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 */

__int64 __fastcall std::_Insertion_sort_unchecked<std::wstring *,std::less<void>>(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int128 *v5; // r14
  __int128 v6; // xmm0
  int v7; // eax
  __int64 i; // rsi
  int v9; // eax
  __int128 v11; // [rsp+20h] [rbp-50h]
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h]

  if ( a1 != a2 )
  {
    v4 = a1 + 32;
    if ( a1 + 32 != a2 )
    {
      while ( 1 )
      {
        v5 = (__int128 *)v4;
        v12 = *(_OWORD *)v4;
        v11 = v12;
        v6 = *(_OWORD *)(v4 + 16);
        *(_QWORD *)(v4 + 16) = 0LL;
        *(_QWORD *)(v4 + 24) = 7LL;
        *(_WORD *)v4 = 0;
        v13 = v6;
        LOBYTE(v7) = std::wstring::compare((char *)&v12, (char *)a1);
        if ( v7 >= 0 )
          break;
        std::_Move_backward_unchecked<std::wstring *,std::wstring *>(a1, v4, v4 + 32);
        if ( (__int128 *)a1 != &v12 )
        {
          std::wstring::_Tidy_deallocate(a1);
          *(_OWORD *)a1 = v11;
          *(_OWORD *)(a1 + 16) = v6;
LABEL_13:
          LOWORD(v12) = 0;
          *((_QWORD *)&v13 + 1) = 7LL;
          *(_QWORD *)&v13 = 0LL;
        }
LABEL_14:
        std::wstring::_Tidy_deallocate((__int64)&v12);
        v4 += 32LL;
        if ( v4 == a2 )
          return a2;
      }
      for ( i = v4; ; v5 = (__int128 *)i )
      {
        i -= 32LL;
        LOBYTE(v9) = std::wstring::compare((char *)&v12, (char *)i);
        if ( v9 >= 0 )
          break;
        if ( v5 != (__int128 *)i )
        {
          std::wstring::_Tidy_deallocate((__int64)v5);
          *v5 = *(_OWORD *)i;
          v5[1] = *(_OWORD *)(i + 16);
          *(_QWORD *)(i + 16) = 0LL;
          *(_QWORD *)(i + 24) = 7LL;
          *(_WORD *)i = 0;
        }
      }
      if ( v5 == &v12 )
        goto LABEL_14;
      std::wstring::_Tidy_deallocate((__int64)v5);
      *v5 = v11;
      v5[1] = v6;
      goto LABEL_13;
    }
  }
  return a2;
}
