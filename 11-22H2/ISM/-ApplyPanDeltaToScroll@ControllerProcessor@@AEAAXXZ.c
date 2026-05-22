/*
 * XREFs of ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x1801A3428
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x1801A5650 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x1801A39A4 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AURawMouseInputInfo@@K@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x1801A5F50 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 */

void __fastcall ControllerProcessor::ApplyPanDeltaToScroll(ControllerProcessor *this)
{
  float v1; // xmm1_4
  float v3; // xmm7_4
  int v4; // edi
  __int16 v5; // ax
  int v6; // eax
  int v7[23]; // [rsp+20h] [rbp-258h] BYREF
  __int16 v8; // [rsp+7Ch] [rbp-1FCh]
  __int16 v9; // [rsp+7Eh] [rbp-1FAh]
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v1 = *((float *)this + 107);
  if ( v1 != 0.0 || *((float *)this + 108) != 0.0 )
  {
    LODWORD(v3) = *((_DWORD *)this + 108) & _xmm;
    if ( COERCE_FLOAT(LODWORD(v1) & _xmm) <= v3 )
      v4 = (int)*((float *)this + 108);
    else
      LOWORD(v4) = -(__int16)(int)v1;
    ControllerProcessor::BuildMouseInputInfo(this, v7, 0LL);
    v5 = 2048;
    v9 = v4;
    if ( COERCE_FLOAT(LODWORD(v1) & _xmm) <= v3 )
      v5 = 1024;
    v8 = v5;
    v6 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v7);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6F5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v6,
        v7[0]);
    *((_DWORD *)this + 107) = 0;
    *((_DWORD *)this + 108) = 0;
  }
}
