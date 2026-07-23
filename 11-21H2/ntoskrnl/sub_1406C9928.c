/*
 * XREFs of sub_1406C9928 @ 0x1406C9928
 * Callers:
 *     sub_1402AC840 @ 0x1402AC840 (sub_1402AC840.c)
 *     sub_140558960 @ 0x140558960 (sub_140558960.c)
 *     sub_1406C9680 @ 0x1406C9680 (sub_1406C9680.c)
 *     sub_1406C9754 @ 0x1406C9754 (sub_1406C9754.c)
 *     sub_1406DC9F0 @ 0x1406DC9F0 (sub_1406DC9F0.c)
 *     sub_1406DCB10 @ 0x1406DCB10 (sub_1406DCB10.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 */

bool __fastcall sub_1406C9928(__int64 a1)
{
  char v1; // si
  void *v2; // rdi
  NTSTATUS v3; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  LODWORD(TokenInformation) = 0;
  v2 = (void *)sub_140347920(a1, 0x746C6644u);
  v3 = SeQueryInformationToken(v2, TokenIsAppContainer, &TokenInformation);
  ObfDereferenceObject(v2);
  if ( v3 >= 0 )
    return (_DWORD)TokenInformation != 0;
  return v1;
}
