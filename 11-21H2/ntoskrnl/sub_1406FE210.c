/*
 * XREFs of sub_1406FE210 @ 0x1406FE210
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402031E0 (FsRtlCreateSectionForDataScan.c)
 *     sub_1406FE0E4 @ 0x1406FE0E4 (sub_1406FE0E4.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406FE4F0 @ 0x1406FE4F0 (sub_1406FE4F0.c)
 */

__int64 __fastcall sub_1406FE210(struct _FILE_OBJECT *a1, char a2, __int64 a3, int a4, _DWORD *a5, _DWORD *a6)
{
  int v8; // edi
  PFAST_MUTEX *FsContext; // rbx
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12[2]; // [rsp+30h] [rbp-48h] BYREF

  *a5 = 0;
  *a6 = 0;
  *(_OWORD *)v12 = 0LL;
  LODWORD(v12[0]) = 16;
  v8 = sub_1406FE4F0(a1, a4, (__int64)v12);
  if ( v8 >= 0 )
  {
    if ( (a2 & 0x44) != 0 )
    {
      FsContext = (PFAST_MUTEX *)a1->FsContext;
      if ( FsContext )
      {
        ExAcquireFastMutex(FsContext[6]);
        v11 = FsContext[6];
        *((_BYTE *)FsContext + 6) |= 0x10u;
        KeReleaseGuardedMutex(v11);
      }
    }
    if ( HIDWORD(v12[0]) >= 0xC )
      *a5 = v12[1];
    if ( HIDWORD(v12[0]) >= 0x10 )
      *a6 = HIDWORD(v12[1]);
  }
  return (unsigned int)v8;
}
