/*
 * XREFs of sub_180042AB0 @ 0x180042AB0
 * Callers:
 *     sub_180042BA8 @ 0x180042BA8 (sub_180042BA8.c)
 *     sub_180042F0C @ 0x180042F0C (sub_180042F0C.c)
 *     sub_1800729F8 @ 0x1800729F8 (sub_1800729F8.c)
 *     sub_180075D60 @ 0x180075D60 (sub_180075D60.c)
 * Callees:
 *     sub_18001266C @ 0x18001266C (sub_18001266C.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 */

unsigned __int64 __fastcall sub_180042AB0(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  sub_1800436D4(a1);
  *(_DWORD *)(a1 + 156) = *a2;
  *(_DWORD *)(a1 + 160) = a2[1];
  *(_DWORD *)(a1 + 164) = a2[2];
  *(_DWORD *)(a1 + 168) = a2[3];
  v4 = _InterlockedIncrement64((volatile signed __int64 *)sub_18001266C((__int64)&unk_1801F4B40));
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 < result )
    v4 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = v4;
  return result;
}
