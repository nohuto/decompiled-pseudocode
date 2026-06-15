/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18004A188
 * Callers:
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x180047BB4 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x180049314 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAAXXZ @ 0x1800480A4 (-reset@-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVariantClear@@YAJ0@ZP6AX0@Z$1-PropVar.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x18004B44C (-GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetConnectorSignalProcessingModes(
        struct IPropertyStore *a1,
        const struct _tagpropertykey *a2,
        const struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  struct _GUID **v8; // r13
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // r15d
  int v13; // eax
  const unsigned __int16 *v14; // r14
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  int ConnectorSignalProcessingModes; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int16 **v22; // [rsp+20h] [rbp-40h]
  unsigned __int64 *v23; // [rsp+28h] [rbp-38h]
  unsigned int v24; // [rsp+30h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  *a4 = 0;
  v8 = a5;
  *a5 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v26 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
         a1,
         a3,
         pvar);
  v10 = v9;
  if ( v9 < 0 )
  {
    v18 = (unsigned int)v9;
    v19 = 335LL;
    goto LABEL_25;
  }
  if ( LOWORD(pvar[0]) )
  {
    if ( LOWORD(pvar[0]) != 19 )
    {
      v19 = 337LL;
      goto LABEL_23;
    }
    v12 = (unsigned int)pvar[1];
    wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::reset((__int64)pvar);
    v13 = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
            a1,
            a2,
            pvar);
    v10 = v13;
    if ( v13 >= 0 )
    {
      if ( !LOWORD(pvar[0]) )
      {
        v10 = -2147023728;
        v19 = 344LL;
LABEL_24:
        v18 = v10;
        goto LABEL_25;
      }
      if ( LOWORD(pvar[0]) == 31 )
      {
        a5 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &a5,
          0LL);
        v14 = (const unsigned __int16 *)pvar[1];
        v15 = -1LL;
        do
          ++v15;
        while ( *((_WORD *)pvar[1] + v15) );
        a5 = 0LL;
        v16 = v15 + 1;
        if ( v15 + 1 >= v15 && (a5 = 0LL, is_mul_ok(v16, 2uLL)) )
        {
          v10 = CTCoAllocPolicy::Alloc(0LL, (v16 * (unsigned __int128)2uLL) >> 64, 2 * v16, (void **)&a5);
          if ( (v10 & 0x80000000) == 0 )
          {
            StringCchCopyNExW((unsigned __int16 *)a5, v15 + 1, v14, v15, v22, v23, v24);
            ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                               (const unsigned __int16 *)a5,
                                               v12,
                                               a4,
                                               v8);
            v10 = ConnectorSignalProcessingModes;
            if ( ConnectorSignalProcessingModes >= 0 )
            {
              v10 = 0;
LABEL_16:
              wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&a5);
              goto LABEL_4;
            }
            v20 = (unsigned int)ConnectorSignalProcessingModes;
            v21 = 350LL;
LABEL_28:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v21,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
              (const char *)v20,
              (int)v22);
            goto LABEL_16;
          }
        }
        else
        {
          v10 = -2147024362;
        }
        v20 = v10;
        v21 = 348LL;
        goto LABEL_28;
      }
      v19 = 345LL;
LABEL_23:
      v10 = -2147418113;
      goto LABEL_24;
    }
    v18 = (unsigned int)v13;
    v19 = 343LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)v18,
      (int)v22);
    goto LABEL_4;
  }
  v10 = -2147023728;
LABEL_4:
  PropVariantClear(pvar);
  return v10;
}
