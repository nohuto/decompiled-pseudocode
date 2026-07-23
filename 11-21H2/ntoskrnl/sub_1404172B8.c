/*
 * XREFs of sub_1404172B8 @ 0x1404172B8
 * Callers:
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x14041EDA0 (ZwSetSecurityObject.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1404172B8(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  NTSTATUS v4; // eax
  unsigned int v5; // edi
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v4 = ZwSetSecurityObject(*(HANDLE *)(BugCheckParameter2 + 1544), 4u, SecurityDescriptor);
  v5 = v4;
  if ( v4 < 0 )
    KeBugCheckEx(0x51u, 0x13uLL, BugCheckParameter2, BugCheckParameter3, v4);
  v6 = *(void **)(BugCheckParameter2 + 1576);
  if ( v6 )
    ZwSetSecurityObject(v6, 4u, SecurityDescriptor);
  v7 = *(void **)(BugCheckParameter2 + 1584);
  if ( v7 )
    ZwSetSecurityObject(v7, 4u, SecurityDescriptor);
  v8 = *(void **)(BugCheckParameter2 + 1552);
  if ( v8 )
    ZwSetSecurityObject(v8, 4u, SecurityDescriptor);
  return v5;
}
