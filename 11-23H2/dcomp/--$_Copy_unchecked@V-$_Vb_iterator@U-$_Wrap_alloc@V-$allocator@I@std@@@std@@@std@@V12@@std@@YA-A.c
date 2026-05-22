/*
 * XREFs of ??$_Copy_unchecked@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@00@Z @ 0x18014E478
 * Callers:
 *     ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x180150AAC (-erase@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I.c)
 * Callees:
 *     ??4?$_Vb_reference@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@QEAAAEAV01@_N@Z @ 0x18014EEF4 (--4-$_Vb_reference@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@QEAAAEAV01@_N@Z.c)
 */

_OWORD *__fastcall std::_Copy_unchecked<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
        _OWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v4; // r12
  __int64 *v5; // r11
  unsigned __int64 v6; // r10
  __int64 i; // rbx
  _DWORD *v10; // rsi
  __int64 v11; // r15
  unsigned __int64 v12; // rbp
  bool v13; // zf
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rax
  _OWORD *result; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *a3;
  v5 = a4;
  v6 = *(_QWORD *)(a2 + 8);
  for ( i = a2; ; *(_QWORD *)(i + 8) = v6 )
  {
    v10 = *(_DWORD **)i;
    if ( *(_QWORD *)i == v4 && v6 == a3[1] )
      break;
    v11 = *v5;
    v12 = v5[1];
    v13 = ((1 << v6) & *v10) == 0;
    v17[0] = *v5;
    LOBYTE(a2) = !v13;
    v17[1] = v12;
    std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int>>>::operator=(v17, a2);
    if ( v12 >= 0x1F )
    {
      *v5 = v11 + 4;
      v15 = 0LL;
    }
    else
    {
      v15 = v12 + 1;
    }
    v5[1] = v15;
    if ( v14 >= 0x1F )
    {
      v6 = 0LL;
      *(_QWORD *)i = v10 + 1;
    }
    else
    {
      v6 = v14 + 1;
    }
  }
  result = a1;
  *a1 = *(_OWORD *)v5;
  return result;
}
