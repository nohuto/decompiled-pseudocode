/*
 * XREFs of ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x18014A230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@USIZE_CONSTRAINTS_CACHE_ENTRY@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardCompareHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardMergeHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@@@QEAAJ_K0@Z @ 0x18012A820 (-_EnsureCapacity@-$CTSimpleArray@USIZE_CONSTRAINTS_CACHE_ENTRY@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x18014A2F4 (--$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationVie.c)
 */

__int64 __fastcall AppSizeConstraintsCache::SetSizeConstraintsForDpi(
        AppSizeConstraintsCache *this,
        unsigned int a2,
        const struct APP_SIZE_CONSTRAINTS *a3)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rdx
  _DWORD *v12; // rcx
  _BYTE v13[20]; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  v4 = (_QWORD *)((char *)this + 16);
  v5 = a2;
  v6 = 0LL;
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    v12 = (_DWORD *)*v4;
    while ( (_DWORD)v5 != *v12 )
    {
      ++v6;
      v12 += 5;
      if ( v6 >= v7 )
        goto LABEL_2;
    }
    *(_OWORD *)(*v4 + 20 * v6 + 4) = *(_OWORD *)a3;
    goto LABEL_6;
  }
LABEL_2:
  *(_DWORD *)v13 = v5;
  *(_OWORD *)&v13[4] = *(_OWORD *)a3;
  if ( v7 != v4[3]
    || (v8 = CTSimpleArray<SIZE_CONSTRAINTS_CACHE_ENTRY,4294967294,CTPolicyCoTaskMem<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardCompareHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardMergeHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>>::_EnsureCapacity(
               (__int64)v4,
               v7 + 1,
               (void *)v5),
        v9 = v8,
        v8 >= 0) )
  {
    ++v4[1];
    v10 = *v4 + 4 * (5LL * v4[1] - 5);
    if ( v10 )
    {
      *(_OWORD *)v10 = *(_OWORD *)v13;
      *(_DWORD *)(v10 + 16) = *(_DWORD *)&v13[16];
    }
LABEL_6:
    ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet<unsigned int &,Geometry::CSize const &,Geometry::CSize const &>(
      &v15,
      a3,
      (char *)a3 + 8);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appsizeconstraintscache.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
