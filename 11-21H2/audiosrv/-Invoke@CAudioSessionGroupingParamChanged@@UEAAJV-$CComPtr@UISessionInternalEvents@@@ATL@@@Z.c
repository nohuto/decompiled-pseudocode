/*
 * XREFs of ?Invoke@CAudioSessionGroupingParamChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18000F960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionGroupingParamChanged::Invoke(_QWORD *a1, __int64 **a2)
{
  __int64 *v3; // r11
  __int64 v4; // rax
  __int64 v5; // r10
  unsigned int v6; // edi
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v3 = *a2;
  v4 = **a2;
  v5 = a1[1];
  v8 = *(_OWORD *)a1[2];
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, _QWORD))(v4 + 64))(
         v3,
         (v5 + 8) & -(__int64)(v5 != 0),
         &v8,
         a1[3]);
  if ( *a2 )
    (*(void (__fastcall **)(__int64 *))(**a2 + 16))(*a2);
  return v6;
}
