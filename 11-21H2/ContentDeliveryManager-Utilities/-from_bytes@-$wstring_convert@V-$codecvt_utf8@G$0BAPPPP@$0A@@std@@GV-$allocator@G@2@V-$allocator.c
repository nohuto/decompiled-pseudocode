/*
 * XREFs of ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18007C2C4
 * Callers:
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180079058 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1800222FC (_CxxThrowException_0.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180069CAC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069E40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??0range_error@std@@QEAA@PEBD@Z @ 0x1800762F8 (--0range_error@std@@QEAA@PEBD@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18007BA24 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::from_bytes(
        __int64 a1,
        void **a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  _DWORD *v8; // r15
  unsigned __int8 *i; // r8
  char *v10; // r14
  int v11; // eax
  const char *v12; // rdx
  unsigned __int8 *v14; // [rsp+50h] [rbp-59h] BYREF
  void **v15; // [rsp+58h] [rbp-51h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+60h] [rbp-49h] BYREF
  void *v17[2]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v18; // [rsp+88h] [rbp-21h]
  unsigned __int64 v19; // [rsp+90h] [rbp-19h]
  void *v20[2]; // [rsp+98h] [rbp-11h] BYREF
  unsigned __int64 v21; // [rsp+A8h] [rbp-1h]
  unsigned __int64 v22; // [rsp+B0h] [rbp+7h]

  v15 = a2;
  v14 = a3;
  v22 = 7LL;
  v21 = 0LL;
  LOWORD(v20[0]) = 0;
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  v8 = (_DWORD *)(a1 + 88);
  if ( !*(_BYTE *)(a1 + 92) )
    *v8 = `std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::from_bytes'::`2'::_State0;
  std::wstring::append(v20, 8uLL, 0);
  *(_QWORD *)(a1 + 96) = 0LL;
  i = v14;
  if ( v14 == a4 )
  {
LABEL_19:
    a2[3] = (void *)7;
    a2[2] = 0LL;
    *(_WORD *)a2 = 0;
    std::wstring::_Assign_rv(a2, v17);
    if ( v19 >= 8 )
      operator delete(v17[0]);
    v19 = 7LL;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v10 = (char *)v20;
    if ( v22 >= 8 )
      v10 = (char *)v20[0];
    v11 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, unsigned __int8 *, unsigned __int8 *, unsigned __int8 **, char *, char *, void ***))(**(_QWORD **)(a1 + 8) + 48LL))(
            *(_QWORD *)(a1 + 8),
            v8,
            i,
            a4,
            &v14,
            v10,
            &v10[2 * v21],
            &v15);
    if ( v11 < 0 )
    {
LABEL_29:
      if ( !*(_BYTE *)(a1 + 94) )
      {
        std::range_error::range_error((std::range_error *)pExceptionObject, v12);
        throw (std::range_error *)pExceptionObject;
      }
      goto LABEL_26;
    }
    if ( v11 <= 1 )
      break;
    if ( v11 != 3 )
      goto LABEL_29;
    for ( i = v14; i != a4; i = ++v14 )
      std::wstring::append(v17, 1uLL, *i);
LABEL_18:
    *(_QWORD *)(a1 + 96) = i - a3;
    if ( i == a4 )
      goto LABEL_19;
  }
  if ( v10 < (char *)v15 )
  {
    std::wstring::append((char *)v17, v10, ((char *)v15 - v10) >> 1);
LABEL_17:
    i = v14;
    goto LABEL_18;
  }
  if ( v21 < 0x10 )
  {
    std::wstring::append(v20, 8uLL, 0);
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a1 + 94) )
  {
    std::range_error::range_error((std::range_error *)pExceptionObject, v12);
    throw (std::range_error *)pExceptionObject;
  }
LABEL_26:
  a2[3] = (void *)7;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  std::wstring::assign(a2, (void **)(a1 + 56), 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v19 >= 8 )
    operator delete(v17[0]);
  v19 = 7LL;
LABEL_22:
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  if ( v22 >= 8 )
    operator delete(v20[0]);
  return a2;
}
