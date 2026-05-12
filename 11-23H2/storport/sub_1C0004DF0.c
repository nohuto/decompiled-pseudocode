/*
 * XREFs of sub_1C0004DF0 @ 0x1C0004DF0
 * Callers:
 *     sub_1C0004D60 @ 0x1C0004D60 (sub_1C0004D60.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0015A74 @ 0x1C0015A74 (sub_1C0015A74.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C001A194 @ 0x1C001A194 (sub_1C001A194.c)
 *     sub_1C001A2F4 @ 0x1C001A2F4 (sub_1C001A2F4.c)
 *     sub_1C00201F4 @ 0x1C00201F4 (sub_1C00201F4.c)
 *     sub_1C0022B74 @ 0x1C0022B74 (sub_1C0022B74.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C003F6AC @ 0x1C003F6AC (sub_1C003F6AC.c)
 *     sub_1C005AA9C @ 0x1C005AA9C (sub_1C005AA9C.c)
 *     sub_1C005E234 @ 0x1C005E234 (sub_1C005E234.c)
 *     sub_1C005E9BC @ 0x1C005E9BC (sub_1C005E9BC.c)
 *     sub_1C005EA40 @ 0x1C005EA40 (sub_1C005EA40.c)
 *     sub_1C0060B18 @ 0x1C0060B18 (sub_1C0060B18.c)
 *     sub_1C0063710 @ 0x1C0063710 (sub_1C0063710.c)
 *     sub_1C00682AC @ 0x1C00682AC (sub_1C00682AC.c)
 *     sub_1C0074CA8 @ 0x1C0074CA8 (sub_1C0074CA8.c)
 *     sub_1C00AB7F8 @ 0x1C00AB7F8 (sub_1C00AB7F8.c)
 */

__int64 __fastcall sub_1C0004DF0(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v3; // ebx
  bool v6; // r12
  PIO_SECURITY_CONTEXT SecurityContext; // rdi
  PIO_SECURITY_CONTEXT v8; // r13
  unsigned __int64 v9; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  volatile signed __int32 *v12; // r10
  int v13; // ecx
  ULONG FullCreateOptions; // r14d
  int SecurityQos; // r15d
  PDEVICE_OBJECT v16; // rcx
  struct _IO_SECURITY_CONTEXT *v17; // r9
  unsigned int AccessState; // r10d
  unsigned int i; // r11d
  __int64 v20; // rcx
  unsigned __int64 DesiredAccess; // rdx
  __int64 v22; // r8
  int v23; // ecx
  struct _IO_STACK_LOCATION *v24; // rax
  PIO_SECURITY_CONTEXT v25; // rcx
  unsigned __int64 v26; // r14
  unsigned int AccessState_high; // edi
  unsigned int v28; // eax
  __int64 v29; // r8
  unsigned int v31; // eax
  unsigned int v32; // edi
  __int64 v33; // rdx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v34; // rax
  int v35; // ecx
  __int64 v36; // rcx
  signed int v37; // r14d
  struct _IO_STACK_LOCATION *v38; // rcx
  int v39; // ecx
  unsigned int v41; // ebx
  __int128 v42; // [rsp+48h] [rbp-50h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v42 = 0LL;
  v6 = 1;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  v8 = 0LL;
  if ( !SecurityContext )
  {
    a2->IoStatus.Information = 0LL;
    return sub_1C0003440(a2, 0, 0xC000000D);
  }
  v9 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v10 = *(_DWORD *)(v9 + *(_QWORD *)(a1 + 32));
  if ( (v10 & 1) != 0 )
  {
LABEL_80:
    v12 = (volatile signed __int32 *)(a1 + 968);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 968));
  }
  else
  {
    while ( 1 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + *(_QWORD *)(a1 + 32)), v10 + 2, v10);
      if ( v11 == v10 )
        break;
      if ( (v10 & 1) != 0 )
        goto LABEL_80;
    }
    v12 = (volatile signed __int32 *)(a1 + 968);
  }
  v13 = *(_DWORD *)(a1 + 48);
  if ( v13 < 5 )
    goto LABEL_8;
  v35 = v13 - 5;
  if ( v35 )
  {
    v36 = (unsigned int)(v35 - 1);
    if ( !(_DWORD)v36 )
    {
      v37 = -1073741738;
      goto LABEL_86;
    }
    if ( (_DWORD)v36 != 1 )
      goto LABEL_8;
    v37 = sub_1C003F6AC(v36, a2);
  }
  else
  {
    v38 = a2->Tail.Overlay.CurrentStackLocation;
    if ( v38->MajorFunction == 27 || v38->MajorFunction == 14 && v38->Parameters.Read.ByteOffset.LowPart == 266276 )
      goto LABEL_8;
    v37 = -1073741738;
  }
  if ( v37 < 0 )
  {
LABEL_86:
    if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 464), 0, 0);
    BYTE3(SecurityContext->SecurityQos) = sub_1C005AA9C((unsigned int)v37);
    a2->IoStatus.Information = 0LL;
    return sub_1C0003440(a2, 0, v37);
  }
