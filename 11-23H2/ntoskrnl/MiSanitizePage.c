/*
 * XREFs of MiSanitizePage @ 0x140335C10
 * Callers:
 *     MiMapContiguousMemory @ 0x1403359F8 (MiMapContiguousMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748574 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30CE0 (MiMapViewOfPhysicalSection.c)
 *     MiRotateToFrameBuffer @ 0x140A316A0 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A319A4 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSanitizePage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8

  v1 = a1;
  v2 = 1LL << ((unsigned __int8)dword_140C65AE0 - 12);
  if ( a1 >= v2 )
    return (v2 - 1) & a1;
  return v1;
}
