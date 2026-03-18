/*
 * XREFs of SepDuplicateSid @ 0x14066B730
 * Callers:
 *     SepSetTokenTrust @ 0x1407259B0 (SepSetTokenTrust.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1409CCCB0 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x1409CCE04 (SepSetTokenUserAndGroups.c)
 * Callees:
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepDuplicateSid(unsigned __int8 *SourceSid, _QWORD *a2)
{
  int v4; // eax
  ULONG v5; // ebp
  void *Pool2; // rax
  void *v7; // rdi
  __int64 result; // rax

  if ( !a2 )
    return 3221225485LL;
  v4 = SourceSid[1];
  *a2 = 0LL;
  v5 = 4 * v4 + 8;
  Pool2 = (void *)ExAllocatePool2(256LL, v5, 1767073107LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  RtlCopySid(v5, Pool2, SourceSid);
  result = 0LL;
  *a2 = v7;
  return result;
}
