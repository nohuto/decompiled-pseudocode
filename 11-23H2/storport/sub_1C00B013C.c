/*
 * XREFs of sub_1C00B013C @ 0x1C00B013C
 * Callers:
 *     sub_1C003A65C @ 0x1C003A65C (sub_1C003A65C.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EC88 @ 0x1C003EC88 (sub_1C003EC88.c)
 *     sub_1C0077EAC @ 0x1C0077EAC (sub_1C0077EAC.c)
 *     sub_1C0078140 @ 0x1C0078140 (sub_1C0078140.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C00B013C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r13
  void *v8; // rsi
  unsigned __int16 v9; // r12
  _BYTE *v10; // rax
  int v11; // eax
  int v12; // ebx
  char v14; // [rsp+28h] [rbp-51h]
  _OWORD Dst[2]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+E0h] [rbp+67h] BYREF
  int v18; // [rsp+E8h] [rbp+6Fh] BYREF

  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  memset_0(Dst, 0, 0x40uLL);
  *a3 = 0LL;
  v9 = 0;
  v18 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
  {
    v17 = -1073741637;
LABEL_30:
    sub_1C003EC88(v9, &v17);
    v12 = v17;
    goto LABEL_31;
  }
  if ( *(_DWORD *)(a1 + 5964) != 1 )
  {
    v17 = -1073741436;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x28u )
  {
    v17 = -1073741585;
    goto LABEL_30;
  }
  v6 = *(_QWORD *)(a2 + 24) + 8LL;
  if ( *(_WORD *)v6 == 1
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x20u
    && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 16LL) - 1) <= 2
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 20LL)
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 24LL)
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 28LL)
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 32LL) )
  {
    if ( *(_DWORD *)(a1 + 5960) != 1 )
    {
      v17 = sub_1C0078140(a1, 1);
      if ( v17 < 0 )
        goto LABEL_30;
      v7 = 1;
    }
    v10 = (_BYTE *)sub_1C0007CF4(64LL, 64LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    v8 = v10;
    if ( !v10 )
    {
      v17 = -1073741670;
      goto LABEL_30;
    }
    switch ( *(_DWORD *)(v6 + 8) )
    {
      case 1:
        *v10 = 0;
        break;
      case 2:
        *v10 = 1;
        break;
      case 3:
        *v10 = 2;
        break;
    }
    *((_DWORD *)v10 + 3) = *(_DWORD *)(v6 + 12);
    *((_DWORD *)v10 + 4) = *(_DWORD *)(v6 + 16);
    *((_DWORD *)v10 + 7) = *(_DWORD *)(v6 + 20);
    *((_DWORD *)v10 + 8) = *(_DWORD *)(v6 + 24);
    LODWORD(Dst[0]) = Dst[0] & 0xFFFFFF00 | 9;
    v16 = v16 & 0xFFFFFF00 | 0xD3;
    v11 = sub_1C00AEFFC(a1, v10, 0LL, 0x40u, Dst, v14, 1u, 1, 0, 0LL, &v18);
    v9 = v18;
    v12 = v11;
  }
  else
  {
    v12 = -1073741811;
  }
  v17 = v12;
  if ( v8 )
    ExFreePoolWithTag(v8, 0x464D6152u);
  if ( v12 < 0 )
    goto LABEL_30;
LABEL_31:
  if ( v7 )
    sub_1C0078140(a1, 0);
  sub_1C0077EAC(a1, v6, v9, v12);
  return (unsigned int)v12;
}
