/*
 * XREFs of ??_E_Node_if@std@@UEAAPEAXI@Z @ 0x1800438F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy_node@std@@YAXPEAV_Node_base@1@0@Z @ 0x18007D530 (-_Destroy_node@std@@YAXPEAV_Node_base@1@0@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

std::_Node_if *__fastcall std::_Node_if::`vector deleting destructor'(std::_Node_if *this, char a2)
{
  __int64 v2; // rdi
  _QWORD *v6; // rax
  struct std::_Node_base *v7; // rcx

  v2 = *((_QWORD *)this + 5);
  *(_QWORD *)this = &std::_Node_if::`vftable';
  while ( v2 )
  {
    v6 = (_QWORD *)(v2 + 40);
    v7 = (struct std::_Node_base *)v2;
    v2 = *(_QWORD *)(v2 + 40);
    *v6 = 0LL;
    std::_Destroy_node(v7, *((struct std::_Node_base **)this + 4));
  }
  *(_QWORD *)this = &std::_Node_endif::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
