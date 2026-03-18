/*
 * XREFs of NtDCompositionWaitForCompositorClock @ 0x1C0212230
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1C0211064 (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?WaitForTick@CCompClockInfo@DirectComposition@@QEBAJIPEBQEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C0211090 (-WaitForTick@CCompClockInfo@DirectComposition@@QEBAJIPEBQEAXPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1C0213278 (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 */

__int64 __fastcall NtDCompositionWaitForCompositorClock(unsigned int a1, char *Src, unsigned int a3)
{
  int CompositorClockInfo; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  union _LARGE_INTEGER *v11; // r13
  DirectComposition::CConnection *DefaultConnection; // rdi
  DirectComposition::CCompClockInfo *v13; // rsi
  size_t v14; // r8
  DirectComposition::CCompClockInfo *v16; // [rsp+30h] [rbp-178h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-170h] BYREF
  void *v18[34]; // [rsp+50h] [rbp-158h] BYREF

  CompositorClockInfo = 0;
  memset(v18, 0, sizeof(v18));
  v11 = 0LL;
  v17[1] = 0LL;
  v17[0] = 0LL;
  DefaultConnection = 0LL;
  v13 = 0LL;
  v16 = 0LL;
  if ( a1 )
  {
    if ( a1 <= 0x20 && Src )
    {
      v14 = 8LL * a1;
      if ( &Src[v14] < Src || (unsigned __int64)&Src[v14] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v18, Src, v14);
    }
    else
    {
      CompositorClockInfo = -1073741811;
    }
  }
  if ( a3 != -1 )
  {
    v8 = -10000LL * a3;
    v17[0] = v8;
    v11 = (union _LARGE_INTEGER *)v17;
  }
  if ( CompositorClockInfo >= 0 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v8, v7, v9, v10);
    if ( !DefaultConnection )
      CompositorClockInfo = -1073741790;
    if ( CompositorClockInfo >= 0 )
    {
      CompositorClockInfo = DirectComposition::CConnection::GetCompositorClockInfo(DefaultConnection, &v16);
      v13 = v16;
      if ( CompositorClockInfo >= 0 )
        CompositorClockInfo = DirectComposition::CCompClockInfo::WaitForTick(v16, a1, v18, v11);
    }
  }
  if ( v13 )
    DirectComposition::CCompClockInfo::Release(v13);
  if ( DefaultConnection )
    DirectComposition::CConnection::Release(DefaultConnection, v7);
  return (unsigned int)CompositorClockInfo;
}
