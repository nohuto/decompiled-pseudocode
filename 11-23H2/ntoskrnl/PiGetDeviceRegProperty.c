/*
 * XREFs of PiGetDeviceRegProperty @ 0x1407930F8
 * Callers:
 *     IoGetDeviceProperty @ 0x140792B90 (IoGetDeviceProperty.c)
 *     IopPnPDispatch @ 0x1407EB2F0 (IopPnPDispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     wcschr @ 0x1403DBAF0 (wcschr.c)
 *     wcsstr @ 0x1403DBD80 (wcsstr.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     PnpFindAlternateStringData @ 0x1407933B4 (PnpFindAlternateStringData.c)
 *     RtlFormatMessageEx @ 0x1409B9C98 (RtlFormatMessageEx.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiGetDeviceRegProperty(__int64 a1, __int64 a2, int a3, int a4, WCHAR *Src, PULONG ReturnLength)
{
  size_t v8; // r13
  int DeviceRegProp; // eax
  unsigned int v10; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v13; // rsi
  wchar_t *v14; // r12
  int AlternateStringData; // eax
  size_t v16; // r15
  char v17; // cl
  wchar_t *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  va_list v21; // r13
  const wchar_t *v22; // rcx
  unsigned int i; // r13d
  va_list v24; // rax
  __int64 v25; // rcx
  wchar_t *v26; // rax
  size_t Size; // [rsp+54h] [rbp-ACh] BYREF
  size_t v28; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *Str; // [rsp+68h] [rbp-98h] BYREF
  PWSTR Buffer; // [rsp+70h] [rbp-90h]
  va_list Arguments[20]; // [rsp+80h] [rbp-80h] BYREF

  LODWORD(v28) = a4;
  v8 = 0LL;
  Size = *ReturnLength;
  Buffer = Src;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    a1,
                    0LL,
                    a4,
                    (__int64)&Size + 4,
                    (__int64)Src,
                    (__int64)&Size,
                    0);
  v10 = DeviceRegProp;
  if ( a3 == 1 )
  {
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp != -1073741789 )
        return v10;
    }
    else if ( HIDWORD(Size) != 1 )
    {
      return (unsigned int)-1073741584;
    }
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)Size, 1869181008LL);
    v13 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( v10 != -1073741789 )
    {
      memmove(Pool2, Src, (unsigned int)Size);
      goto LABEL_13;
    }
    v19 = CmGetDeviceRegProp(
            *(__int64 *)&PiPnpRtlCtx,
            a1,
            0LL,
            v28,
            (__int64)&Size + 4,
            (__int64)Pool2,
            (__int64)&Size,
            0);
    v10 = v19;
    if ( v19 < 0 )
    {
      if ( v19 == -1073741789 )
        *ReturnLength = Size;
    }
    else
    {
      if ( HIDWORD(Size) == 1 )
      {
LABEL_13:
        LODWORD(v28) = Size;
        Str = v13;
        v14 = v13;
        AlternateStringData = PnpFindAlternateStringData(v13, (unsigned int)Size, &Str, &v28);
        v16 = (unsigned int)v28;
        if ( AlternateStringData
          && (v14 = Str, v18 = wcsstr(Str, L";("), (v8 = (size_t)v18) != 0)
          && (v20 = ((unsigned int)v16 >> 1) - 2, v14[v20] == 41) )
        {
          *v18 = 0;
          v21 = (va_list)(v18 + 2);
          v14[v20] = 0;
          v28 = (size_t)(v18 + 2);
          memset(&Arguments[1], 0, 0x98uLL);
          v22 = (const wchar_t *)v28;
          Arguments[0] = v21;
          for ( i = 1; ; ++i )
          {
            v26 = wcschr(v22, 0x2Cu);
            if ( !v26 )
            {
              v8 = v28;
              goto LABEL_14;
            }
            *v26 = 0;
            v24 = (va_list)(v26 + 1);
            if ( i >= 0x13 )
              break;
            v25 = i;
            Arguments[v25] = v24;
            v22 = (const wchar_t *)v24;
          }
          v8 = v28;
          v17 = 1;
        }
        else
        {
LABEL_14:
          v17 = 0;
        }
        if ( *ReturnLength < (unsigned int)v16 )
        {
          v10 = -1073741789;
        }
        else if ( v8 )
        {
          if ( v17 )
            v10 = -1073741619;
          else
            v10 = RtlFormatMessageEx(v14, 0, 0, 0, 1u, Arguments, Buffer, *ReturnLength, ReturnLength, 0LL);
        }
        else
        {
          memmove(Buffer, Str, v16);
        }
        *ReturnLength = v16;
        goto LABEL_19;
      }
      v10 = -1073741584;
    }
LABEL_19:
    ExFreePoolWithTag(v13, 0);
    return v10;
  }
  if ( DeviceRegProp < 0 )
  {
    if ( DeviceRegProp != -1073741789 )
      return v10;
    goto LABEL_6;
  }
  if ( HIDWORD(Size) != a3 )
    return (unsigned int)-1073741584;
LABEL_6:
  *ReturnLength = Size;
  return v10;
}
