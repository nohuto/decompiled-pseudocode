/*
 * XREFs of ?to_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x18007C544
 * Callers:
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x18007B540 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1800222FC (_CxxThrowException_0.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800485B8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180069AD8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x180076060 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0range_error@std@@QEAA@PEBD@Z @ 0x1800762F8 (--0range_error@std@@QEAA@PEBD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18007B900 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::to_bytes(
        __int64 a1,
        void **a2,
        char *a3,
        char *a4)
{
  _DWORD *v8; // r15
  char *v9; // r8
  char *v10; // r14
  int v11; // eax
  const char *v12; // rdx
  char *v14; // [rsp+50h] [rbp-59h] BYREF
  void **v15; // [rsp+58h] [rbp-51h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+60h] [rbp-49h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v18; // [rsp+88h] [rbp-21h]
  unsigned __int64 v19; // [rsp+90h] [rbp-19h]
  void *v20[2]; // [rsp+98h] [rbp-11h] BYREF
  unsigned __int64 v21; // [rsp+A8h] [rbp-1h]
  unsigned __int64 v22; // [rsp+B0h] [rbp+7h]

  v15 = a2;
  v14 = a3;
  v22 = 15LL;
  v21 = 0LL;
  LOBYTE(v20[0]) = 0;
  v19 = 15LL;
  v18 = 0LL;
  LOBYTE(Src[0]) = 0;
  v8 = (_DWORD *)(a1 + 88);
  if ( !*(_BYTE *)(a1 + 92) )
    *v8 = `std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::to_bytes'::`2'::_State0;
  std::string::append((char *)v20, 8uLL, 0);
  *(_QWORD *)(a1 + 96) = 0LL;
  v9 = v14;
  if ( v14 == a4 )
  {
LABEL_19:
    std::string::string(a2, Src);
    if ( v19 >= 0x10 )
      operator delete(Src[0]);
    v19 = 15LL;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v10 = (char *)v20;
    if ( v22 >= 0x10 )
      v10 = (char *)v20[0];
    v11 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, char *, char *, char **, char *, char *, void ***))(**(_QWORD **)(a1 + 8) + 56LL))(
            *(_QWORD *)(a1 + 8),
            v8,
            v9,
            a4,
            &v14,
            v10,
            &v10[v21],
            &v15);
    if ( v11 < 0 )
    {
LABEL_29:
      if ( !*(_BYTE *)(a1 + 93) )
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
    v9 = v14;
    while ( v9 != a4 )
    {
      std::string::append((char *)Src, 1uLL, *v9);
      v9 = v14 + 2;
      v14 += 2;
    }
LABEL_18:
    *(_QWORD *)(a1 + 96) = (v9 - a3) >> 1;
    if ( v9 == a4 )
      goto LABEL_19;
  }
  if ( v10 < (char *)v15 )
  {
    std::string::append(Src, v10, (char *)v15 - v10);
LABEL_17:
    v9 = v14;
    goto LABEL_18;
  }
  if ( v21 < 0x10 )
  {
    std::string::append((char *)v20, 8uLL, 0);
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a1 + 93) )
  {
    std::range_error::range_error((std::range_error *)pExceptionObject, v12);
    throw (std::range_error *)pExceptionObject;
  }
LABEL_26:
  a2[3] = (void *)15;
  a2[2] = 0LL;
  *(_BYTE *)a2 = 0;
  std::string::assign(a2, (void **)(a1 + 24), 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v19 >= 0x10 )
    operator delete(Src[0]);
  v19 = 15LL;
LABEL_22:
  v18 = 0LL;
  LOBYTE(Src[0]) = 0;
  if ( v22 >= 0x10 )
    operator delete(v20[0]);
  return a2;
}
