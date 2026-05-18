/*
 * XREFs of sub_18008BD68 @ 0x18008BD68
 * Callers:
 *     sub_1800308C0 @ 0x1800308C0 (sub_1800308C0.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180067590 @ 0x180067590 (sub_180067590.c)
 */

__int64 __fastcall sub_18008BD68(__int64 a1)
{
  __int64 *v2; // rax
  __int64 result; // rax
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_18001875C(v4, (__int64)&qword_1801F6258);
  sub_180067590(a1, (__int64)v2);
  *(_DWORD *)(a1 + 112) = 16;
  *(_QWORD *)a1 = &Spectre::Engine::SymbolShaderExtension::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 116) = 32;
  return result;
}
