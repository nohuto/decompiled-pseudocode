/*
 * XREFs of SeSrpAccessCheck @ 0x1405F4100
 * Callers:
 *     <none>
 * Callees:
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 */

char __fastcall SeSrpAccessCheck(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char a6)
{
  return sub_140383ABC(a1, a2, a3, a4, a5, a6, 1);
}
