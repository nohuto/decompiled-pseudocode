/*
 * XREFs of GetPreferenceFromRegistry @ 0x1800AD410
 * Callers:
 *     ?IsPreloadEnabled@InputAppPreloader@KeyboardHosting@@AEAA_NXZ @ 0x1800AD380 (-IsPreloadEnabled@InputAppPreloader@KeyboardHosting@@AEAA_NXZ.c)
 * Callees:
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x1800AD4F4 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 */

__int64 __fastcall GetPreferenceFromRegistry(HKEY a1)
{
  LSTATUS ValueW; // eax
  unsigned __int64 v2; // r9
  unsigned __int8 v3; // bl
  bool v5; // zf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v7; // [rsp+58h] [rbp+10h] BYREF
  DWORD v8; // [rsp+60h] [rbp+18h] BYREF
  DWORD v9; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  v9 = 4;
  ValueW = RegGetValueW(a1, L"Software\\Microsoft\\Input", L"IsInputAppPreloadEnabled", 0x10000012u, &v8, &v7, &v9);
  v2 = (unsigned int)ValueW;
  if ( ValueW )
  {
    if ( ValueW == 234 )
    {
      LOWORD(v2) = 13;
    }
    else if ( ValueW <= 0 )
    {
LABEL_5:
      v3 = v7;
      goto LABEL_6;
    }
LABEL_4:
    v2 = (unsigned __int16)v2 | 0x80070000;
    goto LABEL_5;
  }
  LOWORD(v2) = 13;
  if ( v8 == 4 )
  {
    if ( v7 > 1 )
      goto LABEL_4;
    v2 = 0LL;
    v5 = v7 == 1;
  }
  else
  {
    if ( v9 != 4 || (unsigned __int16)(v7 - 48) > 1u )
      goto LABEL_4;
    v2 = 0LL;
    v5 = (_WORD)v7 == 49;
  }
  v3 = v5;
LABEL_6:
  if ( (int)wil::details::in1diag3::Log_IfFailedWithExpected(
              retaddr,
              (void *)0x63,
              (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
              (const char *)v2,
              1,
              2) >= 0 )
    return (unsigned int)v3 + 1;
  else
    return 0LL;
}
