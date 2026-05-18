/*
 * XREFs of ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@std@@$0A@@?$vector@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V?$allocator@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@1@V21@1@Z @ 0x1800E06BC
 * Callers:
 *     ?Update@TweenManager@Tweening@Utils@Spectre@@QEAAXXZ @ 0x1800E07B0 (-Update@TweenManager@Tweening@Utils@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??$_Insert_range@PEAV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@?$vector@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V?$allocator@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@1@PEAV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@1@1Uforward_iterator_tag@1@@Z @ 0x1800E0510 (--$_Insert_range@PEAV-$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@-$vector@V-$shared_ptr@V.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<Spectre::Utils::Tweening::Tween>>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Utils::Tweening::Tween>>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3,
        char *a4,
        char *a5)
{
  unsigned __int64 v5; // rbx
  _QWORD *result; // rax

  v5 = (unsigned __int64)&a3[-*a1];
  std::vector<std::shared_ptr<Spectre::Utils::Tweening::Tween>>::_Insert_range<std::shared_ptr<Spectre::Utils::Tweening::Tween> *>(
    (__int64)a1,
    a3,
    a4,
    a5);
  result = a2;
  *a2 = *a1 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  return result;
}
