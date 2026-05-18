/*
 * XREFs of ?Render@Component@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x180081440
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyReadAccess@Component@Engine@Spectre@@IEBAXXZ @ 0x1800814EC (-VerifyReadAccess@Component@Engine@Spectre@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::Component::Render(
        Spectre::Engine::Component *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 result; // rax

  Spectre::Engine::Component::VerifyReadAccess(a1);
  result = *a4;
  if ( (*(_DWORD *)(*a4 + 440) & 0x10000) != 0 )
    return (*(__int64 (__fastcall **)(Spectre::Engine::Component *, __int64, __int64, __int64 *))(*(_QWORD *)a1 + 160LL))(
             a1,
             a2,
             a3,
             a4);
  return result;
}
