/*
 * XREFs of _lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::operator() @ 0x180682DD8
 * Callers:
 *     winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run @ 0x180685170 (winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementation--ImmersiveSh.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU7@@winrt@@YA?AU?$com_ptr@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x180681FFC (--$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::operator()(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  __int128 v7; // xmm1
  __int128 v8; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[24]; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+80h] [rbp+8h] BYREF
  __int64 v11; // [rsp+88h] [rbp+10h] BYREF

  v11 = a1[3];
  winrt::capture<Windows::Internal::Shell::WindowSnapping::ISnapComponent2,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
    &v10,
    (__int64 (__fastcall *)(_QWORD, GUID *, void *, __int64 *))IUnknown_QueryService,
    &v11);
  v2 = 0LL;
  v3 = 0LL;
  v4 = v10;
  while ( 1 )
  {
    v5 = *a1;
    result = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
    if ( (unsigned int)v3 >= result )
      break;
    v7 = *(_OWORD *)(v5 + 24 * v3);
    *(_OWORD *)v9 = v7;
    *(_QWORD *)&v9[16] = *(_QWORD *)(v5 + 24 * v3 + 16);
    if ( !(_DWORD)v3 )
      v2 = v7;
    v8 = *(_OWORD *)&v9[8];
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *, int))(*(_QWORD *)v4 + 56LL))(
      v4,
      v7,
      v2,
      &v8,
      (_DWORD)v3 != 0 ? 8 : 4);
    v3 = (unsigned int)(v3 + 1);
  }
  if ( v4 )
    return winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v10);
  return result;
}
