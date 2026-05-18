/*
 * XREFs of ??$_Sort_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@0_JP6A_NAEBV10@2@Z@Z @ 0x180071A1C
 * Callers:
 *     _anonymous_namespace_::GetEffects__lambda_efc75f2d1525ae07ca13eee5dee967eb___ @ 0x1800710F0 (_anonymous_namespace_--GetEffects__lambda_efc75f2d1525ae07ca13eee5dee967eb___.c)
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@0_JP6A_NAEBV10@2@Z@Z @ 0x180071A1C (--$_Sort_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV-$s.c)
 *     ?SortLights@LightGatherer@Engine@Spectre@@CAXAEAV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@@Z @ 0x1800A4740 (-SortLights@LightGatherer@Engine@Spectre@@CAXAEAV-$vector@V-$shared_ptr@VLight@Engine@Spectre@@@.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@QEAV10@0P6A_NAEBV10@1@Z@Z @ 0x180071364 (--$_Insertion_sort_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@.c)
 *     ??$_Make_heap_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@0P6A_NAEBV10@1@Z@Z @ 0x18007146C (--$_Make_heap_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPE.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YA?AU?$pair@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@0@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@0@0P6A_NAEBV20@1@Z@Z @ 0x1800715D0 (--$_Partition_by_median_guess_unchecked@PEAV-$shared_ptr@VImageProcessingEffect@Engine@Spectre@@.c)
 *     ??$_Sort_heap_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@0P6A_NAEBV10@1@Z@Z @ 0x18007194C (--$_Sort_heap_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPE.c)
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@0_JP6A_NAEBV10@2@Z@Z @ 0x180071A1C (--$_Sort_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV-$s.c)
 */

__int64 *__fastcall std::_Sort_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64))
{
  __int64 *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-10h]

  while ( (__int64)(((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFF0uLL) > 512 )
  {
    if ( a3 <= 0 )
    {
      std::_Make_heap_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
        (__int64)a1,
        (__int64)a2,
        (__int64)a4);
      return (__int64 *)std::_Sort_heap_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
                          a1,
                          (__int64)a2,
                          a4);
    }
    std::_Partition_by_median_guess_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,bool (*)(std::shared_ptr<Spectre::Engine::ImageProcessingEffect> const &,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> const &)>(
      (unsigned __int64 *)&v9,
      (unsigned __int64)a1,
      (unsigned __int64)a2,
      (unsigned __int8 (__fastcall *)(unsigned __int64, unsigned __int64))a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)(((char *)v9 - (char *)a1) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)(((char *)a2 - (char *)v10) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      std::_Sort_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
        v10,
        a2,
        a3,
        a4,
        (_DWORD)v9);
      a2 = v9;
    }
    else
    {
      std::_Sort_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
        a1,
        v9,
        a3,
        a4,
        (_DWORD)v9);
      a1 = v10;
    }
  }
  return std::_Insertion_sort_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
           a1,
           a2,
           (__int64 (__fastcall *)(__int64 *, __int64 *))a4);
}
