/*
 * XREFs of ?GetSupportedVolumeSteppingForKsTopology@@YAJAEBU_GUID@@KPEAUIKsControl@@PEAUKSPROPERTY_STEPPING_LONG@@@Z @ 0x180166A4C
 * Callers:
 *     ?GetSupportedVolumeStepping@TelephonyController@@AEAAJXZ @ 0x180166A04 (-GetSupportedVolumeStepping@TelephonyController@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetSupportedVolumeSteppingForKsTopology(
        const struct _GUID *a1,
        __int64 a2,
        struct IKsControl *a3,
        struct KSPROPERTY_STEPPING_LONG *a4)
{
  unsigned int v4; // ebx
  struct IKsControlVtbl *lpVtbl; // rax
  int v8; // eax
  char *v9; // rax
  char *v10; // rdi
  __int64 v11; // rax
  GUID v13; // [rsp+40h] [rbp-40h] BYREF
  int v14; // [rsp+50h] [rbp-30h]
  int v15; // [rsp+54h] [rbp-2Ch]
  SIZE_T cb[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v17; // [rsp+68h] [rbp-18h]
  __int64 v18; // [rsp+78h] [rbp-8h]
  int v19; // [rsp+A8h] [rbp+28h] BYREF

  v4 = 0;
  v18 = 0LL;
  v19 = 0;
  *(_OWORD *)cb = 0LL;
  v17 = 0LL;
  if ( a3 && a4 )
  {
    lpVtbl = a3->lpVtbl;
    v14 = 1;
    v13 = GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97;
    v15 = 512;
    v8 = ((__int64 (__fastcall *)(struct IKsControl *, GUID *, __int64, SIZE_T *, int, int *))lpVtbl->KsProperty)(
           a3,
           &v13,
           24LL,
           cb,
           40,
           &v19);
    if ( v8 < 0 )
      return (unsigned int)v8;
    if ( HIDWORD(cb[0]) <= 0x28 )
      return v4;
    v9 = (char *)CoTaskMemAlloc(HIDWORD(cb[0]));
    v10 = v9;
    if ( !v9 )
      return (unsigned int)-2147024882;
    v8 = ((__int64 (__fastcall *)(struct IKsControl *, GUID *, __int64, char *, _DWORD, int *))a3->lpVtbl->KsProperty)(
           a3,
           &v13,
           24LL,
           v9,
           HIDWORD(cb[0]),
           &v19);
    if ( v8 < 0 )
    {
      return (unsigned int)v8;
    }
    else
    {
      v11 = *((_QWORD *)v10 + 1) - *(_QWORD *)&GUID_97e99ba0_bdea_11cf_a5d6_28db04c10000.Data1;
      if ( !v11 )
        v11 = *((_QWORD *)v10 + 2) - *(_QWORD *)GUID_97e99ba0_bdea_11cf_a5d6_28db04c10000.Data4;
      if ( !v11
        && *((_DWORD *)v10 + 6) == 3
        && !*((_DWORD *)v10 + 7)
        && *((_DWORD *)v10 + 8)
        && !*((_DWORD *)v10 + 9)
        && *((_DWORD *)v10 + 1) >= 0x48u
        && *((_DWORD *)v10 + 10) == 2
        && *((_DWORD *)v10 + 11) >= 0x10u
        && *((_DWORD *)v10 + 12)
        && ((*((_DWORD *)v10 + 13) & 6) == 0 || (*((_DWORD *)v10 + 13) & 6) == 6) )
      {
        *a4 = *(struct KSPROPERTY_STEPPING_LONG *)(v10 + 56);
      }
      else
      {
        return (unsigned int)-2147024809;
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v4;
}
