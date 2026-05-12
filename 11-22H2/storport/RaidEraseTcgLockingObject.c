/*
 * XREFs of RaidEraseTcgLockingObject @ 0x1C0058E64
 * Callers:
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x1C0051100 (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1C0053174 (RaidUnitStorageTcgEraseLockingObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RtlStringCbCopyA @ 0x1C00422B0 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x1C0059084 (RaidFillTcgAuthKey.c)
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
 *     TcglibEraseBand @ 0x1C0079868 (TcglibEraseBand.c)
 *     TcglibOpenSession @ 0x1C0079C54 (TcglibOpenSession.c)
 */

__int64 __fastcall RaidEraseTcgLockingObject(int *a1, __int64 a2, __int64 a3, __int64 a4, NTSTRSAFE_PSTR pszDest)
{
  int v5; // eax
  unsigned int v6; // r14d
  __int64 v7; // rdi
  int v8; // ebx
  _OWORD v10[2]; // [rsp+30h] [rbp-41h] BYREF
  int v11; // [rsp+50h] [rbp-21h]
  _OWORD v12[3]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v13; // [rsp+88h] [rbp+17h]

  v11 = 0;
  v13 = 0LL;
  v5 = *a1;
  v6 = a2;
  memset(v10, 0, sizeof(v10));
  memset(v12, 0, sizeof(v12));
  if ( v5 == 1431193940 )
  {
    if ( (*((_BYTE *)a1 + 451) & 0x40) != 0 || (v7 = *((_QWORD *)a1 + 437)) == 0 || !*((_QWORD *)a1 + 438) )
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( v5 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v7 = *((_QWORD *)a1 + 751);
    if ( !v7 || !*((_QWORD *)a1 + 752) )
      return (unsigned int)-1073741637;
  }
  LOBYTE(a2) = 1;
  v8 = RaidFillTcgAuthKey(v7, a2, a3, a4, v10, pszDest);
  if ( v8 >= 0 )
  {
    v8 = TcglibOpenSession(v7, 2LL, v12);
    if ( v8 >= 0 )
    {
      v8 = TcglibEraseBand(v7, v12, v6);
      if ( v8 < 0 )
        RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibEraseBand");
      TcglibCloseSession(v7, v12);
    }
    else
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
    }
  }
  return (unsigned int)v8;
}
