/*
 * XREFs of ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C0325B58
 * Callers:
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C0055A48 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C000272C (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0044948 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C031EFF0 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ??1DDAMetaData@@QEAA@XZ @ 0x1C0325B24 (--1DDAMetaData@@QEAA@XZ.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C0328D38 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::~OUTPUTDUPL_CONTEXT(OUTPUTDUPL_CONTEXT *this, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  void *v5; // rsi
  __int64 v6; // rbp
  DDAMetaData **v7; // rdi
  __int64 v8; // r14
  DDAMetaData *v9; // rsi
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  AUTOEXPANDALLOCATION **v14; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v5 = (void *)*((_QWORD *)this + i + 6);
    if ( v5 )
    {
      DXGDXGIKEYEDMUTEX::~DXGDXGIKEYEDMUTEX(*((DXGDXGIKEYEDMUTEX **)this + i + 6));
      operator delete(v5);
      *((_QWORD *)this + i + 6) = 0LL;
    }
  }
  v6 = 2LL;
  v7 = (DDAMetaData **)((char *)this + 80);
  v8 = 2LL;
  do
  {
    v9 = *v7;
    if ( *v7 )
    {
      DDAMetaData::~DDAMetaData(*v7);
      operator delete(v9);
    }
    *v7 = 0LL;
    v7 += 12;
    --v8;
  }
  while ( v8 );
  if ( *((_DWORD *)this + 76) )
  {
    v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( v11 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    OUTPUTDUPL_CONTEXT::ReleaseSessionReference(this, SessionDataForSpecifiedSession);
    *((_DWORD *)this + 76) = 0;
  }
  v14 = (AUTOEXPANDALLOCATION **)((char *)this + 160);
  do
  {
    if ( *v14 )
    {
      AUTOEXPANDALLOCATION::`scalar deleting destructor'(*v14);
      *v14 = 0LL;
    }
    v14 += 12;
    --v6;
  }
  while ( v6 );
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventOutputDuplicationDestroy, a3, this);
  _InterlockedDecrement(&g_DbgGlobalContextCount);
}
