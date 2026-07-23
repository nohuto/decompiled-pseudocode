/*
 * XREFs of sub_140B0046C @ 0x140B0046C
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402D21B8 @ 0x1402D21B8 (sub_1402D21B8.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403C09F8 @ 0x1403C09F8 (sub_1403C09F8.c)
 *     sub_1403D2D2C @ 0x1403D2D2C (sub_1403D2D2C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     sub_14067A8B0 @ 0x14067A8B0 (sub_14067A8B0.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     sub_1406CFCE0 @ 0x1406CFCE0 (sub_1406CFCE0.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     sub_140767220 @ 0x140767220 (sub_140767220.c)
 *     sub_140768AF8 @ 0x140768AF8 (sub_140768AF8.c)
 *     sub_14076ACE4 @ 0x14076ACE4 (sub_14076ACE4.c)
 *     sub_14076C4E0 @ 0x14076C4E0 (sub_14076C4E0.c)
 *     sub_14076C91C @ 0x14076C91C (sub_14076C91C.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140811B60 @ 0x140811B60 (sub_140811B60.c)
 *     sub_140825E70 @ 0x140825E70 (sub_140825E70.c)
 *     sub_140827FE8 @ 0x140827FE8 (sub_140827FE8.c)
 *     sub_14082EF44 @ 0x14082EF44 (sub_14082EF44.c)
 *     sub_140838F24 @ 0x140838F24 (sub_140838F24.c)
 *     sub_140838FBC @ 0x140838FBC (sub_140838FBC.c)
 *     sub_1408390A0 @ 0x1408390A0 (sub_1408390A0.c)
 *     sub_140839118 @ 0x140839118 (sub_140839118.c)
 *     sub_140839180 @ 0x140839180 (sub_140839180.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     sub_14085C93C @ 0x14085C93C (sub_14085C93C.c)
 *     sub_140862728 @ 0x140862728 (sub_140862728.c)
 *     sub_140863DD8 @ 0x140863DD8 (sub_140863DD8.c)
 *     sub_140865354 @ 0x140865354 (sub_140865354.c)
 *     IoDeleteDriver @ 0x140936380 (IoDeleteDriver.c)
 *     sub_140940408 @ 0x140940408 (sub_140940408.c)
 *     sub_140947068 @ 0x140947068 (sub_140947068.c)
 *     sub_140949450 @ 0x140949450 (sub_140949450.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AF7DC8 @ 0x140AF7DC8 (sub_140AF7DC8.c)
 *     sub_140B010DC @ 0x140B010DC (sub_140B010DC.c)
 *     sub_140B01758 @ 0x140B01758 (sub_140B01758.c)
 *     sub_140B0EC60 @ 0x140B0EC60 (sub_140B0EC60.c)
 *     sub_140B0ED44 @ 0x140B0ED44 (sub_140B0ED44.c)
 *     sub_140B0F0F4 @ 0x140B0F0F4 (sub_140B0F0F4.c)
 *     sub_140B0F180 @ 0x140B0F180 (sub_140B0F180.c)
 *     sub_140B10490 @ 0x140B10490 (sub_140B10490.c)
 *     sub_140B105C4 @ 0x140B105C4 (sub_140B105C4.c)
 *     sub_140B107D8 @ 0x140B107D8 (sub_140B107D8.c)
 *     sub_140B10A4C @ 0x140B10A4C (sub_140B10A4C.c)
 *     sub_140B1ADD8 @ 0x140B1ADD8 (sub_140B1ADD8.c)
 *     sub_140B1B1D0 @ 0x140B1B1D0 (sub_140B1B1D0.c)
 *     sub_140B1BA48 @ 0x140B1BA48 (sub_140B1BA48.c)
 *     sub_140B22134 @ 0x140B22134 (sub_140B22134.c)
 *     sub_140B23270 @ 0x140B23270 (sub_140B23270.c)
 *     sub_140B235FC @ 0x140B235FC (sub_140B235FC.c)
 *     sub_140B28AB0 @ 0x140B28AB0 (sub_140B28AB0.c)
 *     sub_140B2A970 @ 0x140B2A970 (sub_140B2A970.c)
 *     sub_140B2B1C0 @ 0x140B2B1C0 (sub_140B2B1C0.c)
 *     ArbInitializeOsInaccessibleRange @ 0x140B2D294 (ArbInitializeOsInaccessibleRange.c)
 *     sub_140B2E474 @ 0x140B2E474 (sub_140B2E474.c)
 *     sub_140B2EF10 @ 0x140B2EF10 (sub_140B2EF10.c)
 *     sub_140B2F500 @ 0x140B2F500 (sub_140B2F500.c)
 *     sub_140B30110 @ 0x140B30110 (sub_140B30110.c)
 *     sub_140B30A8C @ 0x140B30A8C (sub_140B30A8C.c)
 *     sub_140B30F30 @ 0x140B30F30 (sub_140B30F30.c)
 *     sub_140B509E0 @ 0x140B509E0 (sub_140B509E0.c)
 */

