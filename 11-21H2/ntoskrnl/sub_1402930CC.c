/*
 * XREFs of sub_1402930CC @ 0x1402930CC
 * Callers:
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 * Callees:
 *     sub_140293168 @ 0x140293168 (sub_140293168.c)
 *     sub_1402A09C8 @ 0x1402A09C8 (sub_1402A09C8.c)
 *     sub_1402A09E8 @ 0x1402A09E8 (sub_1402A09E8.c)
 */

__int64 __fastcall sub_1402930CC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v6; // r8d
  unsigned __int16 v7; // di
  __int64 v8; // r14
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // [rsp+78h] [rbp+48h] BYREF
  __int64 v12; // [rsp+80h] [rbp+50h] BYREF
  __int64 v13; // [rsp+88h] [rbp+58h] BYREF

  result = (unsigned int)dword_140D0507C;
  v13 = 0LL;
  LODWORD(v11) = 0;
  v12 = 0LL;
  if ( (dword_140D0507C & 0x20) != 0 )
  {
    v3 = a1 + 2560;
    result = *(unsigned int *)(a1 + 2572);
    if ( (result & 1) == 0 )
    {
      v4 = dword_140D068E8;
      v5 = *(_DWORD *)v3 + 0x100000;
      *(_DWORD *)v3 = v5;
      if ( v5 >> 20 > v4 )
        *(_DWORD *)v3 = (v4 << 20) + 0xFFFFF;
      result = sub_140293168(v3 + 4, v3, 1LL, 0xFFFFFLL);
      if ( !(_BYTE)result )
      {
        LODWORD(v11) = 0;
        v7 = 0;
        for ( HIDWORD(v11) = -2146435072 - v6; v7 < (unsigned __int16)word_140D05014; ++v7 )
        {
          if ( v7 >= *(_WORD *)(v3 + 16) )
            v8 = 0LL;
          else
            v8 = *(_QWORD *)(v3 + 8LL * v7 + 24);
          sub_1402A09E8(a1, v7, *(_DWORD *)v3 >> 20, (unsigned int)&v13, (__int64)&v12);
          sub_1402A09C8(&v11, &v12);
          v9 = v13;
          if ( v8 != v13 )
          {
            *(_QWORD *)(v3 + 8LL * v7 + 24) = v13;
            _BitScanForward64(&v10, v8 ^ v9);
            *(_WORD *)(a1 + 2LL * v7 + 644) = v10;
          }
        }
        result = v11;
        *(_QWORD *)(v3 + 4) = v11;
      }
    }
  }
  return result;
}
