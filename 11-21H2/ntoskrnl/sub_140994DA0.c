/*
 * XREFs of sub_140994DA0 @ 0x140994DA0
 * Callers:
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 * Callees:
 *     IoSynchronousCallDriver @ 0x140245250 (IoSynchronousCallDriver.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140850D98 @ 0x140850D98 (sub_140850D98.c)
 */

__int64 __fastcall sub_140994DA0(__int64 a1, int a2)
{
  int v2; // eax
  IRP *v4; // rcx
  NTSTATUS v5; // eax
  unsigned int v6; // ecx
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 108);
  v8[2] = a2;
  v4 = *(IRP **)(a1 + 56);
  v8[0] = v2;
  v8[1] = 3;
  sub_140850D98(v4, 0x294044u, 0, (struct _IRP *)v8, 0xCu, 4u);
  v5 = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
  v6 = v8[0];
  if ( v5 < 0 )
    return (unsigned int)-1;
  return v6;
}
