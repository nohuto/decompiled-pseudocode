/*
 * XREFs of sub_1C00529EC @ 0x1C00529EC
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 *     sub_1C005BC64 @ 0x1C005BC64 (sub_1C005BC64.c)
 */

__int64 __fastcall sub_1C00529EC(__int64 a1, IRP *a2)
{
  struct _IRP *v3; // rsi
  struct _IRP *MasterIrp; // rdx
  char v5; // r15
  unsigned int Options; // ecx
  unsigned int v8; // eax
  unsigned int IrpCount; // edx
  unsigned int v10; // eax
  int v11; // edi
  const wchar_t *v12; // r9
  __int128 v14; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v15; // [rsp+C8h] [rbp-60h] BYREF
  char v16[32]; // [rsp+D8h] [rbp-50h] BYREF

  v3 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = 0;
  v15 = 0LL;
  v14 = 0LL;
  memset(v16, 0, sizeof(v16));
  if ( !MasterIrp )
    goto LABEL_15;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x20 )
    goto LABEL_15;
  v3 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_15;
  v8 = *(&MasterIrp->Flags + 1);
  if ( v8 > 0x20 )
    goto LABEL_15;
  IrpCount = MasterIrp->AssociatedIrp.IrpCount;
  if ( IrpCount > 0x20 )
    goto LABEL_15;
  v10 = IrpCount + v8 + 28;
  if ( v10 < 0x20 )
    v10 = 32;
  if ( *(_DWORD *)(&v3->Size + 1) == v10 && Options >= v10 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
    {
      v11 = -2147483631;
    }
    else
    {
      v5 = 1;
      v11 = sub_1C005A560(a1, v16);
      if ( v11 >= 0 )
        v11 = sub_1C005BC64(
                a1,
                HIDWORD(v3->MdlAddress),
                v3->Flags,
                *(&v3->Flags + 1),
                (__int64)&v3->AssociatedIrp.SystemBuffer + 4,
                v3->AssociatedIrp.IrpCount,
                (__int64)&v3->AssociatedIrp.SystemBuffer + *(&v3->Flags + 1) + 4,
                (__int64)v16);
      *(_DWORD *)(a1 + 128) &= ~1u;
    }
  }
  else
  {
LABEL_15:
    v11 = -1073741811;
  }
  a2->IoStatus.Information = 0LL;
  if ( v11 < 0 )
  {
    if ( v5 )
    {
      sub_1C0010EE0(*(_QWORD *)(a1 + 16), (__int64)&v14);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v12 = (const wchar_t *)&unk_1C0082788;
        if ( *(_QWORD *)(a1 + 5016) )
          v12 = *(const wchar_t **)(a1 + 5016);
        sub_1C0050984(
          *(&v3->Flags + 1),
          (int)v3->Flags,
          SHIDWORD(v3->MdlAddress),
          *(_DWORD *)(a1 + 56),
          -1,
          255,
          255,
          (__int64)&v15,
          a1 + 5000,
          *((const wchar_t **)&v14 + 1),
          byte_1C0082FE6,
          byte_1C0082FE6,
          byte_1C0082FE6,
          v12,
          "TcgSetSpAuthorityKey",
          v16,
          v11,
          HIDWORD(v3->MdlAddress),
          v3->Flags,
          *(&v3->Flags + 1),
          v3->AssociatedIrp.IrpCount);
      }
    }
  }
  return sub_1C0003440(a2, 0, v11);
}
