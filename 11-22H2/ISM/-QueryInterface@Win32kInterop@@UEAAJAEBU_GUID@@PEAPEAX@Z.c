/*
 * XREFs of ?QueryInterface@Win32kInterop@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180109590
 * Callers:
 *     ?QueryInterface@Win32kInterop@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007A110 (-QueryInterface@Win32kInterop@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@Win32kInterop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007A130 (-QueryInterface@Win32kInterop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::QueryInterface(Win32kInterop *this, struct _GUID *a2, void **a3)
{
  _QWORD *v5; // r8
  unsigned __int64 v6; // rax

  *a3 = 0LL;
  if ( IsEqualGUID(a2, &GUID_926e5c0a_e098_4251_b8a0_a0fe0969e75f) )
  {
    (*(void (__fastcall **)(Win32kInterop *))(*(_QWORD *)this + 8LL))(this);
    v6 = (unsigned __int64)this + 8;
LABEL_5:
    *a3 = (void *)(v6 & -(__int64)(this != 0LL));
    return 0LL;
  }
  if ( IsEqualGUID(v5, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    (*(void (__fastcall **)(Win32kInterop *))(*(_QWORD *)this + 8LL))(this);
    v6 = (unsigned __int64)this + 16;
    goto LABEL_5;
  }
  return 2147500034LL;
}
