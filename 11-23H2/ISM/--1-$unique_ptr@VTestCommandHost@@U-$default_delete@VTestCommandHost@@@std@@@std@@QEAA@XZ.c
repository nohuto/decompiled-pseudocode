/*
 * XREFs of ??1?$unique_ptr@VTestCommandHost@@U?$default_delete@VTestCommandHost@@@std@@@std@@QEAA@XZ @ 0x18005566C
 * Callers:
 *     _dynamic_atexit_destructor_for__TestCommandHost::m_instance___0 @ 0x180070070 (_dynamic_atexit_destructor_for__TestCommandHost--m_instance___0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1TestCommandHost@@QEAA@XZ @ 0x180116894 (--1TestCommandHost@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<TestCommandHost>::~unique_ptr<TestCommandHost>(TestCommandHost **a1)
{
  TestCommandHost *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    TestCommandHost::~TestCommandHost(*a1);
    operator delete(v1, 0x88uLL);
  }
}
