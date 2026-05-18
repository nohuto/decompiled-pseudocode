/*
 * XREFs of sub_18008F8C0 @ 0x18008F8C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_18001F1F8 @ 0x18001F1F8 (sub_18001F1F8.c)
 *     sub_1800630F0 @ 0x1800630F0 (sub_1800630F0.c)
 *     sub_180081340 @ 0x180081340 (sub_180081340.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008F8C0(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = sub_18001246C(&v8, a2);
  sub_180081340(a1, v4);
  sub_1800630F0(&v8, a2);
  v5 = v8;
  *(_BYTE *)(v8 + 88) = *(_BYTE *)(a1 + 88);
  sub_1800124F8((__int64 *)(v5 + 96), (_QWORD *)(a1 + 96));
  sub_18001F1F8((_QWORD *)(v5 + 112), a1 + 112);
  *(_QWORD *)(v5 + 136) = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(v5 + 144) = *(_QWORD *)(a1 + 144);
  result = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(v5 + 152) = result;
  *(_DWORD *)(v5 + 160) = *(_DWORD *)(a1 + 160);
  if ( v9 )
    result = sub_180010530(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
