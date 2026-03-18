/*
 * XREFs of SepCreateToken @ 0x14084895C
 * Callers:
 *     SeMakeSystemToken @ 0x140B1E75C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B1ED10 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B1EFA0 (SeMakeAnonymousLogonToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x1402022FC (SepCreateTokenEx.c)
 */

__int64 __fastcall SepCreateToken(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *a8,
        void **a9,
        unsigned int a10,
        __int64 a11,
        unsigned int a12,
        unsigned int a13,
        char **a14,
        void *a15,
        void *a16,
        void *a17)
{
  return SepCreateTokenEx(
           a1,
           0,
           0,
           a4,
           1,
           0,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           "*SYSTEM*",
           0LL,
           0LL,
           0,
           0LL,
           0LL,
           1);
}
