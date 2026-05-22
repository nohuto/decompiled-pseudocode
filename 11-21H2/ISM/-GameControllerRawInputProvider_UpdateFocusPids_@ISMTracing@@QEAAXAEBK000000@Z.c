/*
 * XREFs of ?GameControllerRawInputProvider_UpdateFocusPids_@ISMTracing@@QEAAXAEBK000000@Z @ 0x180034C3C
 * Callers:
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180034484 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::GameControllerRawInputProvider_UpdateFocusPids_(
        ISMTracing *this,
        const unsigned int *a2,
        const unsigned int *a3,
        const unsigned int *a4,
        const unsigned int *a5,
        const unsigned int *a6,
        const unsigned int *a7,
        const unsigned int *a8)
{
  _DWORD *v11; // rcx
  __int64 v12; // r10
  int v13; // ecx
  int v14; // ecx
  REGHANDLE v15; // rcx
  int v16; // [rsp+38h] [rbp-99h] BYREF
  int v17; // [rsp+3Ch] [rbp-95h] BYREF
  int v18; // [rsp+40h] [rbp-91h] BYREF
  int v19; // [rsp+44h] [rbp-8Dh] BYREF
  int v20; // [rsp+48h] [rbp-89h] BYREF
  int v21; // [rsp+4Ch] [rbp-85h] BYREF
  _DWORD v22[2]; // [rsp+50h] [rbp-81h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-69h] BYREF
  void *v25; // [rsp+78h] [rbp-59h]
  int v26; // [rsp+80h] [rbp-51h]
  int v27; // [rsp+84h] [rbp-4Dh]
  _DWORD *v28; // [rsp+88h] [rbp-49h]
  int v29; // [rsp+90h] [rbp-41h]
  int v30; // [rsp+94h] [rbp-3Dh]
  int *v31; // [rsp+98h] [rbp-39h]
  int v32; // [rsp+A0h] [rbp-31h]
  int v33; // [rsp+A4h] [rbp-2Dh]
  int *v34; // [rsp+A8h] [rbp-29h]
  int v35; // [rsp+B0h] [rbp-21h]
  int v36; // [rsp+B4h] [rbp-1Dh]
  int *v37; // [rsp+B8h] [rbp-19h]
  int v38; // [rsp+C0h] [rbp-11h]
  int v39; // [rsp+C4h] [rbp-Dh]
  int *v40; // [rsp+C8h] [rbp-9h]
  int v41; // [rsp+D0h] [rbp-1h]
  int v42; // [rsp+D4h] [rbp+3h]
  int *v43; // [rsp+D8h] [rbp+7h]
  int v44; // [rsp+E0h] [rbp+Fh]
  int v45; // [rsp+E4h] [rbp+13h]
  int *v46; // [rsp+E8h] [rbp+17h]
  int v47; // [rsp+F0h] [rbp+1Fh]
  int v48; // [rsp+F4h] [rbp+23h]

  v11 = (_DWORD *)wil::details::static_lazy<ISMTracing>::get(
                    (__int64)this,
                    _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( v11 && *v11 )
  {
    v12 = wil::details::static_lazy<ISMTracing>::get(
            (__int64)v11,
            _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v12 > 4u )
    {
      v48 = 0;
      v45 = 0;
      v42 = 0;
      v13 = *a8;
      v39 = 0;
      v36 = 0;
      v33 = 0;
      v30 = 0;
      EventDescriptor.Keyword = 0LL;
      v16 = v13;
      v17 = *a7;
      v47 = 4;
      v44 = 4;
      v18 = *a6;
      v41 = 4;
      v38 = 4;
      v14 = *a5;
      v20 = *a4;
      v21 = *a3;
      v22[0] = *a2;
      v46 = &v16;
      v43 = &v17;
      v40 = &v18;
      v37 = &v19;
      v34 = &v20;
      v31 = &v21;
      v28 = v22;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = *(_QWORD *)(v12 + 8);
      v19 = v14;
      v35 = 4;
      v32 = 4;
      v29 = 4;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v25 = &unk_180201764;
      UserData.Reserved = 2;
      v15 = *(_QWORD *)(v12 + 32);
      v26 = 198;
      v27 = 1;
      v22[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v15, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    }
  }
}
