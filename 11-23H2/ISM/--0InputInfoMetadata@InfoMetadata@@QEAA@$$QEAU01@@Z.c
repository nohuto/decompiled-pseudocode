/*
 * XREFs of ??0InputInfoMetadata@InfoMetadata@@QEAA@$$QEAU01@@Z @ 0x1801C2C9C
 * Callers:
 *     ??$_Uninitialized_move@PEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@YAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x1801C2854 (--$_Uninitialized_move@PEAU-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$allocat.c)
 *     ??0InfoMetadata@@QEAA@XZ @ 0x1801C2B08 (--0InfoMetadata@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18004E88C (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall InfoMetadata::InputInfoMetadata::InputInfoMetadata(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx

  a1[7] = 0LL;
  v4 = (_QWORD *)a2[7];
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      a1[7] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v4 + 8LL))(v4, a1);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)a2, v5);
    }
    else
    {
      a1[7] = v4;
      a2[7] = 0LL;
    }
  }
  a1[15] = 0LL;
  v6 = (_QWORD *)a2[15];
  if ( v6 )
  {
    if ( v6 == a2 + 8 )
    {
      a1[15] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 8LL))(v6, a1 + 8);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)(a2 + 8), v7);
    }
    else
    {
      a1[15] = v6;
      a2[15] = 0LL;
    }
  }
  a1[23] = 0LL;
  v8 = (_QWORD *)a2[23];
  if ( v8 )
  {
    if ( v8 == a2 + 16 )
    {
      a1[23] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v8 + 8LL))(v8, a1 + 16);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)(a2 + 16), v9);
    }
    else
    {
      a1[23] = v8;
      a2[23] = 0LL;
    }
  }
  a1[31] = 0LL;
  v10 = (_QWORD *)a2[31];
  if ( v10 )
  {
    if ( v10 == a2 + 24 )
    {
      a1[31] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v10 + 8LL))(v10, a1 + 24);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)(a2 + 24), v11);
    }
    else
    {
      a1[31] = v10;
      a2[31] = 0LL;
    }
  }
  a1[39] = 0LL;
  v12 = (_QWORD *)a2[39];
  if ( v12 )
  {
    if ( v12 == a2 + 32 )
    {
      a1[39] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v12 + 8LL))(v12, a1 + 32);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)(a2 + 32), v13);
    }
    else
    {
      a1[39] = v12;
      a2[39] = 0LL;
    }
  }
  v14 = (__int64)(a2 + 40);
  a1[47] = 0LL;
  v15 = *(_QWORD *)(v14 + 56);
  if ( v15 )
  {
    if ( v15 == v14 )
    {
      a1[47] = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v15 + 8LL))(v15, a1 + 40);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v14, v16);
    }
    else
    {
      a1[47] = v15;
      *(_QWORD *)(v14 + 56) = 0LL;
    }
  }
  return a1;
}
