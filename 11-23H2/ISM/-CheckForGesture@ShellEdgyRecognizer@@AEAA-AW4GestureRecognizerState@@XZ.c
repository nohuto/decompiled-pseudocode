/*
 * XREFs of ?CheckForGesture@ShellEdgyRecognizer@@AEAA?AW4GestureRecognizerState@@XZ @ 0x18017011C
 * Callers:
 *     ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x18017043C (-ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV-$optional@ULastUpData@ShellEd.c)
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800FCEB8 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall ShellEdgyRecognizer::CheckForGesture(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  int v4; // r9d
  int v5; // r10d
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  const char *v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( 1000000 * qword_180268040 < *(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32) )
  {
    result = 1LL;
    *(_DWORD *)(a1 + 8) = 1;
    return result;
  }
  v3 = *(_QWORD *)(a1 + 20);
  v4 = *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 24);
  if ( (int)((*(_QWORD *)(a1 + 40) - v3) * (*(_QWORD *)(a1 + 40) - v3)
           + (HIDWORD(*(_QWORD *)(a1 + 40)) - HIDWORD(v3)) * (HIDWORD(*(_QWORD *)(a1 + 40)) - HIDWORD(v3))) <= (unsigned __int64)(unsigned int)(dword_18026802C * dword_18026802C) )
    return 2LL;
  v6 = *(_DWORD *)(a1 + 4) - 1;
  if ( *(_DWORD *)(a1 + 4) == 1 )
  {
    v9 = v4;
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 2;
    if ( v8 )
    {
      if ( v8 != 4 )
        wil::details::in1diag3::FailFast_UnexpectedMsg(
          retaddr,
          (void *)0xBE,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\she"
               "lledgyrecognizer.cpp",
          "Unknown Edgy location",
          v10);
      v5 = -v5;
      goto LABEL_10;
    }
    v9 = -v4;
LABEL_13:
    v4 = v5;
    goto LABEL_14;
  }
LABEL_10:
  v9 = v5;
LABEL_14:
  *(_QWORD *)(a1 + 12) = __PAIR64__(v9, v4);
  if ( (float)((float)((float)v4 * *(float *)&dword_180268034)
             - (float)(COERCE_FLOAT(dword_180268030 ^ _xmm) * (float)v9)) < 0.0
    || (float)((float)((float)v4 * *(float *)&dword_18026803C) - (float)((float)v9 * *(float *)&dword_180268038)) > 0.0 )
  {
    *(_DWORD *)(a1 + 8) = 2;
    return 1LL;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    return 3LL;
  }
}
