/*
 * XREFs of ??1?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ @ 0x18010F5A8
 * Callers:
 *     s_CreateHolographicDisplay @ 0x18010FAF0 (s_CreateHolographicDisplay.c)
 *     AudioServerGetEndpointVpoContext$dtor$4 @ 0x1801221C1 (AudioServerGetEndpointVpoContext$dtor$4.c)
 *     AudioServerGetStreamVpoContext$dtor$6 @ 0x18012380E (AudioServerGetStreamVpoContext$dtor$6.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CHMDManager@@QEAA@XZ @ 0x18010F5D8 (--1CHMDManager@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(CHMDManager **a1)
{
  CHMDManager *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CHMDManager::~CHMDManager(*a1);
    operator delete(v1);
  }
}
