/*
 * XREFs of sub_18004F698 @ 0x18004F698
 * Callers:
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_180060070 @ 0x180060070 (sub_180060070.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004F698(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+48h] [rbp+10h]

  v9 = a2;
  result = **(_QWORD **)(a1 + 18560);
  v8 = result;
  while ( !*(_BYTE *)(result + 25) )
  {
    v4 = sub_18001246C(v7, a2);
    sub_180060070(v5, v4);
    sub_18001D3F8(&v8);
    result = v8;
  }
  v6 = a2[1];
  if ( v6 )
    return sub_180010530(v6);
  return result;
}
