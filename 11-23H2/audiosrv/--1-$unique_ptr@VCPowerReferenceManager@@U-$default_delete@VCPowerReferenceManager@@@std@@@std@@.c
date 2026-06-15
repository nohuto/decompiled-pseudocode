/*
 * XREFs of ??1?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAA@XZ @ 0x1800663D8
 * Callers:
 *     _dynamic_atexit_destructor_for__g_powerReferenceManager___0 @ 0x18007E150 (_dynamic_atexit_destructor_for__g_powerReferenceManager___0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180119A1C (--1CPowerReferenceManager@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CPowerReferenceManager>::~unique_ptr<CPowerReferenceManager>(
        CPowerReferenceManager **a1)
{
  CPowerReferenceManager *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CPowerReferenceManager::~CPowerReferenceManager(*a1);
    operator delete(v1, 0x300uLL);
  }
}
