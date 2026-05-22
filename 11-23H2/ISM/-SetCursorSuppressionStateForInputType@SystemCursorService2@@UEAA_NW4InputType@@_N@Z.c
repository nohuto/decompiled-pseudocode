/*
 * XREFs of ?SetCursorSuppressionStateForInputType@SystemCursorService2@@UEAA_NW4InputType@@_N@Z @ 0x180106640
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InputTypeToCursorDeviceTypeId@SystemCursorService2@@CA?AW4CursorDeviceTypeId@@W4InputType@@@Z @ 0x180105910 (-InputTypeToCursorDeviceTypeId@SystemCursorService2@@CA-AW4CursorDeviceTypeId@@W4InputType@@@Z.c)
 *     ?SetSuppressionState@SystemCursor2@@QEAAJ_N@Z @ 0x180106C54 (-SetSuppressionState@SystemCursor2@@QEAAJ_N@Z.c)
 */

char __fastcall SystemCursorService2::SetCursorSuppressionStateForInputType(__int64 a1, int a2, bool a3)
{
  char v4; // si
  int v6; // eax
  _QWORD *v7; // rdi
  int v8; // ebp
  _QWORD *i; // rbx
  SystemCursor2 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0;
  v6 = SystemCursorService2::InputTypeToCursorDeviceTypeId(a2);
  v7 = *(_QWORD **)(a1 + 56);
  v8 = v6;
  for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
  {
    v10 = (SystemCursor2 *)i[3];
    if ( *((_DWORD *)v10 + 4) == v8 )
    {
      v11 = SystemCursor2::SetSuppressionState(v10, a3);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          152LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice2.cpp",
          (const char *)(unsigned int)v11);
      v4 = 1;
    }
  }
  return v4;
}
