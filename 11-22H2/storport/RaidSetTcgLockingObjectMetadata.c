/*
 * XREFs of RaidSetTcgLockingObjectMetadata @ 0x1C005B384
 * Callers:
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x1C005219C (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x1C0054260 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RtlStringCbCopyA @ 0x1C00422B0 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x1C0059084 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x1C00599DC (RaidGetTcgLockingObject.c)
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
 *     TcglibOpenSession @ 0x1C0079C54 (TcglibOpenSession.c)
 *     TcglibSetBandMetadata @ 0x1C007A358 (TcglibSetBandMetadata.c)
 *     TcglibStartTransaction @ 0x1C007A908 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x1C007A998 (TcglibStopTransaction.c)
 */

__int64 __fastcall RaidSetTcgLockingObjectMetadata(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        const void *a6,
        char *pszDest)
{
  size_t v9; // r12
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi
  int TcgLockingObject; // ebx
  __int64 v15; // r13
  unsigned int v16; // eax
  size_t v17; // r14
  void *Pool; // rax
  void *v19; // rsi
  int v20; // r9d
  _OWORD v23[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+78h] [rbp-88h]
  _BYTE v25[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+C8h] [rbp-38h]
  _OWORD v28[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v29; // [rsp+100h] [rbp+0h]

  v9 = a3;
  memset_0(v25, 0, 0x50uLL);
  v24 = 0;
  v29 = 0LL;
  v10 = *(_DWORD *)a1;
  memset(v23, 0, sizeof(v23));
  memset(v28, 0, sizeof(v28));
  if ( v10 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v11 = *(_QWORD *)(a1 + 3496);
    if ( !v11 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 3504);
  }
  else
  {
    if ( v10 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v11 = *(_QWORD *)(a1 + 6008);
    if ( !v11 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 6016);
  }
  if ( !v12 )
    return (unsigned int)-1073741637;
  v15 = *(_QWORD *)(a1 + 8);
  TcgLockingObject = RaidGetTcgLockingObject((int *)a1, a2, (__int64)v25, pszDest);
  if ( TcgLockingObject >= 0 )
  {
    if ( (v26 || v27)
      && (v16 = *(_DWORD *)(v12 + 140) / (unsigned int)*(unsigned __int16 *)(v12 + 136),
          v17 = v16,
          (unsigned int)v9 <= v16) )
    {
      Pool = (void *)RaidAllocatePool(256LL, v16, 1129603410LL, v15);
      v19 = Pool;
      if ( Pool )
      {
        memset_0(Pool, 0, v17);
        if ( (_DWORD)v9 )
          memmove(v19, a4, v9);
        TcgLockingObject = RaidFillTcgAuthKey(v11, 0, a5, a6, (unsigned int *)v23, pszDest);
        if ( TcgLockingObject >= 0 )
        {
          TcgLockingObject = TcglibOpenSession(v11, 2LL, v28);
          if ( TcgLockingObject >= 0 )
          {
            TcgLockingObject = TcglibStartTransaction(v11, v28);
            if ( TcgLockingObject >= 0 )
            {
              TcgLockingObject = TcglibSetBandMetadata(v11, (unsigned int)v28, a2, v20, v17, (__int64)v19, (__int64)v23);
              TcglibStopTransaction(v11, v28, (unsigned int)TcgLockingObject);
              if ( TcgLockingObject < 0 )
                RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibSetBandMetadata");
            }
            TcglibCloseSession(v11, v28);
          }
          else
          {
            RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
          }
        }
        ExFreePoolWithTag(v19, 0x43546152u);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)TcgLockingObject;
}
