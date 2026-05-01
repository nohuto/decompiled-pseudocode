/*
 * XREFs of ?get_DisplayName@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180044A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::get_DisplayName(
        Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer *this,
        HSTRING *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v3 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
      (const char *)0x80004003LL);
    return v3;
  }
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 8) + 72LL))(*((_QWORD *)this + 8), &v10);
  v3 = v4;
  if ( v4 < 0 )
  {
    v5 = 31LL;
LABEL_9:
    v6 = (unsigned int)v4;
    goto LABEL_10;
  }
  if ( v10 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 48LL))(v10, a2);
    v3 = v4;
    if ( v4 >= 0 )
      goto LABEL_11;
    v5 = 34LL;
    goto LABEL_9;
  }
  v3 = -2147467261;
  v6 = 2147500035LL;
  v5 = 32LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
    (const char *)v6);
LABEL_11:
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v3;
}
