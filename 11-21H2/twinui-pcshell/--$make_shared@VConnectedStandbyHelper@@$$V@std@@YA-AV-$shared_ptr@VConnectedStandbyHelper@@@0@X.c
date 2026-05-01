/*
 * XREFs of ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x1801608E4
 * Callers:
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E01B0 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803F1710 (-SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0$$V@?$_Ref_count_obj2@VConnectedStandbyHelper@@@std@@QEAA@XZ @ 0x18016098C (--$-0$$V@-$_Ref_count_obj2@VConnectedStandbyHelper@@@std@@QEAA@XZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180171890 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<ConnectedStandbyHelper,>(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  std::_Ref_count_base *v7; // rcx
  void *v9; // [rsp+40h] [rbp+8h]

  v9 = operator new(0x40uLL);
  v2 = std::_Ref_count_obj2<ConnectedStandbyHelper>::_Ref_count_obj2<ConnectedStandbyHelper>(v9);
  v3 = (_QWORD *)(v2 + 16);
  *a1 = v2 + 16;
  a1[1] = v2;
  if ( v2 != -16 )
  {
    v4 = *(_QWORD *)(v2 + 24);
    if ( !v4 || !*(_DWORD *)(v4 + 8) )
    {
      if ( v2 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
        v2 = a1[1];
      }
      if ( v2 )
      {
        v5 = v3;
        v6 = v2;
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
      }
      else
      {
        v6 = 0LL;
        v5 = 0LL;
      }
      *v3 = v5;
      v7 = (std::_Ref_count_base *)v3[1];
      v3[1] = v6;
      if ( v7 )
        std::_Ref_count_base::_Decwref(v7);
      if ( v2 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v2);
    }
  }
  return a1;
}
