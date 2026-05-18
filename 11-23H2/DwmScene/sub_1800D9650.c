/*
 * XREFs of sub_1800D9650 @ 0x1800D9650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18002E5A8 @ 0x18002E5A8 (sub_18002E5A8.c)
 *     sub_1800DA840 @ 0x1800DA840 (sub_1800DA840.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D9650(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h]

  v9 = a2;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = *(_QWORD *)(a1 + 560);
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    sub_1800DA840(a2);
  }
  v5 = **(_QWORD **)(a1 + 552);
  v8 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = *(_QWORD **)(a2 + 8);
    if ( v6 == *(_QWORD **)(a2 + 16) )
    {
      sub_18002E5A8((_QWORD *)a2, *(char **)(a2 + 8), (_QWORD *)(v5 + 40));
    }
    else
    {
      sub_18001246C(v6, (_QWORD *)(v5 + 40));
      *(_QWORD *)(a2 + 8) += 16LL;
    }
    sub_18001D3F8(&v8);
    v5 = v8;
  }
  return a2;
}
