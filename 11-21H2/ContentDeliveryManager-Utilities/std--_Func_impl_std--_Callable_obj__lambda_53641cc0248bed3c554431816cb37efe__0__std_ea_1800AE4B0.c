/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Copy @ 0x1800AE4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800042A8 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::_Func_impl_std::_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v4; // r9
  signed __int64 v5; // rcx
  bool v6; // zf
  signed __int64 v7; // rax
  signed __int32 v8; // eax

  v2 = a2;
  if ( !a2 )
  {
    v2 = operator new(0x18uLL);
    if ( !v2 )
      std::_Xbad_alloc();
  }
  *v2 = off_180106670;
  v4 = *(_QWORD *)(a1 + 8);
  v2[1] = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 64);
    while ( v5 >= 0 )
    {
      if ( (_DWORD)v5 != 0x7FFFFFFF )
      {
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 64), v5 + 1, v5);
        v6 = v5 == v7;
        v5 = v7;
        if ( !v6 )
          continue;
      }
      return v2;
    }
    do
      v8 = *(_DWORD *)(2 * v5 + 0x10);
    while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v5 + 16), v8 + 1, v8) );
  }
  return v2;
}
