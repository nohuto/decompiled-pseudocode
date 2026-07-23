/*
 * XREFs of sub_140A9C1B0 @ 0x140A9C1B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A9C13C @ 0x140A9C13C (sub_140A9C13C.c)
 */

unsigned __int8 __fastcall sub_140A9C1B0(_SLIST_ENTRY *a1, __int64 a2, int a3)
{
  __int64 v3; // r8
  unsigned __int8 result; // al

  v3 = (unsigned int)(a3 - 1);
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
      return sub_140A9C13C(a1, a2, v3);
  }
  else if ( a2 )
  {
    *(_DWORD *)(a2 + 16) &= 0x3FFFFFFFu;
  }
  return result;
}
