/*
 * XREFs of sub_140560DE0 @ 0x140560DE0
 * Callers:
 *     sub_140A6BD80 @ 0x140A6BD80 (sub_140A6BD80.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __noreturn sub_140560DE0()
{
  ULONG_PTR v0; // r9
  ULONG_PTR BugCheckParameter4[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = qword_140C467C0;
  if ( !qword_140C467C0 )
  {
    v0 = qword_140C4E928;
    if ( !qword_140C4E928 )
      v0 = qword_140CF5F60;
  }
  BugCheckParameter4[1] = (ULONG_PTR)&qword_140C45FC0;
  BugCheckParameter4[2] = qword_140C11650;
  BugCheckParameter4[3] = qword_140C11658;
  BugCheckParameter4[0] = 163841LL;
  KeBugCheckEx(0x9Fu, 4uLL, (unsigned int)dword_140D05078, v0, (ULONG_PTR)BugCheckParameter4);
}
