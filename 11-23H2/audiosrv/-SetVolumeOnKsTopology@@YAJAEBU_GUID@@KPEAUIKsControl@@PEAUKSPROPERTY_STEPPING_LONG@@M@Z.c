/*
 * XREFs of ?SetVolumeOnKsTopology@@YAJAEBU_GUID@@KPEAUIKsControl@@PEAUKSPROPERTY_STEPPING_LONG@@M@Z @ 0x180167DF4
 * Callers:
 *     ?SetCellularVolume@TelephonyController@@UEAAJM@Z @ 0x180167D00 (-SetCellularVolume@TelephonyController@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SetVolumeOnKsTopology(
        const struct _GUID *a1,
        int a2,
        struct IKsControl *a3,
        struct KSPROPERTY_STEPPING_LONG *a4,
        float a5)
{
  int v5; // eax
  struct IKsControlVtbl *lpVtbl; // rax
  int v7; // eax
  unsigned int v8; // ebx
  GUID v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+54h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  const struct _GUID *v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+78h] [rbp+10h] BYREF

  v15 = a2;
  v14 = a1;
  if ( a4 )
    v5 = (int)((double)(int)((double)(int)(((double)a4->Bounds.SignedMaximum - (double)a4->Bounds.SignedMinimum)
                                         / (double)(int)a4->SteppingDelta)
                           * a5
                           + 0.5)
             * (double)(int)a4->SteppingDelta
             + (double)a4->Bounds.SignedMinimum);
  else
    v5 = (int)(float)(a5 * 65536.0);
  v15 = v5;
  lpVtbl = a3->lpVtbl;
  v10 = GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97;
  v11 = 1;
  v12 = 2;
  v7 = ((__int64 (__fastcall *)(struct IKsControl *, GUID *, __int64, int *, int, const struct _GUID **))lpVtbl->KsProperty)(
         a3,
         &v10,
         24LL,
         &v15,
         4,
         &v14);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA0,
    (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\telephonycontroller.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
