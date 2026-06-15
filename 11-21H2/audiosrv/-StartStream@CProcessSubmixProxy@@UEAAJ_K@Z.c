/*
 * XREFs of ?StartStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x18000E5A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmixProxy::StartStream(unsigned __int64 this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // ecx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(this + 40) + 40LL))(*(_QWORD *)(this + 40));
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F0,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v2,
      v6);
    return v3;
  }
  else
  {
    v4 = *(_DWORD *)(this - 8 + 128);
    *(_DWORD *)(this - 8 + 128) = v4 + 1;
    if ( !v4 )
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(this - 8 + 200) + 328LL))(
        *(_QWORD *)(this - 8 + 200),
        this & -(__int64)(this != 8));
    return 0LL;
  }
}
