/*
 * XREFs of sub_1C0039770 @ 0x1C0039770
 * Callers:
 *     sub_1C0039ED0 @ 0x1C0039ED0 (sub_1C0039ED0.c)
 *     sub_1C003D5C0 @ 0x1C003D5C0 (sub_1C003D5C0.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 *     sub_1C0020F44 @ 0x1C0020F44 (sub_1C0020F44.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C0025BC0 @ 0x1C0025BC0 (sub_1C0025BC0.c)
 *     sub_1C0025BE4 @ 0x1C0025BE4 (sub_1C0025BE4.c)
 *     sub_1C0032AE8 @ 0x1C0032AE8 (sub_1C0032AE8.c)
 *     DoScreenSave @ 0x1C0034BE8 (DoScreenSave.c)
 *     sub_1C0035018 @ 0x1C0035018 (sub_1C0035018.c)
 *     sub_1C003663C @ 0x1C003663C (sub_1C003663C.c)
 *     sub_1C00378CC @ 0x1C00378CC (sub_1C00378CC.c)
 *     sub_1C0037944 @ 0x1C0037944 (sub_1C0037944.c)
 *     sub_1C00379CC @ 0x1C00379CC (sub_1C00379CC.c)
 *     sub_1C0037A30 @ 0x1C0037A30 (sub_1C0037A30.c)
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 *     sub_1C003DB10 @ 0x1C003DB10 (sub_1C003DB10.c)
 *     sub_1C003EF50 @ 0x1C003EF50 (sub_1C003EF50.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C0057C30 @ 0x1C0057C30 (sub_1C0057C30.c)
 *     sub_1C0059CC4 @ 0x1C0059CC4 (sub_1C0059CC4.c)
 *     sub_1C00AA3D8 @ 0x1C00AA3D8 (sub_1C00AA3D8.c)
 */

