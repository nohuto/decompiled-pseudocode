/*
 * XREFs of _CmDevicePanelEnumSubkeyCallback @ 0x140A28700
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyExW @ 0x1402E0340 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcstoul @ 0x1403E3880 (wcstoul.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14083EAEC (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmDevicePanelEnumSubkeyCallback(__int64 a1, __int64 a2, const WCHAR *a3, int *a4)
{
  int v5; // ecx
  int v9; // ecx
  int v10; // ecx
  bool v11; // cc
  wchar_t *Pool2; // rax
  wchar_t *v13; // rsi
  size_t v14; // rdx
  wchar_t *v15; // rcx
  size_t v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int8 (__fastcall *v20)(__int64, wchar_t *, __int64, _QWORD); // rax
  unsigned int v21; // edi
  unsigned int v22; // eax
  wchar_t *EndPtr; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  size_t pcchRemaining; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  GUID Guid; // [rsp+58h] [rbp-18h] BYREF

  v5 = *a4;
  EndPtr = 0LL;
  pcchRemaining = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  v9 = v5 - 1;
  if ( !v9 )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
      goto LABEL_30;
LABEL_11:
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, 114LL, 1380994640LL);
    v13 = Pool2;
    if ( !Pool2 )
      goto LABEL_30;
    v14 = 57LL;
    v15 = Pool2;
    if ( *((_WORD *)a4 + 2) )
    {
      if ( RtlStringCchCopyExW(Pool2, 0x39uLL, (NTSTRSAFE_PCWSTR)a4 + 2, &EndPtr, &pcchRemaining, 0x900u) < 0
        || (v16 = pcchRemaining, pcchRemaining < 2) )
      {
LABEL_29:
        ExFreePoolWithTag(v13, 0);
        goto LABEL_30;
      }
      *EndPtr = 92;
      v14 = v16 - 2;
      *++EndPtr = 0;
      v15 = EndPtr;
    }
    else
    {
      EndPtr = Pool2;
    }
    if ( RtlStringCchCopyW(v15, v14, a3) >= 0 )
    {
      if ( (unsigned int)*a4 >= 3 )
      {
        if ( RtlInitUnicodeStringEx(&DestinationString, v13) >= 0 )
        {
          v20 = (unsigned __int8 (__fastcall *)(__int64, wchar_t *, __int64, _QWORD))*((_QWORD *)a4 + 15);
          v21 = DestinationString.MaximumLength >> 1;
          if ( !v20 || v20(a1, v13, 6LL, *((_QWORD *)a4 + 16)) )
          {
            a4[37] += v21;
            v22 = a4[36];
            if ( v22 > v21 )
            {
              RtlStringCchCopyExW(*((NTSTRSAFE_PWSTR *)a4 + 17), v22, v13, 0LL, 0LL, 0x900u);
              *((_QWORD *)a4 + 17) += 2LL * v21;
              a4[36] -= v21;
            }
          }
        }
      }
      else
      {
        v17 = 0LL;
        if ( a1 )
          v17 = *(_QWORD *)(a1 + 224);
        if ( (int)SysCtxRegOpenKey(v17, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) >= 0 )
        {
          v18 = ExAllocatePool2(256LL, 160LL, 1380994640LL);
          v19 = v18;
          if ( v18 )
          {
            *(_DWORD *)v18 = *a4 + 1;
            RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v18 + 4), 0x39uLL, v13, 0LL, 0LL, 0x900u);
            *(_QWORD *)(v19 + 120) = *((_QWORD *)a4 + 15);
            *(_QWORD *)(v19 + 128) = *((_QWORD *)a4 + 16);
            *(_QWORD *)(v19 + 136) = *((_QWORD *)a4 + 17);
            *(_DWORD *)(v19 + 144) = a4[36];
            *(_DWORD *)(v19 + 148) = a4[37];
            PnpCtxRegEnumKeyWithCallback(a1, Handle, (__int64)&CmDevicePanelEnumSubkeyCallback, v19);
            a4[37] = *(_DWORD *)(v19 + 148);
            *((_QWORD *)a4 + 17) = *(_QWORD *)(v19 + 136);
            a4[36] = *(_DWORD *)(v19 + 144);
            ExFreePoolWithTag((PVOID)v19, 0);
          }
        }
      }
    }
    goto LABEL_29;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      return 0LL;
    v11 = wcstoul(a3, &EndPtr, 16) <= 7;
  }
  else
  {
    v11 = wcstoul(a3, &EndPtr, 16) <= 0xFFFF;
  }
  if ( v11 && EndPtr && !*EndPtr )
    goto LABEL_11;
LABEL_30:
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
