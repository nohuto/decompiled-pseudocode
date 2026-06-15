/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_5633c08dc3eb87d401f8469e9bff1b6c___ @ 0x18014A34C
 * Callers:
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014EBF0 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017908 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_5633c08dc3eb87d401f8469e9bff1b6c___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *i; // rsi
  __int64 v8; // rax
  __int64 *j; // r14
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-38h]
  __int128 v13; // [rsp+20h] [rbp-38h]

  for ( i = a2; i != a3; i += 2 )
  {
    v12 = *(_OWORD *)*(_QWORD *)(*i + 1272);
    v8 = v12 - *a4;
    if ( (_QWORD)v12 == *a4 )
      v8 = *((_QWORD *)&v12 + 1) - a4[1];
    if ( !v8 )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 2; j != a3; j += 2 )
    {
      v13 = *(_OWORD *)*(_QWORD *)(*j + 1272);
      v10 = v13 - *a4;
      if ( (_QWORD)v13 == *a4 )
        v10 = *((_QWORD *)&v13 + 1) - a4[1];
      if ( v10 )
      {
        std::shared_ptr<std::function<void (void)>>::operator=(i, j);
        i += 2;
      }
    }
  }
  *a1 = i;
  return a1;
}
