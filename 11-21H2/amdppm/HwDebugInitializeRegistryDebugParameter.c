/*
 * XREFs of HwDebugInitializeRegistryDebugParameter @ 0x1C0037B34
 * Callers:
 *     HwDebugInitializeRegistryDebugRegister @ 0x1C0037F10 (HwDebugInitializeRegistryDebugRegister.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000536C (WPP_RECORDER_SF_DD.c)
 *     memmove @ 0x1C000BB40 (memmove.c)
 *     memset @ 0x1C000BE00 (memset.c)
 */

__int64 __fastcall HwDebugInitializeRegistryDebugParameter(HANDLE KeyHandle, ULONG Index, __int64 a3)
{
  NTSTATUS RegistryValues; // ebx
  unsigned __int16 v7; // r9
  unsigned int v8; // ecx
  unsigned __int16 v9; // r9
  void *Pool2; // rax
  void *v11; // rbx
  char v12; // al
  PULONG ResultLength; // [rsp+28h] [rbp-D8h]
  unsigned int v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v17; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v18; // [rsp+4Ch] [rbp-B4h] BYREF
  void *KeyHandlea; // [rsp+50h] [rbp-B0h] BYREF
  void *Src[2]; // [rsp+58h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _WORD KeyInformation[40]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v23[28]; // [rsp+F0h] [rbp-10h] BYREF

  v15 = 0;
  v16 = 0;
  *(_OWORD *)Src = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v18 = 0;
  v17 = 0;
  KeyHandlea = 0LL;
  memset(&ObjectAttributes, 0, 44);
  RegistryValues = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, (ULONG)80, &v18);
  if ( RegistryValues < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v7 = 24;
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
      v7 = 25;
LABEL_4:
      LODWORD(ResultLength) = RegistryValues;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        v7,
        (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids,
        ResultLength);
      goto LABEL_31;
    }
    goto LABEL_31;
  }
  memset(v23, 0, sizeof(v23));
  v23[2] = L"BitWidth";
  v23[3] = &v15;
  LODWORD(v23[1]) = 292;
  v23[9] = L"BitOffset";
  LODWORD(v23[4]) = 0x4000000;
  v23[10] = &v16;
  v23[16] = L"Type";
  LODWORD(v23[8]) = 292;
  LODWORD(v23[11]) = 0x4000000;
  LODWORD(v23[15]) = 292;
  LODWORD(v23[18]) = 0x4000000;
  v23[17] = &v17;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, KeyHandlea, v23, 0LL, 0LL);
  if ( RegistryValues >= 0 )
  {
    v8 = v15;
    if ( v15 <= 0x40 )
    {
      if ( v16 > 0x3F )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_16;
        v9 = 28;
        LODWORD(ResultLength) = v16;
        goto LABEL_15;
      }
      if ( v16 + v15 > 0x40 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(ResultLength) = v15;
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x1Du,
            (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids,
            ResultLength,
            v16);
        }
        goto LABEL_16;
      }
      v8 = v17;
      if ( v17 < 3 )
      {
        Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)LOWORD(Src[0]) + 2, 1919119952LL);
        v11 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, Src[1], LOWORD(Src[0]));
          *(_BYTE *)(a3 + 8) = v15;
          *(_BYTE *)(a3 + 9) = v16;
          v12 = v17;
          *(_QWORD *)a3 = v11;
          RegistryValues = 0;
          *(_BYTE *)(a3 + 10) = v12;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              4u,
              0x1Fu,
              (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids);
          RegistryValues = -1073741670;
        }
        goto LABEL_31;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 30;
        goto LABEL_14;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 27;
LABEL_14:
      LODWORD(ResultLength) = v8;
LABEL_15:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v9,
        (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids,
        ResultLength);
    }
LABEL_16:
    RegistryValues = -1073741811;
    goto LABEL_31;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 26;
    goto LABEL_4;
  }
LABEL_31:
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
  return (unsigned int)RegistryValues;
}
