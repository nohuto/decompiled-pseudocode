/*
 * XREFs of sub_18002ABBC @ 0x18002ABBC
 * Callers:
 *     sub_18002B024 @ 0x18002B024 (sub_18002B024.c)
 *     sub_18002B780 @ 0x18002B780 (sub_18002B780.c)
 *     sub_18003C790 @ 0x18003C790 (sub_18003C790.c)
 *     sub_1800601A0 @ 0x1800601A0 (sub_1800601A0.c)
 *     sub_180069F70 @ 0x180069F70 (sub_180069F70.c)
 *     sub_180092790 @ 0x180092790 (sub_180092790.c)
 *     sub_1800B3618 @ 0x1800B3618 (sub_1800B3618.c)
 *     sub_1800B37A4 @ 0x1800B37A4 (sub_1800B37A4.c)
 *     sub_1800E1CA8 @ 0x1800E1CA8 (sub_1800E1CA8.c)
 *     sub_1800E1DE0 @ 0x1800E1DE0 (sub_1800E1DE0.c)
 *     sub_1800F29D0 @ 0x1800F29D0 (sub_1800F29D0.c)
 *     sub_1800FA180 @ 0x1800FA180 (sub_1800FA180.c)
 *     sub_1800FB440 @ 0x1800FB440 (sub_1800FB440.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_18002ABBC(_QWORD *a1, __int64 *a2)
{
  __int64 ***v2; // r9
  __int64 *i; // rax
  __int64 *v5; // rdi
  __int64 *v6; // r10
  __int64 *v7; // rdx
  __int64 **v8; // r8
  __int64 *v9; // rdx
  __int64 *j; // r9
  __int64 *v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // rcx
  char v14; // r9
  __int64 **v15; // rcx
  bool k; // zf
  __int64 *v17; // r11
  __int64 *v18; // rcx
  __int64 *v19; // rcx
  __int64 **v20; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 *v28; // rcx
  __int64 **v29; // rax
  __int64 *v30; // r9
  __int64 **v31; // rax
  __int64 v32; // rax
  __int64 **v33; // rax
  __int64 v34; // rcx

  v2 = (__int64 ***)(a2 + 2);
  i = (__int64 *)a2[2];
  v5 = a2;
  v6 = a2;
  if ( *((_BYTE *)i + 25) )
  {
    for ( i = (__int64 *)a2[1]; !*((_BYTE *)i + 25) && a2 == (__int64 *)i[2]; i = (__int64 *)i[1] )
      a2 = i;
  }
  else
  {
    v7 = (__int64 *)*i;
    if ( !*(_BYTE *)(*i + 25) )
    {
      do
      {
        i = v7;
        v7 = (__int64 *)*v7;
      }
      while ( !*((_BYTE *)v7 + 25) );
    }
  }
  v8 = *v2;
  if ( !*(_BYTE *)(*v6 + 25) )
  {
    if ( *((_BYTE *)v8 + 25) )
    {
      v8 = (__int64 **)*v6;
    }
    else
    {
      v8 = (__int64 **)i[2];
      if ( i != v6 )
      {
        *(_QWORD *)(*v6 + 8) = i;
        *i = *v6;
        if ( i == (__int64 *)*v2 )
        {
          v9 = i;
        }
        else
        {
          v9 = (__int64 *)i[1];
          if ( !*((_BYTE *)v8 + 25) )
            v8[1] = v9;
          *v9 = (__int64)v8;
          i[2] = (__int64)*v2;
          (*v2)[1] = i;
        }
        if ( *(__int64 **)(*a1 + 8LL) == v6 )
        {
          *(_QWORD *)(*a1 + 8LL) = i;
        }
        else
        {
          v15 = (__int64 **)v6[1];
          if ( *v15 == v6 )
            *v15 = i;
          else
            v15[2] = i;
        }
        v14 = *((_BYTE *)i + 24);
        i[1] = v6[1];
        *((_BYTE *)i + 24) = *((_BYTE *)v6 + 24);
        *((_BYTE *)v6 + 24) = v14;
        goto LABEL_45;
      }
    }
  }
  v9 = (__int64 *)v6[1];
  if ( !*((_BYTE *)v8 + 25) )
    v8[1] = v9;
  if ( *(__int64 **)(*a1 + 8LL) == v6 )
  {
    *(_QWORD *)(*a1 + 8LL) = v8;
  }
  else if ( (__int64 *)*v9 == v6 )
  {
    *v9 = (__int64)v8;
  }
  else
  {
    v9[2] = (__int64)v8;
  }
  if ( *(__int64 **)*a1 == v6 )
  {
    if ( *((_BYTE *)v8 + 25) )
    {
      j = v9;
    }
    else
    {
      v11 = *v8;
      for ( j = (__int64 *)v8; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
        j = v11;
    }
    *(_QWORD *)*a1 = j;
  }
  if ( *(__int64 **)(*a1 + 16LL) == v6 )
  {
    if ( *((_BYTE *)v8 + 25) )
    {
      v12 = v9;
    }
    else
    {
      v13 = v8[2];
      v12 = (__int64 *)v8;
      while ( !*((_BYTE *)v13 + 25) )
      {
        v12 = v13;
        v13 = (__int64 *)v13[2];
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v12;
  }
  v14 = *((_BYTE *)v5 + 24);
LABEL_45:
  if ( v14 != 1 )
    goto LABEL_112;
  for ( k = v8 == *(__int64 ***)(*a1 + 8LL); !k; k = v17 == *(__int64 **)(*a1 + 8LL) )
  {
    v17 = v9;
    if ( *((_BYTE *)v8 + 24) != 1 )
      break;
    v18 = (__int64 *)*v9;
    if ( v8 == (__int64 **)*v9 )
    {
      v18 = (__int64 *)v9[2];
      if ( !*((_BYTE *)v18 + 24) )
      {
        *((_BYTE *)v18 + 24) = 1;
        v19 = (__int64 *)v9[2];
        *((_BYTE *)v9 + 24) = 0;
        v9[2] = *v19;
        if ( !*(_BYTE *)(*v19 + 25) )
          *(_QWORD *)(*v19 + 8) = v9;
        v19[1] = v9[1];
        if ( v9 == *(__int64 **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v19;
        }
        else
        {
          v20 = (__int64 **)v9[1];
          if ( v9 == *v20 )
            *v20 = v19;
          else
            v20[2] = v19;
        }
        *v19 = (__int64)v9;
        v9[1] = (__int64)v19;
        v18 = (__int64 *)v9[2];
      }
      if ( !*((_BYTE *)v18 + 25) )
      {
        if ( *(_BYTE *)(*v18 + 24) != 1 || *(_BYTE *)(v18[2] + 24) != 1 )
        {
          if ( *(_BYTE *)(v18[2] + 24) == 1 )
          {
            *(_BYTE *)(*v18 + 24) = 1;
            v21 = *v18;
            *((_BYTE *)v18 + 24) = 0;
            *v18 = *(_QWORD *)(v21 + 16);
            v22 = *(_QWORD *)(v21 + 16);
            if ( !*(_BYTE *)(v22 + 25) )
              *(_QWORD *)(v22 + 8) = v18;
            *(_QWORD *)(v21 + 8) = v18[1];
            if ( v18 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v21;
            }
            else
            {
              v27 = (_QWORD *)v18[1];
              if ( v18 == (__int64 *)v27[2] )
                v27[2] = v21;
              else
                *v27 = v21;
            }
            *(_QWORD *)(v21 + 16) = v18;
            v18[1] = v21;
            v18 = (__int64 *)v9[2];
          }
          *((_BYTE *)v18 + 24) = *((_BYTE *)v9 + 24);
          *((_BYTE *)v9 + 24) = 1;
          *(_BYTE *)(v18[2] + 24) = 1;
          v28 = (__int64 *)v9[2];
          v9[2] = *v28;
          if ( !*(_BYTE *)(*v28 + 25) )
            *(_QWORD *)(*v28 + 8) = v9;
          v28[1] = v9[1];
          if ( v9 == *(__int64 **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v28;
          }
          else
          {
            v29 = (__int64 **)v9[1];
            if ( v9 == *v29 )
              *v29 = v28;
            else
              v29[2] = v28;
          }
          *v28 = (__int64)v9;
LABEL_110:
          v9[1] = (__int64)v28;
          break;
        }
LABEL_79:
        *((_BYTE *)v18 + 24) = 0;
      }
    }
    else
    {
      if ( !*((_BYTE *)v18 + 24) )
      {
        *((_BYTE *)v18 + 24) = 1;
        v23 = (__int64 *)*v9;
        *((_BYTE *)v9 + 24) = 0;
        *v9 = v23[2];
        v24 = v23[2];
        if ( !*(_BYTE *)(v24 + 25) )
          *(_QWORD *)(v24 + 8) = v9;
        v23[1] = v9[1];
        if ( v9 == *(__int64 **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v23;
        }
        else
        {
          v25 = (_QWORD *)v9[1];
          if ( v9 == (__int64 *)v25[2] )
            v25[2] = v23;
          else
            *v25 = v23;
        }
        v23[2] = (__int64)v9;
        v9[1] = (__int64)v23;
        v18 = (__int64 *)*v9;
      }
      if ( !*((_BYTE *)v18 + 25) )
      {
        v26 = v18[2];
        if ( *(_BYTE *)(v26 + 24) != 1 || *(_BYTE *)(*v18 + 24) != 1 )
        {
          if ( *(_BYTE *)(*v18 + 24) == 1 )
          {
            *(_BYTE *)(v26 + 24) = 1;
            v30 = (__int64 *)v18[2];
            *((_BYTE *)v18 + 24) = 0;
            v18[2] = *v30;
            if ( !*(_BYTE *)(*v30 + 25) )
              *(_QWORD *)(*v30 + 8) = v18;
            v30[1] = v18[1];
            if ( v18 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v30;
            }
            else
            {
              v31 = (__int64 **)v18[1];
              if ( v18 == *v31 )
                *v31 = v30;
              else
                v31[2] = v30;
            }
            *v30 = (__int64)v18;
            v18[1] = (__int64)v30;
            v18 = (__int64 *)*v9;
          }
          *((_BYTE *)v18 + 24) = *((_BYTE *)v9 + 24);
          *((_BYTE *)v9 + 24) = 1;
          *(_BYTE *)(*v18 + 24) = 1;
          v28 = (__int64 *)*v9;
          *v9 = *(_QWORD *)(*v9 + 16);
          v32 = v28[2];
          if ( !*(_BYTE *)(v32 + 25) )
            *(_QWORD *)(v32 + 8) = v9;
          v28[1] = v9[1];
          if ( v9 == *(__int64 **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v28;
          }
          else
          {
            v33 = (__int64 **)v9[1];
            if ( v9 == v33[2] )
              v33[2] = v28;
            else
              *v33 = v28;
          }
          v28[2] = (__int64)v9;
          goto LABEL_110;
        }
        goto LABEL_79;
      }
    }
    v8 = (__int64 **)v9;
    v9 = (__int64 *)v9[1];
  }
  *((_BYTE *)v8 + 24) = 1;
LABEL_112:
  v34 = a1[1];
  if ( v34 )
    a1[1] = v34 - 1;
  return v6;
}
