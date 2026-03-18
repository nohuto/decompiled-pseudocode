/*
 * XREFs of RtlReleasePrivilege @ 0x1406DAE08
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14041B900 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x14041BF80 (ZwAdjustPrivilegesToken.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall RtlReleasePrivilege(_DWORD *P)
{
  int v2; // ecx
  void *v3; // rcx
  _DWORD *v4; // rcx

  v2 = P[8];
  if ( (v2 & 3) != 1 )
  {
    ZwAdjustPrivilegesToken(*(_QWORD *)P, 0LL);
    v2 = P[8];
  }
  if ( (v2 & 1) != 0 )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, P + 2, 8u);
    v3 = (void *)*((_QWORD *)P + 1);
    if ( v3 )
      ZwClose(v3);
  }
  v4 = (_DWORD *)*((_QWORD *)P + 2);
  if ( v4 != P + 9 )
    ExFreePoolWithTag(v4, 0);
  ZwClose(*(HANDLE *)P);
  ExFreePoolWithTag(P, 0);
}
