/*
 * XREFs of ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x1801494AC
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1800470E0 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014CB48 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18005F1D0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18005F238 (_Init_thread_header.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall GetPacketSizeConstraints(struct IPropertyStore *a1, struct PacketSizeConstraints **a2)
{
  void *v4; // rbx
  char v5; // r14
  __int128 *v6; // rsi
  void *v7; // rcx
  int v8; // edi
  __int16 v9; // ax
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  __int64 v14; // rax
  struct PacketSizeConstraints *v15; // rdi
  void *v16; // rax
  void *v17; // rcx
  void *pv; // [rsp+20h] [rbp-49h] BYREF
  void *v19; // [rsp+28h] [rbp-41h] BYREF
  __int64 v20; // [rsp+30h] [rbp-39h] BYREF
  PROPVARIANT v21[2]; // [rsp+38h] [rbp-31h] BYREF
  void *Src; // [rsp+48h] [rbp-21h]
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v24; // [rsp+60h] [rbp-9h]
  void *v25; // [rsp+68h] [rbp-1h]
  void **p_pv; // [rsp+70h] [rbp+7h] BYREF
  void *v27; // [rsp+78h] [rbp+Fh] BYREF
  int v28; // [rsp+80h] [rbp+17h]

  v4 = 0LL;
  v25 = 0LL;
  v5 = 0;
  *(_OWORD *)pvar = 0LL;
  v24 = 0LL;
  *(_OWORD *)v21 = 0LL;
  Src = 0LL;
  if ( dword_1801C3244 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801C3244);
    if ( dword_1801C3244 == -1 )
    {
      xmmword_1801C31F8 = DEVPKEY_KsAudio_PacketSize_Constraints2;
      dword_1801C3208 = 2;
      xmmword_1801C320C = DEVPKEY_KsAudio_PacketSize_Constraints;
      dword_1801C321C = 2;
      Init_thread_footer(&dword_1801C3244);
    }
  }
  v6 = &xmmword_1801C31F8;
  while ( 1 )
  {
    pv = 0LL;
    PropVariantClear(pvar);
    PropVariantClear(v21);
    v8 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, PROPVARIANT *))a1->lpVtbl->GetValue)(a1, v6, v21);
    if ( v8 < 0 )
      goto LABEL_27;
    v9 = (__int16)v21[0];
    if ( !LOWORD(v21[0]) )
    {
      p_pv = (void **)0x4C7D1B2C233164C8LL;
      v27 = (void *)0x67257A6871B668BCLL;
      v28 = 1;
      v19 = 0LL;
      v20 = 0LL;
      v8 = ((__int64 (__fastcall *)(struct IPropertyStore *, void ***, PROPVARIANT *))a1->lpVtbl->GetValue)(
             a1,
             &p_pv,
             pvar);
      if ( v8 < 0 )
        goto LABEL_26;
      if ( LOWORD(pvar[0]) != 31 )
      {
        v8 = -2147023728;
LABEL_26:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
LABEL_27:
        v12 = pv;
        pv = 0LL;
        if ( !v12 )
          goto LABEL_29;
LABEL_28:
        CoTaskMemFree(v12);
        goto LABEL_29;
      }
      v8 = (*(__int64 (__fastcall **)(LPVOID, PROPVARIANT, void **))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
             g_DeviceEnumerator,
             pvar[1],
             &v19);
      if ( v8 < 0 )
        goto LABEL_26;
      v8 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)v19 + 32LL))(v19, 0LL, &v20);
      if ( v8 < 0 )
        goto LABEL_26;
      v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v20 + 40LL))(v20, v6, v21);
      if ( v8 < 0 )
        goto LABEL_26;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
      v9 = (__int16)v21[0];
    }
    if ( v9 != 65 || LODWORD(v21[1]) < 0x28 )
    {
      v11 = pv;
      goto LABEL_22;
    }
    p_pv = &pv;
    v27 = 0LL;
    LOBYTE(v28) = 1;
    v8 = CTCoAllocPolicy::Alloc(v7, 1, LODWORD(v21[1]), &v27);
    if ( (_BYTE)v28 )
    {
      v10 = *p_pv;
      *p_pv = v27;
      if ( v10 )
        CoTaskMemFree(v10);
    }
    if ( v8 < 0 )
      goto LABEL_27;
    memcpy_0(pv, Src, LODWORD(v21[1]));
    v11 = pv;
    if ( LODWORD(v21[1]) >= 24 * *((_DWORD *)pv + 3) + 16 )
      break;
LABEL_22:
    pv = 0LL;
    if ( v11 )
      CoTaskMemFree(v11);
    v6 = (__int128 *)((char *)v6 + 20);
    if ( v6 == (__int128 *)&____PchSym__00_KxulyqvxgPillgKxuzexlivUzfwrlxlivUhvieviUoryUzfwrlhvierxvfgroUoryUlyquivUznwGEUhgwzucOlyq_AudioServiceUtil )
      goto LABEL_40;
  }
  if ( *((_DWORD *)v6 + 4) != 2 )
    goto LABEL_38;
  v14 = *(_QWORD *)v6 - DEVPKEY_KsAudio_PacketSize_Constraints2;
  if ( *(_QWORD *)v6 == (_QWORD)DEVPKEY_KsAudio_PacketSize_Constraints2 )
    v14 = *((_QWORD *)v6 + 1) - *((_QWORD *)&DEVPKEY_KsAudio_PacketSize_Constraints2 + 1);
  v5 = 1;
  if ( v14 )
LABEL_38:
    v5 = 0;
  v4 = pv;
  v25 = pv;
LABEL_40:
  if ( a2 && v4 )
  {
    v19 = 0LL;
    v8 = CTCoAllocPolicy::Alloc(v11, 1, 0x10uLL, &v19);
    if ( v8 < 0 )
    {
      v12 = v19;
      goto LABEL_28;
    }
    v15 = (struct PacketSizeConstraints *)v19;
    *(_BYTE *)v19 = v5;
    v16 = v4;
    v4 = 0LL;
    v17 = (void *)*((_QWORD *)v15 + 1);
    *((_QWORD *)v15 + 1) = v16;
    if ( v17 )
      CoTaskMemFree(v17);
    *a2 = v15;
    CoTaskMemFree(0LL);
  }
  v8 = 0;
LABEL_29:
  PropVariantClear(pvar);
  PropVariantClear(v21);
  if ( v4 )
    CoTaskMemFree(v4);
  return (unsigned int)v8;
}
