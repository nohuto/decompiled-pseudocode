/*
 * XREFs of sub_1800967F0 @ 0x1800967F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18003B5D8 @ 0x18003B5D8 (sub_18003B5D8.c)
 *     sub_180063088 @ 0x180063088 (sub_180063088.c)
 *     sub_180081340 @ 0x180081340 (sub_180081340.c)
 */

__int64 __fastcall sub_1800967F0(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = sub_18001246C(&v8, a2);
  sub_180081340(a1, v4);
  sub_180063088(&v8, a2);
  v5 = v8;
  *(_DWORD *)(v8 + 112) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(v5 + 116) = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(v5 + 120) = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(v5 + 124) = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(v5 + 128) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(v5 + 132) = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(v5 + 88) = *(_DWORD *)(a1 + 88);
  sub_18003B5D8((_QWORD *)(v5 + 96), (_QWORD *)(a1 + 96));
  *(_DWORD *)(v5 + 140) = *(_DWORD *)(a1 + 140);
  *(_DWORD *)(v5 + 144) = *(_DWORD *)(a1 + 144);
  *(_DWORD *)(v5 + 148) = *(_DWORD *)(a1 + 148);
  *(_DWORD *)(v5 + 136) = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(v5 + 152) = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(v5 + 156) = *(_DWORD *)(a1 + 156);
  *(_DWORD *)(v5 + 160) = *(_DWORD *)(a1 + 160);
  result = *(unsigned int *)(a1 + 164);
  *(_DWORD *)(v5 + 164) = result;
  if ( v9 )
    result = sub_180010530(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
