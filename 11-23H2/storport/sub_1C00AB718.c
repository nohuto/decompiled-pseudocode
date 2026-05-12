/*
 * XREFs of sub_1C00AB718 @ 0x1C00AB718
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003275C @ 0x1C003275C (sub_1C003275C.c)
 *     sub_1C00609C4 @ 0x1C00609C4 (sub_1C00609C4.c)
 */

NTSTATUS __fastcall sub_1C00AB718(__int64 a1, __int64 a2)
{
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 8u )
  {
    if ( **(_DWORD **)(a2 + 24) == 50 )
    {
      return sub_1C00609C4(a1, (IRP *)a2);
    }
    else
    {
      if ( byte_1C0093BE8 )
      {
        v7 = 0LL;
        IoGetActivityIdIrp(a2, &v7);
        if ( (byte_1C0093A02 & 8) != 0 )
        {
          v6 = *(_DWORD *)(a2 + 48);
          sub_1C003275C(v5, &stru_1C0089210, &v7, a2, v6);
        }
      }
      ++*(_BYTE *)(a2 + 67);
      *(_QWORD *)(a2 + 184) += 72LL;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    return sub_1C0003440((PIRP)a2, 0, 0xC00000EF);
  }
}
