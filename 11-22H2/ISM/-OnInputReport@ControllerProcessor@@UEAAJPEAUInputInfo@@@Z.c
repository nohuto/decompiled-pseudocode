/*
 * XREFs of ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801A4E20
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ @ 0x1801A37FC (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ.c)
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z @ 0x1801A42A8 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1801A4794 (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1801A47CC (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ @ 0x1801A5838 (-SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ @ 0x1801A5D34 (-SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdatePointerTimer@ControllerProcessor@@AEAAJXZ @ 0x1801A777C (-UpdatePointerTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C0B00 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::OnInputReport(ControllerProcessor *this, struct InputInfo *a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int updated; // eax
  int v14; // eax
  int v15; // eax
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v19; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    NonPointerProcessor::OnInputReport(this, a2);
    v4 = *(_OWORD *)((char *)this + 152);
    v5 = *(_OWORD *)((char *)this + 168);
    v19 = 0;
    *(_OWORD *)((char *)this + 216) = v4;
    v6 = *(_OWORD *)((char *)this + 184);
    *(_OWORD *)((char *)this + 232) = v5;
    v7 = *(_OWORD *)((char *)this + 200);
    *(_OWORD *)((char *)this + 248) = v6;
    *(_OWORD *)((char *)this + 264) = v7;
    *((_DWORD *)this + 38) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 39) = *((_DWORD *)a2 + 2);
    *((_QWORD *)this + 20) = *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 21) = *((_QWORD *)a2 + 4);
    *((_DWORD *)this + 44) = *((_DWORD *)a2 + 11);
    *(_OWORD *)((char *)this + 180) = *((_OWORD *)a2 + 3);
    *(_QWORD *)((char *)this + 196) = *((_QWORD *)a2 + 8);
    *((_DWORD *)this + 51) = *((_DWORD *)a2 + 18);
    *((_DWORD *)this + 52) = *((_DWORD *)a2 + 19);
    *((_BYTE *)this + 212) = *((_BYTE *)a2 + 80);
    v9 = ControllerProcessor::HandleTaskSwitcherChordedKey(this, &v19, v8);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A3,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v9,
        v17);
    if ( !v19 )
    {
      if ( *((_DWORD *)this + 70) )
      {
        if ( *((_BYTE *)this + 7808) )
        {
          v10 = ControllerProcessor::SendGameControllerAsVirtualKeys(this);
          if ( v10 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x2AF,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
              (const char *)(unsigned int)v10,
              v17);
        }
      }
      else
      {
        v11 = ControllerProcessor::SendGameControllerAsVirtualKeysForNavigation(this);
        if ( v11 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2B9,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v11,
            v17);
        v12 = ControllerProcessor::BuildAndSendMouseInputInfo(this);
        if ( v12 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x4C8,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v12,
            v17);
        if ( *((_DWORD *)this + 82) )
        {
          updated = ControllerProcessor::UpdatePointerTimer(this);
          if ( updated < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x2C2,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
              (const char *)(unsigned int)updated,
              v17);
        }
      }
    }
  }
  else if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    v14 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5952), a2);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2CD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v14,
        v17);
  }
  else if ( *(char *)a2 < 0 )
  {
    v15 = (unsigned int)InjectionDevice::Inject((ControllerProcessor *)((char *)this + 1272), a2);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2D5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v15,
        v17);
  }
  return 0LL;
}
