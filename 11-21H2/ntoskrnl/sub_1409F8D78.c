/*
 * XREFs of sub_1409F8D78 @ 0x1409F8D78
 * Callers:
 *     sub_1406399B4 @ 0x1406399B4 (sub_1406399B4.c)
 *     sub_1406AC130 @ 0x1406AC130 (sub_1406AC130.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_1409F8DD8 @ 0x1409F8DD8 (sub_1409F8DD8.c)
 *     sub_1409F92FC @ 0x1409F92FC (sub_1409F92FC.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409F8D78(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rcx

  if ( _InterlockedExchangeAdd(a2, 0xFFFFFFFF) == 1 )
  {
    v3 = a2[1];
    ExFreePoolWithTag(a2, 0x6474624Fu);
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      PsReturnProcessNonPagedPoolQuota(v4, (unsigned int)(160 * v3 + 80));
    _InterlockedExchangeAdd(&dword_140D3CB30, -v3);
  }
}
