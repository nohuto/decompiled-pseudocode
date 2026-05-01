/*
 * XREFs of ?AddObject@CEnumerableObjectCollection@@UEAAJPEAUIUnknown@@@Z @ 0x180127990
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJ_K0@Z @ 0x18003B1E4 (-_EnsureCapacity@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x180127AD4 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::AddObject(CEnumerableObjectCollection *this, struct IUnknown *a2)
{
  unsigned __int64 v2; // r8
  char *v3; // rdi
  int v5; // ebx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r14
  char *v9; // rax
  char *v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rdx

  v2 = *((int *)this + 7);
  v3 = (char *)this + 40;
  v5 = -2147024774;
  if ( v2 > 0xFFFFFFFE || (v6 = *((_QWORD *)this + 8), v5 = 0, v2 <= v6) )
  {
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  else
  {
    if ( !is_mul_ok(v6, 2uLL) )
      return (unsigned int)-2147024362;
    v7 = v6 + 4096;
    if ( v6 <= 0x1000 )
      v7 = 2 * v6;
    if ( v2 <= v7 )
    {
      if ( v7 > 0xFFFFFFFE )
        v7 = 4294967294LL;
    }
    else
    {
      v7 = *((int *)this + 7);
    }
    v8 = 8 * v7;
    if ( !is_mul_ok(v7, 8uLL) )
      return (unsigned int)-2147024362;
    v9 = (char *)CoTaskMemRealloc(*(LPVOID *)v3, 8 * v7);
    v10 = v9;
    if ( !v9 )
      return (unsigned int)-2147024882;
    v11 = CTCoAllocPolicy::_CoTaskMemSize(v9);
    if ( v11 > v8 )
      memset_0(&v10[v8], 0, v11 - v8);
    *((_QWORD *)v3 + 3) = v7;
    *(_QWORD *)v3 = v10;
  }
  v12 = *((_QWORD *)v3 + 1);
  v5 = 0;
  if ( v12 != *((_QWORD *)v3 + 3)
    || (v5 = CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::_EnsureCapacity(
               (__int64)v3,
               v12 + 1,
               (void *)v2),
        v5 >= 0) )
  {
    v13 = (_QWORD *)(*(_QWORD *)v3 + 8 * (*((_QWORD *)v3 + 1))++);
    if ( v13 )
      *v13 = a2;
  }
  if ( v5 >= 0 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  return (unsigned int)v5;
}
