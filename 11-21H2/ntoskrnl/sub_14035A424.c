/*
 * XREFs of sub_14035A424 @ 0x14035A424
 * Callers:
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1403591D8 @ 0x1403591D8 (sub_1403591D8.c)
 *     sub_14035A160 @ 0x14035A160 (sub_14035A160.c)
 *     sub_14035A264 @ 0x14035A264 (sub_14035A264.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140229BD8 @ 0x140229BD8 (sub_140229BD8.c)
 *     sub_14024E928 @ 0x14024E928 (sub_14024E928.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     sub_140343770 @ 0x140343770 (sub_140343770.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_14035A6C8 @ 0x14035A6C8 (sub_14035A6C8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14062D548 @ 0x14062D548 (sub_14062D548.c)
 */

__int64 __fastcall sub_14035A424(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, _DWORD *a6)
{
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  char v10; // r12
  char v11; // r13
  char v12; // si
  int v13; // ebp
  char v14; // al
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *v17; // r11
  ULONG_PTR v18; // r15
  int v19; // eax
  int v20; // r8d
  _DWORD *v21; // r9
  __int64 v22; // r11
  __int64 v24; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  char v29; // cl
  int v30; // eax
  char v31; // [rsp+50h] [rbp-58h]
  int v32; // [rsp+54h] [rbp-54h]
  _DWORD v33[20]; // [rsp+58h] [rbp-50h] BYREF
  char v34; // [rsp+B0h] [rbp+8h]

  v7 = a1 - 96LL * *(unsigned __int8 *)(a1 + 16) - 1696;
  v31 = *(_BYTE *)(v7 + 195);
  v8 = sub_14033D760(v7);
  v9 = 0;
  v10 = v8;
  v11 = 2;
  if ( v8 < 2 && *(_DWORD *)(v7 + 1440) )
    v10 = 2;
  v12 = 1;
  if ( !*(_DWORD *)(v7 + 1448) || (v34 = 0, *(_DWORD *)(v7 + 1444)) )
    v34 = 1;
  v32 = 0;
  v13 = 0;
  *a6 = 0;
  v14 = sub_14035A6C8(a1);
  v18 = (char)*v17;
  if ( v14 < (char)v18 )
  {
    v24 = *(unsigned int *)(a1 + 88);
    LOBYTE(v32) = *v17;
    *(_DWORD *)(a1 + 88) = v24 ^ (v24 ^ (v24 | (1 << (v18 - 1)))) & 0x3FFFFFFF;
    CurrentPrcb = KeGetCurrentPrcb();
    v33[0] = 0;
    while ( 1 )
    {
      v26 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v26 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v28 = *(_DWORD *)(v26 + 24);
          *(_DWORD *)(v26 + 24) = v28 + 1;
          if ( v28 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
        break;
      v27 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v27 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v30 = *(_DWORD *)(v27 + 24) - 1;
          *(_DWORD *)(v27 + 24) = v30;
          if ( !v30 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(v33, v24, v15, v16);
      while ( *(_QWORD *)(v7 + 64) );
    }
    v29 = *(_BYTE *)(v18 + v7 + 824);
    if ( v29 == -1 )
      KeBugCheckEx(0x157u, v7, v18, 1uLL, 0LL);
    *(_BYTE *)(v18 + v7 + 824) = v29 + 1;
    v13 = 0;
    *(_DWORD *)(v7 + 856) |= 1 << v18;
    if ( *(char *)(v7 + 195) < (char)v18 )
    {
      sub_140344A30(v7, a3, v18);
      v13 = 1;
    }
    sub_140224100(v7);
  }
  else
  {
    LOBYTE(v18) = 0;
  }
  v19 = sub_140343770(v7);
  if ( v19 >= *(char *)(v22 + 1)
    || (*(_DWORD *)(a1 + 88) & 0x40000000) != 0
    || !(unsigned int)sub_140229BD8(v7, a5, 0LL, v21) )
  {
    v11 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 88) |= 0x40000000u;
    v13 = 1;
    BYTE1(v32) = 2;
  }
  if ( (*(_DWORD *)(v7 + 1448) == 0) < *(char *)(a2 + 2)
    && *(int *)(a1 + 88) >= 0
    && (unsigned int)sub_140229BD8(v7, a5, 1LL, a6) )
  {
    *(_DWORD *)(a1 + 88) |= 0x80000000;
    v13 = 1;
    BYTE2(v32) = 1;
  }
  else
  {
    v12 = 0;
  }
  if ( a4 && v13 && *(_BYTE *)(v7 + 793) )
    sub_14024E928(v7, a4, (_QWORD *)(v7 + 808));
  if ( (WORD2(xmmword_140D06900) & 0x200) != 0 && v32 )
  {
    LOBYTE(v21) = v11;
    LOBYTE(v20) = v18;
    sub_14062D548(v7, *(_DWORD *)a1 & 0xFFFFFFFC, v20, (_DWORD)v21, v12, v31, v10, v34, 0, *a6);
  }
  LOBYTE(v9) = (_BYTE)v18 != 0;
  return v9;
}
