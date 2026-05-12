/*
 * XREFs of RaidSetTcgSpAuthorityKey @ 0x1C005B5F4
 * Callers:
 *     RaidAdapterStorageTcgSetSpAuthorityKey @ 0x1C005241C (RaidAdapterStorageTcgSetSpAuthorityKey.c)
 *     RaidUnitStorageTcgSetSpAuthorityKey @ 0x1C00544F8 (RaidUnitStorageTcgSetSpAuthorityKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RtlStringCbCopyA @ 0x1C00422B0 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x1C0059084 (RaidFillTcgAuthKey.c)
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
 *     TcglibOpenSession @ 0x1C0079C54 (TcglibOpenSession.c)
 *     TcglibSetAdmin1Pin @ 0x1C0079E88 (TcglibSetAdmin1Pin.c)
 *     TcglibSetSidPin @ 0x1C007A5FC (TcglibSetSidPin.c)
 */

__int64 __fastcall RaidSetTcgSpAuthorityKey(
        int *a1,
        int a2,
        int a3,
        unsigned int a4,
        const void *a5,
        unsigned int a6,
        const void *a7,
        NTSTRSAFE_PSTR pszDest)
{
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // ebx
  const char *v14; // r8
  _OWORD v15[2]; // [rsp+30h] [rbp-79h] BYREF
  int v16; // [rsp+50h] [rbp-59h]
  _OWORD v17[2]; // [rsp+58h] [rbp-51h] BYREF
  int v18; // [rsp+78h] [rbp-31h]
  _OWORD v19[3]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+7h]

  v18 = 0;
  v16 = 0;
  v20 = 0LL;
  v9 = *a1;
  memset(v17, 0, sizeof(v17));
  memset(v15, 0, sizeof(v15));
  memset(v19, 0, sizeof(v19));
  if ( v9 == 1431193940 )
  {
    if ( (*((_BYTE *)a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v10 = *((_QWORD *)a1 + 437);
    if ( !v10 )
      return (unsigned int)-1073741637;
    v11 = *((_QWORD *)a1 + 438);
  }
  else
  {
    if ( v9 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v10 = *((_QWORD *)a1 + 751);
    if ( !v10 )
      return (unsigned int)-1073741637;
    v11 = *((_QWORD *)a1 + 752);
  }
  if ( !v11 )
    return (unsigned int)-1073741637;
  if ( a2 )
  {
    if ( a2 != 1 || a3 != 1 )
      return (unsigned int)-1073741811;
    if ( !*(_BYTE *)(v11 + 53) )
      return (unsigned int)-1073741637;
  }
  else if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  v12 = RaidFillTcgAuthKey(v10, 1, a4, a5, (unsigned int *)v17, pszDest);
  if ( v12 >= 0 )
  {
    v12 = RaidFillTcgAuthKey(v10, 1, a6, a7, (unsigned int *)v15, pszDest);
    if ( v12 >= 0 )
    {
      v12 = TcglibOpenSession(v10, (unsigned int)(a2 != 0) + 1, v19);
      if ( v12 >= 0 )
      {
        if ( a2 )
        {
          v12 = TcglibSetAdmin1Pin(v10, v19, v17, v15);
          if ( v12 < 0 )
          {
            v14 = "TcglibSetAdmin1Pin";
            goto LABEL_26;
          }
        }
        else
        {
          v12 = TcglibSetSidPin(v10, v19, v17, v15);
          if ( v12 < 0 )
          {
            v14 = "TcglibSetSidPin";
LABEL_26:
            RtlStringCbCopyA(pszDest, 0x20uLL, v14);
          }
        }
        TcglibCloseSession(v10, v19);
      }
    }
  }
  return (unsigned int)v12;
}
