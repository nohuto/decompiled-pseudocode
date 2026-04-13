/*
 * XREFs of ??$find_if@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@std@@V_lambda_30b10436083aba01be8f7c4a25a13343_@@@std@@YA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@0@V10@0V_lambda_30b10436083aba01be8f7c4a25a13343_@@@Z @ 0x18006D794
 * Callers:
 *     ?AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@0@Z @ 0x18006F6A0 (-AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV-$map@V-$basic_s.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069E40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x18006E450 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
void ***__fastcall std::find_if<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>>,_lambda_30b10436083aba01be8f7c4a25a13343_>(
        void ***a1,
        void **a2,
        __int64 *a3,
        void **a4)
{
  const WCHAR *v8; // r8
  const WCHAR *v9; // rcx
  char v10; // si
  const WCHAR *v11; // r8
  const WCHAR *v12; // rcx
  void ***v13; // rax
  void **j; // rcx
  void **i; // rax
  LPCWCH lpString1[3]; // [rsp+38h] [rbp-71h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-59h]
  LPCWCH v19[3]; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-39h]
  LPCWCH lpString2[3]; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 v22; // [rsp+90h] [rbp-19h]
  LPCWCH v23[3]; // [rsp+98h] [rbp-11h] BYREF
  unsigned __int64 v24; // [rsp+B0h] [rbp+7h]
  LPCWCH *v25; // [rsp+B8h] [rbp+Fh]
  void **v26; // [rsp+C0h] [rbp+17h]

  v26 = a4;
  v18 = 7LL;
  lpString1[2] = 0LL;
  LOWORD(lpString1[0]) = 0;
  std::wstring::assign((void **)lpString1, a4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v20 = 7LL;
  v19[2] = 0LL;
  LOWORD(v19[0]) = 0;
  std::wstring::assign((void **)v19, a4 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  while ( a2 != (void **)a3 )
  {
    v25 = lpString2;
    v22 = 7LL;
    lpString2[2] = 0LL;
    LOWORD(lpString2[0]) = 0;
    std::wstring::assign((void **)lpString2, a2 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v24 = 7LL;
    v23[2] = 0LL;
    LOWORD(v23[0]) = 0;
    std::wstring::assign((void **)v23, a2 + 8, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v8 = (const WCHAR *)lpString2;
    if ( v22 >= 8 )
      v8 = lpString2[0];
    v9 = (const WCHAR *)lpString1;
    if ( v18 >= 8 )
      v9 = lpString1[0];
    v10 = 1;
    if ( CompareStringOrdinal(v9, -1, v8, -1, 1) != 2 )
      goto LABEL_13;
    v11 = (const WCHAR *)v23;
    if ( v24 >= 8 )
      v11 = v23[0];
    v12 = (const WCHAR *)v19;
    if ( v20 >= 8 )
      v12 = v19[0];
    if ( CompareStringOrdinal(v12, -1, v11, -1, 1) != 2 )
LABEL_13:
      v10 = 0;
    std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>(lpString2);
    if ( v10 )
      break;
    if ( !*((_BYTE *)a2 + 25) )
    {
      v13 = (void ***)a2[2];
      if ( *((_BYTE *)v13 + 25) )
      {
        for ( i = (void **)a2[1]; !*((_BYTE *)i + 25) && a2 == i[2]; i = (void **)i[1] )
          a2 = i;
        a2 = i;
      }
      else
      {
        a2 = (void **)a2[2];
        for ( j = *v13; !*((_BYTE *)j + 25); j = (void **)*j )
          a2 = j;
      }
    }
  }
  std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>(lpString1);
  *a1 = a2;
  std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>(a4);
  return a1;
}
