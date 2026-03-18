/*
 * XREFs of ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800BC720
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180056390 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x180096F18 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18009B0F0 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800BC8E8 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x1800BD830 (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ??$_Find_last@PEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEAVCBaseExpression@@PEAX@std@@@1@AEBQEAVCBaseExpression@@_K@Z @ 0x1800BC818 (--$_Find_last@PEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D9B98 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E247C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
        CExpressionManager *this,
        struct CBaseExpression *a2)
{
  char *v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r11
  __int64 v9; // rbx
  unsigned __int64 appended; // rax
  _QWORD *v11; // r11
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF
  struct CBaseExpression *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  v3 = (char *)this + 528;
  v4 = 0LL;
  v5 = 0xCBF29CE484222325uLL;
  do
  {
    v6 = *((unsigned __int8 *)&v16 + v4++);
    v5 = 0x100000001B3LL * (v6 ^ v5);
  }
  while ( v4 < 8 );
  v8 = *(_QWORD *)(std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Find_last<CBaseExpression *>(
                     v3,
                     v15,
                     &v16,
                     v5)
                 + 8);
  if ( !v8 )
    v8 = *((_QWORD *)v3 + 1);
  v9 = *((_QWORD *)this + 67);
  if ( v8 != v9 )
  {
    appended = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)(v8 + 16), 8uLL);
    v12 = *((_QWORD *)this + 69);
    v13 = 2 * (*((_QWORD *)this + 72) & appended);
    if ( *(_QWORD **)(v12 + 16 * (*((_QWORD *)this + 72) & appended) + 8) == v11 )
    {
      if ( *(_QWORD **)(v12 + 16 * (*((_QWORD *)this + 72) & appended)) == v11 )
        *(_QWORD *)(v12 + 16 * (*((_QWORD *)this + 72) & appended)) = v9;
      else
        v9 = v11[1];
      *(_QWORD *)(v12 + 8 * v13 + 8) = v9;
    }
    else if ( *(_QWORD **)(v12 + 16 * (*((_QWORD *)this + 72) & appended)) == v11 )
    {
      *(_QWORD *)(v12 + 16 * (*((_QWORD *)this + 72) & appended)) = *v11;
    }
    v14 = *v11;
    --*((_QWORD *)this + 68);
    *(_QWORD *)v11[1] = v14;
    *(_QWORD *)(v14 + 8) = v11[1];
    std::_Deallocate<16,0>(v11, 24LL);
  }
}
