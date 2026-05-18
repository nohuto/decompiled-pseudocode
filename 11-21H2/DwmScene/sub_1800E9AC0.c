/*
 * XREFs of sub_1800E9AC0 @ 0x1800E9AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18005C41C @ 0x18005C41C (sub_18005C41C.c)
 *     sub_1800E6ADC @ 0x1800E6ADC (sub_1800E6ADC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_1800E9AC0(__int64 a1, int a2, __int64 *a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  __int64 v8; // rbx
  int v9; // edi
  int v10; // edi
  __int64 v11[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  result = &retaddr;
  v14 = 0LL;
  if ( *a3 )
  {
    sub_18005C41C(*a3, v12, *(_DWORD *)(a1 + 88));
    sub_1800E6ADC(v11, v12);
    v8 = *(_QWORD *)(v11[0] + 184);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(v11[0] + 184));
    v14 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    sub_180010910((__int64)v11);
    result = (_UNKNOWN **)sub_180010910((__int64)v12);
  }
  v9 = a2 - 1;
  if ( !v9 )
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 208LL))(
                          *(_QWORD *)(a1 + 144),
                          a4,
                          1LL,
                          &v14);
  v10 = v9 - 3;
  if ( !v10 )
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 256LL))(
                          *(_QWORD *)(a1 + 144),
                          a4,
                          1LL,
                          &v14);
  if ( v10 == 1 )
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 80LL))(
                          *(_QWORD *)(a1 + 144),
                          a4,
                          1LL,
                          &v14);
  return result;
}
