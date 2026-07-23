/*
 * XREFs of sub_140651C24 @ 0x140651C24
 * Callers:
 *     sub_140651540 @ 0x140651540 (sub_140651540.c)
 * Callees:
 *     sub_1406513D8 @ 0x1406513D8 (sub_1406513D8.c)
 *     sub_14065193C @ 0x14065193C (sub_14065193C.c)
 *     sub_140651D6C @ 0x140651D6C (sub_140651D6C.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 */

__int64 __fastcall sub_140651C24(__int64 *a1, int a2, __int64 a3)
{
  int v3; // r14d
  __int64 v4; // rbp
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  __int64 v13; // rdx
  unsigned int v14; // eax
  int v15; // r9d
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  v3 = 0;
  v4 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v9 = sub_14065193C(a1, &v17);
  v10 = v17;
  v8 = v9;
  if ( v9 >= 0 )
  {
    v11 = *(_DWORD *)(v17 + 4);
    v12 = 0;
    if ( v11 )
    {
      v13 = v17 + 48;
      do
      {
        v14 = *(unsigned __int8 *)(v13 + 32);
        v4 = v13;
        if ( (unsigned __int8)v14 > 0xFu || (v15 = 32801, !_bittest(&v15, v14)) )
        {
          if ( ++v3 == a2 )
            goto LABEL_12;
        }
        ++v12;
        v13 += 144LL;
      }
      while ( v12 < v11 );
    }
    if ( v12 < v11 )
    {
LABEL_12:
      *(_BYTE *)(v4 + 32) = *(_BYTE *)(a3 + 8);
      *(_BYTE *)(v4 + 28) = 1;
      v8 = sub_1406513D8(*a1);
      if ( v8 >= 0 )
        v8 = sub_140651D6C(a1, v10);
      goto LABEL_14;
    }
    v8 = -1073741811;
  }
LABEL_14:
  if ( v10 )
    sub_1406D9550(v10);
  return (unsigned int)v8;
}
