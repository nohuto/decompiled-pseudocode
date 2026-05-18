/*
 * XREFs of sub_1800E0478 @ 0x1800E0478
 * Callers:
 *     sub_1800E0A7C @ 0x1800E0A7C (sub_1800E0A7C.c)
 * Callees:
 *     sub_1800DF3E4 @ 0x1800DF3E4 (sub_1800DF3E4.c)
 */

__int64 *__fastcall sub_1800E0478(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 *v6; // rdx
  __int64 v7; // rax
  char v8; // r8
  __int64 *v9; // r10
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rdi
  __int64 *j; // rbx
  __int64 *v15; // r14
  __int64 v16; // rax
  __int64 i; // rax
  __int64 v18; // rcx
  __int64 *v20[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v21; // [rsp+60h] [rbp+30h] BYREF
  __int64 *v22; // [rsp+78h] [rbp+48h] BYREF

  v3 = *(_QWORD *)(a1 + 1664);
  v6 = (__int64 *)v3;
  v7 = *(_QWORD *)(v3 + 8);
  v8 = *(_BYTE *)(v7 + 25);
  if ( !v8 )
  {
    v9 = *(__int64 **)(v3 + 8);
    do
    {
      if ( *((_DWORD *)v9 + 8) >= a3 )
      {
        v6 = v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        v9 = (__int64 *)v9[2];
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  if ( !*((_BYTE *)v6 + 25) && a3 >= *((_DWORD *)v6 + 8) )
  {
    if ( !v8 )
    {
      do
      {
        if ( *(_DWORD *)(v7 + 32) >= a3 )
        {
          v3 = v7;
          v7 = *(_QWORD *)v7;
        }
        else
        {
          v7 = *(_QWORD *)(v7 + 16);
        }
      }
      while ( !*(_BYTE *)(v7 + 25) );
    }
    if ( !*(_BYTE *)(v3 + 25) && a3 >= *(_DWORD *)(v3 + 32) )
    {
      v10 = *(_QWORD *)(v3 + 40);
LABEL_50:
      *a2 = v10;
      return a2;
    }
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
  }
  if ( *(_QWORD *)(a1 + 1672) >= 2uLL )
  {
    v11 = (__int64 *)v3;
    if ( v8 )
    {
      v13 = (__int64 *)v3;
      v21 = (__int64 *)v3;
      j = (__int64 *)v3;
      v15 = (__int64 *)v3;
    }
    else
    {
      v12 = v7;
      do
      {
        if ( *(_DWORD *)(v12 + 32) >= a3 )
        {
          v11 = (__int64 *)v12;
          v12 = *(_QWORD *)v12;
        }
        else
        {
          v12 = *(_QWORD *)(v12 + 16);
        }
      }
      while ( !*(_BYTE *)(v12 + 25) );
      v13 = v11;
      v21 = v11;
      j = (__int64 *)v3;
      do
      {
        if ( a3 >= *(_DWORD *)(v7 + 32) )
        {
          v7 = *(_QWORD *)(v7 + 16);
        }
        else
        {
          j = (__int64 *)v7;
          v7 = *(_QWORD *)v7;
        }
        v15 = (__int64 *)v3;
      }
      while ( !*(_BYTE *)(v7 + 25) );
    }
    v22 = j;
    if ( v11 != (__int64 *)*v15 )
    {
      sub_1800DF3E4(&v21, v20);
      v13 = v21;
    }
    if ( j == v15 )
    {
      sub_1800DF3E4(&v22, v20);
      j = v22;
    }
    if ( v13 == j )
    {
      if ( v13 == (__int64 *)*v15 )
      {
        v16 = j[2];
        if ( *(_BYTE *)(v16 + 25) )
        {
          for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
            j = (__int64 *)i;
          j = (__int64 *)i;
        }
        else
        {
          v18 = *(_QWORD *)v16;
          for ( j = (__int64 *)j[2]; !*(_BYTE *)(v18 + 25); v18 = *(_QWORD *)v18 )
            j = (__int64 *)v18;
        }
      }
      else
      {
        sub_1800DF3E4(&v21, &v22);
        v13 = v21;
      }
    }
    v10 = v13[5]
        + (int)(a3 - *((_DWORD *)v13 + 8))
        * ((j[5] - v13[5])
         / (unsigned int)(*((_DWORD *)j + 8) - *((_DWORD *)v13 + 8)));
    goto LABEL_50;
  }
  *a2 = 0LL;
  return a2;
}
