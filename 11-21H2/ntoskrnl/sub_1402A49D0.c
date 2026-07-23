/*
 * XREFs of sub_1402A49D0 @ 0x1402A49D0
 * Callers:
 *     sub_140669694 @ 0x140669694 (sub_140669694.c)
 *     SeAssignSecurityEx @ 0x1406BC320 (SeAssignSecurityEx.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 * Callees:
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 */

__int64 __fastcall sub_1402A49D0(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        int a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9)
{
  int v10; // ecx
  __int64 *v11; // r9
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = a4;
  if ( a7 && *a7 != 8 )
    return 3221225485LL;
  if ( a4 )
  {
    v10 = 1;
    v11 = &v13;
  }
  else
  {
    v10 = 0;
    LODWORD(v11) = 0;
  }
  return sub_1407CE760(a1, a2, a3, (_DWORD)v11, v10, a5, a6, a8, a9, (__int64)a7);
}
