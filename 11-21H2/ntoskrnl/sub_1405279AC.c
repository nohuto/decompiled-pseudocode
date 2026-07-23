/*
 * XREFs of sub_1405279AC @ 0x1405279AC
 * Callers:
 *     sub_14051ABD8 @ 0x14051ABD8 (sub_14051ABD8.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405279AC(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, _QWORD *a4, ULONG_PTR a5)
{
  ULONG_PTR BugCheckParameter4; // rsi
  int v9; // ebp
  int v10; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( *(_BYTE *)(BugCheckParameter3 + 52) )
    return 3221225485LL;
  BugCheckParameter4 = a5;
  LODWORD(v11) = *(_DWORD *)(BugCheckParameter3 + 48);
  BYTE4(v11) = 0;
  v9 = sub_14042A5E0(&v11, a2);
  if ( v9 < 0 )
  {
    v10 = sub_14042A5E0(&v11, BugCheckParameter4);
    if ( v10 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v10, BugCheckParameter3, BugCheckParameter4);
    *a4 = 0LL;
  }
  return (unsigned int)v9;
}
