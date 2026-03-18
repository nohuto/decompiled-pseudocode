/*
 * XREFs of NVMeControllerInitPart1 @ 0x1C000D910
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007E90 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C000E25C (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E638 (NVMeControllerReset.c)
 *     NVMeControllerReinitialize @ 0x1C001CCD0 (NVMeControllerReinitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00038A0 (__security_check_cookie.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     FillControllerRuntimeLog @ 0x1C0007ADC (FillControllerRuntimeLog.c)
 *     AdminQueueInitialize @ 0x1C0009394 (AdminQueueInitialize.c)
 *     ControllerConfigure @ 0x1C0009668 (ControllerConfigure.c)
 *     ControllerEnable @ 0x1C00096DC (ControllerEnable.c)
 *     GetProcessorInformation @ 0x1C000A000 (GetProcessorInformation.c)
 *     NVMeControllerIdentify @ 0x1C001C868 (NVMeControllerIdentify.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x1C001E558 (NVMeGetControllerIoCommandSetIdentify.c)
 *     NVMeGetNVMSetAttributeList @ 0x1C001EC38 (NVMeGetNVMSetAttributeList.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x1C001EE1C (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C001EFA8 (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C0021890 (NVMeNameSpaceIdentify.c)
 */

__int64 __fastcall NVMeControllerInitPart1(__int64 a1, char a2)
{
  int *v4; // rsi
  unsigned int v5; // edi
  const wchar_t *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ecx
  int v13; // eax
  int v14; // eax
  signed __int32 v15[10]; // [rsp+0h] [rbp-F8h] BYREF
  const wchar_t *v16; // [rsp+28h] [rbp-D0h]
  int v17; // [rsp+30h] [rbp-C8h]
  _DWORD *v18; // [rsp+38h] [rbp-C0h]
  int v19; // [rsp+40h] [rbp-B8h]
  _DWORD *v20; // [rsp+48h] [rbp-B0h]
  int *v21; // [rsp+50h] [rbp-A8h]
  int v22; // [rsp+60h] [rbp-98h] BYREF
  _DWORD v23[2]; // [rsp+68h] [rbp-90h] BYREF
  _DWORD v24[24]; // [rsp+70h] [rbp-88h] BYREF

  memset(v24, 0, 0x58uLL);
  if ( !a2 || AdminQueueInitialize(a1) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 184) + 36LL) = (*(_WORD *)(a1 + 332) - 1) & 0xFFF | (((*(_WORD *)(a1 + 332) - 1) & 0xFFF) << 16);
    _InterlockedOr(v15, 0);
    v7 = *(_QWORD *)(a1 + 184);
    v8 = *(_QWORD *)(a1 + 488);
    *(_DWORD *)(v7 + 48) = v8;
    _InterlockedOr(v15, 0);
    *(_DWORD *)(v7 + 52) = HIDWORD(v8);
    _InterlockedOr(v15, 0);
    v9 = *(_QWORD *)(a1 + 184);
    v10 = *(_QWORD *)(a1 + 352);
    *(_DWORD *)(v9 + 40) = v10;
    _InterlockedOr(v15, 0);
    *(_DWORD *)(v9 + 44) = HIDWORD(v10);
    _InterlockedOr(v15, 0);
    ControllerConfigure(a1);
    v5 = ControllerEnable(a1);
    if ( v5 )
    {
      v6 = L"Controller enable failed";
      v11 = 8;
LABEL_18:
      v4 = (int *)(a1 + 36);
      *(_DWORD *)(a1 + 36) = v11;
      goto LABEL_19;
    }
    if ( a2 || (*(_DWORD *)(a1 + 32) & 0x20) != 0 )
    {
      *(_DWORD *)(a1 + 32) &= ~0x20u;
      NVMeControllerIdentify(a1);
      NVMeGetControllerIoCommandSetIdentify(a1);
      if ( a2 )
      {
        if ( !*(_BYTE *)(a1 + 20) )
          NVMeGetNVMSetAttributeList(a1);
        NVMeNameSpaceIdentify(a1);
        NVMeGetNamespaceDescriptorListIdentify(a1);
        NVMeGetNamespaceIoCommandSetIdentify(a1);
      }
    }
    if ( *(_BYTE *)(a1 + 20) )
    {
      *(_DWORD *)(a1 + 240) = 65537;
    }
    else if ( !GetProcessorInformation(a1) )
    {
      v6 = L"Get processor information failed";
      v5 = -1056964607;
      v11 = 10;
      goto LABEL_18;
    }
    ++*(_DWORD *)(a1 + 4472);
    return v5;
  }
  v4 = (int *)(a1 + 36);
  v5 = -1056964607;
  *(_DWORD *)(a1 + 36) = 7;
  v6 = L"Admin Queue Initialize failed";
LABEL_19:
  if ( !*(_BYTE *)(a1 + 20) )
  {
    FillControllerRuntimeLog(a1, v24);
    v13 = *(_DWORD *)(a1 + 32);
    v21 = &v22;
    v23[0] = v13;
    v14 = *v4;
    v20 = v23;
    v19 = 8;
    v18 = v24;
    v23[1] = v14;
    v17 = 88;
    v16 = v6;
    v15[8] = (unsigned __int16)v14;
    v22 = -1056964606;
    StorPortNotification(4109LL, a1, 0LL);
  }
  ++*(_DWORD *)(a1 + 4476);
  return v5;
}
