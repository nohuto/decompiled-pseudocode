/*
 * XREFs of ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C0130784
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0112B04 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ??1NetworkInterfaceBindProperties@@QEAA@XZ @ 0x1C00AD928 (--1NetworkInterfaceBindProperties@@QEAA@XZ.c)
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C010F0B8 (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x1C010F678 (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 *     ndisBuildMonitoringLwfBindings @ 0x1C0130978 (ndisBuildMonitoringLwfBindings.c)
 *     ndisIntersectAtoms @ 0x1C0130BC8 (ndisIntersectAtoms.c)
 *     ndisIsLwfBindable @ 0x1C0130D38 (ndisIsLwfBindable.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x1C0130E28 (ndisIsLwfBindingEnabled_0.c)
 *     ndisIsProtocolBindingEnabled @ 0x1C0130EB8 (ndisIsProtocolBindingEnabled.c)
 *     ndisReadNicBindProperties @ 0x1C0131264 (ndisReadNicBindProperties.c)
 */

__int64 __fastcall ndisBuildBindings(const struct _GUID *a1, struct Ndis::BindStack *a2)
{
  unsigned int v2; // ebx
  unsigned int NicBindProperties; // eax
  _QWORD *v5; // r15
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r14
  _QWORD *v10; // r14
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r12
  const struct _GUID *v14; // r15
  __int64 v15; // r9
  _BYTE v17[8]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v18; // [rsp+28h] [rbp-41h]
  _BYTE v19[16]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v21[4]; // [rsp+50h] [rbp-19h] BYREF
  int v22; // [rsp+70h] [rbp+7h]

  v2 = 0;
  v20[0] = 0LL;
  v20[1] = 0LL;
  memset(v21, 0, sizeof(v21));
  v22 = 0;
  NicBindProperties = ndisReadNicBindProperties(a1, v19);
  if ( NicBindProperties )
    goto LABEL_23;
  v5 = qword_1C00EC738;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *((unsigned int *)qword_1C00EC738 + 7);
  v18 = v8;
  while ( v6 != v8 )
  {
    if ( v6 >= *((unsigned int *)v5 + 7) )
LABEL_22:
      __fastfail(5u);
    v9 = v7 + v5[4];
    if ( (unsigned __int8)ndisIntersectAtoms(v20, v9 + 24) )
    {
      if ( !(unsigned __int8)ndisIntersectAtoms(v21, v9 + 24) && !(unsigned __int8)ndisIntersectAtoms(v20, v9 + 40) )
      {
        v17[0] = 0;
        NicBindProperties = ndisIsProtocolBindingEnabled(v19, v9, v17);
        if ( NicBindProperties )
          goto LABEL_23;
        if ( v17[0] )
        {
          NicBindProperties = Ndis::BindStack::AddStaticProtocolBinding(
                                a2,
                                *(const wchar_t **)(*(_QWORD *)(v9 + 16) + 8LL));
          if ( NicBindProperties )
            goto LABEL_23;
        }
      }
    }
    v8 = v18;
    ++v6;
    v7 += 64LL;
  }
  LODWORD(v18) = 1;
  NicBindProperties = ndisBuildMonitoringLwfBindings(v19, a2, 0LL, 0LL);
  if ( NicBindProperties )
  {
LABEL_23:
    v2 = NicBindProperties;
  }
  else
  {
    v10 = qword_1C00EC738;
    v11 = 0LL;
    v12 = 0LL;
    v13 = *((unsigned int *)qword_1C00EC738 + 11);
    while ( v11 != v13 )
    {
      if ( v11 >= *((unsigned int *)v10 + 11) )
        goto LABEL_22;
      v14 = (const struct _GUID *)(v12 + v10[6]);
      if ( (unsigned __int8)ndisIsLwfBindable(v19, v14) )
      {
        v17[0] = 0;
        NicBindProperties = ndisIsLwfBindingEnabled_0(v19, v14, v17);
        if ( NicBindProperties )
          goto LABEL_23;
        if ( v17[0] )
        {
          NicBindProperties = Ndis::BindStack::AddStaticFilterBinding(a2, v14, 0);
          if ( NicBindProperties )
            goto LABEL_23;
          v15 = (unsigned int)v18;
          LODWORD(v18) = v18 + 1;
          NicBindProperties = ndisBuildMonitoringLwfBindings(v19, a2, v14, v15);
          if ( NicBindProperties )
            goto LABEL_23;
        }
      }
      ++v11;
      v12 += 64LL;
    }
  }
  NetworkInterfaceBindProperties::~NetworkInterfaceBindProperties((NetworkInterfaceBindProperties *)v19);
  return v2;
}
