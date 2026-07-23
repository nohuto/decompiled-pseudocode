/*
 * XREFs of sub_1406C3540 @ 0x1406C3540
 * Callers:
 *     <none>
 * Callees:
 *     sub_140246604 @ 0x140246604 (sub_140246604.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     IoIs32bitProcess @ 0x1402DF4A0 (IoIs32bitProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406C34B4 @ 0x1406C34B4 (sub_1406C34B4.c)
 *     sub_1406C38A8 @ 0x1406C38A8 (sub_1406C38A8.c)
 *     sub_1406C39F4 @ 0x1406C39F4 (sub_1406C39F4.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     sub_140783428 @ 0x140783428 (sub_140783428.c)
 *     sub_14078362C @ 0x14078362C (sub_14078362C.c)
 *     sub_14078CD70 @ 0x14078CD70 (sub_14078CD70.c)
 *     sub_14078D1A8 @ 0x14078D1A8 (sub_14078D1A8.c)
 *     sub_1409DD22C @ 0x1409DD22C (sub_1409DD22C.c)
 *     sub_1409DD6BC @ 0x1409DD6BC (sub_1409DD6BC.c)
 *     sub_1409DD9A4 @ 0x1409DD9A4 (sub_1409DD9A4.c)
 *     sub_1409DDA74 @ 0x1409DDA74 (sub_1409DDA74.c)
 *     sub_1409DDFF0 @ 0x1409DDFF0 (sub_1409DDFF0.c)
 *     sub_1409DE060 @ 0x1409DE060 (sub_1409DE060.c)
 */

