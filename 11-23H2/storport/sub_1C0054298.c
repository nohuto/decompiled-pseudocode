/*
 * XREFs of sub_1C0054298 @ 0x1C0054298
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1C005B568 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 */

__int64 __fastcall sub_1C0054298(CMSPAddress *this, PIRP Irp)
{
  struct _IRP *MasterIrp; // rdx
  struct _IRP *v5; // rbx
  char v6; // di
  ULONG Options; // ecx
  unsigned int Information; // eax
  unsigned int v9; // eax
  int DynamicTerminalClasses; // r15d
  int Flags; // eax
  char v12; // r11
  __int64 v13; // r9
  const wchar_t *v14; // rax
  __int64 v15; // rsi
  const wchar_t *v16; // r14
  int v17; // r9d
  int v19; // [rsp+B0h] [rbp-68h]
  __int128 v20; // [rsp+B8h] [rbp-60h] BYREF
  char v21[32]; // [rsp+C8h] [rbp-50h] BYREF

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v5 = 0LL;
  v6 = 0;
  v20 = 0LL;
  memset(v21, 0, sizeof(v21));
  if ( !MasterIrp )
    goto LABEL_21;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x40 )
    goto LABEL_21;
  v5 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_21;
  Information = MasterIrp->IoStatus.Information;
  if ( Information > 0x20 )
    goto LABEL_21;
  v9 = Information + 60;
  if ( v9 < 0x40 )
    v9 = 64;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v9 || Options < v9 )
    goto LABEL_21;
  if ( !HIDWORD(MasterIrp->MdlAddress) )
  {
    DynamicTerminalClasses = -1073741637;
    goto LABEL_22;
  }
  if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
  {
    Flags = MasterIrp->Flags;
    if ( Flags < 1 || Flags > 3 )
    {
LABEL_21:
      DynamicTerminalClasses = -1073741811;
      goto LABEL_22;
    }
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)this + 114, 3u) == 1 )
  {
    DynamicTerminalClasses = -2147483631;
  }
  else
  {
    v6 = 1;
    DynamicTerminalClasses = sub_1C005A560(this, v21);
    if ( DynamicTerminalClasses >= 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 438) + 53LL) )
        DynamicTerminalClasses = CMSPAddress::get_DynamicTerminalClasses(
                                   this,
                                   (struct tagVARIANT *)HIDWORD(v5->MdlAddress));
      else
        DynamicTerminalClasses = -1073741637;
    }
    *((_DWORD *)this + 114) &= ~8u;
  }
LABEL_22:
  Irp->IoStatus.Information = 0LL;
  if ( DynamicTerminalClasses < 0 )
  {
    if ( v6 )
    {
      v19 = *((_DWORD *)this + 24);
      sub_1C0010EE0(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (__int64)&v20);
      v13 = *((_QWORD *)this + 3);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v14 = *(const wchar_t **)(v13 + 5016);
        v15 = v13 + 5000;
        v16 = (const wchar_t *)&unk_1C0082788;
        v17 = *(_DWORD *)(v13 + 56);
        if ( v14 )
          v16 = v14;
        sub_1C0050984(
          *((unsigned __int8 *)&v5->Flags + 4),
          (int)v5->Flags,
          LODWORD(v5->MdlAddress),
          v17,
          v12,
          SBYTE1(v19),
          SBYTE2(v19),
          (__int64)this + 2024,
          v15,
          *((const wchar_t **)&v20 + 1),
          (const char *)this + 160,
          (const char *)this + 169,
          (const char *)this + 186,
          v16,
          "TcgSetLockingObject",
          v21,
          DynamicTerminalClasses,
          (char)v5->MdlAddress,
          v5->Flags,
          *((_BYTE *)&v5->Flags + 4),
          v5->IoStatus.Information);
      }
    }
  }
  return sub_1C0003440(Irp, 0, DynamicTerminalClasses);
}
