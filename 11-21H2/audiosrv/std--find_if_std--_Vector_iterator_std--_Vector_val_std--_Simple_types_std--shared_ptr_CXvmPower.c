/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_CXvmPowerReferenceManager_________lambda_99dc9de587906d6f38e02b4d1e0ae12d___ @ 0x1801038B8
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800222B0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_CXvmPowerReferenceManager_________lambda_99dc9de587906d6f38e02b4d1e0ae12d___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // r11
  _QWORD *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 v10; // [rsp+0h] [rbp-38h]
  __int128 v11; // [rsp+10h] [rbp-28h]

  if ( a2 != a3 )
  {
    v5 = *a4;
    v10 = *(_OWORD *)(*a4 + 312);
    do
    {
      v6 = *(_QWORD **)a2;
      v7 = *(_QWORD *)(*(_QWORD *)a2 + 16LL) - v10;
      if ( !v7 )
        v7 = v6[3] - *((_QWORD *)&v10 + 1);
      if ( !v7 )
      {
        v11 = *(_OWORD *)(v5 + 296);
        v8 = *v6 - v11;
        if ( !v8 )
          v8 = v6[1] - *((_QWORD *)&v11 + 1);
        if ( !v8 )
          break;
      }
      a2 += 16LL;
    }
    while ( a2 != a3 );
  }
  *a1 = a2;
  return a1;
}
