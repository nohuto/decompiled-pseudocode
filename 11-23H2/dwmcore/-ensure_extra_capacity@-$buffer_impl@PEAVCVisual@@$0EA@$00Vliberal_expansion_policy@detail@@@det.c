/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180119A08
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x180119B3C (-reserve_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expans.c)
 * Callees:
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVIDeviceResource@@@std@@V?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@V?$move_iterator@PEAPEAVIDeviceResource@@@0@0V12@@Z @ 0x180011124 (--$uninitialized_copy@V-$move_iterator@PEAPEAVIDeviceResource@@@std@@V-$checked_array_iterator@P.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002E760 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@PEAVCVisual@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@PEAVCVisual@@@detail@@@std@@@std@@QEAA@XZ @ 0x18011AC6C (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@PEAVCVisual@@@detail@@U-$default_delete@$$BY0A@U-$.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        const void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  const void *v9; // rax
  __int64 v10; // r8
  const void *v11; // rdx
  const void *v12; // rbx
  void *v13; // rcx
  bool v14; // zf
  char *v15; // rcx
  __int64 v16[4]; // [rsp+20h] [rbp-58h] BYREF
  char v17[32]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  result = (v3 - v4) >> 3;
  if ( result < a2 )
  {
    v6 = (v4 - (_BYTE *)*a1) >> 3;
    v7 = v6 + a2;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v8 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - (_BYTE *)*a1) >> 3),
           (v3 - (_BYTE *)*a1) >> 3,
           v7);
    v9 = operator new(saturated_mul(v8, 8uLL));
    v10 = (__int64)a1[1];
    v11 = *a1;
    v16[0] = (__int64)v9;
    v16[2] = 0LL;
    v12 = v9;
    v16[1] = v6;
    std::uninitialized_copy<std::move_iterator<IDeviceResource * *>,stdext::checked_array_iterator<IDeviceResource * *>>(
      (__int64)v17,
      v11,
      v10,
      v16);
    v13 = (void *)*a1;
    v14 = *a1 == a1 + 3;
    v18 = 0LL;
    *a1 = v12;
    if ( v14 )
      v13 = 0LL;
    operator delete(v13);
    v15 = (char *)*a1;
    a1[1] = (char *)*a1 + 8 * v6;
    a1[2] = &v15[8 * v8];
    return std::unique_ptr<detail::aligned_storage_for<CVisual *> [0],std::default_delete<detail::aligned_storage_for<CVisual *> [0]>>::~unique_ptr<detail::aligned_storage_for<CVisual *> [0],std::default_delete<detail::aligned_storage_for<CVisual *> [0]>>(&v18);
  }
  return result;
}
