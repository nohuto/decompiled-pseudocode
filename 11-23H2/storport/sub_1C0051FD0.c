/*
 * XREFs of sub_1C0051FD0 @ 0x1C0051FD0
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 *     sub_1C005B214 @ 0x1C005B214 (sub_1C005B214.c)
 */

__int64 __fastcall sub_1C0051FD0(__int64 a1, IRP *a2)
{
  struct _IRP *v3; // rbp
  struct _IRP *MasterIrp; // rdx
  char v5; // r15
  unsigned int Options; // ecx
  unsigned int MdlAddress_high; // eax
  unsigned int v9; // eax
  int v10; // edi
  int v11; // edx
  const wchar_t *v12; // rdx
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
    goto LABEL_14;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x14 )
    goto LABEL_14;
  v3 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_14;
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
  if ( MdlAddress_high > 0x20 )
    goto LABEL_14;
  v9 = MdlAddress_high + 16;
  if ( v9 < 0x14 )
    v9 = 20;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v9 && Options >= v9 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
    {
      v10 = -2147483631;
    }
    else
    {
      v5 = 1;
      v10 = sub_1C005A560(a1, v16);
      if ( v10 >= 0 )
      {
        LOBYTE(v11) = (__int64)v3->MdlAddress & 1;
        v10 = sub_1C005B214(a1, v11, HIDWORD(v3->MdlAddress), (int)v3 + 16, (__int64)v16);
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
      sub_1C0010EE0(*(_QWORD *)(a1 + 16), (__int64)&v14);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v12 = (const wchar_t *)&unk_1C0082788;
        if ( *(_QWORD *)(a1 + 5016) )
          v12 = *(const wchar_t **)(a1 + 5016);
        sub_1C0050984(
          LODWORD(v3->MdlAddress),
          (__int64)v12,
          a1 + 5000,
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
          "TcgRevertConfiguration",
          v16,
          v10,
          (char)v3->MdlAddress,
          HIDWORD(v3->MdlAddress),
          0,
          0);
      }
    }
  }
  return sub_1C0003440(a2, 0, v10);
}
