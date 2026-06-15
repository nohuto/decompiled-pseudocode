/*
 * XREFs of std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_ec276c8d07c939ab0e4b590e5bf4eac5___ @ 0x18000F2E0
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180011C90 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_ec276c8d07c939ab0e4b590e5bf4eac5___(
        char ***a1,
        _QWORD *a2)
{
  char *v4; // rcx
  char *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r8
  char *v10; // rcx
  char *v11; // rbx
  char *v12; // [rsp+38h] [rbp-30h] BYREF
  char **v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  v13 = &v12;
  v5 = (char *)*a1;
  if ( *a1 )
  {
    do
    {
      v6 = *((_QWORD *)v5 + 1);
      v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
      if ( (unsigned int)_o__wcsicmp(v8, v7) )
      {
        a1 = (char ***)v5;
        v5 = *(char **)v5;
      }
      else
      {
        v14 = 0LL;
        if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2)(
               *a2,
               &GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c,
               &v14) >= 0 )
        {
          LOBYTE(v9) = 1;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, 0LL, v9, 0LL);
        }
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v10 = (char *)*a1;
        v5 = **a1;
        *(_QWORD *)v10 = 0LL;
        *a1 = (char **)v5;
        *v13 = v10;
        v13 = (char **)v10;
      }
    }
    while ( v5 );
    v4 = v12;
  }
  if ( v4 )
  {
    do
    {
      v11 = *(char **)v4;
      std::_Deallocate<16,0>(v4, 0x10uLL);
      v4 = v11;
    }
    while ( v11 );
  }
}
