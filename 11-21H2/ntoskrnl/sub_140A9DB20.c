/*
 * XREFs of sub_140A9DB20 @ 0x140A9DB20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A9DB20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 result; // rax

  result = sub_14042A5E0(a1, &unk_140A760F8);
  *(_QWORD *)(a8 + 24) = a1;
  return result;
}
