/*
 * XREFs of C3IdleCheck @ 0x1C0004E30
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C00029AC (WriteGenAddr.c)
 *     ReadGenAddr @ 0x1C0003C6C (ReadGenAddr.c)
 */

__int64 C3IdleCheck()
{
  unsigned int v0; // ebx
  __int64 v1; // r8
  unsigned __int8 GenAddr; // r11
  unsigned __int8 v3; // al
  __int64 v4; // r8

  v0 = 0;
  GenAddr = ReadGenAddr((__int64)&dword_1C0012E04);
  v3 = 0;
  if ( qword_1C0012E14 )
    v3 = ReadGenAddr((__int64)&dword_1C0012E10);
  if ( ((GenAddr | v3) & 0x10) != 0 )
  {
    WriteGenAddr(&dword_1C0012E04, 16LL, v1);
    if ( qword_1C0012E14 )
      WriteGenAddr(&dword_1C0012E10, 16LL, v4);
    return (unsigned int)-1073741823;
  }
  return v0;
}
