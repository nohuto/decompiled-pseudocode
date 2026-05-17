/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x180023058
 * Callers:
 *     LdrResGetRCConfig @ 0x1800077D0 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x180007D68 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F930 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B820 (LdrUnloadAlternateResourceModuleEx.c)
 *     Feature_Servicing_CritsecInit__private_IsEnabled @ 0x18009E30C (Feature_Servicing_CritsecInit__private_IsEnabled.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(__int64 a1, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // rbx
  int v9; // r14d
  __int64 v10; // r13
  int v11; // r8d
  __int64 v12; // rcx
  int v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+28h] [rbp-40h] BYREF
  _DWORD *v16; // [rsp+30h] [rbp-38h]
  char v17; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v17 = 0;
  if ( (a4 & 0xC) == 0 )
    return 0LL;
  if ( (a4 & 0xFFFFFFF3) != 0 )
    return 0LL;
  v9 = a4 & 4;
  if ( (a4 & 4) != 0 && !a2 )
    return 0LL;
  v15 = 0LL;
  RtlImageNtHeaderEx(1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v15);
  v10 = v15;
  if ( !v15 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  Feature_Servicing_CritsecInit__private_IsEnabled();
  RtlAcquireSRWLockShared(&MuiCacheSWRLock);
  v11 = AlternateResourceModuleCount - 1;
  v14 = AlternateResourceModuleCount - 1;
  while ( v11 >= 0 )
  {
    if ( *(_QWORD *)(((__int64)v11 << 6) + AlternateResourceModules + 8) == a1 )
    {
      v12 = (__int64)v11 << 6;
      if ( *(_DWORD *)(v12 + AlternateResourceModules + 24) != *(_DWORD *)(v10 + 88) )
      {
        v17 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *(_QWORD *)(v12 + AlternateResourceModules + 16) )
        {
          _mm_lfence();
          v8 = *(_DWORD **)(((__int64)v14 << 6) + AlternateResourceModules + 16);
          v16 = v8;
          if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v8 != -20054323 )
          {
            v17 = 1;
            v8 = 0LL;
            v16 = 0LL;
          }
          break;
        }
      }
      else if ( v9 && a2 && *(_WORD *)(v12 + AlternateResourceModules) == a2 )
      {
        v8 = *(_DWORD **)(v12 + AlternateResourceModules + 32);
        v16 = v8;
        if ( a3 )
          *a3 = *(_QWORD *)(v12 + AlternateResourceModules + 48);
        break;
      }
    }
    v14 = --v11;
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  if ( v17 )
    LdrUnloadAlternateResourceModuleEx(a1, 0LL);
  return v8;
}
