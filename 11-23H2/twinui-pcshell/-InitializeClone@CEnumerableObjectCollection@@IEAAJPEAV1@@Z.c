/*
 * XREFs of ?InitializeClone@CEnumerableObjectCollection@@IEAAJPEAV1@@Z @ 0x18039CDFC
 * Callers:
 *     ?Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180398440 (-Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
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
  __int64 i; // rbp
  __int64 v12; // rsi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rdx

  v3 = *((int *)this + 12);
  v4 = (_QWORD *)((char *)a2 + 40);
  v5 = *((_DWORD *)this + 7);
  if ( v5 <= (int)v3 )
    v5 = *((_DWORD *)this + 12);
  v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
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
        || (v14 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)v4,
                    v13 + 1,
                    v9),
            v13 = v4[1],
            v8 = v14,
            v14 >= 0) )
      {
        v15 = v13 + 1;
        v16 = *v4 - 8LL;
        v4[1] = v15;
        v17 = (_QWORD *)(v16 + 8 * v15);
        if ( v17 )
          *v17 = v12;
      }
      if ( v8 < 0 )
        return (unsigned int)v8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
      *((_DWORD *)a2 + 8) = *((_DWORD *)this + 8);
    }
  }
  return (unsigned int)v8;
}
