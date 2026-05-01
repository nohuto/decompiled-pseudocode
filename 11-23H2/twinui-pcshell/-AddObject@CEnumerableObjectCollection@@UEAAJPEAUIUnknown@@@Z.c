/*
 * XREFs of ?AddObject@CEnumerableObjectCollection@@UEAAJPEAUIUnknown@@@Z @ 0x1800EE860
 * Callers:
 *     <none>
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1800EE978 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CEnumerableObjectCollection::AddObject(CEnumerableObjectCollection *this, struct IUnknown *a2)
{
  unsigned __int64 v2; // r8
  char *v3; // rdi
  int v5; // ebx
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((int *)this + 7);
  v3 = (char *)this + 40;
  v5 = -2147024774;
  if ( v2 > 0xFFFFFFFE )
    goto LABEL_11;
  v6 = *((_QWORD *)this + 8);
  v5 = 0;
  if ( v2 <= v6 )
    goto LABEL_11;
  v7 = 2 * v6;
  if ( !is_mul_ok(v6, 2uLL) )
    return (unsigned int)-2147024362;
  v8 = v6 + 4096;
  if ( *((_QWORD *)this + 8) <= 0x1000uLL )
    v8 = v7;
  if ( v2 <= v8 )
  {
    if ( v8 > 0xFFFFFFFE )
      v8 = 4294967294LL;
  }
  else
  {
    v8 = *((int *)this + 7);
  }
  v12 = 0LL;
  if ( !is_mul_ok(v8, 8uLL) )
    return (unsigned int)-2147024362;
  v5 = CTCoAllocPolicy::Realloc(&v12, (v8 * (unsigned __int128)8uLL) >> 64, *(void **)v3, 8 * v8, &v12);
  if ( v5 < 0 )
  {
LABEL_11:
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  else
  {
    *(_QWORD *)v3 = v12;
    *((_QWORD *)v3 + 3) = v8;
  }
  v9 = *((_QWORD *)v3 + 1);
  v5 = 0;
  if ( v9 != *((_QWORD *)v3 + 3)
    || (v5 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               v3,
               v9 + 1),
        v5 >= 0) )
  {
    v10 = (_QWORD *)(*(_QWORD *)v3 + 8 * (*((_QWORD *)v3 + 1))++);
    if ( v10 )
      *v10 = a2;
  }
  if ( v5 >= 0 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  return (unsigned int)v5;
}
