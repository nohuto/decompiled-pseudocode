/*
 * XREFs of sub_1406AE59C @ 0x1406AE59C
 * Callers:
 *     sub_1406AE11C @ 0x1406AE11C (sub_1406AE11C.c)
 * Callees:
 *     sub_1407DFFD8 @ 0x1407DFFD8 (sub_1407DFFD8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406AE59C(_QWORD *a1)
{
  char *v2; // rcx
  unsigned int v3; // edi
  char *v4; // rdx
  unsigned __int64 v5; // rsi

  v2 = (char *)a1[2];
  if ( v2 )
  {
    v3 = 0;
    if ( *(_DWORD *)(*a1 + 8LL) )
    {
      do
      {
        v4 = v2;
        v5 = (unsigned __int64)v3 << 6;
        if ( _bittest64((const signed __int64 *)&v2[v5 + 56], 0x22u) )
        {
          sub_1407DFFD8(&v2[v5 + 32], a1[5]);
          v2 = (char *)a1[2];
          v4 = v2;
        }
        if ( _bittest64((const signed __int64 *)&v4[v5 + 24], 0x22u) )
        {
          sub_1407DFFD8(&v4[v5], a1[5]);
          v2 = (char *)a1[2];
          v4 = v2;
        }
        ++v3;
      }
      while ( v3 < *(_DWORD *)(*a1 + 8LL) );
      v2 = v4;
    }
    ExFreePoolWithTag(v2, 0);
    a1[2] = 0LL;
  }
}
