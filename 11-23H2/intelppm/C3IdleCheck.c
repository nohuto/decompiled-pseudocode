/*
 * XREFs of C3IdleCheck @ 0x1C0009920
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0002000 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00025EC (WriteGenAddr.c)
 */

__int64 C3IdleCheck()
{
  unsigned int v0; // ebx
  unsigned __int8 GenAddr; // r10
  unsigned __int8 v2; // al

  v0 = 0;
  GenAddr = ReadGenAddr((unsigned __int8 *)&dword_1C001F9C4);
  v2 = 0;
  if ( qword_1C001F9D4 )
    v2 = ReadGenAddr((unsigned __int8 *)&dword_1C001F9D0);
  if ( ((GenAddr | v2) & 0x10) != 0 )
  {
    WriteGenAddr(&dword_1C001F9C4, 0x10uLL);
    if ( qword_1C001F9D4 )
      WriteGenAddr(&dword_1C001F9D0, 0x10uLL);
    return (unsigned int)-1073741823;
  }
  return v0;
}
