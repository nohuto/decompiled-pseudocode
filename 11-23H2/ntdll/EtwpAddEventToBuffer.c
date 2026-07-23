/*
 * XREFs of EtwpAddEventToBuffer @ 0x180002BE0
 * Callers:
 *     EtwpAddBinaryInfoEvents @ 0x180002A80 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddDebugInfoEvents @ 0x180126138 (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall EtwpAddEventToBuffer(
        __int64 a1,
        __int16 a2,
        _QWORD *a3,
        const void *a4,
        unsigned int Size,
        unsigned int a6,
        _DWORD *a7)
{
  __int64 v8; // rcx

  *a7 = Size + 16;
  if ( a6 < Size + 16 )
    return 3221225507LL;
  v8 = a1 + *(unsigned int *)(a1 + 48);
  *(_WORD *)(v8 + 6) = a2;
  *(_WORD *)(v8 + 4) = Size + 16;
  *(_DWORD *)v8 = -1072627710;
  *(_QWORD *)(v8 + 8) = *a3;
  memmove((void *)(v8 + 16), a4, Size);
  *(_DWORD *)(a1 + 48) += (Size + 23) & 0xFFFFFFF8;
  return 0LL;
}
