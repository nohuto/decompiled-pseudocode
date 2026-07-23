/*
 * XREFs of sub_14020B6C8 @ 0x14020B6C8
 * Callers:
 *     sub_14068D6C4 @ 0x14068D6C4 (sub_14068D6C4.c)
 * Callees:
 *     ZwQuerySection @ 0x14041C180 (ZwQuerySection.c)
 */

NTSTATUS __fastcall sub_14020B6C8(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  __int128 SectionInformation; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  SectionInformation = 0LL;
  result = ZwQuerySection(a1, SectionBasicInformation, &SectionInformation, 0x18uLL, 0LL);
  if ( result >= 0 )
  {
    *a2 = v5;
    return 0;
  }
  return result;
}
