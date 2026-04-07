/*
 * XREFs of ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x18005AC10
 * Callers:
 *     ??_ECBitmapLock@@WBA@EAAPEAXI@Z @ 0x180066B40 (--_ECBitmapLock@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CBitmapLock@@UEAA@XZ @ 0x18005A1E8 (--1CBitmapLock@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

CBitmapLock *__fastcall CBitmapLock::`scalar deleting destructor'(CBitmapLock *this, char a2)
{
  CBitmapLock::~CBitmapLock(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CBitmapLock *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
