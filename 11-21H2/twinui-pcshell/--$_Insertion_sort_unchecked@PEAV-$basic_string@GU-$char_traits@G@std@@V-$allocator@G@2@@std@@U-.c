/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0U?$less@X@0@@Z @ 0x18032854C
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803293C8 (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180126B5C (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$_Move_backward_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x180328AC0 (--$_Move_backward_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 */

__int64 __fastcall std::_Insertion_sort_unchecked<std::wstring *,std::less<void>>(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int128 *v5; // r14
  __int128 v6; // xmm0
  __int64 i; // rsi
  __int128 v9; // [rsp+20h] [rbp-50h]
  __int128 v10; // [rsp+40h] [rbp-30h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h]

  if ( a1 != a2 )
  {
    v4 = a1 + 32;
    if ( a1 + 32 != a2 )
    {
      while ( 1 )
      {
        v5 = (__int128 *)v4;
        v10 = *(_OWORD *)v4;
        v9 = v10;
        v6 = *(_OWORD *)(v4 + 16);
        *(_QWORD *)(v4 + 16) = 0LL;
        *(_QWORD *)(v4 + 24) = 7LL;
        *(_WORD *)v4 = 0;
        v11 = v6;
        if ( (int)std::wstring::compare(&v10, (_QWORD *)a1) >= 0 )
          break;
        std::_Move_backward_unchecked<std::wstring *,std::wstring *>(a1, v4, v4 + 32);
        if ( (__int128 *)a1 != &v10 )
        {
          std::wstring::_Tidy_deallocate(a1);
          *(_OWORD *)a1 = v9;
          *(_OWORD *)(a1 + 16) = v6;
LABEL_13:
          LOWORD(v10) = 0;
          *((_QWORD *)&v11 + 1) = 7LL;
          *(_QWORD *)&v11 = 0LL;
        }
LABEL_14:
        std::wstring::_Tidy_deallocate((__int64)&v10);
        v4 += 32LL;
        if ( v4 == a2 )
          return a2;
      }
      for ( i = v4; ; v5 = (__int128 *)i )
      {
        i -= 32LL;
        if ( (int)std::wstring::compare(&v10, (_QWORD *)i) >= 0 )
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
      if ( v5 == &v10 )
        goto LABEL_14;
      std::wstring::_Tidy_deallocate((__int64)v5);
      *v5 = v9;
      v5[1] = v6;
      goto LABEL_13;
    }
  }
  return a2;
}
