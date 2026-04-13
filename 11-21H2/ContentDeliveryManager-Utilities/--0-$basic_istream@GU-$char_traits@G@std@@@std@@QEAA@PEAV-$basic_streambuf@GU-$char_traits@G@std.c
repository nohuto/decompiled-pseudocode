/*
 * XREFs of ??0?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@_N@Z @ 0x180056170
 * Callers:
 *     ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800562F0 (--0-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@G.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x18006DC44 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180078588 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x180004EB8 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180054C50 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18006A0C4 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::basic_istream<unsigned short>::basic_istream<unsigned short>(_QWORD *a1, __int64 a2, char a3)
{
  char *v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdx
  void (__fastcall ***v9)(_QWORD, __int64); // r8
  struct std::_Facet_base *v10; // r14
  void (__fastcall ***v11)(_QWORD, __int64); // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  char v14; // [rsp+50h] [rbp+18h]

  v14 = a3;
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_istream<unsigned short>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 24;
  a1[1] = 0LL;
  v5 = (char *)a1 + *(int *)(*a1 + 4LL);
  *((_QWORD *)v5 + 8) = 0LL;
  *((_QWORD *)v5 + 1) = 0LL;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 6) = 513;
  *((_QWORD *)v5 + 4) = 6LL;
  *((_QWORD *)v5 + 5) = 0LL;
  *((_QWORD *)v5 + 6) = 0LL;
  *((_QWORD *)v5 + 7) = 0LL;
  std::ios_base::clear((std::ios_base *)v5, 0, 0);
  v6 = (__int64 *)operator new(8uLL);
  if ( v6 )
    *v6 = (__int64)std::locale::_Init(1);
  else
    v6 = 0LL;
  *((_QWORD *)v5 + 8) = v6;
  *((_QWORD *)v5 + 9) = a2;
  *((_QWORD *)v5 + 10) = 0LL;
  v7 = *v6;
  v13 = v7;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v10 = std::use_facet<std::ctype<unsigned short>>(&v13);
  if ( v7 )
  {
    v11 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v9 = v11;
    if ( v11 )
      (**v11)(v11, 1LL);
  }
  LOBYTE(v8) = 32;
  *((_WORD *)v5 + 44) = (*(__int64 (__fastcall **)(struct std::_Facet_base *, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v10 + 96LL))(
                          v10,
                          v8,
                          v9);
  if ( !*((_QWORD *)v5 + 9) )
    std::ios_base::clear((std::ios_base *)v5, *((_DWORD *)v5 + 4) | 4, 0);
  return a1;
}
