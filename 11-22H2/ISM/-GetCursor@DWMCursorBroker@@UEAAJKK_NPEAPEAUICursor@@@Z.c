/*
 * XREFs of ?GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z @ 0x180049AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCursorWorker@DWMCursorBroker@@AEAAJKKPEAPEAUICursor@@@Z @ 0x180049BC0 (-GetCursorWorker@DWMCursorBroker@@AEAAJKKPEAPEAUICursor@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::GetCursor(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct ICursor **a5)
{
  struct ICursor **v5; // rdi
  int v10; // eax
  int CursorWorker; // eax
  unsigned int v12; // ebx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v10 )
  {
    std::_Throw_C_error(v10);
    goto LABEL_8;
  }
  v5 = a5;
  *a5 = 0LL;
  if ( a2 == -1 )
  {
LABEL_8:
    (*(void (__fastcall **)(DWMCursorBroker *, struct ICursor **))(*(_QWORD *)this + 40LL))(this, v5);
    goto LABEL_6;
  }
  CursorWorker = DWMCursorBroker::GetCursorWorker(this, a2, a3, a5);
  v12 = CursorWorker;
  if ( CursorWorker >= 0 )
  {
LABEL_6:
    _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
    return 0LL;
  }
  if ( a4 )
  {
    CursorWorker = (*(__int64 (__fastcall **)(DWMCursorBroker *, struct ICursor **))(*(_QWORD *)this + 40LL))(this, a5);
    v12 = CursorWorker;
    if ( CursorWorker >= 0 )
      goto LABEL_6;
    v14 = 759LL;
  }
  else
  {
    v14 = 756LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)(unsigned int)CursorWorker);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v12;
}
