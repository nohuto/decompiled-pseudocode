/*
 * XREFs of ??$MakeAlignedSharedBuffer@X@Engine@Spectre@@YA?AV?$shared_ptr@X@std@@_KPEBX0@Z @ 0x1800885F4
 * Callers:
 *     ?UpdateCpuCache@ArrayBuffer@Engine@Spectre@@AEAAXPEBXIIW4Usage@23@W4Format@23@@Z @ 0x180088D78 (-UpdateCpuCache@ArrayBuffer@Engine@Spectre@@AEAAXPEBXIIW4Usage@23@W4Format@23@@Z.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     memcpy_s @ 0x18000FF54 (memcpy_s.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??1?$_Temporary_owner_del@PEAXV_lambda_2bb65f39da56ce77b91824536c9c4563_@@@std@@QEAA@XZ @ 0x180088814 (--1-$_Temporary_owner_del@PEAXV_lambda_2bb65f39da56ce77b91824536c9c4563_@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall Spectre::Engine::MakeAlignedSharedBuffer<void>(void **a1, size_t a2, const void *a3, rsize_t a4)
{
  rsize_t v7; // r15
  void **v8; // r14
  _DWORD *v9; // rax
  void *v10; // rcx
  void **pExceptionObject; // [rsp+28h] [rbp-18h] BYREF
  char *v13; // [rsp+30h] [rbp-10h]
  char v14; // [rsp+38h] [rbp-8h]
  char v15; // [rsp+88h] [rbp+48h] BYREF

  v7 = a2;
  if ( a4 != -1LL )
    v7 = a4;
  v8 = (void **)_aligned_malloc(a2, 0x10uLL);
  *a1 = 0LL;
  a1[1] = 0LL;
  v15 = 0;
  pExceptionObject = v8;
  v13 = &v15;
  v9 = operator new(0x18uLL);
  if ( v9 )
  {
    v9[2] = 1;
    v9[3] = 1;
    *(_QWORD *)v9 = &std::_Ref_count_resource<void *,_lambda_2bb65f39da56ce77b91824536c9c4563_>::`vftable';
    *((_QWORD *)v9 + 2) = v8;
  }
  *a1 = v8;
  a1[1] = v9;
  v14 = 0;
  std::_Temporary_owner_del<void *,_lambda_2bb65f39da56ce77b91824536c9c4563_>::~_Temporary_owner_del<void *,_lambda_2bb65f39da56ce77b91824536c9c4563_>(&pExceptionObject);
  v10 = *a1;
  if ( !*a1 )
  {
    v13 = "bad allocation";
    pExceptionObject = &stdext::bad_alloc::`vftable';
    throw (stdext::bad_alloc *)&pExceptionObject;
  }
  if ( a3 )
    memcpy_s(v10, a2, a3, v7);
  else
    memset_0(v10, 0, a2);
  return a1;
}
