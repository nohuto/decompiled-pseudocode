/*
 * XREFs of sub_140527BE0 @ 0x140527BE0
 * Callers:
 *     sub_14051AC78 @ 0x14051AC78 (sub_14051AC78.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140527BE0(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( *(_BYTE *)(BugCheckParameter3 + 52) )
    return 3221225485LL;
  LODWORD(v4) = *(_DWORD *)(BugCheckParameter3 + 48);
  BYTE4(v4) = 0;
  result = sub_14042A5E0(&v4, a2);
  if ( (int)result < 0 )
    KeBugCheckEx(0x1D9u, 1uLL, (int)result, BugCheckParameter3, 0LL);
  return result;
}
