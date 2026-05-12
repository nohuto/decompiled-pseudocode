/*
 * XREFs of sub_1C004E300 @ 0x1C004E300
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C004AC10 @ 0x1C004AC10 (sub_1C004AC10.c)
 *     sub_1C004C390 @ 0x1C004C390 (sub_1C004C390.c)
 *     sub_1C004E4D0 @ 0x1C004E4D0 (sub_1C004E4D0.c)
 */

__int64 __fastcall sub_1C004E300(unsigned __int64 Context, __int64 a2, __int64 a3)
{
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  int v6; // [rsp+20h] [rbp-28h]

  v3 = (_QWORD **)(Context + 4896);
  v4 = (_QWORD *)Context;
  if ( *(_QWORD *)(Context + 5264) )
  {
    if ( (*((_DWORD *)*v3 + 5) & 8) != 0 || (*(_BYTE *)(Context + 108) & 1) != 0 )
    {
      Context = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 5184);
      v4[659] += Context / 0x2710;
      if ( Context / 0x2710 >= 0x2710 )
        ++*((_DWORD *)v4 + 1312);
      if ( !v4[657] )
        v4[657] = v4[644];
    }
    v4[658] = 0LL;
  }
  ++*((_DWORD *)v4 + 1310);
  if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
  {
    v6 = *((_DWORD *)v4 + 14);
    sub_1C004AC10(Context, &stru_1C0089188, a3, **v3, v6);
  }
  *((_DWORD *)*v3 + 5) |= 2u;
  if ( (unsigned int)sub_1C0007798((__int64)v4, 7) )
    sub_1C004C390((__int64)v4);
  return sub_1C004E4D0(v4);
}
