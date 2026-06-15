/*
 * XREFs of ?Invoke@CAudioStreamStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18000B020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStreamStateChanged::Invoke(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r11
  __int64 (__fastcall *v4)(__int64, __int64, _QWORD, _QWORD, __int64); // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 result; // rax
  unsigned int v10; // edi

  v3 = *a2;
  v4 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 80LL);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  if ( v5 )
    v7 = v5 + 8;
  else
    v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
    v6 = v8 + 8;
  result = v4(v3, v6, *(unsigned int *)(a1 + 16), *(unsigned int *)(a1 + 20), v7);
  v10 = result;
  if ( *a2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    return v10;
  }
  return result;
}
