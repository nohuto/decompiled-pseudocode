/*
 * XREFs of sub_18007F388 @ 0x18007F388
 * Callers:
 *     sub_180030794 @ 0x180030794 (sub_180030794.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18005F7EC @ 0x18005F7EC (sub_18005F7EC.c)
 */

__int64 __fastcall sub_18007F388(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_180017648(v4, (__int64)&unk_1801D82A8);
  sub_18005F7EC(a1, (__int64)v2);
  *(_DWORD *)(a1 + 112) = 16;
  *(_QWORD *)a1 = &Spectre::Engine::SymbolShaderExtension::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 116) = 32;
  return result;
}
