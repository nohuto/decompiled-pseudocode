/*
 * XREFs of sub_1C00513FC @ 0x1C00513FC
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C0059884 @ 0x1C0059884 (sub_1C0059884.c)
 *     sub_1C005A398 @ 0x1C005A398 (sub_1C005A398.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 */

__int64 __fastcall sub_1C00513FC(__int64 a1, IRP *a2)
{
  char v2; // r12
  struct _IRP *MasterIrp; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  int v7; // edi
  __int64 MdlAddress_high; // rcx
  struct _IRP *Dst; // r12
  __int64 Flags; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  const wchar_t *v14; // rcx
  int Length; // [rsp+B4h] [rbp-7Ch] BYREF
  int v17; // [rsp+B8h] [rbp-78h]
  PVOID P; // [rsp+C0h] [rbp-70h] BYREF
  struct _IRP *v19; // [rsp+C8h] [rbp-68h]
  __int64 v20; // [rsp+D0h] [rbp-60h]
  __int64 v21; // [rsp+D8h] [rbp-58h]
  __int64 MdlAddress_low; // [rsp+E0h] [rbp-50h]
  __int128 v23; // [rsp+E8h] [rbp-48h] BYREF
  __int128 v24; // [rsp+F8h] [rbp-38h] BYREF
  _OWORD v25[2]; // [rsp+108h] [rbp-28h] BYREF

  P = 0LL;
  MdlAddress_low = 0LL;
  v2 = 0;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v17 = -1;
  v24 = 0LL;
  v23 = 0LL;
  memset(v25, 0, sizeof(v25));
  if ( MasterIrp
    && CurrentStackLocation->Parameters.Create.Options >= 0x20
    && MasterIrp->Type == 1
    && *(_DWORD *)(&MasterIrp->Size + 1) == 32 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length < 0x10 )
    {
      v7 = -1073741789;
      goto LABEL_20;
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
    {
      v7 = -2147483631;
      goto LABEL_20;
    }
    MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
    Dst = a2->AssociatedIrp.MasterIrp;
    MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
    v21 = MdlAddress_high;
    if ( (MdlAddress_low & 1) != 0 )
    {
      v20 = *(_QWORD *)&MasterIrp->Flags;
      v19 = MasterIrp->AssociatedIrp.MasterIrp;
    }
    else
    {
      Flags = MasterIrp->Flags;
      v19 = 0LL;
      v20 = Flags;
    }
    v7 = sub_1C005A560(a1, v25);
    if ( v7 < 0 )
      goto LABEL_18;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 6016) + 53LL) )
    {
      v7 = sub_1C005A398(a1, &P, v25);
      if ( v7 < 0 )
      {
LABEL_18:
        *(_DWORD *)(a1 + 128) &= ~1u;
        v2 = 1;
        goto LABEL_20;
      }
      v12 = *(_QWORD *)(a1 + 6016);
      Length = CurrentStackLocation->Parameters.Read.Length;
      sub_1C0059884(v12, (int)P, (int)MasterIrp, (int)&Length, Dst);
      v11 = (unsigned int)Length;
    }
    else
    {
      memset_0(Dst, 0, CurrentStackLocation->Parameters.Read.Length);
      Dst->Type = 1;
      v11 = 16LL;
      *(_DWORD *)(&Dst->Size + 1) = 16;
    }
    a2->IoStatus.Information = v11;
    goto LABEL_18;
  }
  v7 = -1073741811;
LABEL_20:
  if ( P )
    ExFreePoolWithTag(P, 0x43546152u);
  if ( v7 < 0 )
  {
    a2->IoStatus.Information = 0LL;
    if ( v2 )
    {
      sub_1C0010EE0(*(_QWORD *)(a1 + 16), (__int64)&v23);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v14 = (const wchar_t *)&unk_1C0082788;
        if ( *(_QWORD *)(a1 + 5016) )
          v14 = *(const wchar_t **)(a1 + 5016);
        sub_1C0050984(
          (__int64)v14,
          a1 + 5000,
          v13,
          *(_DWORD *)(a1 + 56),
          -1,
          SBYTE1(v17),
          SBYTE2(v17),
          (__int64)&v24,
          a1 + 5000,
          *((const wchar_t **)&v23 + 1),
          byte_1C0082FE6,
          byte_1C0082FE6,
          byte_1C0082FE6,
          v14,
          "TcgEnumerateLockingObjects",
          (const char *)v25,
          v7,
          MdlAddress_low,
          v21,
          v20,
          (char)v19);
      }
    }
  }
  return sub_1C0003440(a2, 0, v7);
}
