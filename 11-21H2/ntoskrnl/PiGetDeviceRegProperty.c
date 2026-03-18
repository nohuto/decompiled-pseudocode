/*
 * XREFs of PiGetDeviceRegProperty @ 0x1407741A4
 * Callers:
 *     IopPnPDispatch @ 0x140763C50 (IopPnPDispatch.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     wcsstr @ 0x1403E3540 (wcsstr.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PnpFindAlternateStringData @ 0x1407734D8 (PnpFindAlternateStringData.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     RtlFormatMessageEx @ 0x1409B6A58 (RtlFormatMessageEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiGetDeviceRegProperty(int a1, __int64 a2, int a3, unsigned int a4, wchar_t *Src, int *a6)
{
  __int64 v8; // r13
  int DeviceRegProp; // eax
  unsigned int v10; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v13; // rsi
  int AlternateStringData; // eax
  size_t v15; // r15
  wchar_t *v16; // r12
  char v17; // cl
  wchar_t *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  const wchar_t *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // edx
  wchar_t *v24; // rax
  int Size; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int Size_4; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+5Ch] [rbp-A4h] BYREF
  wchar_t *Str; // [rsp+60h] [rbp-A0h] BYREF
  int v29[2]; // [rsp+68h] [rbp-98h]
  NTSTRSAFE_PWSTR v30; // [rsp+70h] [rbp-90h]
  __int64 v31[20]; // [rsp+80h] [rbp-80h] BYREF

  Size_4 = a4;
  v8 = 0LL;
  Size = *a6;
  v30 = Src;
  v27 = 0;
  DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, a1, 0, a4, (__int64)&v27, (__int64)Src, (__int64)&Size, 0);
  v10 = DeviceRegProp;
  if ( a3 == 1 )
  {
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp != -1073741789 )
        return v10;
    }
    else if ( v27 != 1 )
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
    v19 = CmGetDeviceRegProp(PiPnpRtlCtx, a1, 0, Size_4, (__int64)&v27, (__int64)Pool2, (__int64)&Size, 0);
    v10 = v19;
    if ( v19 < 0 )
    {
      if ( v19 == -1073741789 )
        *a6 = Size;
    }
    else
    {
      if ( v27 == 1 )
      {
LABEL_13:
        Size_4 = Size;
        Str = v13;
        *(_QWORD *)v29 = v13;
        AlternateStringData = PnpFindAlternateStringData(v13, Size, &Str, &Size_4);
        v15 = Size_4;
        v16 = Str;
        if ( AlternateStringData )
        {
          *(_QWORD *)v29 = Str;
          v18 = wcsstr(Str, L";(");
          v8 = (__int64)v18;
          if ( v18 )
          {
            v20 = ((unsigned int)v15 >> 1) - 2;
            if ( v16[v20] == 41 )
            {
              *v18 = 0;
              v8 = (__int64)(v18 + 2);
              v16[v20] = 0;
              memset(&v31[1], 0, 0x98uLL);
              v21 = (const wchar_t *)v8;
              v31[0] = v8;
              for ( Size_4 = 1; ; Size_4 = v23 + 1 )
              {
                v24 = wcschr(v21, 0x2Cu);
                if ( !v24 )
                  break;
                *v24 = 0;
                v22 = (__int64)(v24 + 1);
                v23 = Size_4;
                if ( Size_4 >= 0x13 )
                {
                  v17 = 1;
                  goto LABEL_15;
                }
                v31[Size_4] = v22;
                v21 = (const wchar_t *)v22;
              }
            }
          }
        }
        v17 = 0;
LABEL_15:
        if ( *a6 < (unsigned int)v15 )
        {
          v10 = -1073741789;
        }
        else if ( v8 )
        {
          if ( v17 )
            v10 = -1073741619;
          else
            v10 = RtlFormatMessageEx(v29[0], 0, 0, 0, 1, (__int64)v31, v30, *a6, (__int64)a6);
        }
        else
        {
          memmove(v30, v16, v15);
        }
        *a6 = v15;
        goto LABEL_19;
      }
      v10 = -1073741584;
    }
LABEL_19:
    ExFreePoolWithTag(v13, 0);
    return v10;
  }
  if ( DeviceRegProp >= 0 )
  {
    if ( v27 == a3 )
    {
LABEL_6:
      *a6 = Size;
      return v10;
    }
    return (unsigned int)-1073741584;
  }
  if ( DeviceRegProp == -1073741789 )
    goto LABEL_6;
  return v10;
}
