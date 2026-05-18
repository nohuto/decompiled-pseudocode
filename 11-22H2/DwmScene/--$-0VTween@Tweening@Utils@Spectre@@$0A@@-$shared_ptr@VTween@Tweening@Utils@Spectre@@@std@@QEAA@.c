/*
 * XREFs of ??$?0VTween@Tweening@Utils@Spectre@@$0A@@?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@QEAA@PEAVTween@Tweening@Utils@Spectre@@@Z @ 0x1800914E4
 * Callers:
 *     ??$CreateTween@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@Spectre@@QEAA?AV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@AEBU?$TweenOptions@M@123@V?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@5@V?$TransformationDefault@M@123@@Z @ 0x18009165C (--$CreateTween@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@TweenManager@Tweening@Utils@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??1?$_Temporary_owner@VTween@Tweening@Utils@Spectre@@@std@@QEAA@XZ @ 0x180091E48 (--1-$_Temporary_owner@VTween@Tweening@Utils@Spectre@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::shared_ptr<Spectre::Utils::Tweening::Tween>::shared_ptr<Spectre::Utils::Tweening::Tween>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = operator new(0x18uLL);
  if ( v4 )
  {
    v4[2] = a2;
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &std::_Ref_count<Spectre::Utils::Tweening::Tween>::`vftable';
  }
  v6 = 0LL;
  *a1 = a2;
  a1[1] = v4;
  std::_Temporary_owner<Spectre::Utils::Tweening::Tween>::~_Temporary_owner<Spectre::Utils::Tweening::Tween>(&v6);
  return a1;
}
