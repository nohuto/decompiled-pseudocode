/*
 * XREFs of sub_14050EC90 @ 0x14050EC90
 * Callers:
 *     sub_140259C50 @ 0x140259C50 (sub_140259C50.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

int sub_14050EC90()
{
  unsigned __int64 v0; // rax
  int v1; // ecx
  ULONG_PTR v2; // rbx
  ULONG_PTR InterruptTimePrecise; // r8
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp+8h] BYREF

  BugCheckParameter3 = 0LL;
  LODWORD(v0) = qword_140C4E3E8;
  if ( qword_140C4E3E8 )
  {
    v1 = *(_DWORD *)(qword_140C4E3E8 + 228);
    if ( v1 == 8 )
    {
      LODWORD(v0) = HIDWORD(KeGetPcr()[1].LockArray);
      if ( (_DWORD)v0 )
        return v0;
      v0 = __readmsr(0x40000112u);
      if ( !v0 )
        return v0;
      __writemsr(0x40000112u, 0LL);
    }
    else
    {
      if ( v1 != 13 )
        return v0;
      v0 = MEMORY[0xFFFFF78000000008] - qword_140C4C6B0 + 100000000;
      if ( v0 <= qword_140C4C690 )
        return v0;
    }
    v2 = MEMORY[0xFFFFF78000000008] - qword_140C4C6B0;
    InterruptTimePrecise = KeQueryInterruptTimePrecise((LARGE_INTEGER *)&BugCheckParameter3);
    LODWORD(v0) = *(_DWORD *)(qword_140C4E3E8 + 228);
    if ( (_DWORD)v0 == 8 )
      KeBugCheckEx(0x1CAu, v2, InterruptTimePrecise, BugCheckParameter3, (unsigned int)dword_140C2B1C0);
    if ( (_DWORD)v0 == 13 )
      KeBugCheckEx(0x1CFu, v2, InterruptTimePrecise, BugCheckParameter3, (unsigned int)dword_140C2B1C0);
  }
  return v0;
}
