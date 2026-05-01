/*
 * XREFs of ?Position@TaskViewFrame@@UEAA?AUtagRECT@@XZ @ 0x1800405E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CRect@Geometry@@QEAA@VRect@Foundation@Windows@@@Z @ 0x180040650 (--0CRect@Geometry@@QEAA@VRect@Foundation@Windows@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

struct tagRECT *__fastcall TaskViewFrame::Position(TaskViewFrame *this, struct tagRECT *__return_ptr retstr)
{
  __int64 v2; // rcx
  int v4; // eax
  struct tagRECT v5; // xmm0
  struct tagRECT *result; // rax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 7);
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v2 + 48LL))(v2, &v7);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  v8 = v7;
  v5 = *(struct tagRECT *)Geometry::CRect::CRect(v9, &v8);
  result = retstr;
  *retstr = v5;
  return result;
}
