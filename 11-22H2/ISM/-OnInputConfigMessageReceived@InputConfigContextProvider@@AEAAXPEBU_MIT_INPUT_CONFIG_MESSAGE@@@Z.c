/*
 * XREFs of ?OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x180032D3C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_82f4e949cc86c4cc5d6fceb255c2514d__void__MIT_INPUT_CONFIG_MESSAGE_const___::_Do_call @ 0x180055AC0 (std--_Func_impl_no_alloc__lambda_82f4e949cc86c4cc5d6fceb255c2514d__void__MIT_INPUT__ea_180055AC0.c)
 * Callees:
 *     ?CopyConfig@InputConfigContextProvider@@AEAA?AUINPUT_SPACE_PAYLOAD@@AEBU2@@Z @ 0x180032E38 (-CopyConfig@InputConfigContextProvider@@AEAA-AUINPUT_SPACE_PAYLOAD@@AEBU2@@Z.c)
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x180032EB0 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ?ClearConfigs@InputConfigContextProvider@@AEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x180032ED4 (-ClearConfigs@InputConfigContextProvider@@AEAAXAEAV-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@U.c)
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x18003360C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@UINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@$$QEAU2@@Z @ 0x180038AF0 (--$_Emplace_reallocate@UINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

void __fastcall InputConfigContextProvider::OnInputConfigMessageReceived(
        InputConfigContextProvider *this,
        const struct _MIT_INPUT_CONFIG_MESSAGE *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // xmm0_8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  int v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+2Ch] [rbp-4Ch]
  char *v12; // [rsp+30h] [rbp-48h]
  _BYTE v13[24]; // [rsp+38h] [rbp-40h] BYREF

  v3 = *(unsigned int *)a2;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
    {
      InputConfigContextProvider::ClearConfigs(v3, (char *)this + 256);
      v4 = (_QWORD *)((char *)this + 232);
      v5 = (_QWORD *)((char *)this + 240);
      if ( (char *)this + 256 != (char *)this + 232 )
      {
        std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((char *)this + 256);
        *((_QWORD *)this + 32) = *v4;
        *((_QWORD *)this + 33) = *v5;
        *((_QWORD *)this + 34) = *((_QWORD *)this + 31);
        *v4 = 0LL;
        *v5 = 0LL;
        *((_QWORD *)this + 31) = 0LL;
      }
      *v5 = *v4;
      InputConfigContextProvider::Broadcast(this);
    }
  }
  else
  {
    v6 = *(_QWORD *)((char *)a2 + 4);
    v10 = *((_DWORD *)a2 + 3);
    v11 = *((_DWORD *)a2 + 4);
    v12 = (char *)a2 + 20;
    v9 = v6;
    v7 = InputConfigContextProvider::CopyConfig(v3, v13, &v9);
    v8 = *((_QWORD *)this + 30);
    if ( v8 == *((_QWORD *)this + 31) )
    {
      std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD>((char *)this + 232, v8, v7);
    }
    else
    {
      *(_OWORD *)v8 = *(_OWORD *)v7;
      *(_QWORD *)(v8 + 16) = *(_QWORD *)(v7 + 16);
      *((_QWORD *)this + 30) += 24LL;
    }
  }
}
