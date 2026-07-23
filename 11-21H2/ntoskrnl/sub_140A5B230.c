/*
 * XREFs of sub_140A5B230 @ 0x140A5B230
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     MmLockPagableImageSection @ 0x1406F5E50 (MmLockPagableImageSection.c)
 *     sub_140B236AC @ 0x140B236AC (sub_140B236AC.c)
 *     sub_140B2388C @ 0x140B2388C (sub_140B2388C.c)
 */

__int64 __fastcall sub_140A5B230(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 8 )
  {
    sub_140B236AC(a3);
  }
  else if ( a1 == 17 )
  {
    if ( (unsigned __int8)byte_140C4C028 >= 5u )
      sub_140B2388C();
    qword_140C4C440 = (PVOID)MmLockPagableImageSection((ULONG_PTR)sub_140A508C0);
    MmUnlockPagableImageSection(qword_140C4C440);
  }
  return 0LL;
}
