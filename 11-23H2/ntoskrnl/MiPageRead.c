/*
 * XREFs of MiPageRead @ 0x1402A3E3C
 * Callers:
 *     MiReadImageHeaders @ 0x1406A79B8 (MiReadImageHeaders.c)
 *     MiPfExecuteReadList @ 0x1407242F4 (MiPfExecuteReadList.c)
 * Callees:
 *     IoPageReadEx @ 0x1402A6AA0 (IoPageReadEx.c)
 */

__int64 __fastcall MiPageRead(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  return IoPageReadEx(a1, a5, a6, a7);
}
