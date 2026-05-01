/*
 * XREFs of sub_1800190B0 @ 0x1800190B0
 * Callers:
 *     DllGetClassObject @ 0x180019AC0 (DllGetClassObject.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_1800193B0 @ 0x1800193B0 (sub_1800193B0.c)
 */

__int64 __fastcall sub_1800190B0(__int64 a1, __int64 a2, _QWORD *a3, int a4, _QWORD *a5)
{
  PVOID Ptr; // r14
  __int64 *v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  Ptr = a5;
  *a5 = 0LL;
  v9 = (__int64 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) + 8);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  while ( 1 )
  {
    if ( (unsigned __int64)v9 >= v10 )
      return 2147746065LL;
    v11 = *v9;
    if ( *v9 )
    {
      v12 = *(_QWORD **)(v11 + 8);
      v13 = *v12 - *a3;
      if ( *v12 == *a3 )
        v13 = v12[1] - a3[1];
      if ( !v13 )
        break;
    }
    ++v9;
  }
  LODWORD(v15) = 1;
  return sub_1800193B0(a1, (int)&v15, a4, v11, Ptr);
}
