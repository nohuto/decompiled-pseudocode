/*
 * XREFs of sub_140395300 @ 0x140395300
 * Callers:
 *     sub_1403951E0 @ 0x1403951E0 (sub_1403951E0.c)
 * Callees:
 *     sub_1402A8670 @ 0x1402A8670 (sub_1402A8670.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_1403954A0 @ 0x1403954A0 (sub_1403954A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140395300(__int64 a1, int a2, unsigned __int64 a3, char a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r13d
  unsigned int v12; // ecx
  unsigned __int64 v13; // rbp
  __int64 v14; // rsi
  unsigned int v15; // ebx
  int v16; // r14d
  int v17; // ebp
  __int128 v19; // [rsp+50h] [rbp-68h] BYREF
  __int128 *v20; // [rsp+60h] [rbp-58h] BYREF
  int v21; // [rsp+68h] [rbp-50h]
  int v22; // [rsp+6Ch] [rbp-4Ch]

  v19 = 0LL;
  result = sub_1402A8670(a1, 1);
  v11 = result;
  if ( result )
  {
    v12 = *(_DWORD *)(v9 + 36672);
    *(_DWORD *)(a1 + 36672) = ((_BYTE)v12 + 1) & 0xF;
    *(_QWORD *)(a1 + 16LL * v12 + 36680) = v10;
    *(LARGE_INTEGER *)(a1 + 16LL * v12 + 36688) = KeQueryPerformanceCounter(0LL);
    v13 = a3 >> 18;
    if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 )
    {
      v22 = 0;
      v20 = &v19;
      *(_QWORD *)&v19 = a3;
      BYTE8(v19) = 0;
      v21 = 16;
      sub_14035EDE4((__int64)&v20, 1u, 0x40020000u, 0xF50u, 0x602u);
    }
    v14 = 0LL;
    v15 = v13 - a2 + 1;
    if ( v15 > 0x100 )
      v14 = (v13 - v15 + 1) << 18;
    do
    {
      if ( v15 <= 0x100 )
      {
        v16 = v15;
        v17 = 256 - v15;
        v14 = a3;
        if ( 256 - v15 > 0x18 )
          v17 = 24;
      }
      else
      {
        v14 += 0x4000000LL;
        v16 = 256;
        v17 = 0;
      }
      sub_1403954A0(a1, v11, a2, v16, v17, v14, 0, a5);
      if ( a4 )
        sub_1403954A0(a1, v11, a2, v16, v17, v14, 1, a5);
      a2 += v16;
      result = 24LL;
      v15 -= v16;
    }
    while ( v15 );
    if ( (*(_BYTE *)(a1 + 13244) & 8) == 0 )
    {
      *(_DWORD *)(a1 + 33124) = 0;
      result = *(unsigned int *)(a1 + 33128);
      if ( (unsigned int)result < dword_140D06938 )
      {
        *(_DWORD *)(a1 + 33128) = 0;
      }
      else
      {
        result = (unsigned int)(result - dword_140D06938);
        *(_DWORD *)(a1 + 33128) = result;
      }
    }
  }
  return result;
}
