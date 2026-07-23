/*
 * XREFs of sub_140241600 @ 0x140241600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char sub_140241600()
{
  if ( dword_140C204A8 == 5 && qword_140C204C8 )
    _InterlockedExchange64(&qword_140C204C8, MEMORY[0xFFFFF78000000008]);
  return 1;
}
