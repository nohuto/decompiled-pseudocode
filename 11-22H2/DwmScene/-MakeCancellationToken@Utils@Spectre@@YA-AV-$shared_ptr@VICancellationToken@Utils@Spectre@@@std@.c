/*
 * XREFs of ?MakeCancellationToken@Utils@Spectre@@YA?AV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@XZ @ 0x1800E0304
 * Callers:
 *     ??0TaskHandler@ThreadPool@Utils@Spectre@@QEAA@XZ @ 0x1800DF608 (--0TaskHandler@ThreadPool@Utils@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0SimpleCancellationToken@Internal@Utils@Spectre@@QEAA@XZ @ 0x1800DFE7C (--0SimpleCancellationToken@Internal@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Utils::MakeCancellationToken(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x88uLL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::Internal::SimpleCancellationToken>::`vftable';
    Spectre::Utils::Internal::SimpleCancellationToken::SimpleCancellationToken((Spectre::Utils::Internal::SimpleCancellationToken *)(v2 + 4));
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
