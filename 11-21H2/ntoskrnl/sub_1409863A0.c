/*
 * XREFs of sub_1409863A0 @ 0x1409863A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140985C14 @ 0x140985C14 (sub_140985C14.c)
 *     sub_140986190 @ 0x140986190 (sub_140986190.c)
 */

signed __int64 sub_1409863A0()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rcx
  signed __int64 result; // rax

  while ( 1 )
  {
    v0 = _InterlockedExchange64(&qword_140C25320, 1LL);
    do
    {
      sub_140986190(
        *(_QWORD *)(v0 + 8),
        *(_BYTE *)(v0 + 16),
        *(_WORD *)(v0 + 18),
        *(_DWORD *)(v0 + 24),
        (unsigned __int16 *)(v0 + 32),
        *(_DWORD *)(v0 + 20));
      v1 = v0;
      v0 = *(_QWORD *)v0;
      sub_140985C14((_SLIST_ENTRY *)(v1 - 16));
    }
    while ( v0 > 1 );
    if ( qword_140C25320 == 1 )
    {
      result = _InterlockedCompareExchange64(&qword_140C25320, 0LL, 1LL);
      if ( result == 1 )
        break;
    }
  }
  return result;
}
