/*
 * XREFs of SepLengthSidAndAttributesArray @ 0x1406BD594
 * Callers:
 *     SepSetTokenCapabilities @ 0x1406BD648 (SepSetTokenCapabilities.c)
 *     SepCreateClaimAttributes @ 0x1407CF704 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1409D1644 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     SeCaptureSidAndAttributesArray @ 0x1406BCC80 (SeCaptureSidAndAttributesArray.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepLengthSidAndAttributesArray(char *Src, unsigned int a2, _DWORD *a3)
{
  char *Pool2; // rax
  char *v7; // rdi
  unsigned int v8; // ebx
  int v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+98h] [rbp+20h] BYREF

  LODWORD(v13) = 0;
  v12 = 0LL;
  Pool2 = (char *)ExAllocatePool2(256LL, 8LL, 1632855379LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v8 = SeCaptureSidAndAttributesArray(Src, a2, 0, Pool2, 8u, v10, v11, (PVOID *)&v12, (unsigned int *)&v13);
  *a3 = v13;
  if ( v8 == -1073741789 )
    v8 = 0;
  ExFreePoolWithTag(v7, 0);
  return v8;
}
