/*
 * XREFs of ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z @ 0x1800585AC
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18005DDE0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180078588 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 * Callees:
 *     ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180054D98 (--$use_facet@V-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x180069190 (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18006A0C4 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall std::basic_istream<unsigned short>::operator>>(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct std::_Facet_base *v7; // r15
  void (__fastcall ***v8)(_QWORD, __int64); // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  char *v15; // r9
  int v16; // edx
  __int64 v19; // [rsp+50h] [rbp-68h] BYREF
  char v20; // [rsp+58h] [rbp-60h]
  __int64 v21; // [rsp+60h] [rbp-58h] BYREF
  bool v22; // [rsp+68h] [rbp-50h]
  _QWORD *v23; // [rsp+70h] [rbp-48h]
  char v25[56]; // [rsp+80h] [rbp-38h] BYREF
  int v28; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a1;
  v28 = 0;
  v23 = a1;
  v5 = *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL) + 72);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( (unsigned __int8)std::basic_istream<unsigned short>::_Ipfx(v3) )
  {
    v6 = **(_QWORD **)((char *)v3 + *(int *)(*v3 + 4LL) + 64);
    v29 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = std::use_facet<std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>>(&v29);
    if ( v6 )
    {
      v8 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      if ( v8 )
        (**v8)(v8, 1LL);
    }
    try
    {
      v9 = (__int64)v3 + *(int *)(*v3 + 4LL);
      v19 = 0LL;
      v20 = 1;
      v21 = *(_QWORD *)(v9 + 72);
      v22 = v21 == 0;
      (*(void (__fastcall **)(struct std::_Facet_base *, char *, __int64 *, __int64 *, __int64, int *, __int64))(*(_QWORD *)v7 + 88LL))(
        v7,
        v25,
        &v21,
        &v19,
        v9,
        &v28,
        a2);
    }
    catch ( ... )
    {
      v15 = (char *)a1 + *(int *)(*a1 + 4LL);
      v16 = *((_DWORD *)v15 + 4) | 4;
      if ( !*((_QWORD *)v15 + 9) )
        v16 = *((_DWORD *)v15 + 4) | 4;
      std::ios_base::clear((std::ios_base *)((char *)a1 + *(int *)(*a1 + 4LL)), v16, 1);
      v3 = a1;
      v4 = a1;
    }
  }
  v10 = *v3;
  v11 = (__int64)v3 + *(int *)(*v3 + 4LL);
  if ( v28 )
  {
    v12 = v28 | *(_DWORD *)(v11 + 16) | 4;
    if ( *(_QWORD *)(v11 + 72) )
      v12 = v28 | *(_DWORD *)(v11 + 16);
    std::ios_base::clear((std::ios_base *)v11, v12, 0);
    v10 = *v4;
  }
  v13 = *(_QWORD *)((char *)v3 + *(int *)(v10 + 4) + 72);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v3;
}
