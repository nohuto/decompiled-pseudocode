/*
 * XREFs of _lambda_7f079bc5e87df2e09bd622ff86c26e64_::operator() @ 0x1801B3280
 * Callers:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___ @ 0x1801B3040 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_VirtualHotKeyTracker--.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 */

char __fastcall lambda_7f079bc5e87df2e09bd622ff86c26e64_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // r8
  __int64 v3; // rax
  __int64 v4; // xmm0_8
  __int128 *v5; // rax
  __int64 v7; // [rsp+20h] [rbp-58h] BYREF
  int v8; // [rsp+28h] [rbp-50h]
  __int64 v9; // [rsp+2Ch] [rbp-4Ch]
  int v10; // [rsp+34h] [rbp-44h]
  __int128 v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int128 v13; // [rsp+50h] [rbp-28h]

  v2 = (__int64 *)*a1;
  if ( *(_WORD *)(a2 + 26) != *(_WORD *)(*a1 + 26LL) )
    return 0;
  v9 = 0LL;
  v3 = v2[2];
  v13 = 0LL;
  v4 = *v2;
  v12 = v3;
  v8 = *((_DWORD *)v2 + 2);
  v5 = (__int128 *)a1[2];
  v7 = v4;
  v10 = 2;
  v11 = *v5;
  NtMITSynthesizeKeyboardInput(2LL, &v7, 0LL);
  return 1;
}
