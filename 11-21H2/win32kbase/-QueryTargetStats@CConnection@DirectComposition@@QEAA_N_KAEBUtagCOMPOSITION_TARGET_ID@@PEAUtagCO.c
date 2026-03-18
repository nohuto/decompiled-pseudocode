/*
 * XREFs of ?QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1C0080D28
 * Callers:
 *     NtDCompositionGetTargetStatistics @ 0x1C0080B80 (NtDCompositionGetTargetStatistics.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0081294 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x1C0081D30 (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 */

char __fastcall DirectComposition::CConnection::QueryTargetStats(
        DirectComposition::CConnection *this,
        unsigned __int64 a2,
        const struct tagCOMPOSITION_TARGET_ID *a3,
        struct tagCOMPOSITION_TARGET_STATS *a4)
{
  DirectComposition::CPushLockCriticalSection *v4; // r14
  char v9; // di
  unsigned __int64 v10; // r10
  unsigned int v11; // ebx
  unsigned int v12; // r11d
  __int64 v13; // r10
  __int64 v14; // rbp
  int v15; // r11d

  v4 = (DirectComposition::CConnection *)((char *)this + 328);
  v9 = 0;
  ExAcquirePushLockSharedEx((char *)this + 328, 0LL);
  *((_BYTE *)v4 + 8) = 0;
  v10 = 464 * (a2 % 0x12C);
  if ( *(_QWORD *)((char *)this + v10 + 384) == a2 )
  {
    v11 = *(_DWORD *)((char *)this + v10 + 380);
    v12 = 0;
    if ( v11 )
    {
      v13 = *(_QWORD *)((char *)this + v10 + 416);
      while ( 1 )
      {
        v14 = v12;
        if ( (unsigned __int8)tagCOMPOSITION_TARGET_ID::operator==(v13 + 104LL * v12, a3) )
          break;
        v12 = v15 + 1;
        if ( v12 >= v11 )
          goto LABEL_6;
      }
      v9 = 1;
      *(_OWORD *)a4 = *(_OWORD *)(104 * v14 + v13 + 32);
      *((_OWORD *)a4 + 1) = *(_OWORD *)(104 * v14 + v13 + 48);
      *((_OWORD *)a4 + 2) = *(_OWORD *)(104 * v14 + v13 + 64);
      *((_OWORD *)a4 + 3) = *(_OWORD *)(104 * v14 + v13 + 80);
      *((_QWORD *)a4 + 8) = *(_QWORD *)(104 * v14 + v13 + 96);
    }
  }
LABEL_6:
  DirectComposition::CPushLockCriticalSection::Release(v4);
  return v9;
}
