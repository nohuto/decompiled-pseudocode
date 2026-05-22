/*
 * XREFs of ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x1801A3050
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x1801A5650 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800AB490 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x18019F188 (-OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z.c)
 *     ?OnPointerCrossedOverrideBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x18019F21C (-OnPointerCrossedOverrideBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x1801A2FC4 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x1801A4144 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z @ 0x1801A6050 (-SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x1801A6128 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall ControllerProcessor::ApplyNavigationDelta(ControllerProcessor *this)
{
  float v1; // xmm3_4
  float v3; // xmm2_4
  int v4; // ebx
  int v5; // eax
  char v6; // cl
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  LONG v10; // r14d
  int v11; // edi
  POINT v12; // rax
  struct tagPOINT v13; // rbx
  bool v14; // r15
  char v15; // r14
  int v16; // edi
  ControllerNavigationManager *ControllerNavigationManager; // rax
  __int64 v18; // r8
  const char *v19; // r9
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  ControllerNavigationManager *v23; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  int v26; // [rsp+70h] [rbp+40h] BYREF
  struct tagPOINT v27; // [rsp+78h] [rbp+48h] BYREF
  POINT v28; // [rsp+80h] [rbp+50h] BYREF

  v1 = *((float *)this + 92);
  if ( COERCE_FLOAT(LODWORD(v1) & _xmm) >= 1.0 || COERCE_FLOAT(*((_DWORD *)this + 93) & _xmm) >= 1.0 )
  {
    v3 = *((float *)this + 93);
    v4 = (int)v1;
    v27.y = (int)v3;
    v27.x = (int)v1;
    *((float *)this + 93) = v3 - (float)(int)v3;
    *((float *)this + 92) = v1 - (float)(int)v1;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 939) + 104LL))(
           *((_QWORD *)this + 939),
           *((unsigned int *)this + 710),
           1LL);
    v6 = v26;
    if ( v5 < 0 )
      v6 = 0;
    LOBYTE(v26) = v6;
    if ( v6 )
    {
      v7 = ControllerProcessor::SendPointerDelta(this, v27);
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x68F,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v7,
          (int)&v26);
      if ( (*((_BYTE *)this + 328) & 0x20) == 0 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 961) + 96LL))(*((_QWORD *)this + 961));
        if ( v8 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x693,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v8,
            (int)&v26);
      }
    }
    else
    {
      v9 = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this);
      *((_QWORD *)this + 45) = v9;
      v10 = v27.y + *((_DWORD *)this + 91);
      v11 = v4 + v9;
      v27.y = v10;
      v27.x = v4 + v9;
      v12 = ControllerProcessor::AdjustPointToBounds(v27, (struct tagRECT *)((char *)this + 312));
      v28 = v12;
      v13 = v12;
      if ( v12.x != v11 || (v14 = 0, v12.y != v10) )
        v14 = 1;
      if ( v12.x == *((_DWORD *)this + 78)
        || v12.x == *((_DWORD *)this + 80) - 1
        || v12.y == *((_DWORD *)this + 79)
        || (v15 = 0, v12.y == *((_DWORD *)this + 81) - 1) )
      {
        v15 = 1;
      }
      if ( *((_DWORD *)this + 90) != v12.x || (v16 = 0, *((_DWORD *)this + 91) != v12.y) )
        v16 = 1;
      if ( *((_BYTE *)this + 400) && v16 && PtInRect((const RECT *)this + 24, v12) )
      {
        ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
        ControllerNavigationManager::OnPointerCrossedOverrideBounds(ControllerNavigationManager, v13, v18, v19);
      }
      v20 = ControllerProcessor::SetPointerPosition(this, v13, v14);
      if ( v20 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x6BB,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v20,
          (int)&v26);
      if ( (*((_BYTE *)this + 328) & 0x20) == 0 )
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 961) + 80LL))(
                *((_QWORD *)this + 961),
                *((_QWORD *)this + 963),
                *((_QWORD *)this + 964));
        if ( v21 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x6C6,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v21,
            (int)&v26);
      }
      if ( v15 && v16 && (*((_BYTE *)this + 328) & 0x10) != 0 )
      {
        v22 = ((unsigned __int64)this + 336) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 42) >> 64);
        *(float *)&v27.x = (float)v13.x;
        *(float *)&v27.y = (float)v28.y;
        MapPointsByVisualIdentifier(0LL, v22, 1LL, &v27, &v28);
        v27.x = (int)*(float *)&v28.x;
        v27.y = (int)*(float *)&v28.y;
        v23 = ISMStatics::GetControllerNavigationManager();
        ControllerNavigationManager::OnPointerCrossedClientBounds(v23, v27);
      }
    }
  }
  return 0LL;
}
