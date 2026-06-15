/*
 * XREFs of ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140011DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400117E0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ??1CSystemEffectWrapper@@UEAA@XZ @ 0x140011E2C (--1CSystemEffectWrapper@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x14002E29C (-__global_delete@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
CSystemEffectWrapper *__fastcall CSystemEffectWrapper::`scalar deleting destructor'(
        CSystemEffectWrapper *this,
        char a2)
{
  void *v4; // rax
  int v5; // r8d

  CSystemEffectWrapper::~CSystemEffectWrapper(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x108uLL);
    }
    else
    {
      v4 = (void *)AERTGetDLLRTHeap();
      AERTFree(this, v4, v5);
    }
  }
  return this;
}
