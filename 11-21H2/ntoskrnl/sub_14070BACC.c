/*
 * XREFs of sub_14070BACC @ 0x14070BACC
 * Callers:
 *     sub_14070B610 @ 0x14070B610 (sub_14070B610.c)
 *     sub_140711F48 @ 0x140711F48 (sub_140711F48.c)
 *     sub_140712868 @ 0x140712868 (sub_140712868.c)
 *     sub_1409EB400 @ 0x1409EB400 (sub_1409EB400.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x1402A07F0 (PsGetProcessSectionBaseAddress.c)
 */

__int64 __fastcall sub_14070BACC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  result = PsGetProcessSectionBaseAddress(a1);
  if ( result )
  {
    result = (__int64)RtlImageNtHeader((PVOID)result);
    if ( result )
    {
      *(_DWORD *)a2 = *(_DWORD *)(result + 88);
      result = *(unsigned int *)(result + 8);
      *(_DWORD *)(a2 + 4) = result;
    }
  }
  return result;
}
