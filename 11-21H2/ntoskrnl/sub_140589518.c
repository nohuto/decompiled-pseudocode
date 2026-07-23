/*
 * XREFs of sub_140589518 @ 0x140589518
 * Callers:
 *     sub_1402652C4 @ 0x1402652C4 (sub_1402652C4.c)
 * Callees:
 *     sub_14026E05C @ 0x14026E05C (sub_14026E05C.c)
 *     sub_14026E1F4 @ 0x14026E1F4 (sub_14026E1F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C041C @ 0x1405C041C (sub_1405C041C.c)
 *     sub_1405C04D4 @ 0x1405C04D4 (sub_1405C04D4.c)
 *     sub_1405C05A4 @ 0x1405C05A4 (sub_1405C05A4.c)
 *     sub_1405C0634 @ 0x1405C0634 (sub_1405C0634.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 */

__int64 __fastcall sub_140589518(__int64 a1, unsigned int a2, char a3)
{
  int v6; // eax
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // eax
  unsigned __int64 v10; // r15
  int v11; // r13d
  bool v12; // zf
  unsigned __int64 v13; // rax
  __int64 v14; // r12
  __int64 result; // rax
  int v16; // r14d
  __int64 v17; // r8
  __int64 v18; // r11
  _QWORD *v19; // rdi
  unsigned __int64 v20; // r12
  __int64 v21; // r15
  _QWORD **v22; // rbx
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  _QWORD v27[12]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v28[28]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v29[12]; // [rsp+160h] [rbp+60h] BYREF

  memset(v28, 0, 0xD8uLL);
  memset(v29, 0, sizeof(v29));
  memset(v27, 0, 0x58uLL);
  v6 = *(_DWORD *)(a1 + 60);
  v7 = *(_QWORD *)(a1 + 64);
  if ( v6 )
  {
    if ( v6 == 2 )
    {
      v8 = 28;
    }
    else
    {
      v8 = 4;
      if ( v6 == 3 )
        v8 = 0;
    }
  }
  else
  {
    v8 = 12;
  }
  v9 = 16;
  v10 = (unsigned __int64)*(unsigned int *)(v7 + 40) >> 12;
  v11 = a3 & 1;
  if ( v11 )
    v9 = 24;
  v12 = *(_QWORD *)(a1 + 16) == 0x100000LL;
  LODWORD(v27[0]) = v9;
  if ( v12 )
    LODWORD(v27[0]) = v9 | 1;
  v27[1] = *(_QWORD *)a1;
  v13 = *(_QWORD *)(a1 + 40) - v10;
  v27[4] = __PAIR64__(v8, a2);
  v27[5] = -1LL;
  v27[2] = v13;
  v27[3] = *(_QWORD *)(a1 + 32);
  v27[10] = v29;
  while ( 1 )
  {
    v14 = qword_140C51850;
    result = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 24) < *(_QWORD *)(*(_QWORD *)a1 + 16712LL) )
      break;
    sub_14026E1F4(v29);
    result = sub_1405C0D40(v27);
    v16 = v27[9];
    if ( !v27[9] )
      break;
    if ( v14 == qword_140C51850 )
    {
      v17 = 4LL;
      if ( KeGetCurrentIrql() >= 2u || (KeGetPcr()[36].Unused0[2] & 0x10001) != 0 )
        v17 = 6LL;
      sub_1405C04D4(v28, a2, v17);
      LODWORD(v28[23]) |= 0x40u;
      v28[0] = a1;
      v18 = 0LL;
      v19 = (_QWORD *)(v7 + 48 + 8 * v10);
      do
      {
        v20 = qword_14001C780[v18];
        v21 = 3 * v18;
        v22 = (_QWORD **)&v29[3 * v18];
        while ( 1 )
        {
          v23 = *v22;
          if ( *v22 == v22 )
            break;
          if ( (_QWORD **)v23[1] != v22 || (v24 = (_QWORD *)*v23, *(_QWORD **)(*v23 + 8LL) != v23) )
            __fastfail(3u);
          *v22 = v24;
          v24[1] = v22;
          --v29[v21 + 2];
          v25 = 0LL;
          if ( v20 )
          {
            v26 = 0LL;
            do
            {
              v25 = (unsigned int)(v25 + 1);
              *v19++ = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v23 + 0x44000000000LL) >> 4) + v26;
              v26 = (unsigned int)v25;
            }
            while ( (unsigned int)v25 < v20 );
          }
          sub_1405C05A4(v28, v23, v25);
        }
        v18 = (unsigned int)(v18 + 1);
      }
      while ( (unsigned int)v18 < 4 );
      *(_DWORD *)(v7 + 40) += v16 << 12;
      sub_1405C0634(v28);
      sub_1405C041C(v28);
      *(_QWORD *)(v7 + 16) = 0LL;
      result = 2LL;
      *(_WORD *)(v7 + 10) |= 2u;
      if ( v11 )
        *(_QWORD *)(v7 + 24) = 1LL;
      return result;
    }
    sub_14026E05C(*(_QWORD *)a1, (__int64)v29, (LODWORD(v27[0]) >> 3) & 1, 0LL);
    v27[9] = 0LL;
  }
  return result;
}
