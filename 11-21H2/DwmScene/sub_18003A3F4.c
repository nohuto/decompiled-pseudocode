/*
 * XREFs of sub_18003A3F4 @ 0x18003A3F4
 * Callers:
 *     sub_18003A520 @ 0x18003A520 (sub_18003A520.c)
 * Callees:
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 *     sub_180036948 @ 0x180036948 (sub_180036948.c)
 *     sub_1800369F8 @ 0x1800369F8 (sub_1800369F8.c)
 *     sub_180039F10 @ 0x180039F10 (sub_180039F10.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18003A3F4(__int64 a1)
{
  unsigned int i; // edi
  _QWORD *v3; // rax
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 j; // rcx
  __int64 k; // rdx
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+38h] [rbp-20h]
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF

  sub_18002C5FC(a1 + 8, (__int64)&v10);
  sub_18002C5FC(a1 + 112, (__int64)&v8);
  for ( i = 0; i < (unsigned int)sub_1800369F8(a1); ++i )
  {
    v3 = sub_180036948(a1, v12, i);
    sub_180039F10(a1, v3);
  }
  *(_DWORD *)(a1 + 1368) = -8388609;
  *(_QWORD *)(a1 + 1372) = 2139095039LL;
  *(_QWORD *)(a1 + 1384) = 0LL;
  result = **(_QWORD **)(a1 + 1424);
  while ( !*(_BYTE *)(result + 25) )
  {
    *(_DWORD *)(result + 40) = -8388609;
    *(_QWORD *)(result + 44) = 2139095039LL;
    *(_QWORD *)(result + 56) = 0LL;
    v5 = *(_QWORD *)(result + 16);
    if ( *(_BYTE *)(v5 + 25) )
    {
      for ( j = *(_QWORD *)(result + 8); !*(_BYTE *)(j + 25) && result == *(_QWORD *)(j + 16); j = *(_QWORD *)(j + 8) )
        result = j;
      result = j;
    }
    else
    {
      result = *(_QWORD *)(result + 16);
      for ( k = *(_QWORD *)v5; !*(_BYTE *)(k + 25); k = *(_QWORD *)k )
        result = k;
    }
  }
  if ( v9 )
    result = sub_18002C8E4(v8);
  if ( v11 )
    return sub_18002C8E4(v10);
  return result;
}