__int64 __fastcall sub_140B0046C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // edx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  void *v16; // rbx
  struct _DEVICE_OBJECT *v17; // rsi
  PDEVICE_OBJECT v18; // rcx
  ULONGLONG v19; // rax
  __int64 v20; // rdx
  REGHANDLE v21; // rcx
  unsigned int *v22; // rbx
  unsigned int *v23; // rdi
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  PVOID v30; // [rsp+80h] [rbp-88h] BYREF
  void *v31; // [rsp+88h] [rbp-80h] BYREF
  PVOID v32; // [rsp+90h] [rbp-78h] BYREF
  PVOID v33; // [rsp+98h] [rbp-70h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING v36; // [rsp+B8h] [rbp-50h] BYREF
  ULONG Disposition; // [rsp+C8h] [rbp-40h] BYREF
  int v38; // [rsp+CCh] [rbp-3Ch] BYREF
  UNICODE_STRING GuidString; // [rsp+D0h] [rbp-38h] BYREF
  UNICODE_STRING v40; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-18h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+148h] [rbp+40h] BYREF
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+168h] [rbp+60h]
  __int64 v46; // [rsp+170h] [rbp+68h]
  __int128 *v47; // [rsp+178h] [rbp+70h]
  __int64 v48; // [rsp+180h] [rbp+78h]
  PVOID *v49; // [rsp+188h] [rbp+80h]
  __int64 v50; // [rsp+190h] [rbp+88h]
  PVOID *v51; // [rsp+198h] [rbp+90h]
  __int64 v52; // [rsp+1A0h] [rbp+98h]
  void **v53; // [rsp+1A8h] [rbp+A0h]
  __int64 v54; // [rsp+1B0h] [rbp+A8h]
  PVOID *v55; // [rsp+1B8h] [rbp+B0h]
  __int64 v56; // [rsp+1C0h] [rbp+B8h]
  PVOID *p_P; // [rsp+1C8h] [rbp+C0h]
  __int64 v58; // [rsp+1D0h] [rbp+C8h]
  __int64 *v59; // [rsp+1D8h] [rbp+D0h]
  __int64 v60; // [rsp+1E0h] [rbp+D8h]
  UNICODE_STRING *v61; // [rsp+1E8h] [rbp+E0h]
  __int64 v62; // [rsp+1F0h] [rbp+E8h]

  *(_QWORD *)&v34 = 0LL;
  Handle = 0LL;
  v31 = 0LL;
  *(_DWORD *)(&v27.MaximumLength + 1) = 0;
  DeviceObject = 0LL;
  Disposition = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v30 = 0LL;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  KeyHandle = 0LL;
  *(_DWORD *)(&v36.MaximumLength + 1) = 0;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  LOBYTE(v24) = 0;
  DestinationString = 0LL;
  v40 = 0LL;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return (unsigned int)-1073741584;
    result = sub_140B2F500();
    if ( (int)result >= 0 )
    {
      sub_140827FE8(&dword_140C06550);
      sub_140827FE8(&dword_140C039C8);
      sub_1406D2264((char *)&dword_140C03990, 0LL, 0LL);
      result = sub_140B010DC(1LL);
      if ( (int)result >= 0 )
      {
        v19 = *(_QWORD *)(a1 + 240) + 136LL;
        *(_QWORD *)&UserData.Size = 80LL;
        UserData.Ptr = v19;
        sub_1402D21B8(&stru_140011BE8, 1u, &UserData);
        if ( (unsigned int)dword_140C045E0 > 4 && sub_1402A2000((__int64)&dword_140C045E0, 0x400000000000LL) )
        {
          v20 = *(_QWORD *)(a1 + 240);
          DeviceObject = *(PDEVICE_OBJECT *)(v20 + 136);
          p_DeviceObject = &DeviceObject;
          v46 = 8LL;
          *(_QWORD *)&v34 = *(_QWORD *)(v20 + 144);
          v47 = &v34;
          v48 = 8LL;
          v33 = *(PVOID *)(v20 + 152);
          v49 = &v33;
          v50 = 8LL;
          v32 = *(PVOID *)(v20 + 160);
          v51 = &v32;
          v52 = 8LL;
          v31 = *(void **)(v20 + 184);
          v53 = &v31;
          v54 = 8LL;
          v30 = *(PVOID *)(v20 + 192);
          v55 = &v30;
          v56 = 8LL;
          P = *(PVOID *)(v20 + 168);
          p_P = &P;
          v58 = 8LL;
          v28 = *(_QWORD *)(v20 + 176);
          v59 = &v28;
          v60 = 8LL;
          *(_QWORD *)&v36.Length = *(_QWORD *)(v20 + 2496);
          v61 = &v36;
          v62 = 8LL;
          sub_14020A9C4((__int64)&dword_140C045E0, (unsigned __int8 *)&dword_14002BB04, 0LL, 0LL, 0xBu, &v44);
        }
        v21 = qword_140C04600;
        qword_140C04600 = 0LL;
        dword_140C045E0 = 0;
        EtwUnregister(v21);
        result = sub_140825E70(1u);
        if ( (int)result >= 0 )
        {
          result = sub_140B01758();
          if ( (int)result >= 0 )
          {
            v9 = sub_1403C09F8(1);
            if ( v9 < 0 )
              return (unsigned int)v9;
            *(_QWORD *)&v36.Length = 0LL;
            if ( (int)KsrGetFirmwareInformation(&v36) >= 0 )
            {
              byte_140C44618 = 1;
              result = sub_140B509E0();
              if ( (int)result < 0 )
                return result;
            }
            else
            {
              byte_140C44618 = 0;
            }
            sub_1402DCF44(*((PVOID *)qword_140C46278 + 4), 10, 0, 0LL, 0LL, 0LL, 0LL);
            LOWORD(stru_140C46280.Header.Lock) = 0;
            stru_140C46280.Header.WaitListHead.Blink = &stru_140C46280.Header.WaitListHead;
            v9 = 0;
            stru_140C46280.Header.WaitListHead.Flink = &stru_140C46280.Header.WaitListHead;
            stru_140C46280.Header.Size = 6;
            stru_140C46280.Header.SignalState = 0;
            return (unsigned int)v9;
          }
        }
      }
    }
  }
  else
  {
    byte_140C46014 = 0;
    dword_140C54EB0 = 80;
    dword_140C54EB4 = 90;
    sub_140863DD8(a1, a2, (__int64)&dword_140C54EB0);
    byte_140C54EB8 = 0;
    ObjectAttributes.ObjectName = &stru_140D3CD08;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition) >= 0 )
    {
      if ( sub_14067B838(KeyHandle, L"OldSystemBiosDate", 0, &v30) >= 0 )
      {
        v22 = (unsigned int *)v30;
        if ( v30 )
        {
          if ( sub_14067B838(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v23 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v22 + v22[2]));
              RtlInitUnicodeString(&v40, (PCWSTR)((char *)v23 + v23[2]));
              sub_140947068((const void **)&DestinationString, (const void **)&v40, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v23, 0);
            }
          }
          ExFreePoolWithTag(v22, 0);
        }
      }
      ZwClose(KeyHandle);
    }
    qword_140C46008 = 0LL;
    qword_140C45FC8 = (__int64)&qword_140C45FC0;
    qword_140C45FC0 = (__int64)&qword_140C45FC0;
    dword_140C45FD0 = 0;
    qword_140C45FF8 = (__int64)&qword_140C45FF0;
    qword_140C45FF0 = (__int64)&qword_140C45FF0;
    qword_140C45FE0 = (__int64)&qword_140C45FD8;
    qword_140C45FD8 = (__int64)&qword_140C45FD8;
    byte_140C45FE8 = 5;
    byte_140C45FEA = 8;
    dword_140C45FEC = 0;
    dword_140C46000 = 0x7FFFFFFF;
    sub_140B30F30(a1);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x400) == 0 )
      sub_140B2E474(a1, 0LL);
    sub_140B107D8();
    LOWORD(stru_140C46BE0.Header.Lock) = 0;
    stru_140C46BE0.Header.WaitListHead.Blink = &stru_140C46BE0.Header.WaitListHead;
    stru_140C46BE0.Header.WaitListHead.Flink = &stru_140C46BE0.Header.WaitListHead;
    stru_140C46BE0.Header.Size = 6;
    stru_140C46BE0.Header.SignalState = 0;
    result = sub_140B10A4C();
    if ( (int)result >= 0 )
    {
      Semaphore.Header.Type = 5;
      Semaphore.Header.WaitListHead.Blink = &Semaphore.Header.WaitListHead;
      Semaphore.Header.WaitListHead.Flink = &Semaphore.Header.WaitListHead;
      v4 = &unk_140C45E20;
      Semaphore.Header.Size = 8;
      Semaphore.Header.SignalState = 1;
      Semaphore.Limit = 1;
      do
      {
        v4[1] = v4;
        *v4 = v4;
        v4 += 2;
      }
      while ( (__int64)v4 < (__int64)&stru_140C45F40 );
      sub_140AF7DC8(a1);
      qword_140C45DF8 = (__int64)sub_140AF8120;
      qword_140D68698 = 0LL;
      dword_140C097C8 = 1;
      ArbInitializeOsInaccessibleRange((unsigned int)dword_140C50720);
      v9 = sub_140838F24(v6, v5);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v9 = sub_140838FBC(v8, v7);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v9 = sub_1408390A0(v11, v10);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v9 = sub_140839118(v13, v12);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v9 = sub_140839180(v15, v14);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v9 = sub_140825E70(0);
      if ( v9 < 0 )
        return (unsigned int)v9;
      sub_140B0EC60();
      v9 = sub_140B1B1D0();
      if ( v9 < 0 )
        return (unsigned int)v9;
      v9 = sub_14078014C(*(__int64 *)&qword_140D00AC0, 4, (__int64)&v31);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v27.Buffer = L"Control\\Pnp";
      *(_DWORD *)&v27.Length = 1572886;
      if ( (int)sub_14067A8B0(&Handle, v31, &v27, 0xF003Fu, 0, 0LL) >= 0 )
      {
        if ( sub_14067B838(Handle, L"BootOptions", 0, &v32) >= 0 )
        {
          if ( *((_DWORD *)v32 + 1) == 4 && *((_DWORD *)v32 + 3) == 4 )
            dword_140C0C6C4 = *(_DWORD *)((char *)v32 + *((unsigned int *)v32 + 2));
          ExFreePoolWithTag(v32, 0);
        }
        if ( sub_14067B838(Handle, L"FindBestConfigurationTimeout", 0, &v33) >= 0 )
        {
          if ( *((_DWORD *)v33 + 1) == 4 && *((_DWORD *)v33 + 3) == 4 )
            dword_140C0C6C0 = *(_DWORD *)((char *)v33 + *((unsigned int *)v33 + 2));
          ExFreePoolWithTag(v33, 0);
        }
        LODWORD(v28) = 0;
        if ( (int)sub_1403D2D2C(Handle, (__int64)L"DmaGuardTestMode", &v28) >= 0 && (_DWORD)v28 == 1 )
          byte_140C450C8 = 1;
        qword_140C46BD0 = (__int64)sub_140811B60;
        qword_140C46BD8 = (__int64)Handle;
        *(_QWORD *)qword_140C46BC0 = 0LL;
        sub_140811B60(Handle);
        Handle = 0LL;
      }
      *(_DWORD *)&v27.Length = 4063292;
      v27.Buffer = L"\\Registry\\Machine\\System\\Setup";
      if ( sub_14082EF44(&Handle, 0LL, &v27, 0x20019u) >= 0 )
      {
        sub_140862728(Handle);
        if ( sub_14067B838(Handle, L"Upgrade", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            byte_140D01908 = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( sub_14067B838(Handle, L"RollbackActive", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            byte_140D01909 = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( word_140C54E98 )
        {
          qword_140C46B90 = (__int64)sub_1409403F0;
          qword_140C46B98 = (__int64)Handle;
          *(_QWORD *)qword_140C46B80 = 0LL;
          sub_140940408(Handle, 0);
        }
        else
        {
          ZwClose(Handle);
        }
        Handle = 0LL;
      }
      v9 = sub_140B28AB0((GUID *)(*(_QWORD *)(a1 + 240) + 2568LL));
      if ( v9 < 0 )
        return (unsigned int)v9;
      sub_140B10490(&v24);
      v9 = sub_140B010DC(0LL);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v9 = sub_140B22134();
      if ( v9 < 0 )
        return (unsigned int)v9;
      v9 = sub_140B2B1C0();
      if ( v9 < 0 )
        return (unsigned int)v9;
      v9 = sub_140B0ED44();
      if ( v9 < 0 )
        return (unsigned int)v9;
      sub_140B105C4();
      v9 = sub_140768AF8(*(__int64 *)&qword_140D00AC0, (__int64)L"HTREE\\ROOT\\0", 983103, (HANDLE *)&v34, 0LL, 0);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v16 = (void *)v34;
      sub_14076FE20(
        *(__int64 *)&qword_140D00AC0,
        (__int64)L"HTREE\\ROOT\\0",
        v34,
        0x25u,
        1u,
        (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
        0x4Eu,
        0);
      v38 = 0;
      sub_14076FE20(
        *(__int64 *)&qword_140D00AC0,
        (__int64)L"HTREE\\ROOT\\0",
        (__int64)v16,
        0xBu,
        4u,
        (__int64)&v38,
        4u,
        0);
      ZwClose(v16);
      qword_140C46148 = (__int64)&qword_140C46140;
      qword_140C46140 = (__int64)&qword_140C46140;
      qword_140C46138 = (__int64)&qword_140C46130;
      qword_140C46130 = &qword_140C46130;
      ExInitializeResourceLite(&stru_140C460C0);
      ExInitializeResourceLite(&stru_140C46040);
      ExInitializeResourceLite(&stru_140C461E0);
      qword_140C44A50 = 0LL;
      stru_140C461A0.Event.Header.WaitListHead.Blink = &stru_140C461A0.Event.Header.WaitListHead;
      stru_140C461A0.Event.Header.WaitListHead.Flink = &stru_140C461A0.Event.Header.WaitListHead;
      stru_140C46160.Event.Header.WaitListHead.Blink = &stru_140C46160.Event.Header.WaitListHead;
      stru_140C46160.Event.Header.WaitListHead.Flink = &stru_140C46160.Event.Header.WaitListHead;
      stru_140C461A0.Count = 1;
      stru_140C461A0.Owner = 0LL;
      stru_140C461A0.Contention = 0;
      LOWORD(stru_140C461A0.Event.Header.Lock) = 1;
      stru_140C461A0.Event.Header.Size = 6;
      stru_140C461A0.Event.Header.SignalState = 0;
      stru_140C46160.Count = 1;
      stru_140C46160.Owner = 0LL;
      stru_140C46160.Contention = 0;
      LOWORD(stru_140C46160.Event.Header.Lock) = 1;
      stru_140C46160.Event.Header.Size = 6;
      stru_140C46160.Event.Header.SignalState = 0;
      v9 = sub_140B1ADD8();
      if ( v9 < 0 )
        return (unsigned int)v9;
      _InterlockedExchange64((volatile __int64 *)&qword_140CF5F60, 0LL);
      byte_140C44A00 = 0;
      stru_140C44A20.Header.WaitListHead.Blink = &stru_140C44A20.Header.WaitListHead;
      stru_140C44A20.Header.WaitListHead.Flink = &stru_140C44A20.Header.WaitListHead;
      qword_140C44A48 = (__int64)&qword_140C44A40;
      qword_140C44A40 = (__int64)&qword_140C44A40;
      LOWORD(stru_140C44A20.Header.Lock) = 0;
      stru_140C44A20.Header.Size = 6;
      stru_140C44A20.Header.SignalState = 1;
      sub_140B30110();
      qword_140C46248 = 0LL;
      stru_140C46260.Header.WaitListHead.Blink = &stru_140C46260.Header.WaitListHead;
      stru_140C46260.Header.WaitListHead.Flink = &stru_140C46260.Header.WaitListHead;
      LOWORD(stru_140C46260.Header.Lock) = 1;
      v27.Buffer = L"\\Driver\\PnpManager";
      stru_140C46260.Header.Size = 6;
      stru_140C46260.Header.SignalState = 1;
      *(_DWORD *)&v27.Length = 2490404;
      v9 = IoCreateDriver(&v27, (unsigned __int64)sub_140AF32F0);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v9 = IoCreateDevice(qword_140C46250, 0, 0LL, 4u, 0, 0, &DeviceObject);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v17 = DeviceObject;
      v18 = DeviceObject;
      DeviceObject->Flags |= 0x1000u;
      v9 = sub_1406CFCE0((__int64)v18, (__int64)&qword_140C46278);
      if ( qword_140C46278 )
      {
        sub_14076FB70((__int64)qword_140C46278, 305);
        sub_140767220((__int64)qword_140C46278, 10);
        *((_DWORD *)qword_140C46278 + 165) = -2;
        v9 = sub_14085C93C((__int64)qword_140C46278, 0x1Au);
        if ( v9 >= 0 )
        {
          *(_DWORD *)&v36.Length = 1703960;
          v36.Buffer = (wchar_t *)L"HTREE\\ROOT\\0";
          sub_140865354((__int64)qword_140C46278, &v36);
          v9 = sub_14076ACE4(*((_QWORD *)qword_140C46278 + 4), (__int64)qword_140C46278 + 40);
          if ( v9 >= 0 )
          {
            *(_DWORD *)&GuidString.Length = 5111884;
            GuidString.Buffer = L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}";
            RtlGUIDFromString(&GuidString, (GUID *)((char *)qword_140C46278 + 664));
            sub_14076C4E0((__int64)qword_140C46278);
            sub_1402DE844((__int64)qword_140C46278, 778);
            goto LABEL_42;
          }
        }
      }
      else
      {
        IoDeleteDevice(v17);
        IoDeleteDriver((unsigned __int16 *)qword_140C46250);
        if ( v9 >= 0 )
        {
LABEL_42:
          v9 = sub_14076C91C(
                 *(__int64 *)&qword_140D00AC0,
                 (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                 (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                 (__int64)L"HTREE\\ROOT\\0",
                 0LL);
          if ( v9 >= 0 )
          {
            if ( (_BYTE)v24 )
              sub_140949450();
            sub_140B23270();
            v9 = sub_140B2EF10();
            if ( v9 >= 0 )
            {
              sub_140B2A970();
              v9 = sub_140B30A8C();
              if ( v9 >= 0 )
              {
                LOWORD(stru_140C448C0.Header.Lock) = 1;
                stru_140C448C0.Header.WaitListHead.Blink = &stru_140C448C0.Header.WaitListHead;
                stru_140C448C0.Header.WaitListHead.Flink = &stru_140C448C0.Header.WaitListHead;
                stru_140C448C0.Header.Size = 6;
                stru_140C448C0.Header.SignalState = 1;
                v9 = sub_140B235FC();
                if ( v9 >= 0 )
                {
                  v9 = sub_140B1BA48(0LL);
                  if ( v9 >= 0 )
                  {
                    *(_QWORD *)&v34 = 2359330LL;
                    *((_QWORD *)&v34 + 1) = L"\\Driver\\DeviceApi";
                    v9 = IoCreateDriver(&v34, (unsigned __int64)sub_140B2FB90);
                    if ( v9 >= 0 )
                    {
                      v9 = sub_1403C09F8(0);
                      if ( v9 >= 0 )
                      {
                        if ( (int)sub_140B0F0F4() >= 0 )
                          sub_140B0F180();
                        sub_1402DCF44(*((PVOID *)qword_140C46278 + 4), 10, 0, 0LL, 0LL, 0LL, 0LL);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return (unsigned int)v9;
    }
  }
  return result;
}
