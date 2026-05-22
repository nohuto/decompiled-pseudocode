/*
 * XREFs of ?SetCursorShellVisibility@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K_N@Z @ 0x1800EA0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A8D0C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemCursorController2::SetCursorShellVisibility(
        SystemCursorController2 *this,
        struct BamoSystemCursorControllerStub *a2,
        __int64 a3,
        char a4)
{
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  const char *v10; // r9
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    if ( *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                   + 36) != *((_DWORD *)this + 18) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        118LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller2.cpp",
        (const char *)0x80070005LL,
        v12);
    v8 = *((_QWORD *)this + 10);
    if ( !v8 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x77,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorcontroller2.cpp",
        (const char *)0x8000FFFFLL,
        v12);
    LOBYTE(v7) = a4;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, a3, v7);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        120LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller2.cpp",
        (const char *)(unsigned int)v9,
        v12);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x7A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorcontroller2.cpp",
      v10);
  }
  return 0LL;
}
