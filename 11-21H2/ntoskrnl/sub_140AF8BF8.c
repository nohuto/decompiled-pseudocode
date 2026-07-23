/*
 * XREFs of sub_140AF8BF8 @ 0x140AF8BF8
 * Callers:
 *     sub_140A554B0 @ 0x140A554B0 (sub_140A554B0.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AF8CB4 @ 0x140AF8CB4 (sub_140AF8CB4.c)
 *     sub_140AF8D68 @ 0x140AF8D68 (sub_140AF8D68.c)
 *     sub_140AF8ED0 @ 0x140AF8ED0 (sub_140AF8ED0.c)
 */

void __fastcall sub_140AF8BF8(__int64 a1)
{
  int v1; // eax
  _DWORD *v2; // rbx
  int v3; // edi
  int v4; // esi
  unsigned int i; // edi
  void *v6; // rcx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 264) & 1) == 0 )
  {
    P = 0LL;
    v1 = sub_140AF8ED0(a1, &P);
    v2 = P;
    v3 = v1;
    if ( v1 >= 0 )
    {
      v3 = 0;
      v4 = 0;
      if ( *((_DWORD *)P + 1) )
      {
        while ( 1 )
        {
          v3 = sub_140AF8D68(&v2[8 * v4 + 2]);
          if ( v3 < 0 )
            break;
          if ( (unsigned int)++v4 >= v2[1] )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        sub_140AF8CB4(v2);
      }
    }
    dword_140C097A0 = v3;
    if ( v2 )
    {
      for ( i = 0; i < v2[1]; ++i )
      {
        v6 = *(void **)&v2[8 * i + 8];
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
      }
      ExFreePoolWithTag(v2, 0);
    }
  }
}
