/*
 * XREFs of sub_180029590 @ 0x180029590
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002858C @ 0x18002858C (sub_18002858C.c)
 *     sub_180028614 @ 0x180028614 (sub_180028614.c)
 *     sub_18002C3FC @ 0x18002C3FC (sub_18002C3FC.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180029590(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // esi
  unsigned int i; // ebx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  char v12; // [rsp+38h] [rbp-50h]
  _QWORD v13[4]; // [rsp+40h] [rbp-48h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    result = sub_180028614(a1);
    v5 = result;
    for ( i = 0; i < v5; ++i )
    {
      sub_18002858C(a1, v13, i);
      v7 = v13[0];
      if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 368LL))(v13[0]) == a2 )
      {
        sub_18002C3FC(v7 + 8, &v11);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
        if ( v12 )
          j_LanguageEnumProc(v11, v8, v9, v10);
      }
      result = sub_180010910((__int64)v13);
    }
  }
  return result;
}
