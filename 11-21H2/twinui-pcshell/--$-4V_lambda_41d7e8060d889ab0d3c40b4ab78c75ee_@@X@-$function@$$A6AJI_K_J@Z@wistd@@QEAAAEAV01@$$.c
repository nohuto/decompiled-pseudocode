/*
 * XREFs of ??$?4V_lambda_41d7e8060d889ab0d3c40b4ab78c75ee_@@X@?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_41d7e8060d889ab0d3c40b4ab78c75ee_@@@Z @ 0x18005EC54
 * Callers:
 *     ??$RuntimeClassInitialize@VMiniSearchExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVMiniSearchExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x18005EB3C (--$RuntimeClassInitialize@VMiniSearchExperienceManager@@@IImmersiveWindowMessageNotificationHand.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x18005ECB8 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

__int64 __fastcall wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=<_lambda_41d7e8060d889ab0d3c40b4ab78c75ee_,void>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=();
  *(_QWORD *)(a1 + 8) = &wistd::__function::__func<_lambda_c45c73327a5ad8f0fa2ab1970be778d0_,long (unsigned int,unsigned __int64,__int64)>::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  result = a1;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 112) = a1 + 8;
  return result;
}
