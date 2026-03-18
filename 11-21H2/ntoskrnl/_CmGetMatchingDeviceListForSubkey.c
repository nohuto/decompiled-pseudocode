/*
 * XREFs of _CmGetMatchingDeviceListForSubkey @ 0x14083DA50
 * Callers:
 *     _CmGetMatchingDeviceList @ 0x14083D790 (_CmGetMatchingDeviceList.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x140A27198 (_CmGetMatchingFilteredDeviceListWorker.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1402E0340 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14083EAEC (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmGetMatchingDeviceListForSubkey(
        __int64 a1,
        const wchar_t *a2,
        char a3,
        __int64 a4,
        __int64 a5,
        _WORD *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int CachedContextBaseKey; // ebx
  const wchar_t *v11; // rax
  int v12; // r14d
  __int64 v13; // rcx
  int v14; // eax
  wchar_t *Pool2; // rdi
  unsigned int v16; // eax
  unsigned int v17; // eax
  wchar_t *v19; // rax
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21[8]; // [rsp+38h] [rbp-40h] BYREF

  v21[0] = 0LL;
  *a8 = 0;
  Handle = 0LL;
  if ( a7 )
    *a6 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 5, (__int64)v21);
  if ( CachedContextBaseKey >= 0 )
  {
    v11 = a2;
    v12 = 0;
    if ( a2 )
    {
      while ( *v11 )
      {
        if ( *v11 == 92 )
          break;
        if ( (unsigned int)++v12 > 2 )
          break;
        v19 = wcschr(v11, 0x5Cu);
        if ( v19 )
        {
          v11 = v19 + 1;
          if ( v11 )
            continue;
        }
        goto LABEL_5;
      }
      CachedContextBaseKey = -1073741811;
    }
    else
    {
LABEL_5:
      v13 = 0LL;
      if ( a1 )
        v13 = *(_QWORD *)(a1 + 224);
      v14 = SysCtxRegOpenKey(v13, v21[0], (__int64)a2, 0, 8u, (__int64)&Handle);
      CachedContextBaseKey = v14;
      if ( v14 == -1073741444 )
      {
        CachedContextBaseKey = -1073741595;
      }
      else if ( v14 >= 0 )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, 440LL, 1380994640LL);
        if ( Pool2 )
        {
          *(_DWORD *)Pool2 = v12 + 1;
          RtlStringCchCopyExW(Pool2 + 2, 0xC8uLL, a2, 0LL, 0LL, 0x900u);
          *((_BYTE *)Pool2 + 404) = a3;
          *((_QWORD *)Pool2 + 51) = a4;
          *((_QWORD *)Pool2 + 52) = a5;
          *((_QWORD *)Pool2 + 53) = a6;
          *((_DWORD *)Pool2 + 108) = a7;
          *((_DWORD *)Pool2 + 109) = 0;
          CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmEnumSubkeyCallback, Pool2);
          if ( CachedContextBaseKey >= 0 )
          {
            v16 = *((_DWORD *)Pool2 + 109);
            *a8 = v16;
            if ( v16 )
            {
              v17 = v16 + 1;
              *a8 = v17;
              if ( a6 && a7 >= v17 )
                a6[v17 - 1] = 0;
              else
                CachedContextBaseKey = -1073741789;
            }
          }
          ExFreePoolWithTag(Pool2, 0);
        }
        else
        {
          CachedContextBaseKey = -1073741801;
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}
