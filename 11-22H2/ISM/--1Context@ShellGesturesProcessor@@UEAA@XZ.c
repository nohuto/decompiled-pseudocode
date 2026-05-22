/*
 * XREFs of ??1Context@ShellGesturesProcessor@@UEAA@XZ @ 0x18017CD54
 * Callers:
 *     ??_GContext@ShellGesturesProcessor@@UEAAPEAXI@Z @ 0x18017CF80 (--_GContext@ShellGesturesProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800D0BC8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ShellGesturesContext@ShellGesturesProcessor@@QEAA@XZ @ 0x18017CDCC (--1ShellGesturesContext@ShellGesturesProcessor@@QEAA@XZ.c)
 */

void __fastcall ShellGesturesProcessor::Context::~Context(ShellGesturesProcessor::Context *this)
{
  std::_Ref_count_base *v2; // rcx
  _QWORD *v3; // rdi

  if ( *((_BYTE *)this + 424) )
  {
    v2 = (std::_Ref_count_base *)*((_QWORD *)this + 52);
    if ( v2 )
      std::_Ref_count_base::_Decwref(v2);
    v3 = (_QWORD *)*((_QWORD *)this + 50);
    if ( v3 )
    {
      if ( v3[4] )
        DestroyInteractionContext();
      operator delete(v3);
    }
  }
  ShellGesturesProcessor::ShellGesturesContext::~ShellGesturesContext((ShellGesturesProcessor::Context *)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
