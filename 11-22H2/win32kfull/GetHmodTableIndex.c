/*
 * XREFs of GetHmodTableIndex @ 0x1C007163C
 * Callers:
 *     _RegisterUserApiHook @ 0x1C0048D78 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C00497B0 (_RegisterDManipHook.c)
 *     zzzSetWindowsHookEx @ 0x1C006F810 (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C0070AC4 (_SetWinEventHook.c)
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C006EFE0 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_CLIENTLIB@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C0071C4C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_CLIENTLIB@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall GetHmodTableIndex(__int64 a1)
{
  unsigned __int16 v2; // ax
  int v3; // ebx
  unsigned __int16 near **v4; // rcx
  unsigned __int16 near **v6; // rcx
  _BYTE v7[48]; // [rsp+30h] [rbp-48h] BYREF

  DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::ObjectLock<>((__int64)v7);
  v2 = UserAddAtomToAtomTableEx(UserLibmgmtAtomTableHandle, a1, 0LL, 2LL);
  if ( v2 )
  {
    v3 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v4 = &aatomSysLoaded;
      do
      {
        if ( *(_WORD *)v4 == v2 )
          break;
        ++v3;
        v4 = (unsigned __int16 near **)((char *)v4 + 2);
      }
      while ( v3 < catomSysTableEntries );
    }
    if ( v3 != catomSysTableEntries )
    {
      UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v2);
LABEL_8:
      DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::~ObjectLock<>(v7);
      return (unsigned int)v3;
    }
    v3 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v6 = &aatomSysLoaded;
      do
      {
        if ( !*(_WORD *)v6 )
          break;
        ++v3;
        v6 = (unsigned __int16 near **)((char *)v6 + 2);
      }
      while ( v3 < catomSysTableEntries );
    }
    if ( v3 != catomSysTableEntries )
    {
LABEL_14:
      *((_WORD *)&aatomSysLoaded + v3) = v2;
      *((_DWORD *)&acatomSysUse + v3) = 0;
      *((_DWORD *)&acatomSysDepends + v3) = 0;
      goto LABEL_8;
    }
    if ( v3 != 32 )
    {
      ++catomSysTableEntries;
      goto LABEL_14;
    }
    UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v2);
    UserSetLastError(8LL);
  }
  DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::~ObjectLock<>(v7);
  return 0xFFFFFFFFLL;
}
