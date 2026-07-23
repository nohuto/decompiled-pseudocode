/*
 * XREFs of PiGetDeviceRegistryProperty @ 0x140954DC8
 * Callers:
 *     IoGetDeviceProperty @ 0x140792EB0 (IoGetDeviceProperty.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     wcschr @ 0x1403DB2B0 (wcschr.c)
 *     wcsstr @ 0x1403DB540 (wcsstr.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     IopGetRegistryValue @ 0x14068CE78 (IopGetRegistryValue.c)
 *     PnpFindAlternateStringData @ 0x1407936D4 (PnpFindAlternateStringData.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140798CA4 (PnpDeviceObjectToDeviceInstance.c)
 *     RtlFormatMessageEx @ 0x1409B9B48 (RtlFormatMessageEx.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiGetDeviceRegistryProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, WCHAR *a5, ULONG *a6)
{
  va_list v7; // r12
  struct _KTHREAD *CurrentThread; // rax
  int RegistryValue; // ebx
  _DWORD *v10; // rsi
  ULONG v11; // r14d
  wchar_t *v12; // rdi
  wchar_t *v13; // r15
  wchar_t *v14; // rax
  __int64 v15; // rcx
  const wchar_t *v16; // rcx
  unsigned int i; // r13d
  va_list v18; // rax
  __int64 v19; // rcx
  wchar_t *v20; // rax
  char v21; // cl
  PULONG v22; // r13
  _DWORD Size[3]; // [rsp+54h] [rbp-ACh] BYREF
  wchar_t *Str; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  PWSTR Buffer; // [rsp+78h] [rbp-88h]
  PULONG ReturnLength; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  va_list Arguments[20]; // [rsp+D0h] [rbp-30h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  Buffer = a5;
  ReturnLength = a6;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  memset(Size, 0, sizeof(Size));
  Str = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  RegistryValue = PnpDeviceObjectToDeviceInstance(a1, (__int64)&Size[1], 131097);
  if ( RegistryValue >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"LogConf");
    ObjectAttributes.RootDirectory = *(HANDLE *)&Size[1];
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    RegistryValue = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( RegistryValue >= 0 )
    {
      ZwClose(*(HANDLE *)&Size[1]);
      *(_QWORD *)&Size[1] = KeyHandle;
      RegistryValue = IopGetRegistryValue(KeyHandle, L"BootConfig", 320, &P);
    }
    ZwClose(*(HANDLE *)&Size[1]);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( RegistryValue >= 0 )
  {
    v10 = P;
    v11 = *((_DWORD *)P + 3);
    v12 = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
    if ( *((_DWORD *)P + 1) == 1
      && (unsigned int)PnpFindAlternateStringData((char *)P + *((unsigned int *)P + 2), v11, &Str, Size) )
    {
      v13 = Str;
      v11 = Size[0];
      v12 = Str;
      v14 = wcsstr(Str, L";(");
      v7 = (va_list)v14;
      if ( v14 && (v15 = (v11 >> 1) - 2, v13[v15] == 41) )
      {
        *v14 = 0;
        v7 = (va_list)(v14 + 2);
        v13[v15] = 0;
        memset(&Arguments[1], 0, 0x98uLL);
        v16 = (const wchar_t *)v7;
        Arguments[0] = v7;
        for ( i = 1; ; ++i )
        {
          v20 = wcschr(v16, 0x2Cu);
          if ( !v20 )
          {
            v21 = 0;
            goto LABEL_15;
          }
          *v20 = 0;
          v18 = (va_list)(v20 + 1);
          if ( i >= 0x13 )
            break;
          v19 = i;
          Arguments[v19] = v18;
          v16 = (const wchar_t *)v18;
        }
        v21 = 1;
      }
      else
      {
        v21 = 0;
      }
    }
    else
    {
      v13 = Str;
      v21 = 0;
    }
LABEL_15:
    v22 = ReturnLength;
    if ( *ReturnLength < v11 )
    {
      RegistryValue = -1073741789;
    }
    else if ( v10[1] == 8 )
    {
      if ( v7 )
      {
        if ( v21 )
          RegistryValue = -1073741619;
        else
          RegistryValue = RtlFormatMessageEx(v13, 0, 0, 0, 1u, Arguments, Buffer, *ReturnLength, ReturnLength, 0LL);
      }
      else
      {
        memmove(Buffer, v12, v11);
      }
    }
    else
    {
      RegistryValue = -1073741584;
    }
    *v22 = v11;
    ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)RegistryValue;
}
