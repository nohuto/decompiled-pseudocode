/*
 * XREFs of ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18002DD00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x1800831C0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

Microsoft::WRL::Details::EventTargetArray *__fastcall Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(
        Microsoft::WRL::Details::EventTargetArray *this,
        char a2)
{
  __int64 v4; // rax
  _QWORD *v5; // r14
  __int64 v6; // rdi
  char *i; // rsi
  void *v8; // rdi
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    v5 = (_QWORD *)(v4 - 8);
    v6 = *(_QWORD *)(v4 - 8);
    for ( i = (char *)(v4 + 8 * v6); v6; --v6 )
    {
      i -= 8;
      Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>(i);
    }
    operator delete(v5, 8LL * *v5 + 8);
  }
  v8 = (void *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x28uLL);
  return this;
}
