/*
 * XREFs of ??1bad_alloc@std@@UEAA@XZ @ 0x1800041F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  exception::~exception(this);
}
