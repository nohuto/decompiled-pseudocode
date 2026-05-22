/*
 * XREFs of ?Initialize@TestCommandHost@@SAXXZ @ 0x180035CD8
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x18004FE08 (-Initialize@InputStateManager@@IEAAJXZ.c)
 * Callees:
 *     ??0TestCommandHost@@AEAA@XZ @ 0x180035D24 (--0TestCommandHost@@AEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ??1TestCommandHost@@QEAA@XZ @ 0x180124904 (--1TestCommandHost@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void TestCommandHost::Initialize(void)
{
  TestCommandHost *v0; // rax
  TestCommandHost *v1; // rbx
  TestCommandHost *v2; // [rsp+30h] [rbp+8h]

  if ( !TestCommandHost::m_instance )
  {
    v2 = (TestCommandHost *)operator new(0x88uLL);
    v0 = TestCommandHost::TestCommandHost(v2);
    v1 = TestCommandHost::m_instance;
    TestCommandHost::m_instance = v0;
    if ( v1 )
    {
      TestCommandHost::~TestCommandHost(v1);
      operator delete(v1, 0x88uLL);
    }
  }
}
