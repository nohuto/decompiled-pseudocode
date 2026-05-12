/*
 * XREFs of RaidGetStorageAdapterSerialNumberProperty @ 0x1C0084E48
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C0084C68 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000C724 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RtlStringCchCopyW @ 0x1C000F904 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     RtlStringCchLengthW @ 0x1C003BAD0 (RtlStringCchLengthW.c)
 *     RtlUnicodeStringCopyString @ 0x1C003BB2C (RtlUnicodeStringCopyString.c)
 */

signed int __fastcall RaidGetStorageAdapterSerialNumberProperty(__int64 a1, wchar_t *a2, unsigned __int64 *a3)
{
  signed int result; // eax
  unsigned __int64 v7; // rax
  wchar_t *v8; // r14
  const wchar_t *v9; // r8
  size_t v10; // rdi
  _BYTE *v11; // rax
  __int64 v12; // rdx
  wchar_t *Pool; // rax
  size_t pcchLength; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  struct _STRING SourceString; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h]
  int v18; // [rsp+54h] [rbp-ACh]
  _BYTE v19[264]; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t pszSrc[128]; // [rsp+160h] [rbp+60h] BYREF

  memset(v19, 0, 0x104uLL);
  pcchLength = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 17) )
    return -1073741637;
  v7 = *a3;
  if ( *a3 < 8 )
  {
    *a3 = 0LL;
    return -1073741789;
  }
  *(_DWORD *)a2 = 264;
  *((_DWORD *)a2 + 1) = 264;
  if ( v7 < 0x108 )
  {
    *a3 = 8LL;
    return 0;
  }
  *a3 = 0LL;
  v8 = a2 + 4;
  memset(a2 + 4, 0, 0x100uLL);
  v9 = *(const wchar_t **)(a1 + 4952);
  if ( v9 )
  {
    result = RtlStringCchCopyW(a2 + 4, 0x80uLL, v9);
    if ( result >= 0 )
LABEL_8:
      *a3 = 264LL;
  }
  else
  {
    v17 = 1;
    v18 = 268;
    result = RaCallMiniportAdapterControl(a1 + 336);
    if ( result >= 0 )
    {
      if ( v19[0] == 1 )
      {
        result = RtlStringCchLengthW((STRSAFE_PCNZWCH)&v19[1], 0x7FFFFFFFuLL, &pcchLength);
        v10 = pcchLength;
      }
      else
      {
        v11 = &v19[1];
        v12 = 0x7FFFFFFFLL;
        do
        {
          if ( !*v11 )
            break;
          ++v11;
          --v12;
        }
        while ( v12 );
        result = v12 == 0 ? 0xC000000D : 0;
        v10 = (0x7FFFFFFF - v12) & -(__int64)(v12 != 0);
      }
      if ( result >= 0 )
      {
        if ( v10 - 1 > 0x7E )
          return -1073739509;
        DestinationString.Buffer = pszSrc;
        DestinationString.MaximumLength = 256;
        if ( v19[0] == 1 )
        {
          result = RtlUnicodeStringCopyString(&DestinationString, (NTSTRSAFE_PCWSTR)&v19[1]);
        }
        else
        {
          RtlInitAnsiString(&SourceString, &v19[1]);
          result = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
        }
        if ( result >= 0 )
        {
          result = RtlStringCchCopyW(v8, 0x80uLL, pszSrc);
          if ( result >= 0 )
          {
            Pool = (wchar_t *)RaidAllocatePool(64LL, 2 * v10 + 2, 1413833042LL, *(_QWORD *)(a1 + 8));
            *(_QWORD *)(a1 + 4952) = Pool;
            if ( Pool )
              RtlStringCchCopyW(Pool, v10 + 1, pszSrc);
            result = 0;
            goto LABEL_8;
          }
        }
      }
    }
  }
  return result;
}
