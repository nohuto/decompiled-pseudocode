/*
 * XREFs of ?erase@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180124A84
 * Callers:
 *     ?OnDisconnected@InputSiteElementProxy@@MEAAJXZ @ 0x180125A10 (-OnDisconnected@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  char *v6; // rsi
  char *v7; // rdi
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(char **)(a1 + 8);
  v7 = (char *)(a3 + 8);
  v8 = v6;
  if ( (char *)(a3 + 8) != v6 )
  {
    do
    {
      v9 = 0LL;
      if ( &v13 != v7 )
      {
        v9 = *(_QWORD *)v7;
        *(_QWORD *)v7 = 0LL;
      }
      v10 = *((_QWORD *)v7 - 1);
      *((_QWORD *)v7 - 1) = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v7 += 8;
    }
    while ( v7 != v6 );
    v6 = *(char **)(a1 + 8);
    v8 = v6;
  }
  v11 = *((_QWORD *)v6 - 1);
  if ( v11 )
  {
    *((_QWORD *)v6 - 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v8 = *(char **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 8;
  *a2 = a3;
  return a2;
}
