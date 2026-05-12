/*
 * XREFs of sub_1C00A18DC @ 0x1C00A18DC
 * Callers:
 *     sub_1C00146EC @ 0x1C00146EC (sub_1C00146EC.c)
 *     sub_1C0018D7C @ 0x1C0018D7C (sub_1C0018D7C.c)
 *     sub_1C001E074 @ 0x1C001E074 (sub_1C001E074.c)
 *     sub_1C001E130 @ 0x1C001E130 (sub_1C001E130.c)
 *     sub_1C001E210 @ 0x1C001E210 (sub_1C001E210.c)
 *     sub_1C0074730 @ 0x1C0074730 (sub_1C0074730.c)
 *     sub_1C00A88F4 @ 0x1C00A88F4 (sub_1C00A88F4.c)
 * Callees:
 *     sub_1C00A2BD0 @ 0x1C00A2BD0 (sub_1C00A2BD0.c)
 */

__int64 __fastcall sub_1C00A18DC(struct _DEVICE_OBJECT *a1, int a2, int a3, int a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // rdi
  NTSTATUS v10; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  v6 = a6;
  Handle = 0LL;
  LODWORD(a6) = *a6;
  v10 = IoOpenDeviceRegistryKey(a1, 1u, 0x20019u, &Handle);
  if ( v10 >= 0 )
  {
    v10 = sub_1C00A2BD0((_DWORD)Handle, a2, a3, a4, a5, (__int64)&a6);
    ZwClose(Handle);
    if ( v10 >= 0 )
      *v6 = (_DWORD)a6;
  }
  return (unsigned int)v10;
}
