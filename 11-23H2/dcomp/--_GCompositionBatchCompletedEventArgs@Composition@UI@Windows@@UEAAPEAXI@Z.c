/*
 * XREFs of ??_GCompositionBatchCompletedEventArgs@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180080F00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionBatchCompletedEventArgs *__fastcall Windows::UI::Composition::CompositionBatchCompletedEventArgs::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionBatchCompletedEventArgs *this,
        __int64 a2)
{
  __int64 v2; // rax
  char v4; // di
  HANDLE ProcessHeap; // rax

  v2 = *((_QWORD *)this + 14);
  v4 = a2;
  if ( (_UNKNOWN *)v2 != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( *(_DWORD *)(v2 + 4) && *(_BYTE *)(v2 + 8) )
      RaiseFailFastException(0LL, 0LL, 0);
    operator delete(*((void **)this + 14));
  }
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, a2);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
    {
      __global_delete(this, 0x90uLL);
    }
    else if ( this )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
