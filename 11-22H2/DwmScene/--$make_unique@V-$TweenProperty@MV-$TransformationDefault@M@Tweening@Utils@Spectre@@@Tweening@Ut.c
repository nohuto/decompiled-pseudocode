/*
 * XREFs of ??$make_unique@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@AEAV?$shared_ptr@M@std@@AEAMAEAMAEAV?$TransformationDefault@M@234@$0A@@std@@YA?AV?$unique_ptr@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@U?$default_delete@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@@std@@@0@AEAV?$shared_ptr@M@0@AEAM1AEAV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Z @ 0x180091A40
 * Callers:
 *     ??$GetTweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@YA?AV?$unique_ptr@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@U?$default_delete@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@@std@@@std@@V?$shared_ptr@M@4@MMV?$TransformationDefault@M@012@@Z @ 0x1800918DC (--$GetTweenProperty@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<Spectre::Utils::Tweening::TweenProperty<float,Spectre::Utils::Tweening::TransformationDefault<float>>,std::shared_ptr<float> &,float &,float &,Spectre::Utils::Tweening::TransformationDefault<float> &,0>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3,
        int *a4)
{
  _QWORD *v8; // r10
  int v9; // xmm0_4
  int v10; // xmm1_4
  __int64 v11; // rax
  _QWORD *result; // rax

  v8 = operator new(0x38uLL);
  if ( v8 )
  {
    v9 = *a4;
    v10 = *a3;
    *v8 = &Spectre::Utils::Tweening::TweenProperty<float,Spectre::Utils::Tweening::TransformationDefault<float>>::`vftable';
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
    if ( a2[1] )
    {
      v8[3] = *a2;
      v11 = a2[1];
      v8[4] = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
    }
    *((_DWORD *)v8 + 10) = v10;
    *((_DWORD *)v8 + 11) = v9;
  }
  else
  {
    v8 = 0LL;
  }
  result = a1;
  *a1 = v8;
  return result;
}
