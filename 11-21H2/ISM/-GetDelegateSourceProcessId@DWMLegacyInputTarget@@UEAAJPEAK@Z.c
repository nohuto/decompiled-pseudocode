/*
 * XREFs of ?GetDelegateSourceProcessId@DWMLegacyInputTarget@@UEAAJPEAK@Z @ 0x18001AFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DWMLegacyInputTarget::GetDelegateSourceProcessId(DWMLegacyInputTarget *this, unsigned int *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // r15
  __int64 v10; // rcx
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+60h] [rbp+40h] BYREF

  (*(void (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8, &v12);
  v3 = v12;
  if ( !v12 )
    goto LABEL_2;
  v5 = 0LL;
  v11 = 0LL;
  v6 = *(_QWORD *)(v12 + 488);
  v7 = *(_QWORD *)(v12 + 496);
  if ( v6 != v7 )
  {
    while ( 1 )
    {
      v8 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v6 + 8);
      v9 = **v8;
      if ( v5 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      if ( v9(v8, &GUID_f6f9433e_5957_4930_a4c4_4da30644521c, &v11) >= 0 )
        break;
      v6 += 16LL;
      if ( v6 == v7 )
        break;
      v5 = v11;
    }
    v5 = v11;
  }
  if ( !v5 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
    v3 = v12;
LABEL_2:
    *a2 = 0;
    goto LABEL_3;
  }
  *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  v10 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v3 = v12;
LABEL_3:
  if ( v3 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return 0LL;
}
