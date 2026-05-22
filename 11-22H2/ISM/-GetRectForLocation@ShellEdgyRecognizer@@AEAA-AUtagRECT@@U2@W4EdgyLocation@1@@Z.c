/*
 * XREFs of ?GetRectForLocation@ShellEdgyRecognizer@@AEAA?AUtagRECT@@U2@W4EdgyLocation@1@@Z @ 0x18017E56C
 * Callers:
 *     ?HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA?AW4EdgyLocation@1@UtagPOINT@@@Z @ 0x18017E604 (-HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA-AW4EdgyLocation@1@UtagPOINT@@@Z.c)
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18010B948 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall ShellEdgyRecognizer::GetRectForLocation(__int64 a1, __int64 a2, _OWORD *a3, int a4)
{
  int v4; // r9d
  int v5; // r9d
  int v6; // r9d
  int v7; // ecx
  int v8; // ecx
  const char *v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_OWORD *)a2 = *a3;
  v4 = a4 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        if ( v6 != 4 )
          wil::details::in1diag3::FailFast_UnexpectedMsg(
            retaddr,
            (void *)0xF9,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\s"
                 "helledgyrecognizer.cpp",
            "Unknown Edgy location",
            v10);
        v7 = *(_DWORD *)(a2 + 12);
        *(_DWORD *)(a2 + 4) = v7 - ShellEdgyRecognizer::s_edgyParameters;
        *(_DWORD *)(a2 + 12) = v7 + 1;
      }
      else
      {
        v8 = *(_DWORD *)(a2 + 8);
        *(_DWORD *)a2 = v8 - ShellEdgyRecognizer::s_edgyParameters;
        *(_DWORD *)(a2 + 8) = v8 + 1;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 12) = ShellEdgyRecognizer::s_edgyParameters + *(_DWORD *)(a2 + 4);
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) = ShellEdgyRecognizer::s_edgyParameters + *(_DWORD *)a2;
  }
  return a2;
}
