/*
 * XREFs of InitClipboardILDef @ 0x1C011FA60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetClipILIndexFromName@@YAIPEAGI@Z @ 0x1C02196F4 (-GetClipILIndexFromName@@YAIPEAGI@Z.c)
 */

int InitClipboardILDef()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  int v2; // edx
  int v3; // r8d
  _UNKNOWN **v4; // rax
  NTSTATUS v5; // eax
  ULONG v6; // r14d
  ULONG v7; // esi
  unsigned int ClipILIndexFromName; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG Length; // [rsp+B0h] [rbp+30h] BYREF
  void *KeyHandle; // [rsp+B8h] [rbp+38h] BYREF

  Length = 0;
  KeyHandle = 0LL;
  v0 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v1 = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\UIPI\\Clipboard\\IntegrityLevelDef");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v5 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
    if ( v5 == -2147483643 || v5 == -1073741789 )
    {
      v0 = (_DWORD *)Win32AllocPoolZInit(Length, 1650684757LL);
      if ( v0 )
      {
        if ( ZwQueryKey(KeyHandle, KeyFullInformation, v0, Length, &Length) >= 0 && (unsigned int)(v0[8] - 1) <= 4 )
        {
          v6 = v0[9] + 16;
          if ( v0[9] < 0xFFFFFFF0 )
          {
            v1 = Win32AllocPoolZInit(v6, 1650684757LL);
            if ( v1 )
            {
              v7 = 0;
              if ( !v0[8] )
              {
LABEL_26:
                dword_1C03260CC = 1;
LABEL_27:
                LODWORD(v4) = Win32FreePool(v1);
                goto LABEL_9;
              }
              while ( ZwEnumerateValueKey(KeyHandle, v7, KeyValueBasicInformation, (PVOID)v1, v6, &Length) >= 0 )
              {
                if ( *(_DWORD *)(v1 + 4) == 1 )
                {
                  ClipILIndexFromName = GetClipILIndexFromName((wchar_t *)(v1 + 12), *(_DWORD *)(v1 + 8));
                  if ( ClipILIndexFromName != -1 )
                    dword_1C0326054[6 * ClipILIndexFromName] = 1;
                }
                if ( ++v7 >= v0[8] )
                  goto LABEL_26;
              }
            }
          }
        }
      }
    }
  }
  LOBYTE(v2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v4 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    LODWORD(v4) = WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v2,
                    v3,
                    10,
                    4,
                    17,
                    10,
                    (__int64)&WPP_6e1da2c8865e385d9ef1e5697a7bf54c_Traceguids);
  }
  dword_1C032609C = 0;
  dword_1C0326084 = 0;
  dword_1C0326054[0] = 0;
  dword_1C03260CC = 1;
  dword_1C03260B4 = 1;
  dword_1C032606C = 1;
  if ( v1 )
    goto LABEL_27;
LABEL_9:
  if ( v0 )
    LODWORD(v4) = Win32FreePool(v0);
  if ( KeyHandle )
    LODWORD(v4) = ZwClose(KeyHandle);
  return (int)v4;
}
