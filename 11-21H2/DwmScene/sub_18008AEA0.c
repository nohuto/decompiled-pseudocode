/*
 * XREFs of sub_18008AEA0 @ 0x18008AEA0
 * Callers:
 *     sub_180030854 @ 0x180030854 (sub_180030854.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180067590 @ 0x180067590 (sub_180067590.c)
 */

__int64 __fastcall sub_18008AEA0(__int64 a1)
{
  __int64 *v2; // rax
  __int64 result; // rax
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_18001875C(v4, (__int64)&qword_1801F5FF8);
  sub_180067590(a1, (__int64)v2);
  *(_DWORD *)(a1 + 112) = 16;
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingShaderExtension::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 116) = 32;
  return result;
}
