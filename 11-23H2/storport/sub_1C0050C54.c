/*
 * XREFs of sub_1C0050C54 @ 0x1C0050C54
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C00580FC @ 0x1C00580FC (sub_1C00580FC.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 */

__int64 __fastcall sub_1C0050C54(__int64 a1, IRP *a2)
{
  struct _IRP *v3; // rbp
  struct _IRP *MasterIrp; // rdx
  char v5; // r15
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v9; // eax
  int v10; // edi
  int v11; // edx
  int v12; // r8d
  const wchar_t *v13; // r8
  __int128 v15; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v16; // [rsp+C8h] [rbp-60h] BYREF
  char v17[32]; // [rsp+D8h] [rbp-50h] BYREF

  v3 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = 0;
  v16 = 0LL;
  v15 = 0LL;
  memset(v17, 0, sizeof(v17));
  if ( !MasterIrp )
    goto LABEL_14;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x18 )
    goto LABEL_14;
  v3 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_14;
  Flags = MasterIrp->Flags;
  if ( Flags > 0x20 )
    goto LABEL_14;
  v9 = Flags + 20;
  if ( v9 < 0x18 )
    v9 = 24;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v9 && Options >= v9 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
    {
      v10 = -2147483631;
    }
    else
    {
      v5 = 1;
      v10 = sub_1C005A560(a1, v17);
      if ( v10 >= 0 )
      {
        LOBYTE(v12) = BYTE5(v3->MdlAddress);
        LOBYTE(v11) = BYTE4(v3->MdlAddress);
        v10 = sub_1C00580FC(a1, v11, v12, v3->Flags, (__int64)(&v3->Flags + 1), (__int64)v17);
      }
      *(_DWORD *)(a1 + 128) &= ~1u;
    }
  }
  else
  {
LABEL_14:
    v10 = -1073741811;
  }
  a2->IoStatus.Information = 0LL;
  if ( v10 < 0 )
  {
    if ( v5 )
    {
      sub_1C0010EE0(*(_QWORD *)(a1 + 16), (__int64)&v15);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v13 = (const wchar_t *)&unk_1C0082788;
        if ( *(_QWORD *)(a1 + 5016) )
          v13 = *(const wchar_t **)(a1 + 5016);
        sub_1C0050984(
          BYTE5(v3->MdlAddress),
          BYTE4(v3->MdlAddress),
          (__int64)v13,
          *(_DWORD *)(a1 + 56),
          -1,
          255,
          255,
          (__int64)&v16,
          a1 + 5000,
          *((const wchar_t **)&v15 + 1),
          byte_1C0082FE6,
          byte_1C0082FE6,
          byte_1C0082FE6,
          v13,
          "TcgActivateLocking",
          v17,
          v10,
          BYTE4(v3->MdlAddress),
          BYTE5(v3->MdlAddress),
          v3->Flags,
          0);
      }
    }
  }
  return sub_1C0003440(a2, 0, v10);
}
