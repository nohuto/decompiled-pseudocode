/*
 * XREFs of sub_1405FB258 @ 0x1405FB258
 * Callers:
 *     sub_1405FB934 @ 0x1405FB934 (sub_1405FB934.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     NtReadFile @ 0x14073A320 (NtReadFile.c)
 */

__int64 __fastcall sub_1405FB258(
        void **a1,
        __int64 a2,
        LARGE_INTEGER *a3,
        void (__stdcall *a4)(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved),
        PVOID ApcContext)
{
  struct _IO_STATUS_BLOCK *v5; // rbx
  void *v6; // r10
  void *v7; // rcx
  NTSTATUS File; // eax
  ULONG v10; // [rsp+30h] [rbp-28h]

  v5 = *(struct _IO_STATUS_BLOCK **)a2;
  v6 = *(void **)(a2 + 8);
  v7 = *a1;
  v10 = *(_DWORD *)(a2 + 16);
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
    File = NtReadFile(v7, 0LL, a4, ApcContext, v5, v6, v10, a3, 0LL);
  else
    File = NtWriteFile(v7, 0LL, a4, ApcContext, v5, v6, v10, a3, 0LL);
  if ( (File & 0xC0000000) == 0xC0000000 )
  {
    v5->Status = File;
    sub_14042A5E0(ApcContext, v5);
  }
  return 259LL;
}
