/*
 * XREFs of sub_14025ED04 @ 0x14025ED04
 * Callers:
 *     sub_14025F6B0 @ 0x14025F6B0 (sub_14025F6B0.c)
 * Callees:
 *     sub_14025EDC8 @ 0x14025EDC8 (sub_14025EDC8.c)
 *     sub_14025EFDC @ 0x14025EFDC (sub_14025EFDC.c)
 *     sub_14025F1A4 @ 0x14025F1A4 (sub_14025F1A4.c)
 */

__int64 __fastcall sub_14025ED04(__int64 a1)
{
  int v1; // ebx
  int v3; // r8d
  __int64 v4; // rsi
  int v5; // ebp
  __int64 v6; // rax
  __int64 result; // rax
  _DWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  v10 = 0;
  v8[1] = 0;
  sub_14025F1A4();
  v4 = *(_QWORD *)(a1 + 176);
  v5 = 0;
  v8[0] = *(_DWORD *)a1;
  v6 = *(_QWORD *)(a1 + 112);
  v11 = v4;
  v9 = *(_QWORD *)(v6 + 32);
  while ( 1 )
  {
    result = sub_14025EFDC((unsigned int)v8, v5, v3, -1, (__int64)&v10);
    if ( !(_DWORD)result )
      break;
    v3 = v10;
    v5 = v10 + result;
    if ( (unsigned int)result > *(_DWORD *)(v4 + 52) )
    {
      sub_14025EDC8(a1, *(_QWORD *)(a1 + 112) + 8, v10, result, (__int64)&v11);
      v4 = v11;
    }
  }
  if ( *(_QWORD *)(a1 + 176) == a1 + 176 )
    v1 = *(_DWORD *)(v4 + 52);
  *(_DWORD *)(a1 + 140) = v1;
  return result;
}
