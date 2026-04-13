/*
 * XREFs of ?IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z @ 0x18005FE4C
 * Callers:
 *     _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x18005898C (_lambda_929976d9f769b9ae6bfa1e1f0592e0ca_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180057EB4 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     _anonymous_namespace_::SplitString @ 0x180064B8C (_anonymous_namespace_--SplitString.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069E40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall ContentManagement::IsHighPriorityEvent(ContentManagement *this, const unsigned __int16 *a2)
{
  __int64 v2; // r8
  LPCWCH *v4; // rbx
  const WCHAR *v5; // rcx
  __int64 v6[3]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v7[3]; // [rsp+50h] [rbp-11h] BYREF
  LPCWCH lpString1[2]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v9; // [rsp+78h] [rbp+17h]
  unsigned __int64 v10; // [rsp+80h] [rbp+1Fh]
  void *v11[2]; // [rsp+88h] [rbp+27h] BYREF
  __int64 v12; // [rsp+98h] [rbp+37h]
  unsigned __int64 v13; // [rsp+A0h] [rbp+3Fh]

  v13 = 7LL;
  v12 = 0LL;
  LOWORD(v11[0]) = 0;
  if ( *(_WORD *)this )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( *((_WORD *)this + v2) );
  }
  std::wstring::assign(v11, this);
  if ( v12 )
  {
    anonymous_namespace_::SplitString(v7, v11, L"?");
    if ( (v7[1] - v7[0]) >> 5 == 2 )
    {
      anonymous_namespace_::SplitString(v6, v7[0] + 32, L"=");
      if ( (v6[1] - v6[0]) >> 5 == 2 )
      {
        v10 = 7LL;
        v9 = 0LL;
        LOWORD(lpString1[0]) = 0;
        std::wstring::assign(lpString1);
        std::vector<std::wstring>::~vector<std::wstring>(v6);
        std::vector<std::wstring>::~vector<std::wstring>(v7);
        if ( v13 < 8 )
          goto LABEL_13;
        goto LABEL_12;
      }
      std::vector<std::wstring>::~vector<std::wstring>(v6);
    }
    std::vector<std::wstring>::~vector<std::wstring>(v7);
  }
  v10 = 7LL;
  v9 = 0LL;
  LOWORD(lpString1[0]) = 0;
  if ( v13 < 8 )
    return 0;
LABEL_12:
  operator delete(v11[0]);
LABEL_13:
  if ( !v9 )
  {
LABEL_14:
    if ( v10 >= 8 )
      operator delete((void *)lpString1[0]);
    return 0;
  }
  v4 = (LPCWCH *)off_1801092C8;
  while ( 1 )
  {
    v5 = (const WCHAR *)lpString1;
    if ( v10 >= 8 )
      v5 = lpString1[0];
    if ( CompareStringOrdinal(v5, -1, *v4, -1, 1) == 2 )
      break;
    if ( ++v4 == (LPCWCH *)&off_1801092D0 )
      goto LABEL_14;
  }
  if ( v10 >= 8 )
    operator delete((void *)lpString1[0]);
  return 1;
}
