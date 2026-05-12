/*
 * XREFs of RaidSetTcgLockingObjectAuthKey @ 0x1C005B184
 * Callers:
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x1C0051F10 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x1C0053FBC (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RtlStringCbCopyA @ 0x1C00422B0 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x1C0059084 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x1C00599DC (RaidGetTcgLockingObject.c)
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
 *     TcglibOpenSession @ 0x1C0079C54 (TcglibOpenSession.c)
 *     TcglibSetBandPin @ 0x1C007A4AC (TcglibSetBandPin.c)
 */

__int64 __fastcall RaidSetTcgLockingObjectAuthKey(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        const void *a6,
        NTSTRSAFE_PSTR pszDest)
{
  int v11; // eax
  __int64 v12; // rdi
  int TcgLockingObject; // ebx
  _OWORD v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+50h] [rbp-B0h]
  _OWORD v17[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+78h] [rbp-88h]
  _BYTE v19[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-48h]
  int v21; // [rsp+C8h] [rbp-38h]
  _OWORD v22[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+100h] [rbp+0h]

  v18 = 0;
  memset(v17, 0, sizeof(v17));
  memset_0(v19, 0, 0x50uLL);
  v16 = 0;
  v23 = 0LL;
  v11 = *(_DWORD *)a1;
  memset(v15, 0, sizeof(v15));
  memset(v22, 0, sizeof(v22));
  if ( v11 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 451) & 0x40) != 0 || (v12 = *(_QWORD *)(a1 + 3496)) == 0 || !*(_QWORD *)(a1 + 3504) )
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( v11 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 6008);
    if ( !v12 || !*(_QWORD *)(a1 + 6016) )
      return (unsigned int)-1073741637;
  }
  TcgLockingObject = RaidGetTcgLockingObject((int *)a1, a2, (__int64)v19, pszDest);
  if ( TcgLockingObject >= 0 )
  {
    if ( v20 || v21 )
    {
      TcgLockingObject = RaidFillTcgAuthKey(v12, 0, a3, a4, (unsigned int *)v17, pszDest);
      if ( TcgLockingObject >= 0 )
      {
        TcgLockingObject = RaidFillTcgAuthKey(v12, 0, a5, a6, (unsigned int *)v15, pszDest);
        if ( TcgLockingObject >= 0 )
        {
          TcgLockingObject = TcglibOpenSession(v12, 2LL, v22);
          if ( TcgLockingObject >= 0 )
          {
            TcgLockingObject = TcglibSetBandPin(v12, (unsigned int)v22, a2, (unsigned int)v17, (__int64)v15);
            if ( TcgLockingObject < 0 )
              RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibSetBandPin");
            TcglibCloseSession(v12, v22);
          }
          else
          {
            RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)TcgLockingObject;
}
