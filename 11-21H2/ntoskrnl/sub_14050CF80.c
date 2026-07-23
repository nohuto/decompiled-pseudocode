/*
 * XREFs of sub_14050CF80 @ 0x14050CF80
 * Callers:
 *     sub_14050CD98 @ 0x14050CD98 (sub_14050CD98.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_14050CF80(ULONG_PTR BugCheckParameter3, char a2)
{
  ULONG_PTR v2; // rbx
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rdx

  v2 = qword_140C4E488;
  LOBYTE(v3) = a2;
  if ( qword_140C4E488 )
  {
    if ( BugCheckParameter3 == qword_140C4E488 && a2 )
    {
      if ( qword_140C4E488 != qword_140C4E390 )
      {
        v4 = sub_140303720(qword_140C4E488);
        v3 = sub_14042A5E0(v4, v5);
        if ( v3 < 0 )
          KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v2, v3);
      }
      qword_140C4E488 = 0LL;
      qword_140C4E4C0 = v2;
    }
  }
  else if ( BugCheckParameter3 == qword_140C4E4C0 && !a2 )
  {
    LOBYTE(v3) = qword_140C4E500;
    if ( !qword_140C4E500 )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0x22uLL, BugCheckParameter3, 0LL);
    qword_140C4E488 = qword_140C4E4C0;
    qword_140C4E4C0 = qword_140C4E500;
  }
  return v3;
}
