/*
 * XREFs of RtlpGetTargetRvaFlag @ 0x18010A300
 * Callers:
 *     RtlGuardIsExportSuppressedAddress @ 0x18010A234 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardIsSuppressedAddress @ 0x18010A4B8 (RtlpGuardIsSuppressedAddress.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180034A60 (LdrImageDirectoryEntryToLoadConfig.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     bsearch_s @ 0x180096840 (bsearch_s.c)
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 */

char __fastcall RtlpGetTargetRvaFlag(unsigned __int64 a1, _BYTE *a2)
{
  _DWORD *Config; // rax
  unsigned int v5; // ecx
  rsize_t v6; // r8
  const void *v7; // rdx
  unsigned int v8; // ecx
  _BYTE *v9; // rax
  char v10; // cl
  char result; // al
  unsigned __int64 v12; // [rsp+30h] [rbp-38h]
  char v13; // [rsp+40h] [rbp-28h]
  __int128 Key; // [rsp+48h] [rbp-20h] BYREF

  Key = 0LL;
  if ( (int)ZwQueryVirtualMemory() < 0 )
    return 0;
  if ( !v12 )
    return 0;
  if ( (v13 & 2) != 0 )
    return 0;
  if ( (v13 & 1) != 0 )
    return 0;
  if ( a1 < v12 )
    return 0;
  Config = LdrImageDirectoryEntryToLoadConfig(v12);
  if ( !Config )
    return 0;
  if ( *Config < 0x94u )
    return 0;
  v5 = Config[36];
  v6 = (unsigned int)Config[34];
  if ( (v5 & 0x400) == 0 )
    return 0;
  v7 = (const void *)*((_QWORD *)Config + 16);
  if ( !v7 )
    return 0;
  v8 = (v5 >> 28) + 4;
  if ( v8 <= 4 )
    return 0;
  LODWORD(Key) = a1 - v12;
  v9 = bsearch_s(&Key, v7, v6, v8, (_CoreCrtSecureSearchSortCompareFunction)RtlpTargetCompare, 0LL);
  if ( !v9 )
    return 0;
  v10 = v9[4];
  result = 1;
  *a2 = v10;
  return result;
}
