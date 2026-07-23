/*
 * XREFs of sub_14022EA80 @ 0x14022EA80
 * Callers:
 *     sub_1406A5C00 @ 0x1406A5C00 (sub_1406A5C00.c)
 *     sub_1409190E8 @ 0x1409190E8 (sub_1409190E8.c)
 *     sub_14091D700 @ 0x14091D700 (sub_14091D700.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_1406A5F0C @ 0x1406A5F0C (sub_1406A5F0C.c)
 *     sub_1406A5F34 @ 0x1406A5F34 (sub_1406A5F34.c)
 *     sub_14071BA34 @ 0x14071BA34 (sub_14071BA34.c)
 */

void sub_14022EA80()
{
  __int64 v0; // rdi
  void *i; // rcx
  __int64 v2; // rax
  ULONG_PTR v3; // rbx

  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    v0 = sub_1406A5F34();
    if ( v0 )
    {
      for ( i = 0LL; ; i = (void *)v3 )
      {
        v2 = sub_14071BA34(i);
        v3 = v2;
        if ( !v2 )
          break;
        if ( (unsigned __int8)sub_140347810(v2 + 1640) )
        {
          if ( (*(_DWORD *)(v3 + 160) & 2) == 0 )
            sub_1406885A4(v3);
          sub_1402AD030(v3 + 1640);
        }
        if ( v3 == v0 )
          break;
      }
      sub_1406A5F0C(v3);
      sub_1406A5F0C(v0);
    }
  }
}
