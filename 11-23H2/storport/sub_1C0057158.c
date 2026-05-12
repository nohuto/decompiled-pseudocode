/*
 * XREFs of sub_1C0057158 @ 0x1C0057158
 * Callers:
 *     sub_1C0039528 @ 0x1C0039528 (sub_1C0039528.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0035D34 @ 0x1C0035D34 (sub_1C0035D34.c)
 */

__int64 __fastcall sub_1C0057158(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  _BYTE *v11; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v9 = (_DWORD *)sub_1C0007CF4(64LL, 44LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  v10 = v9;
  if ( v9 )
  {
    v9[4] = 3004036;
    *v9 = 28;
    v9[3] = *(_DWORD *)(a1 + 4060);
    v9[6] = 16;
    v9[8] = 16;
    v9[7] = 1;
    v13 = *(_OWORD *)(v4 + 8);
    v11 = sub_1C0035D34(a1, &v13);
    if ( v11 )
    {
      v10[9] = 8;
      *((_BYTE *)v10 + 43) = v11[98];
      *((_BYTE *)v10 + 41) = v11[96];
      *((_BYTE *)v10 + 40) = 0;
      *((_BYTE *)v10 + 42) = v11[97];
    }
    else
    {
      v5 = -1073741632;
    }
  }
  else
  {
    v5 = -1073741670;
  }
  result = v5;
  *a3 = v10;
  *a4 = 44;
  return result;
}
