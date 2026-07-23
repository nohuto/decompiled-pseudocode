/*
 * XREFs of sub_14099EB84 @ 0x14099EB84
 * Callers:
 *     sub_14098C094 @ 0x14098C094 (sub_14098C094.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14099E6B8 @ 0x14099E6B8 (sub_14099E6B8.c)
 */

__int64 __fastcall sub_14099EB84(__int64 a1)
{
  _QWORD *v1; // rax
  REGHANDLE v2; // rbx
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]

  v4 = a1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1CB48, 0LL);
  v1 = *(_QWORD **)(v4 + 776);
  if ( v1 || (v1 = sub_14099E6B8(v4)) != 0LL )
    ++*((_DWORD *)v1 + 36);
  if ( byte_140C5AE14 )
  {
    v2 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140039B10) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&qword_140C21FA8;
      UserData.Size = 1;
      v6 = &v4;
      v7 = 8;
      EtwWrite(v2, &stru_140039B10, 0LL, 2u, &UserData);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1CB48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C1CB48);
  return sub_1402AFC00((ULONG_PTR)&qword_140C1CB48);
}
