/*
 * XREFs of sub_180054690 @ 0x180054690
 * Callers:
 *     sub_180054950 @ 0x180054950 (sub_180054950.c)
 *     sub_180084738 @ 0x180084738 (sub_180084738.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 *     sub_180054130 @ 0x180054130 (sub_180054130.c)
 *     sub_1800548AC @ 0x1800548AC (sub_1800548AC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180054690(__int64 a1, __int64 *a2)
{
  char result; // al
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  void **v8; // rax
  _QWORD *v9; // rax
  void (__fastcall *v10)(__int64, _QWORD *); // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !result )
  {
    v5 = *a2;
    v15 = sub_180026650(*a2);
    v6 = sub_1800435C8(a1 + 128, (__int64)&v15);
    if ( v6 == *(_QWORD *)(a1 + 128) || (result = sub_180011DD0((_QWORD *)(v6 + 40))) != 0 )
    {
      sub_180054130(v5, &v12);
      v7 = v12;
      v8 = (void **)sub_18002963C(a1, v14);
      sub_180029824(v7, v8);
      v9 = sub_18001246C(v14, (_QWORD *)(a1 + 112));
      v10(v11, v9);
      result = sub_1800548AC(a1, &v12);
      if ( v13 )
        return sub_180010530(v13);
    }
  }
  return result;
}
