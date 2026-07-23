/*
 * XREFs of sub_1406E32E4 @ 0x1406E32E4
 * Callers:
 *     sub_14076F8AC @ 0x14076F8AC (sub_14076F8AC.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_1405638C4 @ 0x1405638C4 (sub_1405638C4.c)
 *     sub_140563A9C @ 0x140563A9C (sub_140563A9C.c)
 *     sub_140563CAC @ 0x140563CAC (sub_140563CAC.c)
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_1406E34FC @ 0x1406E34FC (sub_1406E34FC.c)
 *     sub_1406E3544 @ 0x1406E3544 (sub_1406E3544.c)
 *     ObSetSecurityObjectByPointer @ 0x140724D30 (ObSetSecurityObjectByPointer.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_14078C9E8 @ 0x14078C9E8 (sub_14078C9E8.c)
 *     sub_140953950 @ 0x140953950 (sub_140953950.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PDEVICE_OBJECT __fastcall sub_1406E32E4(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  PDEVICE_OBJECT v5; // rsi
  WCHAR *v6; // r15
  char v7; // r12
  __int64 v8; // r8
  char v9; // r14
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  _DWORD *DeviceExtension; // r14
  __int64 v14; // r8
  int v15; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  void *v20; // r14
  __int16 v21; // ax
  __int64 v22; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp+48h] BYREF
  PDEVICE_OBJECT v25; // [rsp+A0h] [rbp+50h] BYREF

  v3 = a2 - 96;
  v25 = 0LL;
  v5 = 0LL;
  SourceString = 0LL;
  v6 = 0LL;
  DestinationString = 0LL;
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_140563CAC(
      *(_QWORD *)(v3 + 112),
      (const EVENT_DESCRIPTOR *)qword_14003B110,
      a3,
      *(const wchar_t **)(v3 + 8),
      *(const wchar_t **)(v3 + 16),
      *(const wchar_t **)(*(_QWORD *)(v3 + 112) + 8LL),
      *(_DWORD *)(v3 + 4));
  v7 = 1;
  LOBYTE(a3) = 1;
  v8 = sub_1406E34FC(v3, DeviceObject, a3);
  if ( (*(_DWORD *)(v3 + 4) & 2) == 0 )
  {
    if ( v8 )
    {
      v5 = *(PDEVICE_OBJECT *)(v8 + 40);
      v7 = 0;
      *((_DWORD *)v5->DeviceExtension + 2) = *((_DWORD *)v5->DeviceExtension + 2) & 0xFFFFFFB7 | 8;
LABEL_6:
      v9 = v7;
      goto LABEL_7;
    }
    if ( DeviceObject != *((PDEVICE_OBJECT *)qword_140C46278 + 4) )
    {
LABEL_15:
      v11 = *(_QWORD *)(v3 + 120);
      *(_WORD *)(v3 + 200) = 0;
      if ( v11 )
        sub_140953950(v11);
      v9 = 0;
      v12 = IoCreateDevice(DriverObject, 0x10u, 0LL, 0x22u, 0x80u, 0, &v25);
      v5 = v25;
      if ( v12 < 0 )
        goto LABEL_7;
      DeviceExtension = v25->DeviceExtension;
      *(_OWORD *)DeviceExtension = 0LL;
      v14 = *(_QWORD *)(v3 + 152);
      if ( v14 && (int)ObSetSecurityObjectByPointer(v5, 28LL, v14) < 0 )
      {
        IoDeleteDevice(v5);
        v5 = 0LL;
      }
      else
      {
        *(_QWORD *)DeviceExtension = v3;
        _InterlockedAdd((volatile signed __int32 *)v3, 1u);
        v5 = v25;
        *(_QWORD *)(v3 + 120) = v25;
        DeviceExtension[2] |= 8u;
        v5->Flags &= ~0x80u;
        sub_1406E3544(v3, DeviceObject, v5);
        v6 = (WCHAR *)SourceString;
      }
      goto LABEL_6;
    }
    if ( !*(_QWORD *)(v3 + 80) || (p_DestinationString = (UNICODE_STRING *)(v3 + 72), *(_WORD *)(v3 + 72) < 2u) )
    {
      v15 = sub_14078C9E8(200LL, 1466986064LL, &SourceString, 3LL, *(_QWORD *)(v3 + 8), &word_140865B20);
      v6 = (WCHAR *)SourceString;
      if ( v15 < 0 || RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
        goto LABEL_15;
      p_DestinationString = &DestinationString;
    }
    v20 = (void *)sub_140779C10(p_DestinationString, 1953261124LL);
    if ( v20 )
    {
      if ( (byte_140C0DD4C & 2) != 0 )
        sub_1405638C4(v18, v17, v19, *(const wchar_t **)(v3 + 8), *(const wchar_t **)(v3 + 16), *(_WORD *)(v3 + 200));
      ObfDereferenceObject(v20);
      v21 = *(_WORD *)(v3 + 200);
      if ( !v21 )
      {
        IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
        v21 = *(_WORD *)(v3 + 200);
      }
      if ( v21 != -1 )
        *(_WORD *)(v3 + 200) = v21 + 1;
      v9 = 0;
      goto LABEL_7;
    }
    goto LABEL_15;
  }
  v9 = 0;
  if ( !v8 )
    goto LABEL_11;
  v22 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 64LL);
  *(_DWORD *)(v22 + 8) &= ~8u;
  if ( (*(_DWORD *)(v22 + 8) & 4) == 0 )
    goto LABEL_11;
  sub_1406619F8(*(_QWORD *)(v8 + 40), 0);
LABEL_7:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x57706E50u);
  if ( v5 )
    ObfReferenceObject(v5);
LABEL_11:
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_140563A9C(
      *(_QWORD *)(v3 + 16),
      (const EVENT_DESCRIPTOR *)qword_14003B300,
      v8,
      *(const wchar_t **)(v3 + 8),
      *(const wchar_t **)(v3 + 16),
      v5 != 0LL,
      v9);
  return v5;
}
