/*
 * XREFs of sub_140551930 @ 0x140551930
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405517A0 @ 0x1405517A0 (sub_1405517A0.c)
 *     sub_140551AA0 @ 0x140551AA0 (sub_140551AA0.c)
 */

__int64 __fastcall sub_140551930(char a1)
{
  int v1; // ebx
  __int64 result; // rax

  v1 = 0;
  if ( byte_140C54D4B )
  {
    if ( dword_140C54D50 < 2 )
    {
      sub_1405517A0();
      if ( !dword_140C54D50 )
        VidCleanUp();
      LOBYTE(v1) = a1 == 0;
      dword_140C54D50 = v1;
      return sub_140551AA0();
    }
  }
  else
  {
    LOBYTE(v1) = a1 == 0;
    dword_140C54D50 = v1;
  }
  return result;
}
