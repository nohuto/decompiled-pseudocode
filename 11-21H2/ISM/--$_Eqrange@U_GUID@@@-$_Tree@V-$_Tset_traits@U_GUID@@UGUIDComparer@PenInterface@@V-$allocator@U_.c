/*
 * XREFs of ??$_Eqrange@U_GUID@@@?$_Tree@V?$_Tset_traits@U_GUID@@UGUIDComparer@PenInterface@@V?$allocator@U_GUID@@@std@@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U_GUID@@PEAX@std@@PEAU12@@1@AEBU_GUID@@@Z @ 0x180188508
 * Callers:
 *     ?erase@?$_Tree@V?$_Tset_traits@U_GUID@@UGUIDComparer@PenInterface@@V?$allocator@U_GUID@@@std@@$0A@@std@@@std@@QEAA_KAEBU_GUID@@@Z @ 0x1801893E0 (-erase@-$_Tree@V-$_Tset_traits@U_GUID@@UGUIDComparer@PenInterface@@V-$allocator@U_GUID@@@std@@$0.c)
 * Callees:
 *     memcmp_0 @ 0x18004E987 (memcmp_0.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tset_traits<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>,0>>::_Eqrange<_GUID>(
        _QWORD *a1,
        _QWORD *a2,
        const void *a3)
{
  __int64 *v3; // rbp
  __int64 *v6; // rdi
  __int64 **v7; // r14
  __int64 *v8; // rbx
  __int64 *v9; // rbx
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v6 = (__int64 *)*a1;
  v7 = (__int64 **)(*a1 + 8LL);
  v8 = *v7;
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( memcmp_0((char *)v8 + 28, a3, 0x10uLL) >= 0 )
    {
      if ( *((_BYTE *)v6 + 25) && memcmp_0(a3, (char *)v8 + 28, 0x10uLL) < 0 )
        v6 = v8;
      v3 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  if ( !*((_BYTE *)v6 + 25) )
    v7 = (__int64 **)v6;
  v9 = *v7;
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( memcmp_0(a3, (char *)v9 + 28, 0x10uLL) >= 0 )
    {
      v9 = (__int64 *)v9[2];
    }
    else
    {
      v6 = v9;
      v9 = (__int64 *)*v9;
    }
  }
  result = a2;
  *a2 = v3;
  a2[1] = v6;
  return result;
}
