/*
 * XREFs of ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180015C00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180015D90 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::DestroyStream(CVADServer *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  std::_Ref_count_base *v5; // r14
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10; // ebx
  int v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 456));
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 63);
  v6 = 0;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  if ( this != (CVADServer *)-456LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 456));
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  if ( !*((_DWORD *)this + 46) )
  {
    v10 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B8,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      v11);
LABEL_21:
    v6 = v10;
    goto LABEL_14;
  }
  v7 = *((_QWORD *)this + 24);
  if ( !v7 )
  {
    v10 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B9,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      v11);
    goto LABEL_21;
  }
  if ( *(_BYTE *)(v7 + 496) )
  {
    v10 = -2005139336;
    goto LABEL_21;
  }
  if ( a2 != *(_QWORD *)(v7 + 48) )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12A5,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      v11);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7BA,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      v12);
    goto LABEL_21;
  }
  if ( *((_BYTE *)this + 188) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 232LL))(*((_QWORD *)this + 21));
    *((_BYTE *)this + 188) = 0;
    v7 = *((_QWORD *)this + 24);
  }
  CAudioSession::RemoveStream(*((CAudioSession **)this + 21), (struct CAudioStream *)v7, 1);
  v8 = *((_QWORD *)this + 24);
  *((_QWORD *)this + 24) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *((_DWORD *)this + 46) = 0;
LABEL_14:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v6;
}
