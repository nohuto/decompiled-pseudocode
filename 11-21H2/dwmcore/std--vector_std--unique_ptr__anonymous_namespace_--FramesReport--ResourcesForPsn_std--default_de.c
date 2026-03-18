/*
 * XREFs of std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::emplace_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____ @ 0x18005F554
 * Callers:
 *     _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x18005F320 (_anonymous_namespace_--FramesReport--UpdateResourceCountersForPsn.c)
 * Callees:
 *     std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::_Emplace_reallocate_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____ @ 0x18005F60C (std--vector_std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_st_ea_18005F60C.c)
 *     std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn___::operator__std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn__0_ @ 0x1800F5DB0 (std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_std--default_delete__anonym.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::emplace_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        void **a4)
{
  _QWORD *v6; // rdx
  void *v7; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rcx
  void *v12; // [rsp+28h] [rbp-10h] BYREF

  v6 = *(_QWORD **)(a1 + 8);
  if ( v6 == *(_QWORD **)(a1 + 16) )
  {
    *a2 = std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::_Emplace_reallocate_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____(
            a1,
            a3,
            a4);
  }
  else
  {
    v7 = *a4;
    *a4 = 0LL;
    if ( a3 == v6 )
    {
      *v6 = v7;
      *(_QWORD *)(a1 + 8) += 8LL;
    }
    else
    {
      v9 = v6 - 1;
      v12 = v7;
      v10 = *(v6 - 1);
      *(v6 - 1) = 0LL;
      *v6 = v10;
      *(_QWORD *)(a1 + 8) += 8LL;
      while ( v9 != a3 )
      {
        v11 = v9--;
        std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn___::operator__std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn__0_(
          v11,
          v9);
      }
      std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn___::operator__std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn__0_(
        a3,
        &v12);
      if ( v12 )
        operator delete(v12, 0x70uLL);
    }
    *a2 = a3;
  }
  return a2;
}
