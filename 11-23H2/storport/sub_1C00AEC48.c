/*
 * XREFs of sub_1C00AEC48 @ 0x1C00AEC48
 * Callers:
 *     sub_1C003A494 @ 0x1C003A494 (sub_1C003A494.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003E940 @ 0x1C003E940 (sub_1C003E940.c)
 *     sub_1C003EC88 @ 0x1C003EC88 (sub_1C003EC88.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C00AEC48(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // r14
  size_t v6; // r12
  int v7; // edi
  unsigned __int16 v8; // r9
  int v9; // r15d
  int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  _DWORD Dst[10]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+E0h] [rbp+67h] BYREF
  int v18; // [rsp+E8h] [rbp+6Fh]
  unsigned int v19; // [rsp+F0h] [rbp+77h]

  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  memset_0(Dst, 0, 0x40uLL);
  v19 = 0;
  LOBYTE(v7) = 0;
  *a3 = 0LL;
  v8 = 0;
  LOBYTE(v9) = -1;
  v18 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
  {
    v17 = -1073741637;
    goto LABEL_14;
  }
  if ( v4 && v6 >= 0x10 )
  {
    Dst[0] = 10;
    v16 = v16 & 0xFFFFFF00 | 0xD1;
    v17 = sub_1C00AEFFC(a1, 0, 0, 0, (__int64)Dst);
    v10 = v17;
    if ( v17 < 0 )
    {
      v8 = v18;
      goto LABEL_14;
    }
    memset_0(v4, 0, v6);
    v11 = v19;
    *(_WORD *)v4 = 1;
    v12 = v11 >> 1;
    v13 = v11 & 1;
    v7 = v12 & 1;
    v4[1] = 16;
    v4[2] = v13;
    if ( v13 != *(_DWORD *)(a1 + 5964) )
      *(_DWORD *)(a1 + 5964) = v13;
    if ( v7 != *(_DWORD *)(a1 + 5960) )
      *(_DWORD *)(a1 + 5960) = v7;
    v8 = v18;
    *a3 = 16LL;
  }
  else
  {
    v10 = -1073741789;
    v17 = -1073741789;
  }
  if ( v10 >= 0 )
  {
LABEL_16:
    v9 = v4[2];
    goto LABEL_17;
  }
LABEL_14:
  sub_1C003EC88(v8, &v17);
  v10 = v17;
  if ( v17 >= 0 )
    goto LABEL_16;
  LOBYTE(v7) = -1;
LABEL_17:
  sub_1C003E940(a1, v9, v7, v8, v10);
  return (unsigned int)v10;
}
