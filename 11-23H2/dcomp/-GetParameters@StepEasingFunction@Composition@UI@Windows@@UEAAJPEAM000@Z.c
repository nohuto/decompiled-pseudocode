/*
 * XREFs of ?GetParameters@StepEasingFunction@Composition@UI@Windows@@UEAAJPEAM000@Z @ 0x18007A020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::StepEasingFunction::GetParameters(
        Windows::UI::Composition::StepEasingFunction *this,
        float *a2,
        float *a3,
        float *a4,
        float *a5)
{
  int v5; // r10d
  int v6; // ebx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  _BYTE *v12; // r8
  _BYTE *v13; // r11
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_DWORD *)this + 43);
  v6 = *((_DWORD *)this + 42);
  if ( v5 > v6 )
  {
    v15 = 276LL;
    goto LABEL_11;
  }
  v9 = *((_DWORD *)this + 44);
  if ( v9 > v6 )
  {
    v15 = 282LL;
    goto LABEL_11;
  }
  if ( v9 < v5 )
  {
    v15 = 287LL;
    goto LABEL_11;
  }
  v10 = 0;
  v11 = v9 - v5;
  if ( !v11 )
  {
    v12 = (char *)this + 180;
    if ( *((_BYTE *)this + 180) || (v13 = (char *)this + 181, *((_BYTE *)this + 181)) )
    {
      v15 = 295LL;
      goto LABEL_11;
    }
LABEL_7:
    *a2 = (float)v6;
    *a3 = (float)*((int *)this + 43);
    *a4 = (float)*((int *)this + 44);
    LOBYTE(v10) = *v12 != 0;
    *a5 = (float)((*v13 != 0 ? 2 : 0) + v10);
    return 0LL;
  }
  v12 = (char *)this + 180;
  v13 = (char *)this + 181;
  if ( v11 != 1 || !*((_BYTE *)this + 180) || !*((_BYTE *)this + 181) )
    goto LABEL_7;
  v15 = 301LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtstepeasingfunction.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
