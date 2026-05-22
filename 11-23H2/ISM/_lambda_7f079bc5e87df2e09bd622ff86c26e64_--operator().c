/*
 * XREFs of _lambda_7f079bc5e87df2e09bd622ff86c26e64_::operator() @ 0x1801D17AC
 * Callers:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___ @ 0x1801D1570 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_VirtualHotKeyTracker--.c)
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

char __fastcall lambda_7f079bc5e87df2e09bd622ff86c26e64_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v4; // xmm0_8
  __int128 *v5; // rax
  __int64 v7; // [rsp+20h] [rbp-58h] BYREF
  int v8; // [rsp+28h] [rbp-50h]
  int v9; // [rsp+34h] [rbp-44h]
  __int128 v10; // [rsp+38h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-30h]

  v2 = (__int64 *)*a1;
  if ( *(_WORD *)(a2 + 26) != *(_WORD *)(*a1 + 26LL) )
    return 0;
  memset_0(&v7, 0, 0x40uLL);
  v4 = *v2;
  v11 = v2[2];
  v8 = *((_DWORD *)v2 + 2);
  v5 = (__int128 *)a1[2];
  v7 = v4;
  v9 = 2;
  v10 = *v5;
  NtMITSynthesizeKeyboardInput(2LL, &v7, 0LL);
  return 1;
}
