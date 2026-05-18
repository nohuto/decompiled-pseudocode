/*
 * XREFs of ?_Destroy@?$_Ref_count@VScene@Engine@Spectre@@@std@@EEAAXXZ @ 0x1800428C0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GScene@Engine@Spectre@@QEAAPEAXI@Z @ 0x180040204 (--_GScene@Engine@Spectre@@QEAAPEAXI@Z.c)
 */

void **__fastcall std::_Ref_count<Spectre::Engine::Scene>::_Destroy(__int64 a1)
{
  void **v1; // rcx
  void **result; // rax

  v1 = *(void ***)(a1 + 16);
  if ( v1 )
    return Spectre::Engine::Scene::`scalar deleting destructor'(v1);
  return result;
}