__int64 __fastcall sub_1C0039770(char *Context, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  int v10; // esi
  __int64 v11; // rax
  char v12; // cl
  ULONG v13; // eax
  struct _DEVICE_OBJECT *v14; // rcx
  __int64 *v15; // rbx
  __int64 v16; // rcx
  int (__fastcall *v17)(_QWORD, __int64, _DWORD *); // rax
  PIO_WORKITEM WorkItem; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // r9
  int *v22; // rax
  int v23; // ecx
  void **v24; // rbx
  __int64 v25; // rdx
  NTSTATUS v26; // r8d
  int v27; // r8d
  void *v28; // rcx
  KIRQL v29; // bl
  ULONG Size[2]; // [rsp+20h] [rbp-60h]
  PVOID Data; // [rsp+28h] [rbp-58h]
  PULONG RequiredSize; // [rsp+30h] [rbp-50h]
  PDEVPROPTYPE Type; // [rsp+38h] [rbp-48h]
  _BYTE v34[4]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v35; // [rsp+54h] [rbp-2Ch] BYREF
  ULONG v36; // [rsp+58h] [rbp-28h] BYREF
  ULONG v37; // [rsp+5Ch] [rbp-24h] BYREF
  _DWORD v38[4]; // [rsp+60h] [rbp-20h] BYREF
  int v39; // [rsp+70h] [rbp-10h]
  int v40; // [rsp+74h] [rbp-Ch]

  v35 = 0;
  v36 = 0;
  v37 = 0;
  v34[0] = 0;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 16LL, &unk_1C0083210, Context, a2);
  }
  v4 = *((_DWORD *)Context + 22);
  v5 = 8LL;
  *((_DWORD *)Context + 22) = 1;
  if ( v4 != 2 )
  {
    if ( v4 != 8 )
    {
      if ( (Context[111] & 0x20) != 0 )
        KeSetEvent((PRKEVENT)(Context + 6040), 0, 0);
      return 0LL;
    }
    Context[110] |= 0x80u;
  }
  v7 = *(_QWORD *)(a2 + 184);
  v8 = *(_QWORD *)(v7 + 8);
  v9 = *(_QWORD *)(v7 + 16);
  v10 = sub_1C00AA3D8(
          (int)Context + 344,
          *((_QWORD *)Context + 71),
          *((_DWORD *)Context + 204),
          *((_DWORD *)Context + 205),
          (Context[109] & 4) != 0,
          (unsigned __int8)Context[110] >> 7);
  if ( v10 >= 0 )
  {
    if ( !*((_QWORD *)Context + 71) )
    {
      v10 = -1073741810;
      goto LABEL_14;
    }
    v10 = sub_1C0035018((__int64)Context, v8, v9);
    if ( v10 < 0 )
      goto LABEL_14;
    if ( *((_DWORD *)Context + 88) == 5 )
    {
      if ( IoGetDevicePropertyData(*((PDEVICE_OBJECT *)Context + 4), &PropertyKey, 0, 0, 4u, &v35, &v36, &v37) >= 0 )
      {
        *((_DWORD *)Context + 206) = HIWORD(v35);
        *((_DWORD *)Context + 207) = (unsigned __int16)v35;
      }
      if ( IoGetDevicePropertyData(*((PDEVICE_OBJECT *)Context + 4), &stru_1C0083310, 0, 0, 1u, v34, &v36, &v37) >= 0 )
      {
        if ( byte_1C0093ADE || (v12 = 0, v34[0]) )
          v12 = 2;
        Context[112] = v12 | (Context[112] ^ (Context[112] ^ v34[0]) & 1) & 0xFD;
      }
      v13 = (*((__int64 (__fastcall **)(_QWORD, __int64, char *, _QWORD, int))Context + 90))(
              *((_QWORD *)Context + 84),
              4LL,
              Context + 4672,
              0LL,
              64);
      v14 = (struct _DEVICE_OBJECT *)*((_QWORD *)Context + 3);
      v36 = v13;
      sub_1C0057C30(v14, (__int64)(Context + 5832));
    }
    *((_DWORD *)Context + 486) = 64;
    KeInitializeSpinLock((PKSPIN_LOCK)Context + 246);
    *((_QWORD *)Context + 247) = 0LL;
    *((_QWORD *)Context + 245) = Context + 1952;
    *((_QWORD *)Context + 244) = Context + 1952;
    *((_DWORD *)Context + 496) = 0;
    *((_DWORD *)Context + 500) = 1;
    if ( !_interlockedbittestandset((volatile signed __int32 *)Context + 1480, 0) )
      *((_DWORD *)Context + 1481) = dword_1C0093AE0;
    v15 = (__int64 *)(Context + 5304);
    sub_1C0020F44(*((PDEVICE_OBJECT *)Context + 1), (_QWORD *)Context + 663);
    sub_1C0059CC4(*((PDEVICE_OBJECT *)Context + 1));
    v10 = sub_1C003A010((_DWORD)Context);
    if ( v10 < 0 )
      goto LABEL_14;
    if ( Context[110] < 0 )
    {
      v29 = KfRaiseIrql(2u);
      sub_1C003DB10(Context);
      KeLowerIrql(v29);
    }
    else
    {
      v16 = *v15;
      if ( *v15 )
      {
        if ( *((_QWORD *)Context + 612) )
        {
          v38[0] = 0;
          v17 = *(int (__fastcall **)(_QWORD, __int64, _DWORD *))(v16 + 40);
          if ( v17 )
          {
            if ( v17(*(_QWORD *)(v16 + 8), 1LL, v38) >= 0 && (unsigned int)(v38[0] - 4) <= 1 )
            {
              *(_DWORD *)(*((_QWORD *)Context + 612) + 20LL) |= 0x80u;
              WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 1));
              *((_QWORD *)Context + 700) = WorkItem;
              if ( !WorkItem )
              {
                v10 = -1073741670;
                goto LABEL_14;
              }
            }
          }
        }
      }
      v10 = DoScreenSave((__int64)Context);
      if ( v10 >= 0 )
      {
        if ( byte_1C0093BE8 )
        {
          v21 = (_QWORD *)*((_QWORD *)Context + 612);
          if ( v21 )
          {
            v22 = (int *)v21[1];
            v23 = *v22;
            if ( *v22 == 1 )
            {
              v5 = (__int64)(v22 + 6);
            }
            else if ( v23 == 2 || v23 == 3 )
            {
              v5 = (__int64)(v22 + 8);
            }
            if ( (byte_1C0093A02 & 0x10) != 0 )
            {
              LODWORD(Type) = *(_DWORD *)v5;
              LODWORD(RequiredSize) = *((_DWORD *)Context + 1228);
              LODWORD(Data) = ((unsigned __int8)Context[107] >> 4) & 1;
              Size[0] = *((_DWORD *)Context + 14);
              sub_1C0032AE8(
                (unsigned int)Data,
                v19,
                v20,
                *v21,
                *(_QWORD *)Size,
                Data,
                RequiredSize,
                Type,
                ((unsigned __int8)Context[110] >> 6) & 1);
            }
          }
        }
        sub_1C003663C((__int64)Context);
        sub_1C00378CC((__int64)Context);
        if ( (Context[111] & 1) != 0 )
          sub_1C0037944((__int64)Context);
        sub_1C0037A30((__int64)Context);
        if ( byte_1C0093ADD != 1 || !(unsigned int)sub_1C0007798((__int64)Context, 12) )
          goto LABEL_77;
        v24 = (void **)(Context + 4904);
        v26 = PoRegisterPowerSettingCallback(
                *((PDEVICE_OBJECT *)Context + 1),
                &SettingGuid,
                Callback,
                Context,
                (PVOID *)Context + 613);
        if ( v26 < 0 )
        {
          if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
            && (HIDWORD(off_1C0093070->Timer) & 2) != 0
            && BYTE1(off_1C0093070->Timer) >= 4u )
          {
            sub_1C003EF50(off_1C0093070->AttachedDevice, 18LL, &unk_1C0083210, Context, v26);
          }
        }
        else
        {
          LOBYTE(v25) = 1;
          v27 = PoRegisterCoalescingCallback(sub_1C003AB20, v25, Context + 4920, Context);
          if ( v27 >= 0 )
          {
            Context[108] &= 0xFCu;
            v38[2] = 1;
            v38[3] = 16;
            v39 = sub_1C0025BC0((__int64)Context);
            v40 = sub_1C0025BE4(v39);
            sub_1C001A364((__int64)(Context + 336));
            goto LABEL_74;
          }
          if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
            && (HIDWORD(off_1C0093070->Timer) & 2) != 0
            && BYTE1(off_1C0093070->Timer) >= 4u )
          {
            sub_1C003EF50(off_1C0093070->AttachedDevice, 17LL, &unk_1C0083210, Context, v27);
          }
          v28 = *v24;
          *((_QWORD *)Context + 615) = 0LL;
          PoUnregisterPowerSettingCallback(v28);
        }
        *v24 = 0LL;
