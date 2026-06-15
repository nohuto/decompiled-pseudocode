/*
 * XREFs of ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18000B3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionStateChanged::Invoke(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r11
  __int64 (__fastcall *v4)(__int64, __int64, _QWORD, _QWORD); // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned int v8; // edi

  v3 = *a2;
  v4 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)*a2 + 56LL);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
    v6 = v5 + 8;
  else
    v6 = 0LL;
  result = v4(v3, v6, *(unsigned int *)(a1 + 16), *(unsigned int *)(a1 + 20));
  v8 = result;
  if ( *a2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    return v8;
  }
  return result;
}
