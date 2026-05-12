/*
 * XREFs of sub_1C00212CC @ 0x1C00212CC
 * Callers:
 *     sub_1C00A2788 @ 0x1C00A2788 (sub_1C00A2788.c)
 * Callees:
 *     sub_1C001E408 @ 0x1C001E408 (sub_1C001E408.c)
 *     sub_1C00213DC @ 0x1C00213DC (sub_1C00213DC.c)
 *     sub_1C00A25D0 @ 0x1C00A25D0 (sub_1C00A25D0.c)
 *     sub_1C00AB840 @ 0x1C00AB840 (sub_1C00AB840.c)
 */

__int64 __fastcall sub_1C00212CC(__int64 a1)
{
  int v1; // eax
  int v3; // eax
  __int64 result; // rax
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  ULONG v7; // r8d
  __int64 v8; // r10
  int v9; // r11d
  __int64 v10; // rax
  _BYTE *v11; // rax
  struct _DEVICE_OBJECT *v12; // rcx
  struct _UNICODE_STRING *v13; // rsi
  const GUID *v14; // rdx
  void *v15; // [rsp+40h] [rbp-28h]
  unsigned __int8 v16; // [rsp+72h] [rbp+Ah]
  HANDLE Handle; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 1872);
  Handle = 0LL;
  if ( (v1 & 0x20) != 0 )
  {
    v13 = (struct _UNICODE_STRING *)(a1 + 3448);
    v12 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    v14 = &stru_1C0089F38;
LABEL_14:
    v5 = IoRegisterDeviceInterface(v12, v14, 0LL, v13);
    if ( v5 >= 0 )
    {
      v5 = IoSetDeviceInterfaceState(v13, 1u);
      if ( v5 < 0 )
        RtlFreeUnicodeString(v13);
    }
    return (unsigned int)v5;
  }
  v3 = *(_DWORD *)(a1 + 96);
  v16 = BYTE2(v3);
  result = sub_1C001E408(
             *(void **)(*(_QWORD *)(a1 + 24) + 8LL * (unsigned __int8)v3 + 2016),
             1u,
             &Handle,
             L"Target Id %d",
             BYTE1(v3));
  v5 = result;
  if ( (int)result < 0 )
    return result;
  v6 = *(_QWORD *)(sub_1C00A25D0(**(_BYTE **)(a1 + 104) & 0x1F) + 16);
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(v6 + 2 * v10) );
  sub_1C00213DC((int)Handle, v16, v9, a1 + 112, v8, v7, v6, v10, v15);
  ZwClose(Handle);
  if ( (*(_DWORD *)(a1 + 1872) & 1) != 0 )
  {
    v5 = sub_1C00AB840(a1);
    if ( v5 >= 0 )
      v5 = IoRegisterDeviceInterface(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &InterfaceClassGuid,
             0LL,
             (PUNICODE_STRING)(a1 + 1880));
  }
  v11 = *(_BYTE **)(a1 + 104);
  if ( v11 && (*v11 & 0x1F) == 0xD )
  {
    v12 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    v13 = (struct _UNICODE_STRING *)(a1 + 2000);
    v14 = (const GUID *)&unk_1C0089ED8;
    goto LABEL_14;
  }
  return (unsigned int)v5;
}
