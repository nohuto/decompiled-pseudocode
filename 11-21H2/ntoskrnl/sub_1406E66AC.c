/*
 * XREFs of sub_1406E66AC @ 0x1406E66AC
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_140B53104 @ 0x140B53104 (sub_140B53104.c)
 * Callees:
 *     <none>
 */

__int64 sub_1406E66AC()
{
  __int64 result; // rax
  int v1; // ecx
  unsigned __int32 v2; // ecx

  result = (unsigned int)dword_140C5AC38;
  v1 = 0;
  if ( !dword_140C5AC38 )
  {
    LOBYTE(v1) = dword_140C229B0 != 0;
    v2 = v1 + 1;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140C5AC38, v2, 0);
    if ( !(_DWORD)result )
      return v2;
  }
  return result;
}
