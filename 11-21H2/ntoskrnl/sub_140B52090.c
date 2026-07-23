/*
 * XREFs of sub_140B52090 @ 0x140B52090
 * Callers:
 *     sub_140B0A4A8 @ 0x140B0A4A8 (sub_140B0A4A8.c)
 * Callees:
 *     MmCreateMdl @ 0x1402411C0 (MmCreateMdl.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140B52090()
{
  PMDL Mdl; // rax
  __int64 v1; // rbx

  Mdl = MmCreateMdl(0LL, qword_140C4F420, (unsigned int)(dword_140C4F440 << 12));
  v1 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  sub_14029C5B0(Mdl, 0, 0);
  qword_140C4F408 = v1;
  return 0LL;
}
