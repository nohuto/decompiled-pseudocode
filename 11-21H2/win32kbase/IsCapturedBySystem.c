/*
 * XREFs of IsCapturedBySystem @ 0x1C00D0410
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003B608 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 */

bool __fastcall IsCapturedBySystem(__int64 a1)
{
  __int64 MouseProcessor; // rax
  __int64 v3; // r8
  char v4; // bl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  v4 = 0;
  if ( MouseProcessor )
    return CInputDest::operator==((unsigned int *)(MouseProcessor + 3576), a1, v3) != 0;
  return v4;
}
