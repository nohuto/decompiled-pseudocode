/*
 * XREFs of MWaitIdleCheck @ 0x1C0008320
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0002000 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00025EC (WriteGenAddr.c)
 */

__int64 __fastcall MWaitIdleCheck(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int8 GenAddr; // r10
  unsigned __int8 v3; // al

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 16) & 2) != 0 )
  {
    GenAddr = ReadGenAddr((unsigned __int8 *)&dword_1C001F9C4);
    v3 = 0;
    if ( qword_1C001F9D4 )
      v3 = ReadGenAddr((unsigned __int8 *)&dword_1C001F9D0);
    if ( ((GenAddr | v3) & 0x10) != 0 )
    {
      WriteGenAddr(&dword_1C001F9C4, 0x10uLL);
      if ( qword_1C001F9D4 )
        WriteGenAddr(&dword_1C001F9D0, 0x10uLL);
      return (unsigned int)-1073741823;
    }
  }
  return v1;
}
