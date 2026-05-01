/*
 * XREFs of sub_180010AB4 @ 0x180010AB4
 * Callers:
 *     sub_18000EF74 @ 0x18000EF74 (sub_18000EF74.c)
 *     sub_180010A0C @ 0x180010A0C (sub_180010A0C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010AB4(wchar_t *a1, __int64 a2, __int64 a3, const wchar_t *a4, va_list Args)
{
  unsigned __int64 v5; // rdi
  unsigned int v7; // ebx
  int v8; // eax

  v5 = a2 - 1;
  v7 = 0;
  v8 = vsnwprintf(a1, a2 - 1, a4, Args);
  if ( v8 < 0 || v8 > v5 )
  {
    a1[v5] = 0;
    return (unsigned int)-2147024774;
  }
  else if ( v8 == v5 )
  {
    a1[v5] = 0;
  }
  return v7;
}
