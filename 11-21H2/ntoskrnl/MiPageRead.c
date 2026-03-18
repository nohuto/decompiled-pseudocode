/*
 * XREFs of MiPageRead @ 0x1402792AC
 * Callers:
 *     MiPfExecuteReadList @ 0x1406F4E78 (MiPfExecuteReadList.c)
 *     MiReadImageHeaders @ 0x1407063CC (MiReadImageHeaders.c)
 * Callees:
 *     IoPageReadEx @ 0x140342C50 (IoPageReadEx.c)
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
