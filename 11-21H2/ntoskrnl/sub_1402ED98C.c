/*
 * XREFs of sub_1402ED98C @ 0x1402ED98C
 * Callers:
 *     sub_1402585D0 @ 0x1402585D0 (sub_1402585D0.c)
 *     sub_14064A4B8 @ 0x14064A4B8 (sub_14064A4B8.c)
 *     sub_140695160 @ 0x140695160 (sub_140695160.c)
 *     sub_14079DB4C @ 0x14079DB4C (sub_14079DB4C.c)
 *     sub_14079E024 @ 0x14079E024 (sub_14079E024.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     sub_1407AFBE0 @ 0x1407AFBE0 (sub_1407AFBE0.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 * Callees:
 *     sub_1402ED9BC @ 0x1402ED9BC (sub_1402ED9BC.c)
 */

__int64 __fastcall sub_1402ED98C(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = sub_1402ED9BC(a1);
  if ( v1 )
  {
    *(_QWORD *)v2 = *(_QWORD *)v1;
    result = *(unsigned int *)(v1 + 8);
  }
  else
  {
    *(_QWORD *)v2 = qword_140C1B9C0;
    result = 96LL;
  }
  *(_DWORD *)(v2 + 8) = result;
  return result;
}
