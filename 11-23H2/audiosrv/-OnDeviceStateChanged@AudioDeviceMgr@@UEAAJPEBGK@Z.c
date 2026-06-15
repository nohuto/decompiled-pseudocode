/*
 * XREFs of ?OnDeviceStateChanged@AudioDeviceMgr@@UEAAJPEBGK@Z @ 0x180001AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18001D510 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036700 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800679A2 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     memmove_0 @ 0x1800759B8 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800DF24C (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800E1328 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AudioDeviceMgr::OnDeviceStateChanged(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2,
        int a3)
{
  unsigned int v5; // ebp
  HANDLE ProcessHeap; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // r15
  __int64 *v9; // r12
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  __int64 v12; // rbx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rbp
  char *v15; // rcx
  __int64 v16; // r14
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rsi
  unsigned __int64 SpinCount_low; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // edx
  HANDLE *i; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG *LockSemaphore; // rcx
  void *v24; // rax
  _QWORD *p_Type; // rax
  HINSTANCE StringResourceInstance; // rax
  char *v28; // rdx

  v5 = 0;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v8 = v7;
  if ( v7 )
  {
    *v7 = &WorkItemBase::`vftable';
    v9 = v7 + 1;
    v10 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    *v9 = v10;
    if ( !a2 )
      goto LABEL_38;
    if ( (unsigned __int64)a2 < 0x10000 )
    {
      StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a2, v11);
      if ( StringResourceInstance )
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
          v8 + 1,
          StringResourceInstance,
          (unsigned __int16)a2);
      goto LABEL_16;
    }
    v12 = -1LL;
    do
      ++v12;
    while ( a2[v12] );
    if ( !(_DWORD)v12 )
    {
LABEL_38:
      ATL::CSimpleStringT<unsigned short,0>::Empty(v8 + 1);
LABEL_16:
      *v8 = &DeviceStateChangedWorkItem::`vftable';
      *((_DWORD *)v8 + 4) = a3;
      goto LABEL_17;
    }
    v13 = *(unsigned int *)(v10 - 16);
    v14 = ((__int64)a2 - v10) >> 1;
    if ( ((1 - *(_DWORD *)(v10 - 8)) | (*(_DWORD *)(v10 - 12) - (int)v12)) < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v8 + 1, (unsigned int)v12);
    v15 = (char *)*v9;
    v16 = 2LL * (int)v12;
    if ( v14 <= v13 )
    {
      v28 = &v15[2 * v14];
      if ( !v16 )
        goto LABEL_13;
      if ( v15 && v28 )
      {
        memmove_0(v15, v28, 2LL * (int)v12);
        goto LABEL_13;
      }
    }
    else
    {
      if ( !v16 )
        goto LABEL_13;
      if ( v15 )
      {
        memcpy_0(v15, a2, 2LL * (int)v12);
        goto LABEL_13;
      }
    }
    *(_DWORD *)_o__errno() = 22;
    invalid_parameter_noinfo();
LABEL_13:
    if ( (int)v12 < 0 || (int)v12 > *(_DWORD *)(*v9 - 12) )
      ATL::AtlThrowImpl(-2147024809);
    *(_DWORD *)(*v9 - 16) = v12;
    v5 = 0;
    *(_WORD *)(v16 + *v9) = 0;
    goto LABEL_16;
  }
  v8 = 0LL;
LABEL_17:
  if ( !v8 )
    return (unsigned int)-2147024882;
  EnterCriticalSection(this + 4);
  DebugInfo = this[3].DebugInfo;
  if ( !this[3].LockSemaphore )
  {
    SpinCount_low = LODWORD(this[3].SpinCount);
    if ( LODWORD(this[3].SpinCount) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / SpinCount_low < 0x18 )
        goto LABEL_42;
      v19 = 24 * SpinCount_low;
    }
    else
    {
      v19 = 0LL;
    }
    v20 = malloc(v19 + 8);
    if ( v20 )
    {
      *v20 = this[3].OwningThread;
      this[3].OwningThread = v20;
      v21 = LODWORD(this[3].SpinCount) - 1;
      for ( i = (HANDLE *)&v20[2 * v21 + 1 + (unsigned int)v21]; v21 >= 0; --v21 )
      {
        *i = this[3].LockSemaphore;
        this[3].LockSemaphore = i;
        i -= 3;
      }
      goto LABEL_25;
    }
LABEL_42:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_25:
  LockSemaphore = (struct _RTL_CRITICAL_SECTION_DEBUG *)this[3].LockSemaphore;
  v24 = *(void **)&LockSemaphore->Type;
  LockSemaphore->ProcessLocksList.Flink = (struct _LIST_ENTRY *)v8;
  this[3].LockSemaphore = v24;
  LockSemaphore->CriticalSection = (struct _RTL_CRITICAL_SECTION *)DebugInfo;
  *(_QWORD *)&LockSemaphore->Type = 0LL;
  ++*(_QWORD *)&this[3].LockCount;
  p_Type = &this[3].DebugInfo->Type;
  if ( p_Type )
    *p_Type = LockSemaphore;
  else
    this[2].SpinCount = (ULONG_PTR)LockSemaphore;
  this[3].DebugInfo = LockSemaphore;
  SetEvent(this[5].DebugInfo);
  LeaveCriticalSection(this + 4);
  return v5;
}
