/*
 * XREFs of sub_140521CF0 @ 0x140521CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14039FE90 @ 0x14039FE90 (sub_14039FE90.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char sub_140521CF0()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  ULONG_PTR v2; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v4; // rax
  LARGE_INTEGER v6; // [rsp+50h] [rbp+18h] BYREF

  v0 = sub_140303720(qword_140C4E3E8);
  sub_14042A5E0(v0, v1);
  if ( (unsigned __int64)qword_140C4C6A0 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v2 = MEMORY[0xFFFFF78000000008] - qword_140C4C6B0;
    if ( MEMORY[0xFFFFF78000000008] - qword_140C4C6B0 < (unsigned __int64)qword_140C4C6A0 >> 1 )
    {
      BugCheckParameter4 = (unsigned int)dword_140C2B1C0;
      v4 = KeQueryInterruptTimePrecise(&v6);
      KeBugCheckEx(0x101u, v2, (unsigned __int64)qword_140C4C6A0 >> 1, v4, BugCheckParameter4);
    }
    sub_14039FE90();
  }
  return 1;
}
