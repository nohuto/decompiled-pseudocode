/*
 * XREFs of ??$copy_backward@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@00@Z @ 0x180041A4C
 * Callers:
 *     ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x180043D6C (-_Insert_x@-$vector@_NV-$allocator@_N@std@@@std@@QEAA_KV-$_Vb_const_iterator@U-$_Wrap_alloc@V-$a.c)
 * Callees:
 *     ??4?$_Vb_reference@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@QEAAAEAV01@_N@Z @ 0x18014EEF4 (--4-$_Vb_reference@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@QEAAAEAV01@_N@Z.c)
 */

_OWORD *__fastcall std::copy_backward<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
        _OWORD *a1,
        __int128 *a2,
        __int128 *a3,
        __int128 *a4)
{
  __int128 v4; // xmm2
  __int128 v6; // xmm1
  __int64 v7; // r10
  __int64 v8; // rdi
  unsigned __int64 v9; // r11
  _DWORD *v10; // rbx
  _OWORD *result; // rax
  char v12; // r11
  __int64 v13; // r10
  bool v14; // zf
  __int128 v15; // [rsp+20h] [rbp-38h]
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int128 v17; // [rsp+40h] [rbp-18h]

  v4 = *a4;
  v6 = *a2;
  v15 = *a4;
  v7 = *((_QWORD *)a4 + 1);
  v8 = *(_QWORD *)a4;
  v16 = *a3;
  v9 = *((_QWORD *)&v16 + 1);
  v10 = (_DWORD *)v16;
  v17 = v6;
  while ( v17 != __PAIR128__(v9, (unsigned __int64)v10) )
  {
    if ( v9 )
    {
      v12 = v9 - 1;
    }
    else
    {
      v12 = 31;
      --v10;
    }
    if ( v7 )
    {
      v13 = v7 - 1;
    }
    else
    {
      v8 -= 4LL;
      v13 = 31LL;
      *(_QWORD *)&v15 = v8;
    }
    *((_QWORD *)&v15 + 1) = v13;
    *(_QWORD *)&v16 = v8;
    v14 = ((1 << v12) & *v10) == 0;
    *((_QWORD *)&v16 + 1) = v13;
    LOBYTE(a2) = !v14;
    std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int>>>::operator=(&v16, a2);
    v4 = v15;
  }
  result = a1;
  *a1 = v4;
  return result;
}
