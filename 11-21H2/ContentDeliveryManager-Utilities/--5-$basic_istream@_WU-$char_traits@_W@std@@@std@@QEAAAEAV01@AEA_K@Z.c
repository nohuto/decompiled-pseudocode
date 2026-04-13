/*
 * XREFs of ??5?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x1800CA508
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x1800C9C1C (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18006A0C4 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ??$use_facet@V?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800C98A4 (--$use_facet@V-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAAE.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x1800CC818 (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::wistream::operator>>(__int64 *a1, __int64 a2)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct std::_Facet_base *v7; // r15
  void (__fastcall ***v8)(_QWORD, __int64); // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  char v13; // dl
  __int64 v14; // rcx
  __int64 v16; // [rsp+50h] [rbp-68h] BYREF
  char v17; // [rsp+58h] [rbp-60h]
  __int64 v18; // [rsp+60h] [rbp-58h] BYREF
  bool v19; // [rsp+68h] [rbp-50h]
  __int64 *v20; // [rsp+70h] [rbp-48h]
  _BYTE v22[56]; // [rsp+80h] [rbp-38h] BYREF
  int v23; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+20h] BYREF

  v23 = 0;
  v20 = a1;
  v5 = *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 72);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( (unsigned __int8)std::wistream::_Ipfx(a1) )
  {
    v6 = **(_QWORD **)((char *)a1 + *(int *)(*a1 + 4) + 64);
    v24 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = std::use_facet<std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>>(&v24);
    if ( v6 )
    {
      v8 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      if ( v8 )
        (**v8)(v8, 1LL);
    }
    v9 = (__int64)a1 + *(int *)(*a1 + 4);
    v16 = 0LL;
    v17 = 1;
    v18 = *(_QWORD *)(v9 + 72);
    v19 = v18 == 0;
    (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *, __int64 *, __int64 *, __int64, int *, __int64))(*(_QWORD *)v7 + 56LL))(
      v7,
      v22,
      &v18,
      &v16,
      v9,
      &v23,
      a2);
  }
  v10 = *a1;
  v11 = (__int64)a1 + *(int *)(*a1 + 4);
  if ( v23 )
  {
    v12 = v23 | *(_DWORD *)(v11 + 16);
    v13 = v12 | 4;
    if ( *(_QWORD *)(v11 + 72) )
      v13 = v12;
    std::ios_base::clear((std::ios_base *)v11, v13, 0);
    v10 = *a1;
  }
  v14 = *(__int64 *)((char *)a1 + *(int *)(v10 + 4) + 72);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return a1;
}
