/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180132F20
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800EEF40 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vector deleting destructor'(
        _QWORD *a1,
        volatile int *a2)
{
  char v2; // di
  volatile signed __int64 *v4; // r11
  signed __int64 v5; // rax
  int v6; // ecx
  signed __int64 v7; // rtt
  __int64 v8; // rcx

  v2 = (char)a2;
  v4 = (volatile signed __int64 *)a1[4];
  if ( v4 )
  {
    a1[4] = 0LL;
    v5 = *((_QWORD *)v4 + 7);
    while ( v5 >= 0 )
    {
      if ( (_DWORD)v5 == 0x7FFFFFFF )
        goto LABEL_9;
      v6 = v5 - 1;
      v7 = v5;
      v5 = _InterlockedCompareExchange64(v4 + 7, v5 - 1, v5);
      if ( v7 == v5 )
        goto LABEL_6;
    }
    v6 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v5 + 16), a2);
LABEL_6:
    if ( !v6 )
    {
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v4 + 56))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
LABEL_9:
  v8 = a1[3];
  if ( v8 )
  {
    a1[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (v2 & 1) != 0 )
    operator delete(a1, 0x28uLL);
  return a1;
}
