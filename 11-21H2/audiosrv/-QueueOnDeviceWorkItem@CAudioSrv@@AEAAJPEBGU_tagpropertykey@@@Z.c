/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x180059A50
 * Callers:
 *     ?OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x180059A20 (-OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180059C50 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
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
  int v12; // r8d
  _QWORD *v13; // rax
  int i; // r8d
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 **v17; // rax
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
      (void *)0x69A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL,
      0);
    return 2147942414LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)v7->Data4 - 16LL) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL,
      (int)v7);
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
        goto LABEL_21;
      v10 *= 24LL;
    }
    v11 = malloc(v10 + 8);
    if ( v11 )
    {
      *v11 = *((_QWORD *)this + 22);
      *((_QWORD *)this + 22) = v11;
      v12 = *((_DWORD *)this + 48);
      v13 = &v11[3 * (unsigned int)(v12 - 1) + 1];
      for ( i = v12 - 1; i >= 0; --i )
      {
        *v13 = *((_QWORD *)this + 23);
        *((_QWORD *)this + 23) = v13;
        v13 -= 3;
      }
      goto LABEL_12;
    }
LABEL_21:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_12:
  v15 = (__int64 *)*((_QWORD *)this + 23);
  v16 = *v15;
  v15[2] = (__int64)v7;
  *((_QWORD *)this + 23) = v16;
  v15[1] = v9;
  *v15 = 0LL;
  ++*((_QWORD *)this + 21);
  v17 = (__int64 **)*((_QWORD *)this + 20);
  if ( v17 )
    *v17 = v15;
  else
    *((_QWORD *)this + 19) = v15;
  *((_QWORD *)this + 20) = v15;
  if ( this != (CAudioSrv *)-112LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *((_QWORD *)this + 25));
  return 0LL;
}
