/*
 * XREFs of ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@Xaml@UI@Windows@@W4VerticalAlignment@567@AEAU2@@Z @ 0x180371A1C
 * Callers:
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180371E3C (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CJumpViewExperienceManager::CalcWindowPosition(
        int *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  int v9; // r10d
  int v10; // r8d
  int v11; // eax
  int v12; // edx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // eax
  int v25; // ecx
  __int64 result; // rax
  __int64 v27; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v29; // [rsp+38h] [rbp+10h]

  v29 = a2;
  if ( a6 == 1 )
  {
    v9 = HIDWORD(a2) - a4 / 2;
LABEL_5:
    v10 = a1[1];
    v11 = v10;
    v12 = a1[3];
    if ( v9 > v10 )
      v11 = v9;
    if ( a4 + v11 < v12 )
    {
      v13 = a1[1];
      if ( v9 > v10 )
        v13 = v9;
      v12 = a4 + v13;
    }
    v14 = v12 - a4;
    if ( v12 - a4 <= v10 )
      v14 = v10;
    goto LABEL_23;
  }
  if ( !a6 )
  {
    v9 = HIDWORD(a2);
    goto LABEL_5;
  }
  if ( a6 != 2 )
  {
    v27 = 863LL;
    goto LABEL_48;
  }
  v15 = a1[3];
  v16 = v15;
  v14 = a1[1];
  if ( SHIDWORD(a2) < v15 )
    v16 = HIDWORD(a2);
  if ( v16 - a4 > v14 )
  {
    v17 = v15;
    if ( SHIDWORD(a2) < v15 )
      v17 = HIDWORD(a2);
    v14 = v17 - a4;
  }
  v12 = v14 + a4;
  if ( v14 + a4 >= v15 )
    v12 = v15;
LABEL_23:
  a7[3] = v12;
  a7[1] = v14;
  switch ( a5 )
  {
    case 1:
      v18 = a3 / -2 + v29;
LABEL_27:
      v19 = *a1;
      v20 = a1[2];
      if ( v18 > *a1 )
        v19 = v18;
      if ( a3 + v19 < v20 )
      {
        v21 = *a1;
        if ( v18 > *a1 )
          v21 = v18;
        v20 = a3 + v21;
      }
      v22 = v20 - a3;
      if ( v20 - a3 <= *a1 )
        v22 = *a1;
LABEL_45:
      a7[2] = v20;
      result = 0LL;
      *a7 = v22;
      return result;
    case 0:
      v18 = v29;
      goto LABEL_27;
    case 2:
      v23 = a1[2];
      v24 = v23;
      v22 = *a1;
      if ( v29 < v23 )
        v24 = v29;
      if ( v24 - a3 > v22 )
      {
        v25 = a1[2];
        if ( v29 < v23 )
          v25 = v29;
        v22 = v25 - a3;
      }
      v20 = v22 + a3;
      if ( v22 + a3 >= v23 )
        v20 = a1[2];
      goto LABEL_45;
  }
  v27 = 885LL;
LABEL_48:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
