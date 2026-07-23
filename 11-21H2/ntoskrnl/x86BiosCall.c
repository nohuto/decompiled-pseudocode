/*
 * XREFs of x86BiosCall @ 0x1403A2430
 * Callers:
 *     sub_140503540 @ 0x140503540 (sub_140503540.c)
 * Callees:
 *     sub_1403A2480 @ 0x1403A2480 (sub_1403A2480.c)
 */

bool x86BiosCall()
{
  bool v0; // r8

  v0 = 0;
  if ( byte_140C54940 )
  {
    if ( _InterlockedIncrement(&dword_140C4E338) == 1 || byte_140C4C451 )
      v0 = (unsigned int)sub_1403A2480() == 1;
    else
      __int2c();
    _InterlockedDecrement(&dword_140C4E338);
    return v0;
  }
  else
  {
    __int2c();
    return 0;
  }
}