LABEL_8:
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 442LL) != 1 )
    {
      BYTE3(SecurityContext->SecurityQos) = 6;
      a2->IoStatus.Information = 0LL;
      sub_1C000729C(a1);
      return sub_1C0003440(a2, 0, 0xC00000BB);
    }
    v8 = SecurityContext;
    FullCreateOptions = SecurityContext->FullCreateOptions;
    SecurityQos = (int)SecurityContext[1].SecurityQos;
    if ( LODWORD(SecurityContext->AccessState) != 1397899864
      || LODWORD(SecurityContext[2].SecurityQos)
      || SecurityContext[3].SecurityQos )
    {
      BYTE3(SecurityContext->SecurityQos) = 6;
      a2->IoStatus.Information = 0LL;
      sub_1C000729C(a1);
      return sub_1C0003440(a2, 0, 0xC000000D);
    }
  }
  else
  {
    SecurityQos = HIDWORD(SecurityContext->AccessState);
    FullCreateOptions = BYTE2(SecurityContext->SecurityQos);
  }
  v16 = off_1C0093070;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 8) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 19LL, &unk_1C0083530, a1, a2, FullCreateOptions);
  }
  if ( (SecurityQos & 0x100000) != 0 )
  {
    if ( (v16 = *(PDEVICE_OBJECT *)(a1 + 24), (v34 = v16[14].DeviceQueue.1) != 0LL)
      && (*(_DWORD *)(*(_QWORD *)&v34 + 20LL) & 1) == 0
      || (BYTE3(v16->Queue.Wcb.DeviceRoutine) & 4) != 0
      || *(_DWORD *)(&v16->Spare1 + 1) != 1 )
    {
      BYTE3(SecurityContext->SecurityQos) = 36;
      a2->IoStatus.Information = 0LL;
      sub_1C000729C(a1);
      return sub_1C0003440(a2, 0, 0xC0000001);
    }
  }
  switch ( FullCreateOptions )
  {
    case 0u:
      if ( BYTE2(SecurityContext->SecurityQos) != 40 )
      {
        v17 = SecurityContext + 3;
        goto LABEL_27;
      }
      v17 = 0LL;
      if ( BYTE2(v8->SecurityQos) == 40 && !v8->FullCreateOptions )
      {
        AccessState = (unsigned int)v8[2].AccessState;
        for ( i = 0; i < AccessState; ++i )
        {
          v20 = *((unsigned int *)&v8[5].SecurityQos + i);
          if ( (unsigned int)v20 >= 0x80 )
          {
            DesiredAccess = v8->DesiredAccess;
            if ( (unsigned int)v20 <= (unsigned int)DesiredAccess )
            {
              v22 = (unsigned int)v20;
              v23 = *(_DWORD *)((char *)&v8->SecurityQos + v20);
              if ( v23 == 64 )
              {
                if ( v22 + 40 <= DesiredAccess )
                  goto LABEL_25;
              }
              else
              {
                v39 = v23 - 65;
                if ( v39 )
                {
                  if ( v39 == 1 && v22 + 40 <= DesiredAccess )
                  {
                    if ( *(_DWORD *)((char *)&v8->AccessState + v22 + 4) )
                      v17 = (PIO_SECURITY_CONTEXT)((char *)v8 + v22 + 32);
                    break;
                  }
                }
                else if ( v22 + 56 <= DesiredAccess )
                {
LABEL_25:
                  if ( *((_BYTE *)&v8->AccessState + v22 + 2) )
                    v17 = (PIO_SECURITY_CONTEXT)((char *)v8 + v22 + 24);
                  break;
                }
              }
            }
          }
        }
      }
LABEL_27:
      if ( v17 )
      {
        if ( LOBYTE(v17->SecurityQos) == 27 && (BYTE4(v17->SecurityQos) & 1) == 0 )
        {
          if ( (unsigned __int8)sub_1C0060B18(a1) )
          {
            BYTE3(SecurityContext->SecurityQos) = 1;
            a2->IoStatus.Information = 0LL;
            v41 = sub_1C0003440(a2, 0, 0);
            sub_1C000729C(a1);
            if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
              && (HIDWORD(off_1C0093070->Timer) & 8) != 0
              && BYTE1(off_1C0093070->Timer) >= 4u )
            {
              sub_1C003F074(off_1C0093070->AttachedDevice, 20LL, &unk_1C0083530, a1, a2);
            }
            return v41;
          }
        }
      }
      if ( !byte_1C0093AE4 || !v17 )
        goto LABEL_30;
      if ( LOBYTE(v17->SecurityQos) == 0xA2 )
      {
        if ( BYTE1(v17->SecurityQos) != 0xEE )
        {
LABEL_30:
          if ( byte_1C0093BE8
            && (byte_1C0093A01 & 0x1E) != 0
            && (unsigned int)sub_1C0015A74(0LL, LOBYTE(v17->SecurityQos)) )
          {
            IoGetActivityIdIrp(a2, &v42);
            sub_1C00682AC(a2);
          }
          v24 = a2->Tail.Overlay.CurrentStackLocation;
          v25 = v24->Parameters.Create.SecurityContext;
          v24->Control |= 1u;
          BYTE3(v25->SecurityQos) = 0;
          a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = 0LL;
          if ( BYTE2(v25->SecurityQos) == 40 )
          {
            v26 = v25->FullCreateOptions;
            AccessState_high = (unsigned int)v25[1].SecurityQos;
          }
          else
          {
            AccessState_high = HIDWORD(v25->AccessState);
            v26 = BYTE2(v25->SecurityQos);
          }
          if ( (qword_1C0093468 & 0x20) != 0 )
            sub_1C0019E4C(
              *(_QWORD *)(a1 + 24),
              3,
              (_DWORD)a2,
              (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | ((((unsigned __int8)*(_DWORD *)(a1 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96))) << 8),
              0LL,
              0LL,
              0LL);
          v28 = (AccessState_high >> 17) & 4 | 2;
          if ( (AccessState_high & 0x10) == 0 )
            v28 = (AccessState_high >> 17) & 4;
          if ( (AccessState_high & 0x102) != 0x102 && (AccessState_high & 0x80010) == 0 )
          {
            if ( (unsigned int)v26 > 0x20 || (v33 = 0x1000D0000LL, !_bittest64(&v33, v26)) )
              v3 = 1;
          }
          v29 = v28 | 1;
          if ( !v3 )
            v29 = v28;
          sub_1C00052B0(a1, a2, v29);
          if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
            && (HIDWORD(off_1C0093070->Timer) & 8) != 0
            && BYTE1(off_1C0093070->Timer) >= 4u )
          {
            sub_1C003F0C4(off_1C0093070->AttachedDevice, 21LL, &unk_1C0083530, a1, a2, 259);
          }
          return 259LL;
        }
      }
      else if ( LOBYTE(v17->SecurityQos) != 0xB5 || BYTE1(v17->SecurityQos) != 0xEE )
      {
        goto LABEL_30;
      }
      BYTE3(SecurityContext->SecurityQos) = 4;
      a2->IoStatus.Information = 0LL;
      sub_1C000729C(a1);
      return sub_1C0003440(a2, 0, 0xC00000BB);
    case 0xAu:
      return sub_1C0074CA8(a1, a2);
    case 8u:
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 427LL) )
      {
        v31 = sub_1C00201F4(a1, a2);
      }
      else
      {
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        a2->IoStatus.Information = 0LL;
        v31 = sub_1C0003440(a2, 0, 0);
      }
      v32 = v31;
      v6 = v31 != 259;
      break;
    case 2u:
