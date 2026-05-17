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
  const char *v9; // rsi
  unsigned __int64 v10; // rdx
  int ForwardedDll; // esi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v16[15]; // [rsp+40h] [rbp-C8h] BYREF
  char v17; // [rsp+BCh] [rbp-4Ch]

  *a3 = 0LL;
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 8));
  if ( *v7 )
  {
    return (unsigned int)LdrpFindLoadedDllByHandle(*v7, a3, 0LL);
  }
  else
  {
    v9 = (const char *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
    if ( !a4 )
      a4 = *(_DWORD *)(a1 + 272);
    LdrpInitializeDllPath(*(_QWORD *)(a1 + 80), a4 | 1LL, v16);
    RtlInitAnsiString(&DestinationString, v9);
    ForwardedDll = LdrpLoadForwardedDll((unsigned int)&DestinationString, (unsigned int)v16, a1, a1, 3, (__int64)a3);
    if ( ForwardedDll >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 104) & 0x8000) == 0 )
        *v7 = *(_QWORD *)(*a3 + 48);
      LdrpLogDelayLoadTrigger(a1, a2, *a3, a5);
    }
    if ( v17 )
      RtlReleasePath(v16[0], v10, v12, v13);
  }
  return (unsigned int)ForwardedDll;
}
