/*
 * XREFs of C3IdleCheck @ 0x1C000B1F0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00013E0 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C000205C (WriteGenAddr.c)
 */

__int64 C3IdleCheck()
{
  unsigned int v0; // ebx
  unsigned __int8 GenAddr; // r10
  unsigned __int8 v2; // al

  v0 = 0;
  GenAddr = ReadGenAddr((unsigned __int8 *)&dword_1C001E864);
  v2 = 0;
  if ( qword_1C001E874 )
    v2 = ReadGenAddr((unsigned __int8 *)&dword_1C001E870);
  if ( ((GenAddr | v2) & 0x10) != 0 )
  {
    WriteGenAddr(&dword_1C001E864, 0x10uLL);
    if ( qword_1C001E874 )
      WriteGenAddr(&dword_1C001E870, 0x10uLL);
    return (unsigned int)-1073741823;
  }
  return v0;
}