LABEL_74:
        v10 = PoRegisterPowerSettingCallback(
                *((PDEVICE_OBJECT *)Context + 1),
                &stru_1C0083240,
                Callback,
                Context,
                (PVOID *)Context + 749);
        if ( v10 < 0 )
        {
          *((_QWORD *)Context + 749) = 0LL;
          v10 = 0;
        }
        else
        {
          Context[111] &= ~8u;
        }
LABEL_77:
        if ( (unsigned int)sub_1C0007798((__int64)Context, 14) )
        {
          PoRegisterPowerSettingCallback(
            *((PDEVICE_OBJECT *)Context + 1),
            &stru_1C00832B0,
            Callback,
            Context,
            (PVOID *)Context + 616);
          v10 = IoRegisterDeviceInterface(
                  *((PDEVICE_OBJECT *)Context + 4),
                  &stru_1C00832C0,
                  0LL,
                  (PUNICODE_STRING)(Context + 4936));
          if ( v10 >= 0 )
          {
            Context[108] |= 0x10u;
            IoSetDeviceInterfaceState((PUNICODE_STRING)(Context + 4936), 1u);
          }
        }
        if ( !*((_QWORD *)Context + 612) && Context[4306] )
          sub_1C00379CC((__int64)Context);
      }
    }
  }
LABEL_14:
  Context[110] &= ~0x80u;
  v11 = *((_QWORD *)Context + 612);
  if ( v11 && (*(_DWORD *)(v11 + 20) & 4) != 0 )
  {
    sub_1C0008BB4((__int64)Context, 0LL, 0LL);
    *(_DWORD *)(*((_QWORD *)Context + 612) + 20LL) &= ~4u;
  }
  *((_QWORD *)Context + 697) = 0LL;
  *((_DWORD *)Context + 1396) = 0;
  if ( v10 < 0 )
    *((_DWORD *)Context + 22) = 2;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 19LL, &unk_1C0083210, Context, a2, v10);
  }
  if ( (Context[111] & 0x20) != 0 )
    KeSetEvent((PRKEVENT)(Context + 6040), 0, 0);
  return (unsigned int)v10;
}
