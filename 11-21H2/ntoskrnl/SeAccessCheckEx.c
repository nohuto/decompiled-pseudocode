/*
 * XREFs of SeAccessCheckEx @ 0x140383A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 */

__int64 __fastcall SeAccessCheckEx(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  return sub_140383ABC(a1, a5, a6, 0);
}
