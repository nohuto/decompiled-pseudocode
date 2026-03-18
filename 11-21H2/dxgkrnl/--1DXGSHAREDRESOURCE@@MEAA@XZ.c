/*
 * XREFs of ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C0186170
 * Callers:
 *     ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x1C000C150 (--_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z.c)
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C02D59A4 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C000A948 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C018D79C (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C01DD21C (--1DXGSHAREDRESOURCEACCESS@@QEAA@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0362350 (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(DXGSHAREDRESOURCE *this)
{
  void *v2; // rdi
  _QWORD *v3; // rdi
  struct _SLIST_ENTRY *v4; // rcx
  _QWORD **v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rsi
  char *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  void *v13; // rcx

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  operator delete[](*((void **)this + 13));
  operator delete[](*((void **)this + 15));
  v2 = (void *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(*((DXGSHAREDRESOURCEACCESS **)this + 19));
    operator delete(v2);
  }
  v3 = (_QWORD *)*((_QWORD *)this + 22);
  if ( v3 )
  {
    v4 = (struct _SLIST_ENTRY *)v3[1];
    if ( v4 )
      CRefCountedBuffer::RefCountedBufferRelease(v4);
    operator delete(v3);
  }
  v5 = (_QWORD **)((char *)this + 136);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    v8 = v6 - 6;
    *v5 = v7;
    v7[1] = v5;
    if ( v6 != (_QWORD *)48 )
    {
      DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION((DXGADAPTERALLOCATION *)(v6 - 6));
      operator delete(v8);
    }
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 16) )
  {
    WdLogSingleEntry1(1LL, 386LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_NtSecuritySharing || m_NtObjectRefCount == 0",
      386LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = (char *)*((_QWORD *)this + 21);
  if ( v9 != (char *)this + 160 )
    operator delete[](v9);
  if ( *((_DWORD *)this + 50) )
  {
    Global = DXGGLOBAL_GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 218), *((_DWORD *)this + 50));
    *((_DWORD *)this + 50) = 0;
  }
  v10 = *((_QWORD *)this + 10);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v11 + 16), (struct DXGADAPTER *)v11);
  }
  if ( (*((_DWORD *)this + 3) & 0x400) != 0 )
  {
    v13 = (void *)*((_QWORD *)this + 24);
    if ( v13 )
    {
      ObfDereferenceObject(v13);
      *((_QWORD *)this + 24) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 24) && (*((_DWORD *)this + 3) & 0x200) == 0 )
  {
    WdLogSingleEntry1(1LL, 408LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pSection == NULL || m_ExistingSysMem",
      408LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
