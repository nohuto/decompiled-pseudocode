/*
 * XREFs of ??_ECEnumerableObjectCollection@@MEAAPEAXI@Z @ 0x1800D0530
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAXXZ @ 0x180183DE0 (-RemoveAll@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-$CSim.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CEnumerableObjectCollection *__fastcall CEnumerableObjectCollection::`vector deleting destructor'(
        CEnumerableObjectCollection *this,
        char a2)
{
  char *v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx

  *(_QWORD *)this = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
  *((_QWORD *)this + 1) = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
  *((_QWORD *)this + 2) = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
  v4 = (char *)this + 40;
  v5 = 0LL;
  if ( *((_QWORD *)this + 6) )
  {
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)v4 + 8 * v5);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      ++v5;
    }
    while ( v5 < *((_QWORD *)v4 + 1) );
  }
  if ( *(_QWORD *)v4 )
  {
    CoTaskMemFree(*(LPVOID *)v4);
    *(_QWORD *)v4 = 0LL;
  }
  *((_QWORD *)v4 + 1) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::RemoveAll(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
