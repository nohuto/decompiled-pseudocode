/*
 * XREFs of sub_140A82298 @ 0x140A82298
 * Callers:
 *     sub_140A9CBF8 @ 0x140A9CBF8 (sub_140A9CBF8.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     MmLockPagableImageSection @ 0x1406F5E50 (MmLockPagableImageSection.c)
 */

char sub_140A82298()
{
  char v0; // bl

  v0 = 0;
  if ( dword_140C1AD14 )
    return 0;
  qword_140C1AD08 = (PVOID)MmLockPagableImageSection((ULONG_PTR)sub_140A82480);
  if ( qword_140C1AD08 )
  {
    qword_140C1AD00 = (PVOID)MmLockPagableImageSection((ULONG_PTR)&dword_140D4E018);
    if ( qword_140C1AD00 )
    {
      v0 = 1;
      *((_QWORD *)&xmmword_140C1B2B0 + 1) = &xmmword_140C1B2B0;
      *(_QWORD *)&xmmword_140C1B2B0 = &xmmword_140C1B2B0;
      *(&xmmword_140C1B1F0 + 1) = &xmmword_140C1B1F0;
      xmmword_140C1B1F0 = &xmmword_140C1B1F0;
    }
    else
    {
      MmUnlockPagableImageSection(qword_140C1AD08);
    }
  }
  return v0;
}
