/*
 * XREFs of ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x18005879C
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18005DDE0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 * Callees:
 *     ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180054D98 (--$use_facet@V-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x180069190 (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18006A0C4 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::basic_istream<unsigned short>::operator>>(__int64 *a1, __int64 a2)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct std::_Facet_base *v7; // r15
  void (__fastcall ***v8)(_QWORD, __int64); // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  __int64 v15; // [rsp+50h] [rbp-68h] BYREF
  char v16; // [rsp+58h] [rbp-60h]
  __int64 v17; // [rsp+60h] [rbp-58h] BYREF
  bool v18; // [rsp+68h] [rbp-50h]
  __int64 *v19; // [rsp+70h] [rbp-48h]
  _BYTE v21[56]; // [rsp+80h] [rbp-38h] BYREF
  int v22; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+20h] BYREF

  v22 = 0;
  v19 = a1;
  v5 = *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 72);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( (unsigned __int8)std::basic_istream<unsigned short>::_Ipfx(a1) )
  {
    v6 = **(_QWORD **)((char *)a1 + *(int *)(*a1 + 4) + 64);
    v23 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = std::use_facet<std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>>(&v23);
    if ( v6 )
    {
      v8 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      if ( v8 )
        (**v8)(v8, 1LL);
    }
    v9 = (__int64)a1 + *(int *)(*a1 + 4);
    v15 = 0LL;
    v16 = 1;
    v17 = *(_QWORD *)(v9 + 72);
    v18 = v17 == 0;
    (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *, __int64 *, __int64 *, __int64, int *, __int64))(*(_QWORD *)v7 + 56LL))(
      v7,
      v21,
      &v17,
      &v15,
      v9,
      &v22,
      a2);
  }
  v10 = *a1;
  v11 = (__int64)a1 + *(int *)(*a1 + 4);
  if ( v22 )
  {
    v12 = v22 | *(_DWORD *)(v11 + 16) | 4;
    if ( *(_QWORD *)(v11 + 72) )
      v12 = v22 | *(_DWORD *)(v11 + 16);
    std::ios_base::clear((std::ios_base *)v11, v12, 0);
    v10 = *a1;
  }
  v13 = *(__int64 *)((char *)a1 + *(int *)(v10 + 4) + 72);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return a1;
}
