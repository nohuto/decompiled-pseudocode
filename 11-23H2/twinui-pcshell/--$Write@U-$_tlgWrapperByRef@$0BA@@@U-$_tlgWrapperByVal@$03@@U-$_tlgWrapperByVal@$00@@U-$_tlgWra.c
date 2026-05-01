/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U4@U4@U4@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@666AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18005A69C
 * Callers:
 *     ??$DashboardInteracted@AEAU_GUID@@IAEA_NPEBGPEBGAEAY0BK@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAXAEAU_GUID@@$$QEAIAEA_N$$QEAPEBG3AEAY0BK@$$CBGAEAPEBG@Z @ 0x18005A55C (--$DashboardInteracted@AEAU_GUID@@IAEA_NPEBGPEBGAEAY0BK@$$CBGAEAPEBG@DashboardManagerTelemetry@@.c)
 *     ??$DashboardInteracted@Uguid@winrt@@IAEA_NPEBGPEBGAEAY0BG@$$CBGAEBQEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEA_N$$QEAPEBG3AEAY0BG@$$CBGAEBQEBG@Z @ 0x1806938C0 (--$DashboardInteracted@Uguid@winrt@@IAEA_NPEBGPEBGAEAY0BG@$$CBGAEBQEBG@DashboardManagerTelemetry.c)
 *     ??$DashboardInteracted@Uguid@winrt@@IAEB_NPEBGPEBGAEAY0BD@$$CBGAEBQEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEB_N$$QEAPEBG3AEAY0BD@$$CBGAEBQEBG@Z @ 0x180693A00 (--$DashboardInteracted@Uguid@winrt@@IAEB_NPEBGPEBGAEAY0BD@$$CBGAEBQEBG@DashboardManagerTelemetry.c)
 *     ??$DashboardInteracted@Uguid@winrt@@IAEB_NPEBGPEBGAEAY0L@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEB_N$$QEAPEBG3AEAY0L@$$CBGAEAPEBG@Z @ 0x180693B40 (--$DashboardInteracted@Uguid@winrt@@IAEB_NPEBGPEBGAEAY0L@$$CBGAEAPEBG@DashboardManagerTelemetry@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        const WCHAR **a8,
        const WCHAR **a9,
        const WCHAR **a10,
        const WCHAR **a11,
        __int64 a12)
{
  __int64 v14; // rcx
  int v15; // r8d
  const WCHAR *v16; // rdx
  __int64 v17; // rax
  int v18; // r9d
  const WCHAR *v19; // rdx
  __int64 v20; // rax
  int v21; // r9d
  const WCHAR *v22; // rdx
  __int64 v23; // rax
  int v24; // r9d
  const WCHAR *v25; // rdx
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-99h] BYREF
  __int64 v28; // [rsp+50h] [rbp-79h]
  __int64 v29; // [rsp+58h] [rbp-71h]
  __int64 v30; // [rsp+60h] [rbp-69h]
  __int64 v31; // [rsp+68h] [rbp-61h]
  __int64 v32; // [rsp+70h] [rbp-59h]
  __int64 v33; // [rsp+78h] [rbp-51h]
  const WCHAR *v34; // [rsp+80h] [rbp-49h]
  int v35; // [rsp+88h] [rbp-41h]
  int v36; // [rsp+8Ch] [rbp-3Dh]
  const WCHAR *v37; // [rsp+90h] [rbp-39h]
  int v38; // [rsp+98h] [rbp-31h]
  int v39; // [rsp+9Ch] [rbp-2Dh]
  const WCHAR *v40; // [rsp+A0h] [rbp-29h]
  int v41; // [rsp+A8h] [rbp-21h]
  int v42; // [rsp+ACh] [rbp-1Dh]
  const WCHAR *v43; // [rsp+B0h] [rbp-19h]
  int v44; // [rsp+B8h] [rbp-11h]
  int v45; // [rsp+BCh] [rbp-Dh]
  __int64 v46; // [rsp+C0h] [rbp-9h]
  __int64 v47; // [rsp+C8h] [rbp-1h]

  v46 = a12;
  v14 = -1LL;
  v47 = 8LL;
  v15 = 2;
  v16 = *a11;
  if ( *a11 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = &LocaleName;
    v18 = 2;
  }
  v43 = v16;
  v44 = v18;
  v45 = 0;
  v19 = *a10;
  if ( *a10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v19 = &LocaleName;
    v21 = 2;
  }
  v40 = v19;
  v41 = v21;
  v42 = 0;
  v22 = *a9;
  if ( *a9 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v22 = &LocaleName;
    v24 = 2;
  }
  v37 = v22;
  v38 = v24;
  v39 = 0;
  v25 = *a8;
  if ( *a8 )
  {
    do
      ++v14;
    while ( v25[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v25 = &LocaleName;
  }
  v32 = a7;
  v30 = a6;
  v35 = v15;
  v34 = v25;
  v36 = 0;
  v28 = *a5;
  v33 = 1LL;
  v31 = 4LL;
  v29 = 16LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0, 0, 0xAu, &v27);
}
