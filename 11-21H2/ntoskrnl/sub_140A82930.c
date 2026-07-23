/*
 * XREFs of sub_140A82930 @ 0x140A82930
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_1405FFD00 @ 0x1405FFD00 (sub_1405FFD00.c)
 *     sub_140A92668 @ 0x140A92668 (sub_140A92668.c)
 */

__int64 __fastcall sub_140A82930(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  const void *v7; // rsi
  unsigned int v8; // ebp
  int v9; // eax
  unsigned int v10; // ecx
  __int64 result; // rax

  v4 = *(_QWORD **)a1;
  v7 = *(const void **)(a4 + 40);
  v8 = *(_DWORD *)(*(_QWORD *)a1 + 48LL);
  if ( (a1[14] & 0x20) != 0 )
  {
    v9 = *(_DWORD *)(a3 + 4);
    if ( (v9 & 0x1000000) == 0 )
    {
      if ( v8 != *(_DWORD *)(a3 + 96) )
      {
        v10 = 571;
        *(_DWORD *)(a3 + 4) = v9 | 0x1000000;
        if ( *(_BYTE *)(a2 + 1) != 0xFF )
          v10 = 531;
        sub_1405FFB44(v10, v7, v4);
      }
      if ( v4[7] != *(_QWORD *)(a3 + 104) )
      {
        *(_DWORD *)(a3 + 4) |= 0x1000000u;
        sub_1405FFB44(0x214u, v7, v4);
      }
    }
  }
  result = sub_140A92668(a2, v8, a3);
  if ( !(_DWORD)result )
    return sub_1405FFD00(768LL, v7, v4, v8);
  return result;
}
