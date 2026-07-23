/*
 * XREFs of sub_1406BD5D8 @ 0x1406BD5D8
 * Callers:
 *     sub_1406BD3A8 @ 0x1406BD3A8 (sub_1406BD3A8.c)
 *     sub_140A2B950 @ 0x140A2B950 (sub_140A2B950.c)
 * Callees:
 *     sub_1406BD83C @ 0x1406BD83C (sub_1406BD83C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

__int64 __fastcall sub_1406BD5D8(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r15
  unsigned int *v9; // rsi
  __int64 v11; // r14
  unsigned int v14; // r10d
  unsigned int v15; // ebp
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v26; // [rsp+B8h] [rbp+20h] BYREF

  v8 = a5;
  v9 = a8;
  v11 = a6;
  v26 = 0;
  *a5 = 0;
  v14 = 0;
  *v9 = 0;
  if ( v11 )
  {
    v15 = a7;
    v11 &= -(__int64)(a7 != 0);
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  if ( v16 < 2 )
    return (unsigned int)-1073741264;
  if ( v16 == 10 )
  {
    v22 = *(_QWORD *)a4 - 0x101A47EFB725F130LL;
    if ( *(_QWORD *)a4 == 0x101A47EFB725F130LL )
      v22 = *(_QWORD *)(a4 + 8) + 0x531461739FFD0E5BLL;
    if ( !v22 )
    {
      v23 = sub_14077DA5C(a1, a2, 2, a3, 0LL, (__int64)&qword_140017FE8, (__int64)v8, v11, v15, (__int64)&v26, 0);
      v14 = v23;
      switch ( v23 )
      {
        case 0u:
          goto LABEL_40;
        case 0xC0000023:
          goto LABEL_40;
        case 0xC0000225:
          v24 = sub_14077DA5C(a1, a2, 2, a3, 0LL, (__int64)&qword_140017FA0, (__int64)v8, v11, v15, (__int64)&v26, 0);
          v14 = v24;
          if ( !v24 || v24 == -1073741789 )
            goto LABEL_40;
          break;
      }
    }
  }
  else
  {
    if ( v16 != 4 )
    {
      if ( v16 == 20 )
      {
        v19 = *(_QWORD *)a4 - 0x40E856266A3433F4LL;
        if ( *(_QWORD *)a4 == 0x40E856266A3433F4LL )
          v19 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
        if ( !v19 )
          return (unsigned int)sub_1406BD83C(a1, a2, a3, a4, (__int64)v8, v11, v15, (__int64)v9);
      }
      if ( v16 == 21 )
      {
        v17 = *(_QWORD *)a4 - 0x40E856266A3433F4LL;
        if ( *(_QWORD *)a4 == 0x40E856266A3433F4LL )
          v17 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
        if ( !v17 )
          return (unsigned int)sub_1406BD83C(a1, a2, a3, a4, (__int64)v8, v11, v15, (__int64)v9);
      }
      return v14;
    }
    v20 = *(_QWORD *)a4 - 0x40E856266A3433F4LL;
    if ( *(_QWORD *)a4 == 0x40E856266A3433F4LL )
      v20 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
    if ( !v20 )
    {
      v21 = sub_14077DA5C(a1, a2, 2, a3, 0LL, (__int64)qword_14000EAB8, (__int64)v8, v11, v15, (__int64)&v26, 0);
      v14 = v21;
      if ( v21 && v21 != -1073741789 )
      {
        if ( v21 == -1073741275 )
        {
          v14 = sub_14077DA5C(a1, a2, 2, a3, 0LL, (__int64)qword_14000EAA0, (__int64)v8, 0LL, 0, (__int64)&v26, 0);
          if ( v14 == -1073741275 )
            v14 = sub_14077DA5C(a1, a2, 2, a3, 0LL, (__int64)&xmmword_14000EA88, (__int64)v8, 0LL, 0, (__int64)&v26, 0);
          if ( (v14 & 0x80000000) == 0 || v14 == -1073741275 || v14 == -1073741789 )
          {
            *v9 = 1;
            *v8 = 17;
            if ( v15 < *v9 )
            {
              return (unsigned int)-1073741789;
            }
            else
            {
              *(_BYTE *)v11 = (v14 != -1073741275) - 1;
              return 0;
            }
          }
        }
        return v14;
      }
LABEL_40:
      *v9 = v26;
    }
  }
  return v14;
}
