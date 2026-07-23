/*
 * XREFs of sub_140527310 @ 0x140527310
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140527310(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v5; // rcx
  int v6; // eax

  v3 = a2;
  BugCheckParameter4 = a3;
  if ( qword_140C4C5C0 )
  {
    v5 = *(unsigned int *)(a2 + 40);
    LOBYTE(a2) = a3;
    v6 = sub_14042A5E0(v5, a2);
    if ( v6 == 3473497 )
      KeBugCheckEx(0x159u, 0x3002uLL, *(unsigned int *)(v3 + 40), (unsigned int)BugCheckParameter4, 0LL);
    if ( v6 < 0 )
      KeBugCheckEx(0x159u, 0x3201uLL, v6, *(unsigned int *)(v3 + 40), BugCheckParameter4);
  }
  return 0LL;
}
