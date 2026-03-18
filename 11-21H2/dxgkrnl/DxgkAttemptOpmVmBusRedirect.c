/*
 * XREFs of DxgkAttemptOpmVmBusRedirect @ 0x1C01EDB94
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C01ED968 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9___ @ 0x1C000F1F0 (DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9___.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0046A74 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C0160804 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1C033D650 (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFI.c)
 *     ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x1C037AD20 (-VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z.c)
 */

__int64 __fastcall DxgkAttemptOpmVmBusRedirect(
        __int64 a1,
        int a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int *a7,
        _DWORD *a8)
{
  const CHAR *v10; // rdi
  _DWORD *v12; // r14
  DXGGLOBAL *Global; // rax
  unsigned int v14; // esi
  int *v15; // rbx
  DXG_GUEST_GLOBAL_VMBUS *v17; // rsi
  struct DXGGLOBAL *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  char v26; // [rsp+48h] [rbp-49h] BYREF
  __int128 v27; // [rsp+58h] [rbp-39h] BYREF
  int v28; // [rsp+68h] [rbp-29h] BYREF
  __int64 v29; // [rsp+70h] [rbp-21h] BYREF
  int v30; // [rsp+78h] [rbp-19h]
  int v31; // [rsp+7Ch] [rbp-15h]
  const CHAR *v32; // [rsp+80h] [rbp-11h] BYREF
  int *v33; // [rsp+88h] [rbp-9h] BYREF
  unsigned __int8 *v34; // [rsp+90h] [rbp-1h]
  char v35; // [rsp+98h] [rbp+7h]
  unsigned int v36; // [rsp+E8h] [rbp+57h] BYREF

  v36 = a3;
  *(_QWORD *)&v27 = &v36;
  v10 = 0LL;
  *((_QWORD *)&v27 + 1) = &v26;
  v26 = 0;
  DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9_((__int64)&v33, &v27);
  v12 = a8;
  *a8 = -1073741823;
  Global = DXGGLOBAL_GetGlobal();
  if ( DXGGLOBAL::IsVmConnectedToHost(Global)
    && (v17 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 218)) != 0LL
    && (v29 = a1,
        *(_QWORD *)&v27 = 0LL,
        DWORD2(v27) = 0,
        v30 = a2,
        v31 = 0,
        v18 = DXGGLOBAL_GetGlobal(),
        (int)REMOTEMONITORMAPPING::FindMappingFromGuestId(
               (struct DXGGLOBAL *)((char *)v18 + 304864),
               (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v29,
               (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v27) >= 0) )
  {
    v26 = 1;
    *v12 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpmRequest(v17, (struct _LUID)v27, DWORD2(v27), v36, a4, a5, a6, a7);
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  if ( v35 )
  {
    v15 = v33;
    if ( *v33 == 2303131
      && (unsigned int)dword_1C012F8A8 > 5
      && tlgKeywordOn((__int64)&dword_1C012F8A8, 0x400000100000LL) )
    {
      v23 = *((_QWORD *)DXGPROCESS::GetCurrent(v20, v19, v21, v22) + 8);
      if ( v23 )
        v10 = *(const CHAR **)(v23 + 88);
      v32 = v10;
      v25 = *v34;
      LODWORD(a8) = *v34;
      v28 = *v15;
      v29 = 33556480LL;
      *(_QWORD *)&v27 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v25,
        byte_1C0097729,
        v24,
        (__int64)&v27,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&a8,
        &v32);
    }
  }
  return v14;
}
