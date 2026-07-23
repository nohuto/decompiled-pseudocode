/*
 * XREFs of sub_140824960 @ 0x140824960
 * Callers:
 *     sub_1403BAEE8 @ 0x1403BAEE8 (sub_1403BAEE8.c)
 * Callees:
 *     MmObtainChargesToLockPagedPool @ 0x14081D080 (MmObtainChargesToLockPagedPool.c)
 *     sub_1408249CC @ 0x1408249CC (sub_1408249CC.c)
 *     sub_14090A3F0 @ 0x14090A3F0 (sub_14090A3F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140824960()
{
  __int64 v0; // rax
  void *v1; // rbx
  unsigned int v2; // edi
  __int64 result; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v0 = sub_1408249CC(&v4, 256LL);
  v1 = (void *)v0;
  if ( v0 )
  {
    v2 = v4;
    result = MmObtainChargesToLockPagedPool(v0, v4);
    if ( (_DWORD)result )
    {
      byte_140C4ABD0 = 1;
LABEL_4:
      qword_140C4ABD8 = v1;
      LODWORD(Length) = v2;
      return result;
    }
    byte_140C4ABD0 = 0;
    ExFreePoolWithTag(v1, 0x636C6148u);
    result = sub_1408249CC(&v4, 64LL);
    v1 = (void *)result;
    if ( result )
    {
      v2 = v4;
      goto LABEL_4;
    }
  }
  return sub_14090A3F0();
}
