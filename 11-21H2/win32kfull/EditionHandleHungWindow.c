/*
 * XREFs of EditionHandleHungWindow @ 0x1C0119440
 * Callers:
 *     <none>
 * Callees:
 *     IsHungWindow @ 0x1C0076670 (IsHungWindow.c)
 *     ?ProcessHungWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144840 (-ProcessHungWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall EditionHandleHungWindow(__int64 a1)
{
  struct tagWND *v1; // rbx
  __int64 result; // rax

  v1 = *(struct tagWND **)(a1 + 80);
  result = *((_QWORD *)v1 + 3);
  if ( *(_QWORD *)(result + 40) )
  {
    result = IsHungWindow(*(struct tagWND **)(a1 + 80));
    if ( (_DWORD)result )
      return ProcessHungWindow(v1);
  }
  return result;
}
