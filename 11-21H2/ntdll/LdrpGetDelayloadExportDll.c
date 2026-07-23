/*
 * XREFs of LdrpGetDelayloadExportDll @ 0x18003523C
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x18003BF80 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DAB70 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800351A0 (LdrpLogDelayLoadTrigger.c)
 *     RtlInitAnsiString @ 0x180035350 (RtlInitAnsiString.c)
 *     LdrpFindLoadedDllByHandle @ 0x180038350 (LdrpFindLoadedDllByHandle.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     LdrpLoadForwardedDll @ 0x180043614 (LdrpLoadForwardedDll.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetDelayloadExportDll(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, __int64 a5)
{
  _QWORD *v7; // r14
  const CHAR *v9; // rsi
  int v10; // esi
  _STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-C8h] BYREF
  char v14; // [rsp+BCh] [rbp-4Ch]

  *a3 = 0LL;
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 8));
  if ( *v7 )
  {
    return (unsigned int)LdrpFindLoadedDllByHandle(*v7, a3, 0LL);
  }
  else
  {
    v9 = (const CHAR *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
    if ( !a4 )
      a4 = *(_DWORD *)(a1 + 272);
    LdrpInitializeDllPath(*(_QWORD *)(a1 + 80), a4 | 1LL, Path);
    RtlInitAnsiString(&DestinationString, v9);
    v10 = LdrpLoadForwardedDll(&DestinationString, Path, a1, a1, 3, a3);
    if ( v10 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 104) & 0x8000) == 0 )
        *v7 = *(_QWORD *)(*a3 + 48);
      LdrpLogDelayLoadTrigger(a1, a2, *a3, a5);
    }
    if ( v14 )
      RtlReleasePath(Path[0]);
  }
  return (unsigned int)v10;
}
