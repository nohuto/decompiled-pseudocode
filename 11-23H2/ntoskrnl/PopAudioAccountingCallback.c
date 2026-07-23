/*
 * XREFs of PopAudioAccountingCallback @ 0x140855788
 * Callers:
 *     PopWnfAudioCallback @ 0x1408556A0 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140CF7C58 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140CF7C08 )
    {
      if ( qword_140CF7C08 <= (unsigned __int64)qword_140CF7C58 )
        result = MEMORY[0xFFFFF78000000008] - qword_140CF7C58;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140CF7C08;
      qword_140CF7C60 += result;
    }
    qword_140CF7C58 = 0LL;
  }
  return result;
}
