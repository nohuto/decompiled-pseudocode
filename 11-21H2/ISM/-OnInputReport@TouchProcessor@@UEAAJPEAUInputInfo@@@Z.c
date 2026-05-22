/*
 * XREFs of ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801CC380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?OnInputReport@InputInfoValidator@@QEAAJPEAUInputInfo@@_N@Z @ 0x180197090 (-OnInputReport@InputInfoValidator@@QEAAJPEAUInputInfo@@_N@Z.c)
 */

__int64 __fastcall TouchProcessor::OnInputReport(InputInfoValidator **this, struct InputInfo *a2, bool a3)
{
  __int64 v6; // rdi
  InputInfoValidator *v7; // rax
  const char *v8; // r9
  _DWORD v9[4]; // [rsp+20h] [rbp-5C8h] BYREF
  _BYTE v10[1440]; // [rsp+30h] [rbp-5B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5E8h] [rbp+0h]

  if ( (*(_BYTE *)a2 & 8) != 0 )
  {
    InputInfoValidator::OnInputReport(this[9], a2, a3);
    memset_0(v10, 0, sizeof(v10));
    v6 = *((unsigned int *)a2 + 79);
    if ( (_DWORD)v6 )
      memcpy_0(v10, (char *)a2 + 320, 144 * v6);
    v9[3] = *((_DWORD *)a2 + 10);
    v7 = this[5];
    v9[0] = v6;
    v9[2] = 1;
    v9[1] = *((unsigned __int8 *)v7 + 40);
    if ( (unsigned int)MITSynthesizeTouchInput(v9) )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x87,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
               v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
