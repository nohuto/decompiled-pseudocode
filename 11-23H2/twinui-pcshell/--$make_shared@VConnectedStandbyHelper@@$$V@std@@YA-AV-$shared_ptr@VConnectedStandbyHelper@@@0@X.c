/*
 * XREFs of ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x18012A724
 * Callers:
 *     ?SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180129BA0 (-SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1804CA040 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0$$V@?$_Ref_count_obj2@VConnectedStandbyHelper@@@std@@QEAA@XZ @ 0x18012A7C8 (--$-0$$V@-$_Ref_count_obj2@VConnectedStandbyHelper@@@std@@QEAA@XZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<ConnectedStandbyHelper,>(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rbx
  __int128 v6; // rax
  void *v8; // [rsp+50h] [rbp+8h]

  v8 = operator new(0x40uLL);
  v2 = std::_Ref_count_obj2<ConnectedStandbyHelper>::_Ref_count_obj2<ConnectedStandbyHelper>(v8);
  a1[1] = v2;
  v3 = (_QWORD *)(v2 + 16);
  *a1 = v2 + 16;
  if ( v2 != -16 )
  {
    v4 = *(_QWORD *)(v2 + 24);
    if ( !v4 || !*(_DWORD *)(v4 + 8) )
    {
      if ( v2 )
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
      v5 = (volatile signed __int32 *)a1[1];
      if ( v5 )
      {
        *(_QWORD *)&v6 = v2 + 16;
        *((_QWORD *)&v6 + 1) = a1[1];
        _InterlockedIncrement(v5 + 3);
      }
      else
      {
        v6 = 0LL;
      }
      *v3 = v6;
      *(_QWORD *)&v6 = v3[1];
      v3[1] = *((_QWORD *)&v6 + 1);
      if ( (_QWORD)v6 )
        std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v6);
      if ( v5 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
    }
  }
  return a1;
}
