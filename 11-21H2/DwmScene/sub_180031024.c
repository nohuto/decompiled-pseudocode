/*
 * XREFs of sub_180031024 @ 0x180031024
 * Callers:
 *     sub_180031A38 @ 0x180031A38 (sub_180031A38.c)
 *     sub_180031BB8 @ 0x180031BB8 (sub_180031BB8.c)
 *     sub_18006C3A8 @ 0x18006C3A8 (sub_18006C3A8.c)
 * Callees:
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 */

__int64 __fastcall sub_180031024(__int64 **a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 *v4; // rbp
  _QWORD *v8; // rdi
  char v9; // al
  __int64 *v10; // rdi
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  __int64 *i; // rax
  char v15; // cl
  __int64 result; // rax
  __int64 *v17; // rdi
  char v18; // r14
  __int64 *v19; // rax
  __int64 **v20; // rcx
  __int64 *v21; // rcx
  __int64 *v22; // rdi
  __int128 v23; // [rsp+20h] [rbp-38h]

  v4 = *a1;
  if ( *((_BYTE *)a3 + 25) )
  {
    if ( *(_BYTE *)(v4[1] + 25) || (unsigned __int8)sub_18001DE04((_QWORD *)(v4[2] + 32), a4) )
    {
      *(_QWORD *)a2 = v4[2];
      *(_BYTE *)(a2 + 16) = 0;
LABEL_51:
      *(_DWORD *)(a2 + 8) = 0;
      return a2;
    }
    goto LABEL_38;
  }
  v8 = a3 + 4;
  v9 = sub_18001DE04(a4, a3 + 4);
  if ( a3 != (__int64 *)*v4 )
  {
    if ( v9 )
    {
      v10 = (__int64 *)*a3;
      v11 = a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        v10 = (__int64 *)a3[1];
        v12 = a3;
        if ( !*((_BYTE *)v10 + 25) )
        {
          v13 = a3;
          do
          {
            v12 = v13;
            if ( v13 != (__int64 *)*v10 )
              break;
            v11 = v10;
            v10 = (__int64 *)v10[1];
            v13 = v11;
            v12 = v11;
          }
          while ( !*((_BYTE *)v10 + 25) );
        }
        if ( *((_BYTE *)v11 + 25) )
          v10 = v12;
      }
      else
      {
        for ( i = (__int64 *)v10[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
          v10 = i;
      }
      if ( !(unsigned __int8)sub_18001DE04(v10 + 4, a4) )
        goto LABEL_38;
      v15 = *(_BYTE *)(v10[2] + 25);
      result = a2;
      *(_BYTE *)(a2 + 16) = 0;
      if ( v15 )
      {
        *(_QWORD *)a2 = v10;
LABEL_24:
        *(_DWORD *)(a2 + 8) = 0;
        return result;
      }
      *(_QWORD *)a2 = a3;
      goto LABEL_26;
    }
    if ( !(unsigned __int8)sub_18001DE04(v8, a4) )
    {
      *(_QWORD *)a2 = a3;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_51;
    }
    v17 = (__int64 *)a3[2];
    v18 = *((_BYTE *)v17 + 25);
    if ( v18 )
    {
      v17 = (__int64 *)a3[1];
      if ( *((_BYTE *)v17 + 25) )
      {
LABEL_47:
        *(_BYTE *)(a2 + 16) = 0;
        result = a2;
        if ( v18 )
        {
          *(_QWORD *)a2 = a3;
          goto LABEL_24;
        }
        *(_QWORD *)a2 = v17;
LABEL_26:
        *(_DWORD *)(a2 + 8) = 1;
        return result;
      }
      v19 = a3;
      do
      {
        v20 = (__int64 **)v17;
        if ( v19 != (__int64 *)v17[2] )
          break;
        v17 = (__int64 *)v17[1];
        v19 = (__int64 *)v20;
      }
      while ( !*((_BYTE *)v17 + 25) );
    }
    else
    {
      v21 = (__int64 *)*v17;
      if ( !*(_BYTE *)(*v17 + 25) )
      {
        do
        {
          v17 = v21;
          v21 = (__int64 *)*v21;
        }
        while ( !*((_BYTE *)v21 + 25) );
      }
    }
    if ( !*((_BYTE *)v17 + 25) && !(unsigned __int8)sub_18001DE04(a4, v17 + 4) )
      goto LABEL_38;
    goto LABEL_47;
  }
  if ( v9 )
  {
    *(_QWORD *)a2 = a3;
    *(_DWORD *)(a2 + 8) = 1;
    goto LABEL_8;
  }
LABEL_38:
  v22 = (__int64 *)v4[1];
  *(_QWORD *)&v23 = v22;
  DWORD2(v23) = 0;
  while ( !*((_BYTE *)v22 + 25) )
  {
    *(_QWORD *)&v23 = v22;
    if ( (unsigned __int8)sub_18001DE04(v22 + 4, a4) )
    {
      v22 = (__int64 *)v22[2];
      DWORD2(v23) = 0;
    }
    else
    {
      v4 = v22;
      DWORD2(v23) = 1;
      v22 = (__int64 *)*v22;
    }
  }
  if ( !*((_BYTE *)v4 + 25) && !(unsigned __int8)sub_18001DE04(a4, v4 + 4) )
  {
    *(_QWORD *)a2 = v4;
    *(_DWORD *)(a2 + 8) = 2;
    *(_BYTE *)(a2 + 16) = 1;
    return a2;
  }
  *(_OWORD *)a2 = v23;
LABEL_8:
  *(_BYTE *)(a2 + 16) = 0;
  return a2;
}
