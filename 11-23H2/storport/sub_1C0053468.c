/*
 * XREFs of sub_1C0053468 @ 0x1C0053468
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
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

__int64 __fastcall sub_1C0053468(__int64 a1, IRP *a2)
{
  char v2; // r15
  char v3; // r12
  struct _IRP *MasterIrp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  int v8; // edi
  __int64 MdlAddress_high; // rcx
  struct _IRP *Dst; // r15
  __int64 Flags; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // r11
  __int64 v16; // r9
  const wchar_t *v17; // rax
  __int64 v18; // r8
  int v19; // r9d
  const wchar_t *v20; // rbx
  int Length; // [rsp+B0h] [rbp-80h] BYREF
  PVOID P; // [rsp+B8h] [rbp-78h] BYREF
  struct _IRP *v24; // [rsp+C0h] [rbp-70h]
  __int64 v25; // [rsp+C8h] [rbp-68h]
  __int64 v26; // [rsp+D0h] [rbp-60h]
  __int64 MdlAddress_low; // [rsp+D8h] [rbp-58h]
  __int128 v28; // [rsp+E0h] [rbp-50h] BYREF
  _OWORD v29[2]; // [rsp+F0h] [rbp-40h] BYREF

  P = 0LL;
  MdlAddress_low = 0LL;
  v2 = 0;
  v24 = 0LL;
  v3 = 0;
  v26 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v28 = 0LL;
  memset(v29, 0, sizeof(v29));
  if ( MasterIrp
    && CurrentStackLocation->Parameters.Create.Options >= 0x20
    && MasterIrp->Type == 1
    && *(_DWORD *)(&MasterIrp->Size + 1) == 32 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length < 0x10 )
    {
      v8 = -1073741789;
      goto LABEL_20;
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
    {
      v8 = -2147483631;
      goto LABEL_20;
    }
    v3 = 1;
    MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
    Dst = a2->AssociatedIrp.MasterIrp;
    MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
    v26 = MdlAddress_high;
    if ( (MdlAddress_low & 1) != 0 )
    {
      v25 = *(_QWORD *)&MasterIrp->Flags;
      v24 = MasterIrp->AssociatedIrp.MasterIrp;
    }
    else
    {
      Flags = MasterIrp->Flags;
      v24 = 0LL;
      v25 = Flags;
    }
    v8 = sub_1C005A560(a1, v29);
    if ( v8 < 0 )
      goto LABEL_18;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 3504) + 53LL) )
    {
      v8 = sub_1C005A398(a1, &P, v29);
      if ( v8 < 0 )
      {
LABEL_18:
        *(_DWORD *)(a1 + 456) &= ~8u;
        v2 = v25;
        goto LABEL_20;
      }
      v13 = *(_QWORD *)(a1 + 3504);
      Length = CurrentStackLocation->Parameters.Read.Length;
      sub_1C0059884(v13, (int)P, (int)MasterIrp, (int)&Length, Dst);
      v12 = (unsigned int)Length;
    }
    else
    {
      memset_0(Dst, 0, CurrentStackLocation->Parameters.Read.Length);
      Dst->Type = 1;
      v12 = 16LL;
      *(_DWORD *)(&Dst->Size + 1) = 16;
    }
    a2->IoStatus.Information = v12;
    goto LABEL_18;
  }
  v8 = -1073741811;
LABEL_20:
  if ( P )
    ExFreePoolWithTag(P, 0x43546152u);
  if ( v8 < 0 )
  {
    a2->IoStatus.Information = 0LL;
    if ( v3 )
    {
      v14 = *(_QWORD *)(a1 + 24);
      Length = *(_DWORD *)(a1 + 96);
      sub_1C0010EE0(*(_QWORD *)(v14 + 16), (__int64)&v28);
      v16 = *(_QWORD *)(a1 + 24);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v17 = *(const wchar_t **)(v16 + 5016);
        v18 = v16 + 5000;
        v19 = *(_DWORD *)(v16 + 56);
        v20 = (const wchar_t *)&unk_1C0082788;
        if ( v17 )
          v20 = v17;
        sub_1C0050984(
          a1 + 169,
          a1 + 160,
          v18,
          v19,
          v15,
          SBYTE1(Length),
          SBYTE2(Length),
          a1 + 2024,
          v18,
          *((const wchar_t **)&v28 + 1),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v20,
          "TcgEnumerateLockingObjects",
          (const char *)v29,
          v8,
          MdlAddress_low,
          v26,
          v2,
          (char)v24);
      }
    }
  }
  return sub_1C0003440(a2, 0, v8);
}
