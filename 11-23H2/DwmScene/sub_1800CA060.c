/*
 * XREFs of sub_1800CA060 @ 0x1800CA060
 * Callers:
 *     sub_1800CA57C @ 0x1800CA57C (sub_1800CA57C.c)
 * Callees:
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_1800C88CC @ 0x1800C88CC (sub_1800C88CC.c)
 *     sub_1800CB4F8 @ 0x1800CB4F8 (sub_1800CB4F8.c)
 *     sub_1800CB548 @ 0x1800CB548 (sub_1800CB548.c)
 *     sub_1800CB628 @ 0x1800CB628 (sub_1800CB628.c)
 */

_QWORD *__fastcall sub_1800CA060(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 *v6; // r11
  __int64 v7; // r11
  __int64 *v8; // r10
  __int64 **v9; // r11
  __int64 *v10; // rdx
  __int64 *v11; // rax
  __int64 *i; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 j; // rcx
  __int64 *v16; // rcx
  __int64 *k; // rcx
  char v19[32]; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v20; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v21; // [rsp+70h] [rbp+30h] BYREF

  v21 = a3;
  if ( sub_1800CB548(a1 + 1664, &v21) )
  {
    *a2 = *(_QWORD *)sub_1800CB4F8(v6, &v21);
    return a2;
  }
  if ( *(_QWORD *)(a1 + 1672) < 2uLL )
  {
    *a2 = 0LL;
    return a2;
  }
  sub_1800C88CC(v6, (__int64)v19, &v21);
  sub_1800CB628(v7, &v20, &v21);
  v10 = *v9;
  if ( v8 != (__int64 *)**v9 )
  {
    if ( *((_BYTE *)v8 + 25) )
    {
      v8 = (__int64 *)v8[2];
    }
    else
    {
      v11 = (__int64 *)*v8;
      if ( *(_BYTE *)(*v8 + 25) )
      {
        for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v8 == (__int64 *)*i; i = (__int64 *)i[1] )
          v8 = i;
        if ( *((_BYTE *)v8 + 25) )
          i = v8;
        v8 = i;
      }
      else
      {
        do
        {
          v8 = v11;
          v11 = (__int64 *)v11[2];
        }
        while ( !*((_BYTE *)v11 + 25) );
      }
    }
  }
  v13 = (__int64)v20;
  if ( v20 == v10 )
  {
    if ( *((_BYTE *)v20 + 25) )
    {
      v13 = v20[2];
    }
    else
    {
      v14 = *v20;
      if ( *(_BYTE *)(*v20 + 25) )
      {
        for ( j = v20[1]; !*(_BYTE *)(j + 25) && v13 == *(_QWORD *)j; j = *(_QWORD *)(j + 8) )
        {
          v13 = j;
          v20 = (__int64 *)j;
        }
        if ( !*(_BYTE *)(v13 + 25) )
        {
          v13 = j;
          v20 = (__int64 *)j;
        }
        goto LABEL_29;
      }
      do
      {
        v13 = v14;
        v14 = *(_QWORD *)(v14 + 16);
      }
      while ( !*(_BYTE *)(v14 + 25) );
    }
    v20 = (__int64 *)v13;
  }
LABEL_29:
  if ( v8 == (__int64 *)v13 )
  {
    if ( v8 == (__int64 *)*v10 )
    {
      sub_18001D3F8((__int64 *)&v20);
      v13 = (__int64)v20;
    }
    else if ( *((_BYTE *)v8 + 25) )
    {
      v8 = (__int64 *)v8[2];
    }
    else
    {
      v16 = (__int64 *)*v8;
      if ( *(_BYTE *)(*v8 + 25) )
      {
        for ( k = (__int64 *)v8[1]; !*((_BYTE *)k + 25) && v8 == (__int64 *)*k; k = (__int64 *)k[1] )
          v8 = k;
        if ( *((_BYTE *)v8 + 25) )
          k = v8;
        v8 = k;
      }
      else
      {
        do
        {
          v8 = v16;
          v16 = (__int64 *)v16[2];
        }
        while ( !*((_BYTE *)v16 + 25) );
      }
    }
  }
  *a2 = v8[5]
      + (int)(a3 - *((_DWORD *)v8 + 8))
      * ((*(_QWORD *)(v13 + 40) - v8[5])
       / (unsigned int)(*(_DWORD *)(v13 + 32) - *((_DWORD *)v8 + 8)));
  return a2;
}
