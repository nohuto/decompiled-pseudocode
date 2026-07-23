/*
 * XREFs of sub_1408442E8 @ 0x1408442E8
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     sub_14084442C @ 0x14084442C (sub_14084442C.c)
 * Callees:
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall sub_1408442E8(__int64 a1, const UNICODE_STRING *a2)
{
  UNICODE_STRING *Pool2; // rax
  UNICODE_STRING *v5; // rbx
  NTSTATUS result; // eax
  UNICODE_STRING **v7; // rdx

  Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, 32LL, 1399877200LL);
  v5 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  result = RtlDuplicateUnicodeString(0, a2, Pool2 + 1);
  if ( result >= 0 )
  {
    v7 = *(UNICODE_STRING ***)(a1 + 64);
    if ( *v7 != (UNICODE_STRING *)(a1 + 56) )
      __fastfail(3u);
    *(_QWORD *)&v5->Length = a1 + 56;
    v5->Buffer = (wchar_t *)v7;
    *v7 = v5;
    *(_QWORD *)(a1 + 64) = v5;
  }
  return result;
}
