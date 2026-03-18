/*
 * XREFs of MiIsPageInIoHugeRangeTransition @ 0x1403364D0
 * Callers:
 *     MiDereferenceIoPages @ 0x1403360F4 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140336500 (MiReferenceIoPages.c)
 *     MiDereferenceIoHugeRange @ 0x14061F988 (MiDereferenceIoHugeRange.c)
 *     MiDeleteStaleCacheMaps @ 0x14062D9D0 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     MiIsPageInHugePfn @ 0x140336DAC (MiIsPageInHugePfn.c)
 */

__int64 __fastcall MiIsPageInIoHugeRangeTransition(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned int v4; // r9d

  result = MiIsPageInHugePfn(a1, a2, a1);
  v4 = 0;
  if ( (_DWORD)result )
  {
    LOBYTE(v4) = (*(_BYTE *)(qword_140C67DF0 + 8 * ((v3 >> 18) & 0x3FFFFF)) & 7) == 5;
    return v4;
  }
  return result;
}
