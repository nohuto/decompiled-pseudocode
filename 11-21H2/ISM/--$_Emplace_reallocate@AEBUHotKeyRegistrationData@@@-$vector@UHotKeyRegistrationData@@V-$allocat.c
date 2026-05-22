/*
 * XREFs of ??$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@QEAAPEAUHotKeyRegistrationData@@QEAU2@AEBU2@@Z @ 0x1800F8BF4
 * Callers:
 *     ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x1800F8E70 (-ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAG.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Change_array@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@AEAAXQEAUHotKeyRegistrationData@@_K1@Z @ 0x1800F9188 (-_Change_array@-$vector@UHotKeyRegistrationData@@V-$allocator@UHotKeyRegistrationData@@@std@@@st.c)
 */

char *__fastcall std::vector<HotKeyRegistrationData>::_Emplace_reallocate<HotKeyRegistrationData const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rax
  char *v13; // rdi
  char *v14; // r14
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  void *v17; // rcx
  size_t v18; // r8
  char *result; // rax
  __int64 v20; // [rsp+50h] [rbp+8h]
  void *v21; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 12;
  v7 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( v7 == 0x1555555555555555LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2);
  v10 = v9 >> 1;
  if ( v9 <= 0x1555555555555555LL - (v9 >> 1) )
  {
    v11 = v7 + 1;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    v20 = v11;
    if ( v11 > 0x1555555555555555LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x1555555555555555LL;
    v20 = 0x1555555555555555LL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(12 * v11);
  v13 = v12;
  v21 = v12;
  try
  {
    v14 = &v12[12 * v6];
    *(_QWORD *)v14 = *(_QWORD *)a3;
    *((_DWORD *)v14 + 2) = *(_DWORD *)(a3 + 8);
    v15 = a1[1];
    v16 = *a1;
    v17 = v12;
    if ( a2 == v15 )
    {
      v18 = v15 - v16;
    }
    else
    {
      memmove_0(v12, v16, a2 - (_BYTE *)*a1);
      v17 = v14 + 12;
      v18 = (_BYTE *)a1[1] - a2;
      v16 = a2;
    }
    memmove_0(v17, v16, v18);
    std::vector<HotKeyRegistrationData>::_Change_array(a1, v13, v8, v11);
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, 12 * v20);
    throw;
  }
  return result;
}
