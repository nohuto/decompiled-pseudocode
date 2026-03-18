/*
 * XREFs of MiInitializeModifiedWriterParameters @ 0x140B7574C
 * Callers:
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeModifiedWriterParameters()
{
  int v0; // eax
  __int64 result; // rax

  v0 = dword_140D1D1DC;
  if ( (unsigned int)dword_140D1D1DC > 0x40 )
  {
    v0 = 64;
  }
  else if ( !dword_140D1D1DC )
  {
    v0 = 1;
  }
  dword_140D1D1DC = v0 << 8;
  result = (unsigned int)dword_140D1D1D0;
  if ( (dword_140D1D1D0 & 0xFFFFFFF8) != 0 )
  {
    result = 0LL;
    dword_140D1D1D0 = 0;
  }
  if ( (result & 4) != 0 )
  {
    dword_140C6964C = 16;
    dword_140C69650 = 8;
  }
  else
  {
    dword_140C6964C = 4;
  }
  return result;
}
