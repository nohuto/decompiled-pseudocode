/*
 * XREFs of ??_EViewRectProvider@KeyboardHosting@@UEAAPEAXI@Z @ 0x1801BBDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

KeyboardHosting::ViewRectProvider *__fastcall KeyboardHosting::ViewRectProvider::`vector deleting destructor'(
        KeyboardHosting::ViewRectProvider *this,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 33);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x118uLL);
  return this;
}
