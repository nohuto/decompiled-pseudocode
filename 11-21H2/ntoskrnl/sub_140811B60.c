/*
 * XREFs of sub_140811B60 @ 0x140811B60
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14041DB60 (ZwNotifyChangeKey.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

int __fastcall sub_140811B60(HANDLE Handle)
{
  NTSTATUS v2; // eax
  int result; // eax
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  v2 = sub_14067B838(Handle, L"AsynchronousOptions", 0, &P);
  if ( v2 >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      dword_140C0974C = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
  }
  else if ( v2 == -1073741772 )
  {
    dword_140C0974C = -2147483645;
  }
  result = ZwNotifyChangeKey(Handle, 0LL, qword_140C46BC0, (PVOID)1, &IoStatusBlock, 4u, 0, 0LL, 0, 1u);
  if ( result < 0 )
    return ZwClose(Handle);
  return result;
}