__int64 __fastcall sub_1406C3540(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ACCESS_MASK v3; // r15d
  struct _IRP *MasterIrp; // rdi
  ACCESS_MASK Length; // esi
  unsigned int LowPart; // r12d
  __int64 Options; // r14
  int v9; // ebx
  int v10; // eax
  int v12; // edx
  int Blink_high; // eax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // eax
  ACCESS_MASK DesiredAccess[2]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object_8[2]; // [rsp+70h] [rbp-98h] BYREF
  _OWORD v21[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-68h]
  int v23; // [rsp+A8h] [rbp-60h]
  char v24; // [rsp+B8h] [rbp-50h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  DesiredAccess[0] = Length;
  if ( LowPart > 0x224158 )
  {
    if ( LowPart != 2244960 )
    {
      switch ( LowPart )
      {
        case 0x228008u:
          v9 = sub_1406C34B4(MasterIrp, Options, Length, 0);
          if ( v9 < 0 )
            goto LABEL_10;
          break;
        case 0x22800Cu:
          v9 = sub_1409DDFF0(MasterIrp, (unsigned int)Options);
          if ( v9 < 0 )
            goto LABEL_10;
          break;
        case 0x228024u:
          v9 = sub_1406C38A8(MasterIrp, (unsigned int)Options, Length);
          if ( v9 >= 0 )
          {
LABEL_7:
            DesiredAccess[0] = Options;
            v10 = sub_14078362C(0LL, (__int64)MasterIrp, Length, (__int64)DesiredAccess);
LABEL_8:
            Length = DesiredAccess[0];
LABEL_9:
            v9 = v10;
          }
LABEL_10:
          if ( v9 == 259 || v9 == -1073741536 )
            return (unsigned int)v9;
          goto LABEL_12;
        case 0x22811Cu:
          if ( (_DWORD)Options == 22 )
          {
            v10 = sub_1409DE060(MasterIrp, DesiredAccess);
            goto LABEL_8;
          }
LABEL_72:
          v9 = -1073741823;
          goto LABEL_12;
        default:
          switch ( LowPart )
          {
            case 0x22812Cu:
              if ( Length >= 0x38 && &MasterIrp->Size + 1 <= (USHORT *)((char *)MasterIrp + Options) )
              {
                v16 = *(_DWORD *)&MasterIrp->Type - 1;
                if ( v16 <= 0xFFE && &MasterIrp->Flags + 2 * v16 <= (ULONG *)((char *)MasterIrp + Options) )
                {
                  v10 = sub_1409DD6BC(0, 0, (int)a2, 1, MasterIrp, Length, (__int64)MasterIrp, (__int64)DesiredAccess);
                  goto LABEL_8;
                }
              }
              break;
            case 0x228130u:
              if ( Length >= 0x38 )
              {
                v14 = (unsigned __int64)MasterIrp + Options;
                if ( &MasterIrp->Size + 1 <= (USHORT *)((char *)MasterIrp + Options) )
                {
                  v15 = (unsigned int)(*(_DWORD *)&MasterIrp->Type - 1);
                  if ( (unsigned int)v15 <= 0xFFE && (unsigned __int64)&MasterIrp->ThreadListEntry + 24 * v15 <= v14 )
                  {
                    LOBYTE(v14) = 1;
                    v10 = sub_1409DDA74(
                            (_DWORD)a2,
                            v14,
                            (_DWORD)MasterIrp,
                            Length,
                            (__int64)MasterIrp,
                            *(_DWORD *)&MasterIrp->Type,
                            0LL,
                            0LL,
                            (__int64)DesiredAccess);
                    goto LABEL_8;
                  }
                }
              }
              break;
            case 0x228144u:
              if ( (unsigned int)Options < 0x10
                || Length < 0x38
                || *(_DWORD *)&MasterIrp->Type > (unsigned int)(Options - 8) >> 3 )
              {
                v9 = -1073741808;
                goto LABEL_10;
              }
              v10 = sub_140246604((unsigned int *)MasterIrp, (int *)DesiredAccess, (__int64)a2);
              goto LABEL_8;
            default:
              goto LABEL_57;
          }
LABEL_69:
          v9 = -1073741811;
          goto LABEL_10;
      }
      DesiredAccess[0] = Options;
      v10 = sub_14078362C(0LL, (__int64)MasterIrp, Options, (__int64)DesiredAccess);
      Length = 0;
      goto LABEL_9;
    }
    goto LABEL_77;
  }
  switch ( LowPart )
  {
    case 0x224158u:
      if ( Length >= 0x10 )
      {
        v10 = sub_14078D1A8(MasterIrp, Length, DesiredAccess);
        goto LABEL_8;
      }
      goto LABEL_69;
    case 0x224000u:
      if ( Length >= 0x48 )
      {
        if ( (unsigned int)Options >= 0x30 )
        {
          Blink_high = HIDWORD(MasterIrp->ThreadListEntry.Blink);
          if ( (Blink_high & 1) != 0 && (_DWORD)Options == *(_DWORD *)&MasterIrp->Type && (Blink_high & 0xFFFFFF7E) == 0 )
          {
            v10 = sub_14078CD70(0LL, Length, (__int64)DesiredAccess);
            goto LABEL_8;
          }
        }
        goto LABEL_72;
      }
      break;
    case 0x224004u:
      if ( Length >= 0x38 )
      {
        v9 = sub_1406C34B4(MasterIrp, Options, Length, 1);
        if ( v9 < 0 )
          goto LABEL_10;
        goto LABEL_7;
      }
      break;
    case 0x224108u:
LABEL_24:
      v22 = 0LL;
      v23 = 0;
      Handle = 0LL;
      memset(v21, 0, sizeof(v21));
      DesiredAccess[0] = 0;
      Object = 0LL;
      *(_OWORD *)Object_8 = 0LL;
      v9 = sub_1406C39F4(
             (unsigned int)v21,
             (unsigned int)Object_8,
             (unsigned int)&v24,
             (unsigned int)DesiredAccess,
             (__int64)MasterIrp,
             Options,
             Length);
      if ( v9 >= 0 )
      {
        LOBYTE(v12) = 1;
        v9 = sub_140783428(LowPart, v12, (unsigned int)v21, DesiredAccess[0], (__int64)&Object);
        if ( v9 >= 0 )
        {
          v9 = ObOpenObjectByPointer(Object, 0, 0LL, DesiredAccess[0], qword_140D06B20, 1, &Handle);
          if ( v9 >= 0 )
          {
            if ( IoIs32bitProcess(0LL) )
              LODWORD(MasterIrp->MdlAddress) = (_DWORD)Handle;
            else
              *(_QWORD *)&MasterIrp->Flags = Handle;
          }
          ObfDereferenceObject(Object);
        }
      }
      goto LABEL_10;
    case 0x224124u:
      if ( Length >= 4 )
      {
        *(_DWORD *)&MasterIrp->Type = 1;
        Length = 4;
        v9 = 0;
        goto LABEL_12;
      }
      break;
    case 0x224134u:
LABEL_77:
      if ( Length >= 8 )
      {
        v10 = sub_1409DD22C(LowPart, MasterIrp, Length, DesiredAccess);
        goto LABEL_8;
      }
      break;
    case 0x224138u:
      if ( Length >= 0x10 )
      {
        v10 = sub_1409DD9A4(MasterIrp);
        Length = 16;
        goto LABEL_9;
      }
      break;
    case 0x22413Cu:
    case 0x224140u:
      goto LABEL_24;
    default:
LABEL_57:
      v9 = -1073741808;
      goto LABEL_12;
  }
  v9 = -1073741789;
LABEL_12:
  a2->IoStatus.Status = v9;
  if ( v9 >= 0 )
    v3 = Length;
  a2->IoStatus.Information = v3;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v9;
}