LABEL_59:
      v32 = sub_1C00201F4(a1, a2);
      v6 = 0;
      break;
    default:
      switch ( FullCreateOptions )
      {
        case 1u:
          v32 = sub_1C0022B74(a1, a2);
          goto LABEL_51;
        case 4u:
          *(_BYTE *)(a1 + 692) = 0;
          sub_1C001A194(a1, 0LL);
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          a2->IoStatus.Information = 0LL;
          v32 = sub_1C0003440(a2, 0, 0);
          goto LABEL_51;
        case 6u:
          v32 = sub_1C005E9BC(a1, a2);
          goto LABEL_51;
        case 7u:
        case 9u:
          goto LABEL_59;
        case 0x10u:
        case 0x13u:
        case 0x20u:
          v32 = sub_1C0063710(a1, a2);
          goto LABEL_51;
        case 0x12u:
          v32 = sub_1C005EA40(a1, a2);
          goto LABEL_51;
        case 0x15u:
          v32 = sub_1C005E234(a1, a2);
          goto LABEL_51;
        case 0x17u:
          v32 = sub_1C0003440(a2, 0, 0xC0000010);
          goto LABEL_51;
        case 0x18u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 693) = 1;
          sub_1C001A2F4();
          v32 = sub_1C0003440(a2, 0, 0);
          goto LABEL_51;
        case 0x19u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 693) = 0;
          sub_1C001A194(a1, 0LL);
          v32 = sub_1C0003440(a2, 0, 0);
          goto LABEL_51;
        case 0x1Au:
          if ( (((__int64)*(unsigned int *)(a1 + 744) >> 1) & 0x7FFFFFFF) != 0 )
          {
            *(_QWORD *)(a1 + 1904) = a2;
            a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            IoQueueWorkItem(*(PIO_WORKITEM *)(a1 + 1896), sub_1C0062760, CriticalWorkQueue, (PVOID)(a1 + 1896));
            v32 = 259;
          }
          else
          {
            *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
            v32 = sub_1C0003440(a2, 0, 0);
            if ( v32 != 259 )
              goto LABEL_51;
          }
          v6 = 0;
          break;
        default:
          v32 = sub_1C00AB7F8(v16, a2);
          goto LABEL_51;
      }
      break;
  }
LABEL_51:
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 8) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 22LL, &unk_1C0083530, a1, a2, v32);
  }
  if ( v6 )
    sub_1C000729C(a1);
  return v32;
}
