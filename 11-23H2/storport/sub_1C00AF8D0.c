/*
 * XREFs of sub_1C00AF8D0 @ 0x1C00AF8D0
 * Callers:
 *     sub_1C003A65C @ 0x1C003A65C (sub_1C003A65C.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EC88 @ 0x1C003EC88 (sub_1C003EC88.c)
 *     sub_1C0076740 @ 0x1C0076740 (sub_1C0076740.c)
 *     sub_1C0077A00 @ 0x1C0077A00 (sub_1C0077A00.c)
 *     sub_1C0078140 @ 0x1C0078140 (sub_1C0078140.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C00AF8D0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r12
  _WORD *v8; // rsi
  unsigned __int16 v9; // r15
  _WORD *v10; // rax
  int v11; // eax
  __int64 v12; // r9
  int v13; // eax
  int v14; // ebx
  char v16; // [rsp+28h] [rbp-51h]
  int v17; // [rsp+40h] [rbp-39h]
  __int64 v18; // [rsp+48h] [rbp-31h]
  _OWORD Dst[7]; // [rsp+60h] [rbp-19h] BYREF
  int v20; // [rsp+E0h] [rbp+67h] BYREF
  int v21; // [rsp+E8h] [rbp+6Fh] BYREF

  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  memset_0(Dst, 0, 0x40uLL);
  *a3 = 0LL;
  v9 = 0;
  v21 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
  {
    v20 = -1073741637;
LABEL_30:
    sub_1C003EC88(v9, &v20);
    v14 = v20;
    goto LABEL_31;
  }
  if ( *(_DWORD *)(a1 + 5964) != 1 )
  {
    v20 = -1073741436;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x88u )
  {
    v20 = -1073741585;
    goto LABEL_30;
  }
  v6 = *(_QWORD *)(a2 + 24) + 8LL;
  if ( *(_WORD *)v6 == 1
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x48u
    && (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 24) + 16LL) - 1) <= 0xFFFDu
    && *(_WORD *)(*(_QWORD *)(a2 + 24) + 24LL) == 1
    && *(_WORD *)(*(_QWORD *)(a2 + 24) + 26LL) >= 0x38u )
  {
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 28LL) - 1) > 2 )
    {
      v20 = -1073741811;
      goto LABEL_30;
    }
    if ( *(_DWORD *)(a1 + 5960) != 1 )
    {
      v20 = sub_1C0078140(a1, 1);
      if ( v20 < 0 )
        goto LABEL_30;
      v7 = 1;
    }
    v10 = (_WORD *)sub_1C0007CF4(64LL, 128LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    v8 = v10;
    if ( !v10 )
    {
      v20 = -1073741670;
      goto LABEL_30;
    }
    *v10 |= 2u;
    v11 = *(_DWORD *)(v6 + 20);
    switch ( v11 )
    {
      case 1:
        *((_BYTE *)v8 + 64) = 0;
        break;
      case 2:
        *((_BYTE *)v8 + 64) = 1;
        break;
      case 3:
        *((_BYTE *)v8 + 64) = 2;
        break;
    }
    *((_BYTE *)v8 + 65) = *(_BYTE *)(v6 + 24);
    *((_BYTE *)v8 + 66) = *(_BYTE *)(v6 + 25);
    *((_DWORD *)v8 + 17) = *(_DWORD *)(v6 + 28);
    *((_DWORD *)v8 + 18) = *(_DWORD *)(v6 + 32);
    *((_DWORD *)v8 + 19) = *(_DWORD *)(v6 + 36);
    *((_DWORD *)v8 + 20) = *(_DWORD *)(v6 + 40);
    *((_DWORD *)v8 + 21) = *(_DWORD *)(v6 + 44);
    *((_DWORD *)v8 + 22) = *(_DWORD *)(v6 + 48);
    *((_DWORD *)v8 + 23) = *(_DWORD *)(v6 + 52);
    *((_DWORD *)v8 + 24) = *(_DWORD *)(v6 + 56);
    sub_1C0076740((__int64)Dst, 0, *(unsigned __int16 *)(v6 + 8), 0, 0x80u);
    v13 = sub_1C00AEFFC(a1, v8, 0LL, 0x80u, Dst, v16, 1u, 1, (unsigned int)v12 & v17, (_DWORD *)(v12 & v18), &v21);
    v9 = v21;
    v14 = v13;
  }
  else
  {
    v14 = -1073741811;
  }
  v20 = v14;
  if ( v8 )
    ExFreePoolWithTag(v8, 0x464D6152u);
  if ( v14 < 0 )
    goto LABEL_30;
LABEL_31:
  if ( v7 )
    sub_1C0078140(a1, 0);
  sub_1C0077A00(a1, v6, v9, v14);
  return (unsigned int)v14;
}
