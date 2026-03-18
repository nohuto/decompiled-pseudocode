/*
 * XREFs of ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x1C010C288
 * Callers:
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C010C13C (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ?WriteSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0253550 (-WriteSettings@InteractiveControlSettings@@QEAAJXZ.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C00A0F38 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     RtlUnicodeStringValidateWorker @ 0x1C00A10C8 (RtlUnicodeStringValidateWorker.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlSettings::_OpenDeviceKey(
        InteractiveControlSettings *this,
        ACCESS_MASK a2,
        ULONG a3,
        void **a4)
{
  size_t v6; // rdx
  int v7; // ecx
  ULONG v8; // r8d
  const wchar_t *v9; // r10
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int16 v12; // bx
  WCHAR *v13; // r11
  unsigned __int64 v14; // r8
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  char v19; // [rsp+90h] [rbp-70h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  if ( grpWinStaList )
  {
    *(_DWORD *)&SourceString.Length = 45875200;
    SourceString.Buffer = (PWSTR)&v19;
    v7 = RtlUnicodeStringCopy(&SourceString, (const struct _UNICODE_STRING *)(grpWinStaList + 200LL), a3);
    if ( v7 >= 0 )
    {
      v7 = RtlUnicodeStringValidateWorker(&SourceString, v6, v8);
      if ( v7 >= 0 )
      {
        v9 = L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\InteractiveControl";
        v10 = 0x7FFFLL;
        v7 = 0;
        v11 = (unsigned __int64)SourceString.Length >> 1;
        v12 = 0;
        v13 = &SourceString.Buffer[v11];
        v14 = ((unsigned __int64)SourceString.MaximumLength >> 1) - v11;
        if ( v14 )
        {
          while ( v10 )
          {
            if ( *v9 )
            {
              *v13++ = *v9++;
              --v10;
              ++v12;
              if ( --v14 )
                continue;
            }
            if ( v14 || !v10 || !*v9 )
              break;
            goto LABEL_17;
          }
        }
        else
        {
LABEL_17:
          v7 = -2147483643;
        }
        SourceString.Length = 2 * (v12 + v11);
        if ( v7 >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &SourceString;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v7 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
          if ( v7 < 0 )
            v7 = ZwCreateKey(&KeyHandle, a2, &ObjectAttributes, 0, 0LL, 0, 0LL);
          *a4 = KeyHandle;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v7;
}
