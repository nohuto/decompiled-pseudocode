/*
 * XREFs of LdrpUnsuppressAddressTakenIat @ 0x1800E15E4
 * Callers:
 *     LdrpDoPostSnapWork @ 0x1800044C0 (LdrpDoPostSnapWork.c)
 *     LdrResolveDelayLoadedAPI @ 0x18002BE90 (LdrResolveDelayLoadedAPI.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18006AC64 (LdrpWriteBackProtectedDelayLoad.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18002B858 (LdrImageDirectoryEntryToLoadConfig.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     bsearch_s @ 0x180092030 (bsearch_s.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18010B7F0 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlValidateUserCallTarget @ 0x18010B894 (RtlValidateUserCallTarget.c)
 */

__int64 __fastcall LdrpUnsuppressAddressTakenIat(char *BaseOfImage, unsigned int a2, unsigned int a3)
{
  char *v5; // r12
  unsigned int v6; // esi
  _DWORD *Config; // rax
  unsigned int v8; // r14d
  unsigned int *v9; // rdi
  unsigned int v10; // edx
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r12
  char v17[8]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int *Context; // [rsp+38h] [rbp-38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp-30h] BYREF
  char *v20; // [rsp+48h] [rbp-28h]
  __int128 Key; // [rsp+50h] [rbp-20h] BYREF

  Context = 0LL;
  v20 = BaseOfImage;
  v5 = BaseOfImage;
  v6 = 0;
  Key = 0LL;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig(v5);
  if ( !Config )
    return v6;
  if ( *Config < 0xB0u )
    return v6;
  if ( !*((_QWORD *)Config + 21) )
    return v6;
  if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) == 0 )
    return v6;
  v8 = Config[36];
  if ( (v8 & 0x4000) == 0 )
    return v6;
  v9 = (unsigned int *)*((_QWORD *)Config + 20);
  v10 = Config[42];
  v11 = (v8 >> 28) + 4;
  if ( !a2 )
    a2 = *v9;
  v12 = *(unsigned int *)((char *)v9 + v11 * (v10 - 1));
  if ( !a3 )
    a3 = *(unsigned int *)((char *)v9 + v11 * (v10 - 1));
  if ( *v9 <= a3 && a2 <= v12 && a3 >= a2 )
  {
    if ( *v9 >= a2 )
      goto LABEL_17;
    LODWORD(Key) = a2;
    Context = v9;
    if ( bsearch_s(&Key, v9, v10, v11, (_CoreCrtSecureSearchSortCompareFunction)LdrpTargetCompare, &Context) || a2 != a3 )
    {
      v9 = Context;
LABEL_17:
      LODWORD(v13) = 0;
      while ( (unsigned int)v13 < a3 && (unsigned int)v13 < v12 )
      {
        v14 = v13;
        v13 = *v9;
        if ( v14 >= (unsigned int)v13 )
          return (unsigned int)-1073741701;
        v15 = *(_QWORD *)&v5[v13];
        if ( (unsigned int)RtlValidateUserCallTarget(v15, v17) != 1 && (v17[0] & 0x10) != 0 )
        {
          v6 = RtlGuardGrantSuppressedCallAccess(v15, 4LL, &OutHeaders);
          if ( (v6 & 0x80000000) != 0 )
            return v6;
        }
        v5 = v20;
        v9 = (unsigned int *)((char *)v9 + v11);
      }
      return v6;
    }
  }
  return 0LL;
}
