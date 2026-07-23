/*
 * XREFs of sub_140242ECC @ 0x140242ECC
 * Callers:
 *     CcGetFlushedValidData @ 0x14027FB60 (CcGetFlushedValidData.c)
 *     sub_140289260 @ 0x140289260 (sub_140289260.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_140242ECC(__int64 a1, signed __int64 a2)
{
  __int64 *v2; // r8
  __int64 *i; // rcx

  *(_QWORD *)(a1 + 40) = -1LL;
  v2 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); ; i = (__int64 *)*i )
  {
    if ( i == v2 )
    {
      a2 = 0LL;
      continue;
    }
    if ( a2 <= i[2] + *((unsigned int *)i + 7) && *((_DWORD *)i + 8) )
      break;
  }
  return i;
}
