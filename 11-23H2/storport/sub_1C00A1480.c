/*
 * XREFs of sub_1C00A1480 @ 0x1C00A1480
 * Callers:
 *     sub_1C00146EC @ 0x1C00146EC (sub_1C00146EC.c)
 *     sub_1C0016900 @ 0x1C0016900 (sub_1C0016900.c)
 *     sub_1C001E130 @ 0x1C001E130 (sub_1C001E130.c)
 *     sub_1C003609C @ 0x1C003609C (sub_1C003609C.c)
 *     sub_1C0074730 @ 0x1C0074730 (sub_1C0074730.c)
 *     sub_1C00A88F4 @ 0x1C00A88F4 (sub_1C00A88F4.c)
 * Callees:
 *     sub_1C00A151C @ 0x1C00A151C (sub_1C00A151C.c)
 */

__int64 __fastcall sub_1C00A1480(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  NTSTATUS v9; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  Handle = 0LL;
  v9 = IoOpenDeviceRegistryKey(a1, 1u, 0x20006u, &Handle);
  if ( v9 >= 0 )
  {
    v9 = sub_1C00A151C(Handle, a2, a3, a4, a5, a6);
    ZwClose(Handle);
  }
  return (unsigned int)v9;
}
