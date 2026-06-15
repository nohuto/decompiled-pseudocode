/*
 * XREFs of ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x14003988C
 * Callers:
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1400399F0 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x140028500 (--_V@YAXPEAX@Z.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x140037E2C (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall Microsoft::WRL::Details::EventTargetArray::~EventTargetArray(
        Microsoft::WRL::Details::EventTargetArray *this)
{
  char *v2; // rcx

  *(_QWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v2 = (char *)*((_QWORD *)this + 2);
  if ( v2 )
    Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'(v2);
  operator delete[](*((void **)this + 4));
  *((_DWORD *)this + 3) = -1073741823;
}
