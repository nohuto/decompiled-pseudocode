/*
 * XREFs of ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x18016B540
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@USIZE_CONSTRAINTS_CACHE_ENTRY@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardCompareHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardMergeHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@@@QEAAJ_K0@Z @ 0x1800EE3D8 (-_EnsureCapacity@-$CTSimpleArray@USIZE_CONSTRAINTS_CACHE_ENTRY@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x18016B688 (--$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationVie.c)
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
  int v8; // edi
  __int64 v9; // r8
  _DWORD *v11; // rcx
  _BYTE v12[20]; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  v4 = (_QWORD *)((char *)this + 16);
  v5 = a2;
  v6 = 0LL;
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    v11 = (_DWORD *)*v4;
    while ( (_DWORD)v5 != *v11 )
    {
      ++v6;
      v11 += 5;
      if ( v6 >= v7 )
        goto LABEL_2;
    }
    *(_OWORD *)(*v4 + 20 * v6 + 4) = *(_OWORD *)a3;
    goto LABEL_7;
  }
LABEL_2:
  v8 = 0;
  *(_DWORD *)v12 = v5;
  *(_OWORD *)&v12[4] = *(_OWORD *)a3;
  if ( v7 != v4[3]
    || (v8 = CTSimpleArray<SIZE_CONSTRAINTS_CACHE_ENTRY,4294967294,CTPolicyCoTaskMem<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardCompareHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardMergeHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>>::_EnsureCapacity(
               (__int64)v4,
               v7 + 1,
               (void *)v5),
        v8 >= 0) )
  {
    ++v4[1];
    v9 = *v4 + 4 * (5LL * v4[1] - 5);
    if ( !v9 )
    {
LABEL_7:
      ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet<unsigned int &,Geometry::CSize const &,Geometry::CSize const &>(
        &v14,
        a3,
        (char *)a3 + 8);
      return 0LL;
    }
    *(_OWORD *)v9 = *(_OWORD *)v12;
    *(_DWORD *)(v9 + 16) = *(_DWORD *)&v12[16];
  }
  if ( v8 >= 0 )
    goto LABEL_7;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appsizeconstraintscache.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
