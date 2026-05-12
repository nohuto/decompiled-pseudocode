/*
 * XREFs of sub_1C00A127C @ 0x1C00A127C
 * Callers:
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 * Callees:
 *     sub_1C00140E4 @ 0x1C00140E4 (sub_1C00140E4.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003275C @ 0x1C003275C (sub_1C003275C.c)
 */

NTSTATUS __fastcall sub_1C00A127C(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v6; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 92) || *(_DWORD *)(a1 + 100) || *(_DWORD *)(a1 + 96) )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( (*(_BYTE *)(a1 + 109) & 8) != 0 )
    *(_DWORD *)(a2 + 56) |= 4u;
  if ( byte_1C0093BE8 )
  {
    v7 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_1C0093A02 & 0x20) != 0 )
    {
      v6 = *(_DWORD *)(a2 + 48);
      sub_1C003275C(v4, &stru_1C0083220, &v7, a2, v6);
    }
  }
  return sub_1C00140E4(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
}
