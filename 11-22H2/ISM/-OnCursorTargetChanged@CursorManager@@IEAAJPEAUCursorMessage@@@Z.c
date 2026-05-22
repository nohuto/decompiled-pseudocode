/*
 * XREFs of ?OnCursorTargetChanged@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x18018378C
 * Callers:
 *     ?OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x180183578 (-OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z @ 0x1801E4E70 (-GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z.c)
 */

__int64 __fastcall CursorManager::OnCursorTargetChanged(CursorManager *this, struct CursorMessage *a2)
{
  int CursorDefaultState; // ebx
  __int64 v5; // rdx
  __int64 v7; // r8
  _BYTE v8[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CursorDefaultState = GetCursorDefaultState(*((unsigned int *)a2 + 4), v8);
  if ( CursorDefaultState < 0 )
  {
    v5 = 224LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)(unsigned int)CursorDefaultState);
    return (unsigned int)CursorDefaultState;
  }
  *((_QWORD *)a2 + 2) = v9;
  CursorDefaultState = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 32LL))(
                         *((_QWORD *)this + 7),
                         *(_QWORD *)((char *)a2 + 4),
                         *((_QWORD *)a2 + 2));
  if ( CursorDefaultState < 0 )
  {
    v5 = 227LL;
    goto LABEL_3;
  }
  *((_BYTE *)a2 + 16) = v8[1];
  LOBYTE(v7) = *((_BYTE *)a2 + 16);
  CursorDefaultState = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 7) + 16LL))(
                         *((_QWORD *)this + 7),
                         *(_QWORD *)((char *)a2 + 4),
                         v7);
  if ( CursorDefaultState < 0 )
  {
    v5 = 230LL;
    goto LABEL_3;
  }
  return 0LL;
}
