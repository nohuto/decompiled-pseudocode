/*
 * XREFs of sub_14023BA30 @ 0x14023BA30
 * Callers:
 *     sub_14023B8E8 @ 0x14023B8E8 (sub_14023B8E8.c)
 * Callees:
 *     sub_14023BA88 @ 0x14023BA88 (sub_14023BA88.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14045B3BC @ 0x14045B3BC (sub_14045B3BC.c)
 */

__int64 __fastcall sub_14023BA30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // edx
  __int64 v5; // r9
  __int128 v6; // xmm6
  char v7; // al
  _QWORD *v8; // r9
  __int64 v9; // r11
  char v10; // di
  __int64 v11; // r10
  __int64 v12; // rbx
  __int64 v13; // rdx
  signed __int64 v14; // rcx
  signed __int64 v15; // rbx
  unsigned __int128 v16; // rt0
  unsigned __int8 v17; // tt
  __int64 v18; // [rsp+38h] [rbp-30h]

  result = sub_14023BA88(a1, a2, a3, a1);
  if ( (_BYTE)result )
  {
    v6 = *(_OWORD *)(*(_QWORD *)(v5 + 192) + 256LL);
    v7 = sub_14045B3BC(v4);
    v9 = *((_QWORD *)&v6 + 1);
    v10 = v7;
    v11 = v6;
    while ( 1 )
    {
      v12 = v8[25];
      v13 = v8[4364];
      v14 = *((_QWORD *)&v6 + 1);
      if ( v10 )
      {
        v15 = v11 | v12;
        if ( (v13 & v15) == v13 )
          v14 = v13 | *((_QWORD *)&v6 + 1);
      }
      else
      {
        v15 = v11 & ~v12;
        v14 = ~v13 & *((_QWORD *)&v6 + 1);
      }
      *(_QWORD *)&v16 = v11;
      *((_QWORD *)&v16 + 1) = v9;
      v17 = _InterlockedCompareExchange128(
              (volatile signed __int64 *)(v8[24] + 256LL),
              v14,
              v15,
              (signed __int64 *)&v16);
      v18 = v16 >> 64;
      result = v16;
      v9 = v16 >> 64;
      v11 = v16;
      if ( v17 )
        break;
      *((_QWORD *)&v6 + 1) = v18;
    }
  }
  return result;
}
