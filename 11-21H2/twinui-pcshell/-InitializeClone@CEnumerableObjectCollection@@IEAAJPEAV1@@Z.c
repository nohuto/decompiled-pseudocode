/*
 * XREFs of ?InitializeClone@CEnumerableObjectCollection@@IEAAJPEAV1@@Z @ 0x1802E4FB0
 * Callers:
 *     ?Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E1E70 (-Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJ_K0@Z @ 0x18003B1E4 (-_EnsureCapacity@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::InitializeClone(
        CEnumerableObjectCollection *this,
        struct CEnumerableObjectCollection *a2,
        void *a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  int v5; // eax
  int v8; // ebx
  void *v9; // r8
  __int64 v10; // r15
  __int64 i; // rsi
  __int64 v12; // r14
  __int64 v13; // rdx
  _QWORD *v14; // rdx

  v3 = *((int *)this + 12);
  v4 = (_QWORD *)((char *)a2 + 40);
  v5 = *((_DWORD *)this + 7);
  if ( v5 <= (int)v3 )
    v5 = *((_DWORD *)this + 12);
  v8 = CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::_EnsureCapacity(
         (__int64)a2 + 40,
         v5,
         a3);
  if ( v8 >= 0 )
  {
    v10 = v3;
    for ( i = 0LL; i < v10; ++i )
    {
      v12 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
      if ( !v12 )
        return (unsigned int)-2147418113;
      v13 = v4[1];
      v8 = 0;
      if ( v13 != v4[3]
        || (v8 = CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::_EnsureCapacity(
                   (__int64)v4,
                   v13 + 1,
                   v9),
            v8 >= 0) )
      {
        v14 = (_QWORD *)(*v4 + 8 * v4[1]++);
        if ( v14 )
          *v14 = v12;
      }
      if ( v8 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
        *((_DWORD *)a2 + 8) = *((_DWORD *)this + 8);
      }
      if ( v8 < 0 )
        return (unsigned int)v8;
    }
  }
  return (unsigned int)v8;
}
