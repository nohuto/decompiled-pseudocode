/*
 * XREFs of sub_140229A50 @ 0x140229A50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140229A90 @ 0x140229A90 (sub_140229A90.c)
 */

char __fastcall sub_140229A50(char a1, char a2)
{
  char result; // al

  result = a2;
  if ( a1 )
  {
    _InterlockedIncrement(&dword_140C4E420);
    return sub_140229A90();
  }
  else
  {
    _InterlockedAdd(&dword_140C4E420, 0xFFFFFFFF);
    if ( a2 )
    {
      result = dword_140C0B460;
      if ( dword_140C0B460 == HIDWORD(KeGetPcr()[1].LockArray) )
        _InterlockedExchange(&dword_140C0B460, -1);
    }
  }
  return result;
}
