/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x180036320
 * Callers:
 *     ?OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x1800362F0 (-OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x1800365B0 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(
        CAudioSrv *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  GUID *v6; // rax
  GUID *v7; // rsi
  DWORD pid; // ebx
  __int64 v9; // r14
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *i; // rax
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 **v16; // rax
  GUID fmtid; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = (GUID *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    fmtid = a3->fmtid;
    pid = a3->pid;
    COnDeviceWorkItem::COnDeviceWorkItem(v6, a2, 4LL);
    *(_QWORD *)&v7->Data1 = &COnDevicePropertyChangedWorkItem::`vftable';
    v7[2] = fmtid;
    v7[3].Data1 = pid;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)v7->Data4 - 16LL) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BF,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL);
    (**(void (__fastcall ***)(void *, __int64))&v7->Data1)(v7, 1LL);
    return 2147942414LL;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v9 = *((_QWORD *)this + 20);
  if ( !*((_QWORD *)this + 23) )
  {
    v10 = *((unsigned int *)this + 48);
    if ( *((_DWORD *)this + 48) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v10 < 0x18 )
        goto LABEL_22;
      v10 *= 24LL;
    }
    v11 = malloc(v10 + 8);
    if ( v11 )
    {
      *v11 = *((_QWORD *)this + 22);
      *((_QWORD *)this + 22) = v11;
      v12 = (unsigned int)(*((_DWORD *)this + 48) - 1);
      for ( i = &v11[3 * v12 + 1]; (int)v12 >= 0; LODWORD(v12) = v12 - 1 )
      {
        *i = *((_QWORD *)this + 23);
        *((_QWORD *)this + 23) = i;
        i -= 3;
      }
      goto LABEL_12;
    }
LABEL_22:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_12:
  v14 = (__int64 *)*((_QWORD *)this + 23);
  v15 = *v14;
  v14[2] = (__int64)v7;
  *((_QWORD *)this + 23) = v15;
  v14[1] = v9;
  *v14 = 0LL;
  ++*((_QWORD *)this + 21);
  v16 = (__int64 **)*((_QWORD *)this + 20);
  if ( v16 )
    *v16 = v14;
  else
    *((_QWORD *)this + 19) = v14;
  *((_QWORD *)this + 20) = v14;
  if ( this != (CAudioSrv *)-112LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *((_QWORD *)this + 25));
  return 0LL;
}
