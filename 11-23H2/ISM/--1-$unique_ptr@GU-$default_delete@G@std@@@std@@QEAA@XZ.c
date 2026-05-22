/*
 * XREFs of ??1?$unique_ptr@GU?$default_delete@G@std@@@std@@QEAA@XZ @ 0x1800ECF70
 * Callers:
 *     _PnpApiWrapper::Details::EnumerateDevices_::_1_::dtor$0 @ 0x18006EAE0 (_PnpApiWrapper--Details--EnumerateDevices_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
