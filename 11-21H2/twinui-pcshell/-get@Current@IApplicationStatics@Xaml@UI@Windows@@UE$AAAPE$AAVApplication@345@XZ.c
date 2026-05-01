/*
 * XREFs of ?get@Current@IApplicationStatics@Xaml@UI@Windows@@UE$AAAPE$AAVApplication@345@XZ @ 0x1800F67A4
 * Callers:
 *     ?get@Current@Application@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1800F6690 (-get@Current@Application@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::IApplicationStatics::Current::get(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v5);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    JUMPOUT(0x1800F682CLL);
  }
  v2 = v5;
  v3 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v2 = v5;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return v3;
}
