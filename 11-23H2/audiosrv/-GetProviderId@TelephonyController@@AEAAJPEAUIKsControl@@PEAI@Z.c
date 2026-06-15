/*
 * XREFs of ?GetProviderId@TelephonyController@@AEAAJPEAUIKsControl@@PEAI@Z @ 0x1801666F4
 * Callers:
 *     ?Initialize@TelephonyController@@IEAAJXZ @ 0x180166C98 (-Initialize@TelephonyController@@IEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TelephonyController::GetProviderId(
        TelephonyController *this,
        struct IKsControl *a2,
        unsigned int *a3)
{
  unsigned int v3; // ebx
  struct IKsControlVtbl *lpVtbl; // rax
  int v6; // eax
  GUID v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]
  unsigned int v11; // [rsp+70h] [rbp+8h] BYREF
  int v12; // [rsp+74h] [rbp+Ch]
  char v13; // [rsp+78h] [rbp+10h] BYREF

  v12 = HIDWORD(this);
  v3 = 0;
  v11 = 0;
  if ( a2 && a3 )
  {
    lpVtbl = a2->lpVtbl;
    v9 = 0;
    v8 = GUID_b6df7eb1_d099_489f_a6a0_c0106f0887a7;
    v10 = 1;
    v6 = ((__int64 (__fastcall *)(struct IKsControl *, GUID *, __int64, unsigned int *, int, char *))lpVtbl->KsProperty)(
           a2,
           &v8,
           24LL,
           &v11,
           4,
           &v13);
    if ( v6 >= 0 )
      *a3 = v11;
    else
      return (unsigned int)v6;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
