/*
 * XREFs of sub_14099EC88 @ 0x14099EC88
 * Callers:
 *     sub_14099F3A0 @ 0x14099F3A0 (sub_14099F3A0.c)
 *     sub_14099F6D8 @ 0x14099F6D8 (sub_14099F6D8.c)
 *     sub_14099FAA4 @ 0x14099FAA4 (sub_14099FAA4.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14099E7DC @ 0x14099E7DC (sub_14099E7DC.c)
 */

__int64 __fastcall sub_14099EC88(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  REGHANDLE v5; // rdi
  int v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+50h] [rbp-30h]
  int v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+5Ch] [rbp-24h]
  int *v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]

  v8 = a1;
  v7 = a3;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1CB48, 0LL);
  v4 = *(_QWORD *)(v8 + 776);
  if ( a2 )
  {
    ++*(_DWORD *)(a2 + 4LL * v7 + 192);
    if ( !v4 )
      goto LABEL_8;
    sub_14099E7DC(a2, v4, v7);
  }
  else if ( !v4 )
  {
    goto LABEL_8;
  }
  *(_DWORD *)(v4 + 152) |= 1 << v7;
  if ( byte_140C5AE14 )
  {
    v5 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_1400384A8) )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = v4 + 148;
      UserData.Size = 4;
      v10 = &v8;
      v13 = &v7;
      v14 = 4;
      v11 = 8;
      EtwWrite(v5, &stru_1400384A8, 0LL, 3u, &UserData);
    }
  }
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1CB48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C1CB48);
  return sub_1402AFC00((ULONG_PTR)&qword_140C1CB48);
}
