/*
 * XREFs of ?GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14002B020
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::GetStreamingResourceManager(
        CSubmixImpl *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 38);
  if ( !v3 )
    return 2147500034LL;
  v8 = 0LL;
  v5 = (**v3)(v3, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v8);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x459,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v5);
  else
    v6 = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)v8 + 120LL))(
           v8,
           a2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v8);
  return v6;
}
