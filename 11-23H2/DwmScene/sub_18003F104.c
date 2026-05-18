/*
 * XREFs of sub_18003F104 @ 0x18003F104
 * Callers:
 *     sub_18003F104 @ 0x18003F104 (sub_18003F104.c)
 *     sub_180040F64 @ 0x180040F64 (sub_180040F64.c)
 * Callees:
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_18003F104 @ 0x18003F104 (sub_18003F104.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_18003F104(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  char v6; // di
  __int64 v7; // rbp
  __int64 i; // rbx

  v2 = *a2;
  sub_18003E330(*a2);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  if ( !v5 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL))(v5, a2) )
  {
    v7 = *(_QWORD *)(v2 + 40);
    for ( i = *(_QWORD *)(v2 + 32); i != v7; i += 16LL )
    {
      if ( !(unsigned __int8)sub_18003F104(a1, i) )
        return v6;
    }
    return 1;
  }
  return v6;
}
