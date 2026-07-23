/*
 * XREFs of sub_1406DAE08 @ 0x1406DAE08
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14041B900 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x14041BF80 (ZwAdjustPrivilegesToken.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406DAE08(char *P)
{
  int v2; // ecx
  void *v3; // rcx
  char *v4; // rcx

  v2 = *((_DWORD *)P + 8);
  if ( (v2 & 3) != 1 )
  {
    ZwAdjustPrivilegesToken(*(HANDLE *)P, 0, *((PTOKEN_PRIVILEGES *)P + 2), 0, 0LL, 0LL);
    v2 = *((_DWORD *)P + 8);
  }
  if ( (v2 & 1) != 0 )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, P + 8, 8u);
    v3 = (void *)*((_QWORD *)P + 1);
    if ( v3 )
      ZwClose(v3);
  }
  v4 = (char *)*((_QWORD *)P + 2);
  if ( v4 != P + 36 )
    ExFreePoolWithTag(v4, 0);
  ZwClose(*(HANDLE *)P);
  ExFreePoolWithTag(P, 0);
}
