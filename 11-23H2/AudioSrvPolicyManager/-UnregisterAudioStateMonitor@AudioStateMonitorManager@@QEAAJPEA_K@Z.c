/*
 * XREFs of ?UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z @ 0x180013DA0
 * Callers:
 *     ?UnregisterAudioStateMonitor@CProcess@@UEAAJPEA_K@Z @ 0x18002A7B0 (-UnregisterAudioStateMonitor@CProcess@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1AudioStateMonitor@@QEAA@XZ @ 0x180024EB4 (--1AudioStateMonitor@@QEAA@XZ.c)
 */

__int64 __fastcall AudioStateMonitorManager::UnregisterAudioStateMonitor(
        AudioStateMonitorManager *this,
        unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // r10
  __int64 v6; // r8
  unsigned __int64 i; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // rdi
  unsigned __int64 j; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  AudioStateMonitor *v18; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = 0xCBF29CE484222325uLL;
  v21 = v2;
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v8 = *((unsigned __int8 *)a2 + i);
    v6 = 0x100000001B3LL * (v8 ^ v6);
  }
  v9 = *((_QWORD *)this + 10);
  v10 = v6 & *((_QWORD *)this + 13);
  v11 = (_QWORD *)*((_QWORD *)this + 8);
  v12 = 2 * v10;
  v13 = *(_QWORD **)(v9 + 8 * v12 + 8);
  if ( v13 == v11 )
  {
LABEL_7:
    v13 = 0LL;
  }
  else
  {
    while ( *a2 != v13[2] )
    {
      if ( v13 == *(_QWORD **)(v9 + 8 * v12) )
        goto LABEL_7;
      v13 = (_QWORD *)v13[1];
    }
  }
  if ( !v13 || v13 == v11 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (int)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
      (const char *)0x80070490LL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
    return 2147943568LL;
  }
  else
  {
    for ( j = 0LL; j < 8; ++j )
    {
      v15 = *((unsigned __int8 *)v13 + j + 16);
      v5 = 0x100000001B3LL * (v15 ^ v5);
    }
    v16 = 2 * (v5 & *((_QWORD *)this + 13));
    if ( *(_QWORD **)(v9 + 16 * (v5 & *((_QWORD *)this + 13)) + 8) == v13 )
    {
      if ( *(_QWORD **)(v9 + 16 * (v5 & *((_QWORD *)this + 13))) == v13 )
        *(_QWORD *)(v9 + 16 * (v5 & *((_QWORD *)this + 13))) = v11;
      else
        v11 = (_QWORD *)v13[1];
      *(_QWORD *)(v9 + 8 * v16 + 8) = v11;
    }
    else if ( *(_QWORD **)(v9 + 16 * (v5 & *((_QWORD *)this + 13))) == v13 )
    {
      *(_QWORD *)(v9 + 16 * (v5 & *((_QWORD *)this + 13))) = *v13;
    }
    v17 = *v13;
    --*((_QWORD *)this + 9);
    *(_QWORD *)v13[1] = v17;
    *(_QWORD *)(v17 + 8) = v13[1];
    v18 = (AudioStateMonitor *)v13[3];
    v13[3] = 0LL;
    if ( v18 )
    {
      AudioStateMonitor::~AudioStateMonitor(v18);
      operator delete(v18, 0x20uLL);
    }
    operator delete(v13, 0x20uLL);
    *a2 = 0LL;
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
}
