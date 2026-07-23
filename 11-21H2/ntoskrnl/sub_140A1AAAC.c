/*
 * XREFs of sub_140A1AAAC @ 0x140A1AAAC
 * Callers:
 *     sub_140A1AC54 @ 0x140A1AC54 (sub_140A1AC54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A1AAAC(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int16 v2; // r9
  unsigned int v3; // r8d
  unsigned __int64 v4; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 ***v10; // r10
  __int64 **v11; // rdx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  __int64 ***v15; // r10
  __int64 **j; // rdx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  __int64 ***v20; // r10
  __int64 **i; // rdx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r9
  __int64 v24; // rax

  v2 = *(_WORD *)(a1 + 48);
  v3 = 0;
  v4 = *a2;
  if ( !v2 )
    return (unsigned int)-1073741811;
  if ( v2 > 2u )
  {
    switch ( v2 )
    {
      case 3u:
        v18 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v18 >= v4 )
        {
          v19 = 8LL * *(unsigned int *)(a1 + 60);
          if ( is_mul_ok(8uLL, *(unsigned int *)(a1 + 60)) )
          {
            v9 = v19 + v18;
            if ( v19 + v18 >= v18 )
            {
              v20 = (__int64 ***)(a1 + 72);
              for ( i = *v20; i != (__int64 **)v20; i = (__int64 **)*i )
              {
                v22 = v9 + *((unsigned __int16 *)i + 20);
                if ( v22 < v9 )
                  return (unsigned int)-1073741675;
                v9 = v22 + 2;
                if ( v22 + 2 < v22 )
                  return (unsigned int)-1073741675;
              }
              goto LABEL_37;
            }
          }
        }
        return (unsigned int)-1073741675;
      case 4u:
        v13 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v13 >= v4 )
        {
          v14 = 16LL * *(unsigned int *)(a1 + 60);
          if ( is_mul_ok(0x10uLL, *(unsigned int *)(a1 + 60)) )
          {
            v9 = v14 + v13;
            if ( v14 + v13 >= v13 )
            {
              v15 = (__int64 ***)(a1 + 72);
              for ( j = *v15; j != (__int64 **)v15; j = (__int64 **)*j )
              {
                v17 = v9 + *((unsigned __int16 *)j + 24);
                if ( v17 < v9 )
                  return (unsigned int)-1073741675;
                v9 = v17 + 2;
                if ( v17 + 2 < v17 )
                  return (unsigned int)-1073741675;
              }
              goto LABEL_37;
            }
          }
        }
        return (unsigned int)-1073741675;
      case 5u:
LABEL_8:
        v7 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v7 >= v4 )
        {
          v8 = 16LL * *(unsigned int *)(a1 + 60);
          if ( is_mul_ok(0x10uLL, *(unsigned int *)(a1 + 60)) )
          {
            v9 = v8 + v7;
            if ( v8 + v7 >= v7 )
            {
              v10 = (__int64 ***)(a1 + 72);
              v11 = *v10;
              while ( v11 != (__int64 **)v10 )
              {
                v12 = v9 + *((unsigned int *)v11 + 12);
                if ( v12 < v9 )
                  return (unsigned int)-1073741675;
                v11 = (__int64 **)*v11;
                v9 = v12;
              }
              goto LABEL_37;
            }
          }
        }
        return (unsigned int)-1073741675;
    }
    if ( v2 != 6 )
    {
      if ( v2 == 16 )
        goto LABEL_8;
      return (unsigned int)-1073741811;
    }
  }
  v23 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v23 < v4 )
    return (unsigned int)-1073741675;
  v24 = 8LL * *(unsigned int *)(a1 + 60);
  if ( !is_mul_ok(8uLL, *(unsigned int *)(a1 + 60)) )
    return (unsigned int)-1073741675;
  v9 = v24 + v23;
  if ( v24 + v23 < v23 )
    return (unsigned int)-1073741675;
LABEL_37:
  *a2 = v9;
  return v3;
}
