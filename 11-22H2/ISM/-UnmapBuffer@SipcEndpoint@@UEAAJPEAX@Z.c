/*
 * XREFs of ?UnmapBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x180129620
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x1801280F4 (-FreeSection@SipcPort@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall SipcEndpoint::UnmapBuffer(SipcPort **this, void *a2)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = SipcPort::FreeSection(this[1], a2);
  v3 = 0;
  if ( v2 < 0 )
    return (unsigned int)v2;
  return v3;
}
