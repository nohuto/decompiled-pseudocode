/*
 * XREFs of ?Intersects@CStripe@Internal@FastRegion@@SA_NPEBV123@0@Z @ 0x180068BE8
 * Callers:
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x180068B30 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
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
  int v6; // ecx
  int v7; // edx
  int *v8; // r8
  int *v10; // rax
  int v11; // ecx

  v2 = (int *)((char *)a1 + *((int *)a1 + 1));
  v3 = (char *)a1 + *((int *)a1 + 3) + 8;
  v4 = (char *)a2 + *((int *)a2 + 3) + 8;
  if ( v2 == (int *)v3 )
    return 0;
  v5 = (int *)((char *)a2 + *((int *)a2 + 1));
LABEL_3:
  if ( v5 == (int *)v4 )
    return 0;
  v6 = *v5;
LABEL_5:
  v7 = *v2;
  if ( *v2 < v6 )
  {
    v8 = v2 + 1;
    goto LABEL_7;
  }
  if ( v7 > v6 )
  {
    v10 = v5 + 1;
    while ( 1 )
    {
      v11 = *v10;
      if ( v7 < *v10 )
        break;
      v5 = v10 + 1;
      if ( v11 < v7 )
        goto LABEL_3;
      v8 = v2 + 1;
      if ( v5 == (int *)v4 )
        return 0;
LABEL_7:
      v6 = *v5;
      if ( *v8 < *v5 )
      {
        v2 = v8 + 1;
        if ( v2 != (int *)v3 )
          goto LABEL_5;
        return 0;
      }
      if ( *v8 > v6 )
        return 1;
      v2 = v8 + 1;
      v10 = v5 + 1;
      if ( v2 == (int *)v3 )
        return 0;
      v7 = *v2;
    }
  }
  return 1;
}
