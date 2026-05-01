/*
 * XREFs of ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800031D8
 * Callers:
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800031A0 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180009000 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000AAC8 (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::EventTargetArray::~EventTargetArray(
        Microsoft::WRL::Details::EventTargetArray *this)
{
  __int64 v2; // rax
  void *v3; // r14
  __int64 v4; // rdi
  __int64 i; // rsi

  *(_QWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = (void *)(v2 - 8);
    v4 = *(_QWORD *)(v2 - 8);
    for ( i = v2 + 8 * v4; v4; --v4 )
    {
      i -= 8LL;
      Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>(i);
    }
    operator delete(v3);
  }
  operator delete(*((void **)this + 4));
  *((_DWORD *)this + 3) = -1073741823;
}
