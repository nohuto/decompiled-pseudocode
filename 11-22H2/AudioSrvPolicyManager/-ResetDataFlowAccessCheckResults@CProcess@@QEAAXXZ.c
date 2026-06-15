/*
 * XREFs of ?ResetDataFlowAccessCheckResults@CProcess@@QEAAXXZ @ 0x1800292A8
 * Callers:
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18002994C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG0@Z @ 0x18002F158 (-ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcess::ResetDataFlowAccessCheckResults(CProcess *this)
{
  unsigned int v1; // eax
  _DWORD *v2; // rcx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 216);
  do
  {
    ++v1;
    *v2++ = -2147023728;
  }
  while ( v1 < 2 );
}
