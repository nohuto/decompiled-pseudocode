/*
 * XREFs of FreeWindowGCData @ 0x1C013CCB8
 * Callers:
 *     SetGestureConfigSettings @ 0x1C00509F8 (SetGestureConfigSettings.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1C00BC41C (-FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00E48F0 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 */

__int64 __fastcall FreeWindowGCData(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 result; // rax
  void **v7; // rbx
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r9
  void **v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v11 = 0LL;
  result = VWPLRemoveBase((struct tagVWPL **)(*(_QWORD *)(v4 + 424) + 880LL), a2, a1, a4, (unsigned __int64 *)&v11);
  if ( (_DWORD)result )
  {
    v7 = v11;
    if ( v11 )
    {
      if ( *v11 )
      {
        Win32FreePool(*v11);
        *v7 = 0LL;
      }
      v8 = v7[2];
      if ( v8 )
      {
        FreeWindowGCList((struct tagGESTURECONFIGLIST **)v7[2]);
        Win32FreePool(v8);
        v7[2] = 0LL;
      }
      Win32FreePool(v7);
      return VWPLRemoveBase((struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 880LL), v9, a1, v10, 0LL);
    }
  }
  return result;
}
