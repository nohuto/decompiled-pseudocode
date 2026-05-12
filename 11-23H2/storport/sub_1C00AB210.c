/*
 * XREFs of sub_1C00AB210 @ 0x1C00AB210
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003275C @ 0x1C003275C (sub_1C003275C.c)
 *     sub_1C0063E9C @ 0x1C0063E9C (sub_1C0063E9C.c)
 *     sub_1C00AC5A8 @ 0x1C00AC5A8 (sub_1C00AC5A8.c)
 *     sub_1C00AC62C @ 0x1C00AC62C (sub_1C00AC62C.c)
 *     sub_1C00AC6B0 @ 0x1C00AC6B0 (sub_1C00AC6B0.c)
 */

NTSTATUS __fastcall sub_1C00AB210(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-38h]
  GUID v11; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 8u )
  {
    v6 = **(_DWORD **)(a2 + 24);
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 3 )
          {
            return sub_1C0063E9C(a1, (IRP *)a2, a3);
          }
          else
          {
            if ( byte_1C0093BE8 )
            {
              v11 = 0LL;
              IoGetActivityIdIrp(a2, &v11);
              if ( (byte_1C0093A02 & 8) != 0 )
              {
                v10 = *(_DWORD *)(a2 + 48);
                sub_1C003275C(v9, &stru_1C0089210, &v11, a2, v10);
              }
            }
            ++*(_BYTE *)(a2 + 67);
            *(_QWORD *)(a2 + 184) += 72LL;
            return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
          }
        }
        else
        {
          return sub_1C00AC5A8(a1);
        }
      }
      else
      {
        return sub_1C00AC62C(a1);
      }
    }
    else
    {
      return sub_1C00AC6B0(a1);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    return sub_1C0003440((PIRP)a2, 0, 0xC00000EF);
  }
}
