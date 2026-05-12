/*
 * XREFs of sub_1C00AF4CC @ 0x1C00AF4CC
 * Callers:
 *     sub_1C003A65C @ 0x1C003A65C (sub_1C003A65C.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EC88 @ 0x1C003EC88 (sub_1C003EC88.c)
 *     sub_1C0077760 @ 0x1C0077760 (sub_1C0077760.c)
 *     sub_1C0078140 @ 0x1C0078140 (sub_1C0078140.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C00AF4CC(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r13
  _BYTE *v8; // rsi
  unsigned __int16 v9; // r12
  ULONG v10; // ebx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // ebx
  char v15; // [rsp+28h] [rbp-51h]
  _OWORD Dst[2]; // [rsp+60h] [rbp-19h] BYREF
  ULONG v17; // [rsp+88h] [rbp+Fh]
  char v18; // [rsp+9Ch] [rbp+23h]
  int v19; // [rsp+E0h] [rbp+67h] BYREF
  int v20; // [rsp+E8h] [rbp+6Fh] BYREF

  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  memset_0(Dst, 0, 0x40uLL);
  *a3 = 0LL;
  v9 = 0;
  v20 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
  {
    v19 = -1073741637;
LABEL_24:
    sub_1C003EC88(v9, &v19);
    v13 = v19;
    goto LABEL_25;
  }
  if ( *(_DWORD *)(a1 + 5964) != 1 )
  {
    v19 = -1073741436;
    goto LABEL_24;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x28u )
  {
    v19 = -1073741585;
    goto LABEL_24;
  }
  v6 = *(_QWORD *)(a2 + 24) + 8LL;
  if ( *(_WORD *)v6 == 1
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x20u
    && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 20LL) - 1) <= 0xFE )
  {
    if ( *(_DWORD *)(a1 + 5960) != 1 )
    {
      v19 = sub_1C0078140(a1, 1);
      if ( v19 < 0 )
        goto LABEL_24;
      v7 = 1;
    }
    v10 = 4 * *(_DWORD *)(v6 + 12) + 4;
    v8 = (_BYTE *)sub_1C0007CF4(64LL, v10, 1179476306LL, *(_QWORD *)(a1 + 8));
    if ( !v8 )
    {
      v19 = -1073741670;
      goto LABEL_24;
    }
    v11 = 0LL;
    for ( *v8 = *(_BYTE *)(v6 + 12); (unsigned int)v11 < *(_DWORD *)(v6 + 12); v11 = (unsigned int)(v11 + 1) )
    {
      v8[4 * v11 + 4] = *(_BYTE *)(v6 + 16LL * (unsigned int)v11 + 28);
      if ( (*(_DWORD *)(v6 + 16LL * (unsigned int)v11 + 24) & 1) != 0 )
        *(_DWORD *)&v8[4 * v11 + 4] |= 0x100u;
    }
    v18 = 7;
    LODWORD(Dst[0]) = Dst[0] & 0xFFFFFF00 | 0xD1;
    v17 = v10 >> 2;
    v12 = sub_1C00AEFFC(a1, v8, 0LL, v10, Dst, v15, 1u, 1, 0, 0LL, &v20);
    v9 = v20;
    v13 = v12;
  }
  else
  {
    v13 = -1073741811;
  }
  v19 = v13;
  if ( v8 )
    ExFreePoolWithTag(v8, 0x464D6152u);
  if ( v13 < 0 )
    goto LABEL_24;
LABEL_25:
  if ( v7 )
    sub_1C0078140(a1, 0);
  sub_1C0077760(a1, v6, v9, v13);
  return (unsigned int)v13;
}
