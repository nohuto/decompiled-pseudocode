/*
 * XREFs of sub_1C0052204 @ 0x1C0052204
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1C005B568 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 */

__int64 __fastcall sub_1C0052204(CMSPAddress *this, PIRP Irp)
{
  struct _IRP *v3; // rsi
  struct _IRP *MasterIrp; // rdx
  char v5; // r15
  ULONG Options; // ecx
  unsigned int Information; // eax
  unsigned int v9; // eax
  int DynamicTerminalClasses; // edi
  int Flags; // eax
  const wchar_t *v12; // r9
  __int128 v14; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v15; // [rsp+C8h] [rbp-60h] BYREF
  char v16[32]; // [rsp+D8h] [rbp-50h] BYREF

  v3 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v5 = 0;
  v15 = 0LL;
  v14 = 0LL;
  memset(v16, 0, sizeof(v16));
  if ( !MasterIrp )
    goto LABEL_21;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x40 )
    goto LABEL_21;
  v3 = MasterIrp;
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
  if ( _interlockedbittestandset((volatile signed __int32 *)this + 32, 0) == 1 )
  {
    DynamicTerminalClasses = -2147483631;
  }
  else
  {
    v5 = 1;
    DynamicTerminalClasses = sub_1C005A560(this, v16);
    if ( DynamicTerminalClasses >= 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 752) + 53LL) )
        DynamicTerminalClasses = CMSPAddress::get_DynamicTerminalClasses(
                                   this,
                                   (struct tagVARIANT *)HIDWORD(v3->MdlAddress));
      else
        DynamicTerminalClasses = -1073741637;
    }
    *((_DWORD *)this + 32) &= ~1u;
  }
LABEL_22:
  Irp->IoStatus.Information = 0LL;
  if ( DynamicTerminalClasses < 0 )
  {
    if ( v5 )
    {
      sub_1C0010EE0(*((_QWORD *)this + 2), (__int64)&v14);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v12 = (const wchar_t *)&unk_1C0082788;
        if ( *((_QWORD *)this + 627) )
          v12 = (const wchar_t *)*((_QWORD *)this + 627);
        sub_1C0050984(
          *((unsigned __int8 *)&v3->Flags + 4),
          (int)v3->Flags,
          LODWORD(v3->MdlAddress),
          *((_DWORD *)this + 14),
          -1,
          255,
          255,
          (__int64)&v15,
          (__int64)this + 5000,
          *((const wchar_t **)&v14 + 1),
          byte_1C0082FE6,
          byte_1C0082FE6,
          byte_1C0082FE6,
          v12,
          "TcgSetLockingObject",
          v16,
          DynamicTerminalClasses,
          (char)v3->MdlAddress,
          v3->Flags,
          *((_BYTE *)&v3->Flags + 4),
          v3->IoStatus.Information);
      }
    }
  }
  return sub_1C0003440(Irp, 0, DynamicTerminalClasses);
}
