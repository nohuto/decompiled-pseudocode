/*
 * XREFs of ??_GCompositionEffectSourceParameter@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800830A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1NestableRuntimeClass@WRL2@Microsoft@@UEAA@XZ @ 0x180055764 (--1NestableRuntimeClass@WRL2@Microsoft@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

HSTRING *__fastcall Windows::UI::Composition::CompositionEffectSourceParameter::`scalar deleting destructor'(
        HSTRING *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  WindowsDeleteString(this[6]);
  this[6] = 0LL;
  Microsoft::WRL2::NestableRuntimeClass::~NestableRuntimeClass((Microsoft::WRL2::NestableRuntimeClass *)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x38uLL);
    }
    else if ( this )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
