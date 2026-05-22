/*
 * XREFs of ?ResetForNewShellInstance@SystemCursorService2@@UEAAJK@Z @ 0x180106150
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ @ 0x1801055AC (-EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ.c)
 *     ?ResetState@SystemCursor2@@QEAAJXZ @ 0x1801061F4 (-ResetState@SystemCursor2@@QEAAJXZ.c)
 */

__int64 __fastcall SystemCursorService2::ResetForNewShellInstance(SystemCursorService2 *this, int a2)
{
  __int64 ***v3; // rdi
  __int64 **i; // rbx
  int v5; // eax
  unsigned int v6; // esi
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 60) = a2;
  v3 = (__int64 ***)*((_QWORD *)this + 7);
  for ( i = *v3; i != (__int64 **)v3; i = (__int64 **)*i )
  {
    v5 = SystemCursor2::ResetState((SystemCursor2 *)i[3]);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice2.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  v8 = SystemCursorService2::EnumerateCursorsForShell((SystemCursorService2 *)((char *)this - 8));
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x42,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice2.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
