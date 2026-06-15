/*
 * XREFs of ??1?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAA@XZ @ 0x1801070CC
 * Callers:
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$1 @ 0x180107FFC (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CAppSubmixClientContext@@QEAA@XZ @ 0x18010714C (--1CAppSubmixClientContext@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CAppSubmixClientContext>::~unique_ptr<CAppSubmixClientContext>(
        CAppSubmixClientContext **a1)
{
  CAppSubmixClientContext *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CAppSubmixClientContext::~CAppSubmixClientContext(*a1);
    operator delete(v1);
  }
}
