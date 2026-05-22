/*
 * XREFs of ?GetDismissableClients@LightDismissProcessor@@AEAA?AV?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@PEAUHitTestResult@@@Z @ 0x18018027C
 * Callers:
 *     ?OnHitTest@LightDismissProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800172E0 (-OnHitTest@LightDismissProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ?_Tidy@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAXXZ @ 0x180056354 (-_Tidy@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@AEAAXXZ.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Buy_nonzero@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x1800B013C (-_Buy_nonzero@-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@@@s.c)
 *     ??$GetAttachedObject@UILightDismissClientProxy@@VLightDismissClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VLightDismissClientProxy@@@WRL@Microsoft@@XZ @ 0x180180040 (--$GetAttachedObject@UILightDismissClientProxy@@VLightDismissClientProxy@@@InputSite@@QEAA-AV-$C.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall LightDismissProcessor::GetDismissableClients(__int64 a1, char **a2, __int64 a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  char *v7; // r15
  char *v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 *v11; // r12
  __int64 v12; // r14
  char *i; // rcx
  char *v14; // rax
  void *v16[2]; // [rsp+28h] [rbp-18h] BYREF
  char *v17; // [rsp+38h] [rbp-8h]
  char **v18; // [rsp+78h] [rbp+38h] BYREF

  v18 = a2;
  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  v5 = (qword_180278160 - (__int64)LightDismissProcessor::s_clients) >> 3;
  if ( v5 )
  {
    std::vector<LightDismissClientProxy *>::_Buy_nonzero(v16, v5);
    v6 = qword_180278160 - (_QWORD)LightDismissProcessor::s_clients;
    v7 = (char *)v16[0];
    memmove_0(v16[0], LightDismissProcessor::s_clients, qword_180278160 - (_QWORD)LightDismissProcessor::s_clients);
    v8 = &v7[8 * (v6 >> 3)];
    if ( v7 != v8 && a3 )
    {
      v9 = *(_QWORD *)(a3 + 104);
      v10 = *(__int64 **)(v9 - 24);
      v11 = *(__int64 **)(v9 - 16);
      while ( v10 != v11 )
      {
        InputSite::GetAttachedObject<ILightDismissClientProxy,LightDismissClientProxy>(*v10, (__int64 *)&v18);
        v12 = (__int64)v18;
        if ( v18 )
        {
          for ( i = v7; i != v8; i += 8 )
          {
            if ( *(char ***)i == v18 )
              break;
          }
          memmove_0(i, i + 8, v8 - (i + 8));
          v8 -= 8;
        }
        if ( v12 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 16) + 8LL))(v12 + 16);
        }
        ++v10;
      }
    }
  }
  else
  {
    v8 = (char *)v16[1];
    v7 = (char *)v16[0];
  }
  v14 = v17;
  v17 = 0LL;
  v16[1] = 0LL;
  v16[0] = 0LL;
  *a2 = v7;
  a2[1] = v8;
  a2[2] = v14;
  std::vector<_LUID>::_Tidy((__int64)v16);
  return a2;
}
