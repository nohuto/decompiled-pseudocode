/*
 * XREFs of ??_GCWICBitmapWrapper@@UEAAPEAXI@Z @ 0x18005ACD0
 * Callers:
 *     ??_ECWICBitmapWrapper@@WHA@EAAPEAXI@Z @ 0x180066720 (--_ECWICBitmapWrapper@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x18005A91C (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CWICBitmapWrapper::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CWICBitmapWrapper::~CWICBitmapWrapper(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
