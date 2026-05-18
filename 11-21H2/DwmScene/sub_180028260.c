/*
 * XREFs of sub_180028260 @ 0x180028260
 * Callers:
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001287C @ 0x18001287C (sub_18001287C.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 *     sub_180028DDC @ 0x180028DDC (sub_180028DDC.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800B3A10 @ 0x1800B3A10 (sub_1800B3A10.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180028260(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // r8
  _QWORD *i; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 *v11; // rsi
  __int64 *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD v16[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  char v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  char v21; // [rsp+58h] [rbp-8h]

  v3 = *a2;
  v16[0] = *a2;
  v16[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_180028DDC(a1, &v20);
  sub_18002C460(a1 + 24, &v18);
  v4 = *(_QWORD **)(a1 + 256);
  for ( i = *(_QWORD **)(a1 + 248); i != v4 && !sub_180016240(i, v16); i += 2 )
    ;
  v7 = sub_18001287C((__int64)i);
  if ( v7 != v8 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(v3, 0LL);
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
    sub_1800B3A10(*v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 336LL))(v3);
    v11 = *(__int64 **)(a1 + 256);
    v12 = (__int64 *)(v7 + 16);
    if ( v12 != v11 )
    {
      do
      {
        v13 = *v12;
        v14 = v12[1];
        *v12 = 0LL;
        v12[1] = 0LL;
        v17[0] = *(v12 - 2);
        *(v12 - 2) = v13;
        v17[1] = *(v12 - 1);
        *(v12 - 1) = v14;
        sub_180010910((__int64)v17);
        v12 += 2;
      }
      while ( v12 != v11 );
      v11 = *(__int64 **)(a1 + 256);
    }
    sub_180010910((__int64)(v11 - 2));
    *(_QWORD *)(a1 + 256) -= 16LL;
  }
  if ( v19 )
    j_LanguageEnumProc(v18, v6, v8, v9);
  if ( v21 )
    j_LanguageEnumProc(v20, v6, v8, v9);
  return sub_180010910((__int64)v16);
}
