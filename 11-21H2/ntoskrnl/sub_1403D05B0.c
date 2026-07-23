/*
 * XREFs of sub_1403D05B0 @ 0x1403D05B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 */

__int64 __fastcall sub_1403D05B0(_DWORD *a1)
{
  int v1; // r9d
  int v2; // eax
  __int64 v3; // rcx
  int v4; // r10d
  bool v5; // zf
  __int64 result; // rax
  unsigned int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // r11
  _WORD *v10; // r11
  __int64 v11; // rcx
  __int64 v12; // r11
  int v13; // edx
  unsigned __int64 v14; // [rsp+30h] [rbp+8h]

  v1 = a1[26] * a1[27];
  v2 = a1[30];
  v14 = (unsigned int)a1[26] * (unsigned __int64)(unsigned int)a1[27];
  if ( v2 )
  {
    if ( v2 == 3 )
    {
      sub_1403A2E60((__int64)a1, v1);
      *(_QWORD *)(v11 + 88) = v12;
      sub_1403A2E60(v11, SHIDWORD(v14));
      v5 = v13 == 0;
    }
    else
    {
      sub_1403A2E60((__int64)a1, (unsigned __int16)v1);
      *(_QWORD *)(v8 + 88) = v9;
      sub_1403A2E60(v8, HIWORD(v7));
      v5 = *v10 == (unsigned __int16)v4;
    }
  }
  else
  {
    a1[30] = 1;
    sub_1403A2E60((__int64)a1, v1);
    v5 = *(_BYTE *)(v3 + 25) == (unsigned __int8)v4;
  }
  LOBYTE(v4) = !v5;
  result = (v4 << 11) | v4 & 0xFFFFF7FF | *(_DWORD *)(v3 + 16) & 0xFFFFF7FE;
  *(_DWORD *)(v3 + 16) = result;
  return result;
}
