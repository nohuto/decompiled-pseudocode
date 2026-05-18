/*
 * XREFs of sub_180043140 @ 0x180043140
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180012288 @ 0x180012288 (sub_180012288.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180081340 @ 0x180081340 (sub_180081340.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180043140(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = sub_18001246C(&v8, a2);
  sub_180081340(a1, v4);
  sub_180012288(&v8, a2);
  v5 = v8;
  *(_DWORD *)(v8 + 128) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(v5 + 120) = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(v5 + 124) = *(_BYTE *)(a1 + 124);
  *(_DWORD *)(v5 + 88) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(v5 + 92) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v5 + 96) = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 100) = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(v5 + 104) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(v5 + 116) = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(v5 + 112) = *(_DWORD *)(a1 + 112);
  result = *(unsigned int *)(a1 + 108);
  *(_DWORD *)(v5 + 108) = result;
  if ( v9 )
    result = sub_180010530(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
