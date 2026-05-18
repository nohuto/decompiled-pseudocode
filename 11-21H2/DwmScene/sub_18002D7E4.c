/*
 * XREFs of sub_18002D7E4 @ 0x18002D7E4
 * Callers:
 *     sub_18002D880 @ 0x18002D880 (sub_18002D880.c)
 *     sub_18002DBC0 @ 0x18002DBC0 (sub_18002DBC0.c)
 *     unknown_libname_21 @ 0x180100538 (unknown_libname_21.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011138 @ 0x180011138 (sub_180011138.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002D7E4(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 72);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    sub_180011138(v3, *(_QWORD *)(a1 + 48));
    sub_180010884(*(char **)(a1 + 40), (*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 40)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 24) )
    j_LanguageEnumProc(*(_QWORD *)(a1 + 16));
  return sub_1800FC250(a1 + 8);
}
