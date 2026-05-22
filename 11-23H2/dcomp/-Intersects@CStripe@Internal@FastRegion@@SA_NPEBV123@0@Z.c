/*
 * XREFs of ?Intersects@CStripe@Internal@FastRegion@@SA_NPEBV123@0@Z @ 0x180081D8C
 * Callers:
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x180081C68 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CStripe::Intersects(
        const struct FastRegion::Internal::CStripe *a1,
        const struct FastRegion::Internal::CStripe *a2)
{
  int *v2; // r8
  char *v3; // r10
  char *v4; // r9
  int *v5; // rax
  int v7; // edx
  int v8; // ecx
  int *v9; // rax
  int v10; // edx

  v2 = (int *)((char *)a1 + *((int *)a1 + 1));
  v3 = (char *)a1 + *((int *)a1 + 3) + 8;
  v4 = (char *)a2 + *((int *)a2 + 3) + 8;
  if ( v2 == (int *)v3 )
    return 0;
  v5 = (int *)((char *)a2 + *((int *)a2 + 1));
LABEL_3:
  if ( v5 == (int *)v4 )
    return 0;
  v7 = *v5;
LABEL_6:
  v8 = *v2;
  if ( *v2 < v7 )
  {
    while ( 1 )
    {
      v7 = *v5;
      if ( v2[1] > *v5 )
        break;
      if ( v2[1] < v7 )
      {
        v2 += 2;
        if ( v2 != (int *)v3 )
          goto LABEL_6;
        return 0;
      }
      v2 += 2;
      v9 = v5 + 1;
      if ( v2 == (int *)v3 )
        return 0;
      v8 = *v2;
LABEL_14:
      v10 = *v9;
      if ( v8 < *v9 )
        return 1;
      v5 = v9 + 1;
      if ( v10 < v8 )
        goto LABEL_3;
      if ( v5 == (int *)v4 )
        return 0;
    }
  }
  else if ( v8 > v7 )
  {
    v9 = v5 + 1;
    goto LABEL_14;
  }
  return 1;
}
