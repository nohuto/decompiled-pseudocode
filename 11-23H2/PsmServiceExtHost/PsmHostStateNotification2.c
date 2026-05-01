/*
 * XREFs of PsmHostStateNotification2 @ 0x18000CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000E3E0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

int __fastcall PsmHostStateNotification2(
        unsigned __int8 *Src,
        unsigned int a2,
        const unsigned __int16 *a3,
        int *a4,
        __int64 *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // esi
  int v13; // eax
  const unsigned __int16 *v14; // rdx
  __int64 v15; // rax
  int v17; // ecx
  DWORD v18; // edi
  ULONG v19; // eax
  int result; // eax
  DWORD v21; // ebx
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v25[3]; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE TlsValue[144]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+60h] BYREF
  void *v31; // [rsp+170h] [rbp+70h]
  int v32; // [rsp+178h] [rbp+78h]
  int v33; // [rsp+17Ch] [rbp+7Ch]
  const unsigned __int16 *v34; // [rsp+180h] [rbp+80h]
  int v35; // [rsp+188h] [rbp+88h]
  int v36; // [rsp+18Ch] [rbp+8Ch]
  unsigned __int8 *v37; // [rsp+190h] [rbp+90h]
  int v38; // [rsp+198h] [rbp+98h]
  int v39; // [rsp+19Ch] [rbp+9Ch]
  _DWORD *v40; // [rsp+1A0h] [rbp+A0h]
  __int64 v41; // [rsp+1A8h] [rbp+A8h]
  int *v42; // [rsp+1B0h] [rbp+B0h]
  __int64 v43; // [rsp+1B8h] [rbp+B8h]
  int *v44; // [rsp+1C0h] [rbp+C0h]
  __int64 v45; // [rsp+1C8h] [rbp+C8h]
  __int64 *v46; // [rsp+1D0h] [rbp+D0h]
  __int64 v47; // [rsp+1D8h] [rbp+D8h]
  int *v48; // [rsp+1E0h] [rbp+E0h]
  __int64 v49; // [rsp+1E8h] [rbp+E8h]

  v8 = 0;
  if ( (unsigned int)dword_1800DB1E0 > 4 && (byte_1800DB1F0 & 1) != 0 && (qword_1800DB1F8 & 1) == qword_1800DB1F8 )
  {
    v22 = a8;
    v26 = *a5;
    v23 = *a4;
    v24 = a6;
    v48 = &v22;
    v46 = &v26;
    v44 = &v23;
    v42 = &v24;
    v40 = v25;
    v25[0] = a2;
    v49 = 4LL;
    v47 = 8LL;
    v45 = 4LL;
    v43 = 4LL;
    v41 = 4LL;
    v13 = Src[1];
    v37 = Src;
    v39 = 0;
    v38 = 4 * v13 + 8;
    if ( a3 )
    {
      v14 = a3;
      v15 = -1LL;
      while ( a3[++v15] != 0 )
        ;
      v17 = 2 * v15 + 2;
    }
    else
    {
      v14 = &word_1800B66B4;
      v17 = 2;
    }
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DB1E8;
    v35 = v17;
    v34 = v14;
    v36 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
    v31 = &unk_1800BD90C;
    UserData.Reserved = 2;
    v32 = 109;
    v33 = 1;
    v25[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  v18 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      goto LABEL_17;
    v18 = HampLockTrackerId;
  }
  memset_0(TlsValue, 0, 0x88uLL);
  if ( v18 != -1 )
  {
    if ( TlsGetValue(v18) )
      __int2c();
    TlsSetValue(v18, TlsValue);
  }
  v8 = 1;
LABEL_17:
  memset_0(v28, 0, 0x44uLL);
  v19 = RtlLengthSid(Src);
  memcpy_0(v28, Src, v19);
  result = ModernResourceEnforcer::ApplicationStateNotification(*((_QWORD *)RmSvcGlobals + 5), v28, a2, a3, a4, a5, a6);
  if ( v8 )
  {
    v21 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      return TlsSetValue(v21, 0LL);
    }
  }
  return result;
}
