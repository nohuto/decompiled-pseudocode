/*
 * XREFs of ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x14001DCEC
 * Callers:
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14001DD60 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX_K@Z @ 0x14002F598 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x14002F8A8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::WRL::Details::EventTargetArray::~EventTargetArray(
        Microsoft::WRL::Details::EventTargetArray *this)
{
  char *v2; // rcx
  char *v3; // rbx

  *(_QWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v2 = (char *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = v2 - 8;
    `eh vector destructor iterator'(
      v2,
      8uLL,
      *((_QWORD *)v2 - 1),
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>);
    operator delete[](v3, 8LL * *(_QWORD *)v3 + 8);
  }
  operator delete[](*((void **)this + 4));
  *((_DWORD *)this + 3) = -1073741823;
}
