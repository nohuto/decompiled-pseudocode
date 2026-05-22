/*
 * XREFs of ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x180005E00
 * Callers:
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180005C08 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Intersect(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3)
{
  int *v4; // r9
  char *v5; // r10
  int *v6; // rdx
  _DWORD *v7; // rcx
  char *v8; // r8
  int v9; // eax
  int v10; // r11d
  int *v11; // rdx
  int *v12; // r9
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // r11d
  bool v16; // zf
  int v17; // r11d

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (int *)((char *)a2 + *((int *)a2 + 1));
  v5 = (char *)a2 + *((int *)a2 + 3) + 8;
  v6 = (int *)((char *)a3 + *((int *)a3 + 1));
  v7 = (_DWORD *)((char *)this + *((int *)this + 1));
  v8 = (char *)a3 + *((int *)a3 + 3) + 8;
  if ( v4 != (int *)v5 && v6 != (int *)v8 )
  {
    while ( 1 )
    {
      v9 = *v4;
      v10 = *v6;
      if ( *v4 >= *v6 )
        break;
      v12 = v4 + 1;
      while ( 1 )
      {
        v9 = *v6;
        if ( *v12 < *v6 )
          break;
        v11 = v6 + 1;
        if ( v9 < *v12 )
          goto LABEL_6;
LABEL_16:
        v4 = v12 + 1;
        if ( v4 == (int *)v5 )
          goto LABEL_9;
LABEL_17:
        v9 = *v4;
        v17 = *v11;
        if ( *v4 < *v11 )
          goto LABEL_5;
        v6 = v11 + 1;
        if ( v17 < v9 )
          goto LABEL_19;
        v12 = v4 + 1;
LABEL_21:
        if ( v6 == (int *)v8 )
          goto LABEL_9;
      }
      v4 = v12 + 1;
      v16 = v4 == (int *)v5;
LABEL_13:
      if ( v16 )
        goto LABEL_9;
    }
    v11 = v6 + 1;
    if ( v10 < v9 )
      goto LABEL_17;
LABEL_5:
    v12 = v4 + 1;
LABEL_6:
    *v7 = v9;
    v13 = v7 + 1;
    v14 = *v12;
    v15 = *v11;
    if ( *v12 < *v11 )
    {
      *v13 = v14;
      v7 = v13 + 1;
      goto LABEL_16;
    }
    v6 = v11 + 1;
    if ( v15 < v14 )
    {
      *v13 = v15;
      v7 = v13 + 1;
      goto LABEL_21;
    }
    *v13 = v14;
    v4 = v12 + 1;
    v7 = v13 + 1;
    if ( v4 == (int *)v5 )
      goto LABEL_9;
LABEL_19:
    v16 = v6 == (int *)v8;
    goto LABEL_13;
  }
LABEL_9:
  *((_DWORD *)this + 3) = (_DWORD)v7 - ((_DWORD)this + 8);
}
