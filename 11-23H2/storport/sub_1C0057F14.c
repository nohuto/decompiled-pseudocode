/*
 * XREFs of sub_1C0057F14 @ 0x1C0057F14
 * Callers:
 *     sub_1C003408C @ 0x1C003408C (sub_1C003408C.c)
 *     sub_1C005E814 @ 0x1C005E814 (sub_1C005E814.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0057F14(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r8d
  _DWORD *v4; // r9
  unsigned __int64 v5; // rdi
  __int64 v6; // r11
  __int64 v7; // r10
  unsigned __int64 v8; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // r11
  unsigned __int64 v14; // rax
  int v15; // eax
  int v16; // ecx
  bool v17; // cf
  bool v18; // zf

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v5 = *(unsigned int *)(v2 + 16);
  if ( (unsigned int)v5 >= 0x54 )
  {
    if ( *v4 != 1 )
      goto LABEL_13;
    if ( v4[1] != 84 )
      goto LABEL_13;
    if ( v4[2] != 3 )
      goto LABEL_13;
    v6 = 64LL;
    if ( v4[6] != 64 )
      goto LABEL_13;
    v7 = (unsigned int)v4[7];
    if ( (_DWORD)v7 )
    {
      v8 = (unsigned int)v4[11];
      if ( v8 < 0x90 || (v8 & 7) != 0 || *(unsigned int *)(v2 + 8) < v8 + v7 )
        goto LABEL_13;
    }
    else
    {
      v6 = (unsigned int)v4[6];
    }
    v10 = (unsigned int)v4[8];
    v11 = v6 + 80;
    if ( (_DWORD)v10 )
    {
      v12 = (unsigned int)v4[12];
      if ( v12 < v11 || (v12 & 7) != 0 || v5 < v12 + v10 )
        goto LABEL_13;
    }
    v13 = (unsigned int)v4[9];
    if ( (_DWORD)v13 )
    {
      v14 = (unsigned int)v4[13];
      if ( v14 < v11 || (v14 & 7) != 0 || *(unsigned int *)(v2 + 8) < v14 + v13 )
        goto LABEL_13;
    }
    if ( (_DWORD)v10 && (_DWORD)v7 && (unsigned int)v4[12] < v7 + (unsigned __int64)(unsigned int)v4[11]
      || (_DWORD)v13
      && ((_DWORD)v7 && (unsigned int)v4[13] < v7 + (unsigned __int64)(unsigned int)v4[11]
       || (_DWORD)v10 && (unsigned int)v4[13] < v10 + (unsigned __int64)(unsigned int)v4[12]) )
    {
      goto LABEL_13;
    }
    v15 = v4[14];
    if ( v15 == 1 )
    {
      v16 = v4[20];
      v17 = (unsigned __int8)v16 < 0xC0u;
    }
    else
    {
      if ( v15 != 2 )
      {
LABEL_13:
        v3 = -1073741811;
        goto LABEL_14;
      }
      v16 = v4[20];
      v17 = (unsigned __int8)v16 < 0x80u;
    }
    if ( !v17 )
      return v3;
    if ( byte_1C0093B06 == 1 )
    {
      if ( (unsigned __int8)v16 == 2
        || (unsigned __int8)v16 == 5
        || (unsigned __int8)v16 == 13
        || (unsigned __int8)v16 == 20
        || (unsigned __int8)v16 == 21
        || (unsigned __int8)v16 == 29
        || (unsigned __int8)v16 == 30
        || (unsigned __int8)v16 == 128 )
      {
        return v3;
      }
      v18 = (unsigned __int8)v16 == 132;
    }
    else
    {
      if ( (unsigned __int8)v16 == 2 )
        return v3;
      v18 = (unsigned __int8)v16 == 20;
    }
    if ( v18 )
      return v3;
    v3 = -1056964602;
LABEL_14:
    v4[4] = 3;
    return v3;
  }
  if ( (unsigned int)v5 >= 0x14 )
    v4[4] = 3;
  return (unsigned int)-1073741820;
}
