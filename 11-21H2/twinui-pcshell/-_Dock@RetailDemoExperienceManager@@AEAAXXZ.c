/*
 * XREFs of ?_Dock@RetailDemoExperienceManager@@AEAAXXZ @ 0x1803840B0
 * Callers:
 *     ?Dock@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x180382BF0 (-Dock@RetailDemoExperienceManager@@UEAAJHHHH@Z.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x180384B5C (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x180383F08 (-_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x180384888 (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x1803848C8 (-_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall RetailDemoExperienceManager::_Dock(RetailDemoExperienceManager *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // r8d
  int v7; // edx
  LONG v8; // ecx
  int v9; // r10d
  LONG v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  LONG v16; // eax
  int v17; // r10d
  int v18; // r9d
  int v19; // [rsp+20h] [rbp-30h]
  struct tagRECT v20; // [rsp+20h] [rbp-30h]
  struct tagRECT pvParam; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  if ( !*((_QWORD *)this + 25) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x12F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL,
      v19);
  v2 = *((_DWORD *)this + 89);
  v3 = *((_DWORD *)this + 88);
  if ( *((_BYTE *)this + 382) )
  {
    v4 = v3 + 2 * v2;
    v5 = 0;
  }
  else
  {
    v5 = v3 + 2 * v2;
    v4 = 0;
  }
  *((_DWORD *)this + 100) = v5;
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 102) = v4;
  *((_DWORD *)this + 103) = 0;
  if ( *((_BYTE *)this + 381) )
  {
    pvParam = (struct tagRECT)*((_OWORD *)this + 25);
    RetailDemoExperienceManager::_AdjustWorkingArea(this, &pvParam);
    v6 = *((_DWORD *)this + 89);
    v7 = *((_DWORD *)this + 88);
    if ( *((_BYTE *)this + 382) )
      v8 = v6 + *((_DWORD *)this + 106);
    else
      v8 = *((_DWORD *)this + 104) - v6 - v7;
    v9 = *((_DWORD *)this + 105);
    v10 = v7 + v8;
    v11 = *((_DWORD *)this + 107);
    v20.right = v10;
    v12 = *((_DWORD *)this + 90);
    v20.left = v8;
    v20.top = v6 + v9;
    if ( v12 < 0 )
    {
      v13 = v11 - v6;
LABEL_24:
      v20.bottom = v13;
      goto LABEL_25;
    }
    if ( v12 + v6 + v9 >= v11 - 2 * v6 - v9 )
    {
      v13 = v11 - 2 * v6 - v9;
      goto LABEL_24;
    }
    v20.bottom = v12 + v6 + v9;
  }
  else
  {
    RetailDemoExperienceManager::_RestoreWorkingArea(this);
    if ( !SystemParametersInfoW(0x30u, 0, &pvParam, 0) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x142,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)0x8000FFFFLL,
        0);
    v14 = *((_DWORD *)this + 89);
    v15 = *((_DWORD *)this + 88);
    if ( *((_BYTE *)this + 382) )
      v16 = pvParam.right - v14 - v15;
    else
      v16 = v14 + pvParam.left;
    v17 = *((_DWORD *)this + 90);
    v20.left = v16;
    v20.right = v15 + v16;
    v18 = v14 + pvParam.top;
    v20.top = v14 + pvParam.top;
    if ( v17 >= 0 )
    {
      v13 = pvParam.bottom - 2 * v14 - pvParam.top;
      if ( v18 + v17 < v13 )
        v13 = v18 + v17;
      goto LABEL_24;
    }
    v20.bottom = pvParam.bottom - v14;
  }
LABEL_25:
  pvParam = v20;
  RetailDemoExperienceManager::_SetFrameRect(this, &pvParam);
}
