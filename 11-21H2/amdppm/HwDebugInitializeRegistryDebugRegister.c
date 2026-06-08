/*
 * XREFs of HwDebugInitializeRegistryDebugRegister @ 0x1C0037F10
 * Callers:
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C0038430 (HwDebugInitializeRegistryDebugRegisters.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C000BB40 (memmove.c)
 *     memset @ 0x1C000BE00 (memset.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x1C0037B34 (HwDebugInitializeRegistryDebugParameter.c)
 */

__int64 __fastcall HwDebugInitializeRegistryDebugRegister(HANDLE KeyHandle, ULONG Index, __int64 a3)
{
  PVOID *v6; // r14
  void *v7; // r15
  __int64 v8; // rsi
  NTSTATUS RegistryValues; // ebx
  unsigned __int16 v10; // r9
  _DWORD *v11; // r13
  void *Pool2; // rax
  unsigned __int16 v13; // r9
  void *v14; // rcx
  unsigned int v15; // ebx
  ULONG v16; // edi
  unsigned __int16 v17; // r9
  PVOID *v18; // rdi
  PULONG ResultLength; // [rsp+28h] [rbp-D8h]
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v22; // [rsp+34h] [rbp-CCh] BYREF
  void *KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v26[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-60h]
  _WORD KeyInformation[40]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v29[28]; // [rsp+100h] [rbp+0h] BYREF

  v27 = 0LL;
  memset(v26, 0, sizeof(v26));
  *(_OWORD *)Src = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v21 = 1;
  v22 = 0;
  KeyHandlea = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v8 = 0LL;
  RegistryValues = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, (ULONG)80, &v22);
  if ( RegistryValues < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_40;
    v10 = 15;
    goto LABEL_4;
  }
  ObjectAttributes.Length = 48;
  Src[1] = &KeyInformation[8];
  ObjectAttributes.RootDirectory = KeyHandle;
  WORD1(Src[0]) = 60;
  LOWORD(Src[0]) = KeyInformation[6];
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)Src;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
  if ( RegistryValues < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 16;
LABEL_4:
      LODWORD(ResultLength) = RegistryValues;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        v10,
        (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids,
        ResultLength);
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  memset(v29, 0, sizeof(v29));
  v29[2] = L"Address";
  v11 = (_DWORD *)(a3 + 12);
  v29[10] = a3 + 12;
  LODWORD(v29[1]) = 292;
  LODWORD(v29[4]) = 0x4000000;
  v29[3] = a3 + 8;
  LODWORD(v29[8]) = 292;
  v29[9] = L"Scope";
  LODWORD(v29[11]) = 0x4000000;
  v29[16] = L"Enabled";
  LODWORD(v29[18]) = 0x4000000;
  v29[17] = &v21;
  v29[19] = &v21;
  LODWORD(v29[15]) = 288;
  LODWORD(v29[20]) = 4;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, KeyHandlea, v29, 0LL, 0LL);
  if ( RegistryValues >= 0 )
  {
    if ( !v21 )
    {
      RegistryValues = -1073741823;
      goto LABEL_40;
    }
    if ( *v11 > 1u )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v17 = 18;
      LODWORD(ResultLength) = *v11;
    }
    else
    {
      Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)LOWORD(Src[0]) + 2, 1919119952LL);
      v7 = Pool2;
      if ( !Pool2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_18:
          RegistryValues = -1073741670;
          goto LABEL_40;
        }
        v13 = 19;
LABEL_17:
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          v13,
          (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids);
        goto LABEL_18;
      }
      memmove(Pool2, Src[1], LOWORD(Src[0]));
      v14 = KeyHandlea;
      *(_QWORD *)a3 = v7;
      RegistryValues = ZwQueryKey(v14, KeyCachedInformation, v26, (ULONG)40, &v22);
      if ( RegistryValues < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = 20;
          goto LABEL_4;
        }
        goto LABEL_40;
      }
      v8 = HIDWORD(v26[0]);
      if ( (unsigned int)(HIDWORD(v26[0]) - 1) <= 0xFE )
      {
        v6 = (PVOID *)ExAllocatePool2(64LL, (unsigned int)(16 * HIDWORD(v26[0])), 1919119952LL);
        if ( !v6 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_18;
          v13 = 22;
          goto LABEL_17;
        }
        v15 = 0;
        v16 = 0;
        if ( (_DWORD)v8 )
        {
          do
          {
            if ( (int)HwDebugInitializeRegistryDebugParameter(KeyHandlea, v16, (__int64)&v6[2 * v15]) >= 0 )
              ++v15;
            ++v16;
          }
          while ( v16 < (unsigned int)v8 );
          if ( v15 )
          {
            *(_QWORD *)(a3 + 24) = v6;
            v7 = 0LL;
            v6 = 0LL;
            *(_BYTE *)(a3 + 16) = v15;
            RegistryValues = 0;
            goto LABEL_40;
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x17u,
            (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids);
LABEL_39:
        RegistryValues = -1073741811;
        goto LABEL_40;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v17 = 21;
      LODWORD(ResultLength) = HIDWORD(v26[0]);
    }
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v17,
      (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids,
      ResultLength);
    goto LABEL_39;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = 17;
    goto LABEL_4;
  }
LABEL_40:
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
  if ( v7 )
    ExFreePoolWithTag(v7, (ULONG)1919119952);
  if ( v6 )
  {
    if ( (_DWORD)v8 )
    {
      v18 = v6;
      do
      {
        if ( *v18 )
          ExFreePoolWithTag(*v18, (ULONG)1919119952);
        v18 += 2;
        --v8;
      }
      while ( v8 );
    }
    ExFreePoolWithTag(v6, (ULONG)1919119952);
  }
  return (unsigned int)RegistryValues;
}
