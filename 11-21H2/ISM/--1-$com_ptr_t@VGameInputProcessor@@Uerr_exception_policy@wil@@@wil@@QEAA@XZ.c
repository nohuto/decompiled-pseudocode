/*
 * XREFs of ??1?$com_ptr_t@VGameInputProcessor@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180043C5C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
unsigned int __fastcall wil::com_ptr_t<GameInputProcessor,wil::err_exception_policy>::~com_ptr_t<GameInputProcessor,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int result; // eax

  v1 = *a1;
  if ( v1 )
    return RefCountedObject::Release((RefCountedObject *)(v1 + 8));
  return result;
}
