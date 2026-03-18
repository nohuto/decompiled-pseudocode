/*
 * XREFs of ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x1802541F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CTableTransferEffect@@UEAA@XZ @ 0x1802541AC (--1CTableTransferEffect@@UEAA@XZ.c)
 */

CTableTransferEffect *__fastcall CTableTransferEffect::`scalar deleting destructor'(
        CTableTransferEffect *this,
        char a2)
{
  CTableTransferEffect::~CTableTransferEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
