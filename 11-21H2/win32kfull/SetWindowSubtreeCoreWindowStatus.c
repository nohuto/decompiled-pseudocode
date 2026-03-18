/*
 * XREFs of SetWindowSubtreeCoreWindowStatus @ 0x1C009CA7C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     NtUserSetCoreWindow @ 0x1C009AB40 (NtUserSetCoreWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 */

__int64 __fastcall SetWindowSubtreeCoreWindowStatus(__int64 a1, int a2)
{
  __int64 result; // rax
  struct tagWND *v5; // rbx
  char v6; // bp

  result = a2 != 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x200u) >> 9 != (_DWORD)result
    && ((*(_DWORD *)(a1 + 320) & 0x1000) == 0 || a2) )
  {
    result = SetOrClrWF(a2, (struct tagWND *)a1, 0xD902u, 1);
    v5 = *(struct tagWND **)(a1 + 112);
LABEL_6:
    while ( v5 && v5 != (struct tagWND *)a1 )
    {
      if ( (*(_DWORD *)(a1 + 320) & 0x1000) == 0 || a2 )
      {
        v6 = 0;
        SetOrClrWF(a2, v5, 0xD902u, 1);
      }
      else
      {
        v6 = 1;
      }
      result = *((_QWORD *)v5 + 14);
      if ( !result || v6 )
      {
        result = *((_QWORD *)v5 + 11);
        if ( !result )
        {
          while ( 1 )
          {
            v5 = (struct tagWND *)*((_QWORD *)v5 + 13);
            if ( !v5 )
              return result;
            result = *((_QWORD *)v5 + 11);
            if ( result )
              break;
            if ( v5 == (struct tagWND *)a1 )
              goto LABEL_6;
          }
        }
      }
      v5 = (struct tagWND *)result;
    }
  }
  return result;
}
