/*
 * XREFs of sub_1402202AC @ 0x1402202AC
 * Callers:
 *     sub_140561D38 @ 0x140561D38 (sub_140561D38.c)
 *     sub_140679BEC @ 0x140679BEC (sub_140679BEC.c)
 *     sub_140697BE0 @ 0x140697BE0 (sub_140697BE0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 */

bool __fastcall sub_1402202AC(_WORD *a1, UNICODE_STRING *a2, _DWORD *a3)
{
  const WCHAR *i; // rbx
  int v5; // edi
  WCHAR v6; // ax
  int v8; // eax

  i = 0LL;
  v5 = 0;
  if ( *a1 == 36 )
  {
    for ( i = a1 + 1; ; ++i )
    {
      v6 = *i;
      if ( !*i )
        break;
      if ( v6 == 63 )
      {
        v8 = 0x10000;
      }
      else if ( v6 == 33 )
      {
        v8 = 0x20000;
      }
      else if ( v6 == 43 )
      {
        v8 = 0x40000;
      }
      else
      {
        if ( v6 != 45 )
        {
          if ( v6 == 36 )
            ++i;
          break;
        }
        v8 = 0x80000;
      }
      v5 |= v8;
    }
  }
  RtlInitUnicodeString(a2, i);
  *a3 = v5;
  return i != 0LL;
}
