/*
 * XREFs of sub_14022FDA0 @ 0x14022FDA0
 * Callers:
 *     sub_14022FD10 @ 0x14022FD10 (sub_14022FD10.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 * Callees:
 *     sub_14022FFB8 @ 0x14022FFB8 (sub_14022FFB8.c)
 *     sub_140325830 @ 0x140325830 (sub_140325830.c)
 */

__int64 __fastcall sub_14022FDA0(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r10
  unsigned int v5; // edi
  _BOOL8 v6; // r13
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // rsi
  unsigned int v11; // r14d
  unsigned __int64 v12; // rbp
  unsigned int v13; // ebx
  int v14; // r11d
  unsigned int v15; // r15d
  unsigned __int64 v16; // r8
  _DWORD *v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int v20; // r9d
  unsigned int v21; // r8d
  char v22; // cl
  __int64 v23; // [rsp+30h] [rbp-48h]
  unsigned int v25; // [rsp+88h] [rbp+10h]
  BOOL v26; // [rsp+98h] [rbp+20h] BYREF
  BOOL v27; // [rsp+9Ch] [rbp+24h]

  v3 = a1;
  v5 = a2;
  v6 = (a3 & 2) == 0;
  v7 = *(_QWORD *)(a1 + 16) + 24512 * ((unsigned __int64)a2 >> byte_140C506CC);
  if ( (unsigned int)dword_140D05004 > 1 )
    v8 = 2LL * (unsigned __int8)(byte_140D069E2 & (v5 >> byte_140C506CD)) + 2840;
  else
    v8 = 2820LL;
  if ( !*(_QWORD *)(v7 + 8 * (v8 + v6)) )
    return 0LL;
  v10 = 0LL;
  v11 = dword_140C50738;
  v12 = v7 + 16 * (v6 + 1404);
  v25 = v5;
  v13 = 0;
  v14 = dword_140C50738 + 1;
  v23 = *(_QWORD *)(v3 + 8 * v6 + 2432);
  v15 = dword_140C50738 + 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = v5 & v11;
      v17 = (_DWORD *)(*(_QWORD *)(v12 + 8) + 4 * (v16 >> 5));
      if ( (_DWORD *)v10 != v17 )
      {
        v10 = *(_QWORD *)(v12 + 8) + 4 * ((unsigned __int64)(v5 & v11) >> 5);
        v13 = *v17 & (-1 << (v16 & 0x1F));
        if ( (a3 & 0x4000) != 0 )
        {
          v20 = 0;
          v21 = (unsigned __int8)v25 & (unsigned __int8)v11 & 0xF;
          do
          {
            v22 = v21 & 0x1F;
            v21 += 16;
            v20 |= 1 << v22;
          }
          while ( v21 < 0x20 && v21 <= v11 );
          v13 &= ~v20;
        }
        else if ( ((v16 ^ v15) & 0xFFFFFFFFFFFFFFE0uLL) == 0 )
        {
          v13 &= (1 << (v15 & 0x1F)) - 1;
        }
      }
      v18 = v5 & v11 & 0xFFFFFFE0;
      if ( v13 )
        break;
      if ( v18 + 32 >= v15 )
      {
        v10 = 0LL;
        if ( !v25 || v15 != v14 )
          return 0LL;
        v15 = v25 & v11;
        v5 = v25 & ~v11;
      }
      else
      {
        v5 = v18 + 32 + (~v11 & v5);
      }
    }
    _BitScanForward(&v19, v13);
    v26 = v6;
    v27 = v6;
    v5 = v19 + v18 + (~v11 & v5);
    v13 &= ~(1 << v19);
    result = sub_14022FFB8(v3, &v26, v5);
    if ( result )
      return result;
    result = sub_140325830(a1, (unsigned int)v23 + 88 * v5, v5, v6, a3);
    if ( result == 1 )
      break;
    if ( result )
      return result;
    v3 = a1;
    v14 = v11 + 1;
  }
  return 1LL;
}
