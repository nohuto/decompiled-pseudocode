/*
 * XREFs of sub_18001380C @ 0x18001380C
 * Callers:
 *     sub_1800138C0 @ 0x1800138C0 (sub_1800138C0.c)
 *     sub_180042BA8 @ 0x180042BA8 (sub_180042BA8.c)
 *     sub_180042D28 @ 0x180042D28 (sub_180042D28.c)
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 *     sub_1800729F8 @ 0x1800729F8 (sub_1800729F8.c)
 *     sub_180075D60 @ 0x180075D60 (sub_180075D60.c)
 *     sub_1800A70F0 @ 0x1800A70F0 (sub_1800A70F0.c)
 *     sub_1800A72C0 @ 0x1800A72C0 (sub_1800A72C0.c)
 * Callees:
 *     sub_18001266C @ 0x18001266C (sub_18001266C.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 */

unsigned __int64 __fastcall sub_18001380C(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  sub_1800436D4();
  *(_DWORD *)(a1 + 144) = *a2;
  *(_DWORD *)(a1 + 148) = a2[1];
  *(_DWORD *)(a1 + 152) = a2[2];
  v4 = _InterlockedIncrement64((volatile signed __int64 *)sub_18001266C((__int64)&unk_1801F4B40));
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 < result )
    v4 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = v4;
  return result;
}
