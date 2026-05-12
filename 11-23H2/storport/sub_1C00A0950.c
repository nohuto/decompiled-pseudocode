/*
 * XREFs of sub_1C00A0950 @ 0x1C00A0950
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000FFBC @ 0x1C000FFBC (sub_1C000FFBC.c)
 *     sub_1C001E760 @ 0x1C001E760 (sub_1C001E760.c)
 *     sub_1C00228E0 @ 0x1C00228E0 (sub_1C00228E0.c)
 *     sub_1C0022C18 @ 0x1C0022C18 (sub_1C0022C18.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003275C @ 0x1C003275C (sub_1C003275C.c)
 *     sub_1C00603D0 @ 0x1C00603D0 (sub_1C00603D0.c)
 *     sub_1C0060538 @ 0x1C0060538 (sub_1C0060538.c)
 *     sub_1C00606A0 @ 0x1C00606A0 (sub_1C00606A0.c)
 *     sub_1C0060808 @ 0x1C0060808 (sub_1C0060808.c)
 *     sub_1C00A0AD8 @ 0x1C00A0AD8 (sub_1C00A0AD8.c)
 *     sub_1C00A380C @ 0x1C00A380C (sub_1C00A380C.c)
 *     sub_1C00A48BC @ 0x1C00A48BC (sub_1C00A48BC.c)
 *     sub_1C00A49A4 @ 0x1C00A49A4 (sub_1C00A49A4.c)
 */

NTSTATUS __fastcall sub_1C00A0950(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-38h]
  GUID v12; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 8u )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    return sub_1C0003440((PIRP)a2, 0, 0xC00000EF);
  }
  v4 = **(_DWORD **)(a2 + 24);
  if ( v4 > 54 )
  {
    v6 = v4 - 59;
    if ( !v6 )
      return sub_1C000FFBC(a1, (IRP *)a2);
    v7 = v6 - 3;
    if ( !v7 )
      return sub_1C00603D0(a1, (IRP *)a2);
    v8 = v7 - 1;
    if ( !v8 )
      return sub_1C00228E0(a1, (IRP *)a2);
    v9 = v8 - 1;
    if ( !v9 )
      return sub_1C00606A0(a1, (IRP *)a2);
    if ( v9 == 1 )
      return sub_1C0022C18(a1, (IRP *)a2);
  }
  else
  {
    switch ( v4 )
    {
      case 54:
        return sub_1C0060538(a1, (IRP *)a2);
      case 0:
        return sub_1C00A0AD8(a1, a2);
      case 2:
        return sub_1C00A380C(a1, a2);
      case 12:
        return sub_1C00A48BC(a1, a2);
      case 48:
        return sub_1C00A49A4(a1, a2);
      case 50:
        return sub_1C001E760(a1, (IRP *)a2);
      case 52:
        return sub_1C0060808(a1, (IRP *)a2);
    }
  }
  if ( byte_1C0093BE8 )
  {
    v12 = 0LL;
    IoGetActivityIdIrp(a2, &v12);
    if ( (byte_1C0093A02 & 8) != 0 )
    {
      v11 = *(_DWORD *)(a2 + 48);
      sub_1C003275C(v10, &stru_1C0089210, &v12, a2, v11);
    }
  }
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
}
