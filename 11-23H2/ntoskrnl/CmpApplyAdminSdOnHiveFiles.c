/*
 * XREFs of CmpApplyAdminSdOnHiveFiles @ 0x14039003C
 * Callers:
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x14041E7B0 (ZwSetSecurityObject.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpApplyAdminSdOnHiveFiles(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  NTSTATUS v4; // eax
  unsigned int v5; // edi
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v4 = ZwSetSecurityObject(*(HANDLE *)(BugCheckParameter2 + 1544), 4u, CmpAdminSystemFileSecurityDescriptor);
  v5 = v4;
  if ( v4 < 0 )
    KeBugCheckEx(0x51u, 0x13uLL, BugCheckParameter2, BugCheckParameter3, v4);
  v6 = *(void **)(BugCheckParameter2 + 1576);
  if ( v6 )
    ZwSetSecurityObject(v6, 4u, CmpAdminSystemFileSecurityDescriptor);
  v7 = *(void **)(BugCheckParameter2 + 1584);
  if ( v7 )
    ZwSetSecurityObject(v7, 4u, CmpAdminSystemFileSecurityDescriptor);
  v8 = *(void **)(BugCheckParameter2 + 1552);
  if ( v8 )
    ZwSetSecurityObject(v8, 4u, CmpAdminSystemFileSecurityDescriptor);
  return v5;
}
