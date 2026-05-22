/*
 * XREFs of std::_Func_impl_no_alloc__lambda_82f4e949cc86c4cc5d6fceb255c2514d__void__MIT_INPUT_CONFIG_MESSAGE_const___::_Do_call @ 0x180029960
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyConfig@InputConfigContextProvider@@AEAA?AUINPUT_SPACE_PAYLOAD@@AEBU2@@Z @ 0x1800298E8 (-CopyConfig@InputConfigContextProvider@@AEAA-AUINPUT_SPACE_PAYLOAD@@AEBU2@@Z.c)
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x180029A7C (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@UINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@$$QEAU2@@Z @ 0x180029AA0 (--$_Emplace_reallocate@UINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT.c)
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x180029E7C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_82f4e949cc86c4cc5d6fceb255c2514d__void__MIT_INPUT_CONFIG_MESSAGE_const___::_Do_call(
        __int64 a1,
        unsigned int **a2)
{
  __int64 v2; // r8
  __int64 v3; // rsi
  __int64 *v4; // rbp
  __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 *v9; // rbx
  __int64 v10; // xmm0_8
  __int64 v11; // rax
  __int64 v12; // rdx
  void *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  int v15; // [rsp+28h] [rbp-50h]
  int v16; // [rsp+2Ch] [rbp-4Ch]
  __int64 v17; // [rsp+30h] [rbp-48h]
  _BYTE v18[24]; // [rsp+38h] [rbp-40h] BYREF

  v2 = (__int64)*a2;
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 8);
  v5 = **a2;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      v6 = v4 + 32;
      v7 = v4[32];
      v8 = v4[33];
      if ( v7 != v8 )
      {
        do
        {
          v13 = *(void **)(v7 + 16);
          if ( v13 )
            operator delete[](v13);
          v7 += 24LL;
        }
        while ( v7 != v8 );
        v7 = *v6;
      }
      v4[33] = v7;
      v9 = v4 + 29;
      if ( v6 == v4 + 29 )
      {
        v3 = *v9;
      }
      else
      {
        std::vector<INPUT_SPACE_PAYLOAD>::_Tidy(v4 + 32);
        *v6 = *v9;
        v4[33] = v4[30];
        v4[34] = v4[31];
        *v9 = 0LL;
        v4[31] = 0LL;
      }
      v4[30] = v3;
      InputConfigContextProvider::Broadcast((InputConfigContextProvider *)v4);
    }
  }
  else
  {
    v10 = *(_QWORD *)(v2 + 4);
    v15 = *(_DWORD *)(v2 + 12);
    v16 = *(_DWORD *)(v2 + 16);
    v17 = v2 + 20;
    v14 = v10;
    v11 = InputConfigContextProvider::CopyConfig(v5, (__int64)v18, (__int64)&v14);
    v12 = v4[30];
    if ( v12 == v4[31] )
    {
      std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD>(v4 + 29, v12, v11);
    }
    else
    {
      *(_OWORD *)v12 = *(_OWORD *)v11;
      *(_QWORD *)(v12 + 16) = *(_QWORD *)(v11 + 16);
      v4[30] += 24LL;
    }
  }
}
