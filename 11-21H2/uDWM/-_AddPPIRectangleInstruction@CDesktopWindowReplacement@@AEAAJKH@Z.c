/*
 * XREFs of ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJKH@Z @ 0x1800B18D8
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180018AA4 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180047B34 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180095C14 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopWindowReplacement::_AddPPIRectangleInstruction(CDesktopWindowReplacement *this)
{
  int SystemMetrics; // ebx
  const char *v3; // r9
  unsigned int LastError; // ebx
  int v5; // eax
  __int64 v6; // rdx
  struct CSolidRectangleInstruction *v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h]
  float v10[8]; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = 0LL;
  v10[0] = (float)(GetSystemMetrics(76) + 10);
  v10[2] = v10[0] + 4.0;
  SystemMetrics = GetSystemMetrics(79);
  if ( SystemMetrics )
  {
    v10[1] = (float)(SystemMetrics + GetSystemMetrics(77) - 14);
    v10[3] = v10[1] + 4.0;
    *(_QWORD *)&v9 = 0x3F8000003F800000LL;
    *((_QWORD *)&v9 + 1) = 0x3F8000003F800000LL;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v8);
    v5 = CSolidRectangleInstruction::Create(&v8);
    LastError = v5;
    if ( v5 >= 0 )
    {
      *((_OWORD *)v8 + 2) = *(_OWORD *)v10;
      *((_OWORD *)v8 + 1) = v9;
      v5 = CRenderDataVisual::AddInstruction(this, v8);
      LastError = v5;
      if ( v5 >= 0 )
      {
        LastError = 0;
        goto LABEL_9;
      }
      v6 = 123LL;
    }
    else
    {
      v6 = 120LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x6D,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                  v3);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v8);
  return LastError;
}
