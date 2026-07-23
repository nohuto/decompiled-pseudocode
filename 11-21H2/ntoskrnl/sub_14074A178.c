/*
 * XREFs of sub_14074A178 @ 0x14074A178
 * Callers:
 *     sub_14067B998 @ 0x14067B998 (sub_14067B998.c)
 *     sub_1406DE800 @ 0x1406DE800 (sub_1406DE800.c)
 *     sub_140B110B4 @ 0x140B110B4 (sub_140B110B4.c)
 * Callees:
 *     sub_14025DD20 @ 0x14025DD20 (sub_14025DD20.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402D1EB4 @ 0x1402D1EB4 (sub_1402D1EB4.c)
 *     sub_1402D1F98 @ 0x1402D1F98 (sub_1402D1F98.c)
 *     sub_1402D26C0 @ 0x1402D26C0 (sub_1402D26C0.c)
 *     sub_1402D2774 @ 0x1402D2774 (sub_1402D2774.c)
 *     sub_1402D8724 @ 0x1402D8724 (sub_1402D8724.c)
 *     sub_1402D8A7C @ 0x1402D8A7C (sub_1402D8A7C.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     sub_1406797C8 @ 0x1406797C8 (sub_1406797C8.c)
 *     sub_14067B1DC @ 0x14067B1DC (sub_14067B1DC.c)
 *     sub_14067B694 @ 0x14067B694 (sub_14067B694.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_14070FD80 @ 0x14070FD80 (sub_14070FD80.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407333B0 @ 0x1407333B0 (sub_1407333B0.c)
 *     sub_140747D40 @ 0x140747D40 (sub_140747D40.c)
 *     sub_140747D68 @ 0x140747D68 (sub_140747D68.c)
 *     sub_140747DDC @ 0x140747DDC (sub_140747DDC.c)
 *     sub_140748300 @ 0x140748300 (sub_140748300.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_14075ECF4 @ 0x14075ECF4 (sub_14075ECF4.c)
 *     sub_14075F194 @ 0x14075F194 (sub_14075F194.c)
 *     MmLoadSystemImage @ 0x14075FC00 (MmLoadSystemImage.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     sub_1407C9930 @ 0x1407C9930 (sub_1407C9930.c)
 *     sub_140862BA0 @ 0x140862BA0 (sub_140862BA0.c)
 *     sub_140933EEC @ 0x140933EEC (sub_140933EEC.c)
 *     sub_140934AB4 @ 0x140934AB4 (sub_140934AB4.c)
 *     sub_140934EA4 @ 0x140934EA4 (sub_140934EA4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14074A178(HANDLE Handle, char a2, unsigned __int8 a3, int *a4)
{
  ULONG_PTR v4; // rsi
  PVOID v6; // rbx
  wchar_t *Buffer; // r12
  int v8; // eax
  int inserted; // r14d
  char v10; // r15
  wchar_t *v11; // rdi
  __int64 v12; // rcx
  wchar_t *v13; // rax
  int SystemImage; // eax
  __int64 v16; // rdx
  WORD MinorImageVersion; // di
  _QWORD *v18; // r14
  PIMAGE_NT_HEADERS v19; // rdx
  char *v20; // rax
  KPROCESSOR_MODE v21; // r9
  NTSTATUS v22; // eax
  struct _DRIVER_OBJECT *v23; // r15
  __int64 v24; // rax
  unsigned __int16 *v25; // rdi
  ULONG_PTR v26; // r9
  unsigned int MaximumLength; // ebx
  PDRIVER_EXTENSION DriverExtension; // rax
  __int64 v29; // rdx
  unsigned int i; // eax
  PVOID DriverSection; // rdi
  struct _KTHREAD *v32; // rbx
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  char v35; // [rsp+50h] [rbp-B0h]
  bool v37; // [rsp+55h] [rbp-ABh] BYREF
  char v38; // [rsp+56h] [rbp-AAh]
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v42; // [rsp+78h] [rbp-88h] BYREF
  PVOID v43; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handlea; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v45; // [rsp+98h] [rbp-68h] BYREF
  PVOID BaseOfImage; // [rsp+A8h] [rbp-58h] BYREF
  int v47; // [rsp+B0h] [rbp-50h] BYREF
  PVOID Pool2; // [rsp+B8h] [rbp-48h]
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  int *v51; // [rsp+D8h] [rbp-28h]
  _DWORD v52[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-18h]
  UNICODE_STRING *v54; // [rsp+F0h] [rbp-10h]
  int v55; // [rsp+F8h] [rbp-8h]
  int v56; // [rsp+FCh] [rbp-4h]
  __int128 v57; // [rsp+100h] [rbp+0h]
  _WORD v58[40]; // [rsp+110h] [rbp+10h] BYREF

  v4 = 0LL;
  v51 = a4;
  *a4 = 0;
  v38 = a2;
  LODWORD(v40) = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  v6 = 0LL;
  *(_QWORD *)&v42.Length = 0LL;
  Buffer = 0LL;
  v42.Buffer = 0LL;
  v52[1] = 0;
  v56 = 0;
  BugCheckParameter2 = 0LL;
  *(_QWORD *)&v45.Length = 0LL;
  P = 0LL;
  BaseOfImage = 0LL;
  Handlea = 0LL;
  v45.Buffer = 0LL;
  Destination.Buffer = 0LL;
  v47 = 0;
  v37 = 0;
  v8 = sub_1407333B0(Handle, 0, 0LL, 0, &v40);
  if ( v8 != -2147483643 && v8 != -1073741789 )
  {
    inserted = -1073741472;
LABEL_4:
    v10 = 0;
    goto LABEL_51;
  }
  if ( (int)v40 + 8 < (unsigned int)v40 )
  {
    inserted = -1073741675;
    goto LABEL_4;
  }
  Pool2 = (PVOID)ExAllocatePool2(64LL, (unsigned int)(v40 + 8), 538996553LL);
  v11 = (wchar_t *)Pool2;
  if ( !Pool2 )
  {
    v6 = 0LL;
LABEL_8:
    inserted = -1073741670;
    v10 = 0;
    goto LABEL_51;
  }
  inserted = sub_1407333B0(Handle, 0, (unsigned __int64)Pool2, v40, &v40);
  if ( inserted < 0 )
    goto LABEL_19;
  v12 = v11[6];
  Destination.Length = v12;
  Destination.MaximumLength = v12 + 8;
  Destination.Buffer = v11 + 8;
  v13 = (wchar_t *)ExAllocatePool2(256LL, v12 + 2, 538996553LL);
  v42.Buffer = v13;
  Buffer = v13;
  if ( !v13 )
  {
    Destination.Buffer = 0LL;
    v6 = v11;
    goto LABEL_8;
  }
  v42.Length = Destination.Length;
  v42.MaximumLength = Destination.Length + 2;
  memmove(v13, Destination.Buffer, Destination.Length);
  Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
  RtlAppendUnicodeToString(&Destination, L".SYS");
  sub_1402D26C0();
  sub_1402D2774(&stru_140014FC0, &v42.Length);
  if ( v38 )
  {
    if ( (_DWORD)InitSafeBootMode )
    {
      LODWORD(v43) = 0;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"Group");
      memset(v58, 0, 0x4CuLL);
      LODWORD(Object) = 76;
      if ( (int)sub_1407C9930(Handle, (size_t)Object, (__int64)&v43) < 0
        || (DestinationString.Length = v58[4] - 2,
            DestinationString.MaximumLength = v58[4] - 2,
            DestinationString.Buffer = &v58[6],
            !(unsigned __int8)sub_140934EA4(&DestinationString)) )
      {
        if ( !(unsigned __int8)sub_140934EA4(&Destination) )
        {
          sub_140748300(&Destination, 0);
          DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Destination, &DestinationString);
          sub_1402D26C0();
          ObCloseHandle(Handle, 0);
          return 3221226335LL;
        }
      }
    }
  }
  inserted = sub_14067B1DC(&v42, Handle, &Destination);
  if ( inserted < 0 )
  {
    Destination.Buffer = 0LL;
LABEL_19:
    v10 = 0;
    goto LABEL_20;
  }
  inserted = sub_14067B694(Handle, &v45);
  if ( inserted < 0 )
    goto LABEL_19;
  v52[0] = 48;
  v53 = 0LL;
  v54 = &v45;
  v55 = dword_140C0C628 != 0 ? 592 : 528;
  v57 = 0LL;
  ExAcquireResourceExclusiveLite(&stru_140C46DA0, 1u);
  SystemImage = MmLoadSystemImage(
                  (unsigned int)&Destination,
                  0,
                  0,
                  0,
                  (__int64)&BugCheckParameter2,
                  (__int64)&BaseOfImage);
  inserted = SystemImage;
  if ( SystemImage >= 0 )
  {
    MinorImageVersion = RtlImageNtHeader(BaseOfImage)->OptionalHeader.MinorImageVersion;
    v35 = MinorImageVersion;
    inserted = sub_1406797C8((int)&v42, Handle, BaseOfImage, a3, &v47, &v37);
    if ( inserted < 0 )
    {
      MmUnloadSystemImage(BugCheckParameter2);
      ExReleaseResourceLite(&stru_140C46DA0);
LABEL_37:
      sub_140748300(&Destination, 0);
      Buffer = v42.Buffer;
      v10 = MinorImageVersion;
      goto LABEL_20;
    }
    inserted = sub_14072B3B0(
                 *((_BYTE *)KeGetCurrentThread() + 562),
                 IoDriverObjectType,
                 (int)v52,
                 0,
                 (__int64)Objecta,
                 416,
                 0,
                 0,
                 &P,
                 0LL);
    if ( inserted >= 0 )
    {
      v18 = P;
      memset(P, 0, 0x1A0uLL);
      v18[6] = v18 + 42;
      v18[42] = v18;
      LODWORD(v43) = 28;
      memset64(v18 + 14, (unsigned __int64)sub_14023EE50, 0x1CuLL);
      *(_DWORD *)v18 = 22020100;
      v19 = RtlImageNtHeader(BaseOfImage);
      v20 = (char *)BaseOfImage + v19->OptionalHeader.AddressOfEntryPoint;
      MinorImageVersion = v19->OptionalHeader.MinorImageVersion;
      v35 = MinorImageVersion;
      if ( !_bittest16((const signed __int16 *)&v19->OptionalHeader.DllCharacteristics, 0xDu) )
        *((_DWORD *)v18 + 4) |= 2u;
      v18[11] = v20;
      v18[5] = BugCheckParameter2;
      v18[3] = BaseOfImage;
      *((_DWORD *)v18 + 8) = v19->OptionalHeader.SizeOfImage;
      inserted = ObInsertObject(v18, 0LL, 1u, 0, 0LL, &Handlea);
      ExReleaseResourceLite(&stru_140C46DA0);
      if ( inserted < 0 )
        goto LABEL_37;
      v21 = *((_BYTE *)KeGetCurrentThread() + 562);
      P = 0LL;
      v22 = ObReferenceObjectByHandle(Handlea, 0, IoDriverObjectType, v21, &P, 0LL);
      if ( v22 )
        KeBugCheckEx(0x11Fu, (ULONG_PTR)Handlea, v22, (ULONG_PTR)P, 0LL);
      ZwClose(Handlea);
      v23 = (struct _DRIVER_OBJECT *)P;
      *((_QWORD *)P + 9) = &stru_140D3CD08;
      v24 = ExAllocatePool2(64LL, v45.MaximumLength, 538996553LL);
      v23->DriverName.Buffer = (wchar_t *)v24;
      if ( v24 )
      {
        v23->DriverName.MaximumLength = v45.MaximumLength;
        v23->DriverName.Length = v45.Length;
        memmove(v23->DriverName.Buffer, v45.Buffer, v45.MaximumLength);
      }
      v25 = (unsigned __int16 *)ExAllocatePool2(64LL, 4096LL, 538996553LL);
      if ( !v25 )
      {
        ObMakeTemporaryObject(v23);
        ObfDereferenceObject(v23);
        Buffer = v42.Buffer;
        inserted = -1073741670;
        v10 = v35;
        goto LABEL_50;
      }
      inserted = sub_14070FD80(Handle, 1, v25, 0x1000u, (unsigned __int64)&v43);
      if ( inserted >= 0 )
      {
        Buffer = v42.Buffer;
        if ( v42.Buffer )
        {
          MaximumLength = v42.MaximumLength;
          v23->DriverExtension->ServiceKeyName.Buffer = (wchar_t *)ExAllocatePool2(64LL, v42.MaximumLength, 538996553LL);
          DriverExtension = v23->DriverExtension;
          if ( DriverExtension->ServiceKeyName.Buffer )
          {
            DriverExtension->ServiceKeyName.MaximumLength = MaximumLength;
            v23->DriverExtension->ServiceKeyName.Length = v42.Length;
            memmove(v23->DriverExtension->ServiceKeyName.Buffer, Buffer, MaximumLength);
          }
        }
        if ( (v47 & 1) != 0 )
          v23->Flags |= 0x100u;
        if ( v37 )
          v23->Flags |= 0x1000u;
        sub_1402D2774(&stru_140014FB0, v25);
        sub_1402D8724((__int64)v23);
        inserted = sub_140747DDC((__int64)v23, (__int64)v25);
        if ( inserted >= 0 )
        {
          sub_1402D8A7C(v23);
          sub_14075ECF4(v23, v29, &Destination);
        }
        sub_1402D1EB4(&stru_140014FE0, v25, inserted);
        *v51 = inserted;
        if ( inserted < 0 )
          inserted = -1073740955;
        for ( i = 0; i <= 0x1B; ++i )
        {
          if ( !v23->MajorFunction[i] )
            v23->MajorFunction[i] = (PDRIVER_DISPATCH)sub_14023EE50;
        }
        ExFreePoolWithTag(v25, 0);
        if ( inserted >= 0 )
        {
          sub_140748300(&Destination, 1);
          DriverSection = v23->DriverSection;
          v32 = sub_1406F5B50();
          sub_14075F194(DriverSection);
          sub_1406F5AF0((__int64)v32);
          sub_140747D40((__int64)v23);
          sub_140747D68(&v23->DriverName.Length);
          v10 = v35;
          goto LABEL_21;
        }
        ObMakeTemporaryObject(v23);
        ObfDereferenceObject(v23);
        goto LABEL_41;
      }
      ObMakeTemporaryObject(v23);
      ObfDereferenceObject(v23);
      ExFreePoolWithTag(v25, 0);
    }
    else
    {
      MmUnloadSystemImage(BugCheckParameter2);
      ExReleaseResourceLite(&stru_140C46DA0);
      sub_140748300(&Destination, 0);
    }
    Buffer = v42.Buffer;
LABEL_41:
    v10 = v35;
    goto LABEL_20;
  }
  if ( SystemImage == -1073741554 )
  {
    inserted = ObOpenObjectByName((__int64)v52, (__int64)IoDriverObjectType, 0, 0LL, 0, 0LL, (__int64)&Handlea);
    if ( inserted < 0 )
    {
      ExReleaseResourceLite(&stru_140C46DA0);
      sub_140748300(&Destination, 0);
      v10 = 0;
      if ( inserted == -1073741772 )
        inserted = -1073740914;
      goto LABEL_20;
    }
    v43 = 0LL;
    inserted = ObReferenceObjectByHandle(Handlea, 0, IoDriverObjectType, 0, &v43, 0LL);
    ZwClose(Handlea);
    if ( inserted < 0 )
    {
      ExReleaseResourceLite(&stru_140C46DA0);
      sub_140748300(&Destination, 0);
      goto LABEL_19;
    }
    inserted = sub_14025DD20((__int64)v43);
    ObfDereferenceObject(v43);
  }
  else if ( (unsigned __int8)sub_140933EEC((unsigned int)SystemImage, &Destination) == 1 )
  {
    inserted = (a3 != 0) - 1073740949;
    sub_140934AB4(&Destination, v16, (unsigned int)inserted);
  }
  ExReleaseResourceLite(&stru_140C46DA0);
  sub_140748300(&Destination, 0);
  v10 = 0;
  if ( inserted >= 0 )
    goto LABEL_21;
LABEL_20:
  if ( inserted == -1073741554 )
  {
LABEL_21:
    v6 = Pool2;
    goto LABEL_51;
  }
LABEL_50:
  v6 = Pool2;
LABEL_51:
  sub_1402D26C0();
  if ( inserted < 0 && inserted != -1073741218 && inserted != -1073740948 )
  {
    P = 0LL;
    if ( inserted != -1073741554 )
    {
      sub_140862BA0(Handle);
      if ( inserted != -1073740955 && sub_14067B838(Handle, L"ErrorControl", 0, &P) >= 0 )
      {
        if ( *((_DWORD *)P + 3)
          && (_BYTE)dword_140D3B0D4 == 1
          && (unsigned int)(*(_DWORD *)((char *)P + *((unsigned int *)P + 2)) - 2) <= 1 )
        {
          if ( ((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) != 0 )
            v26 = *(_QWORD *)(((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) + 8);
          else
            v26 = 0LL;
          if ( ((unsigned __int64)&v45 & -(__int64)(v45.Buffer != 0LL)) != 0 )
            v4 = *(_QWORD *)(((unsigned __int64)&v45 & -(__int64)(v45.Buffer != 0LL)) + 8);
          KeBugCheckEx(0x5Au, 1uLL, v4, v26, inserted);
        }
        ExFreePoolWithTag(P, 0);
      }
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( Buffer )
  {
    sub_1402D1F98(&stru_140014FF0, &v42.Length, inserted, (__int64)&v45, v10);
    ExFreePoolWithTag(Buffer, 0);
  }
  if ( v45.Buffer )
    ExFreePoolWithTag(v45.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(Handle, 0);
  return (unsigned int)inserted;
}
