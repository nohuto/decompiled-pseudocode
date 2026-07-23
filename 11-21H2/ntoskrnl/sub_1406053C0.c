/*
 * XREFs of sub_1406053C0 @ 0x1406053C0
 * Callers:
 *     sub_1406052FC @ 0x1406052FC (sub_1406052FC.c)
 * Callees:
 *     sub_140602AEC @ 0x140602AEC (sub_140602AEC.c)
 *     sub_140603744 @ 0x140603744 (sub_140603744.c)
 *     sub_140605160 @ 0x140605160 (sub_140605160.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406053C0(PVOID P)
{
  int v2; // eax
  int v3; // edx
  int v4; // r8d

  v2 = DbgkWerCaptureLiveKernelDump(
         (unsigned int)L"VerifierExt",
         452,
         qword_140C18EC8,
         qword_140C18ED0,
         qword_140C18ED8,
         qword_140C18EE0,
         qword_140C18EC0,
         (__int64)sub_1406054D0,
         0);
  if ( v2 >= 0 )
  {
    if ( qword_140C18EC0 )
      sub_140602AEC((int *)qword_140C18EC0, v3, v4);
    qword_140C18F00 = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    sub_140605160("Livedump failed with Status code: 0x%X \n", v2);
  }
  if ( qword_140C18EE8 )
  {
    ExFreePoolWithTag(qword_140C18EE8, 0x4E726143u);
    qword_140C18EE8 = 0LL;
  }
  sub_140603744((void **)&qword_140C18EC0);
  if ( P )
    ExFreePoolWithTag(P, 0x4E726143u);
  _InterlockedExchange(&dword_140C18EF8, 0);
}
