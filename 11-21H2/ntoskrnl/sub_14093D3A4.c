/*
 * XREFs of sub_14093D3A4 @ 0x14093D3A4
 * Callers:
 *     sub_14093D400 @ 0x14093D400 (sub_14093D400.c)
 * Callees:
 *     ZwQueryInformationFile @ 0x14041B980 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall sub_14093D3A4(void *a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v2; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v2 = 0LL;
  if ( !a1 )
    return -1073741811;
  result = ZwQueryInformationFile(a1, &v2, &v3, 4u, FileModeInformation);
  if ( result >= 0 )
  {
    result = v2.Status;
    if ( v2.Status >= 0 )
    {
      if ( (v3 & 0x30) != 0 )
        return 0;
      return -1073741811;
    }
  }
  return result;
}
