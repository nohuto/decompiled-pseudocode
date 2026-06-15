/*
 * XREFs of ?Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z @ 0x180028750
 * Callers:
 *     ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x18002849C (-KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V-$CCo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CKsNotificationsMonitor::Initialize(CKsNotificationsMonitor *this, struct IPart *a2, char *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  SIZE_T v8; // rbx
  char *v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  signed __int64 v12; // rdi
  __int16 v13; // cx
  struct IPart *v14; // rcx
  struct IPart *v15; // rbx
  int v16; // ebx
  struct IPart *v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = 0LL;
  if ( *((struct IPart **)this + 4) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IPart *))a2->lpVtbl->AddRef)(a2);
    v6 = *((_QWORD *)this + 4);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 4) = a2;
  }
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)&a3[2 * v7] );
  v8 = 2 * v7 + 2;
  v9 = (char *)CoTaskMemAlloc(v8);
  *((_QWORD *)this + 2) = v9;
  if ( v9 )
  {
    v10 = v8 >> 1;
    if ( v10 )
    {
      if ( v10 <= 0x7FFFFFFF )
      {
        v11 = 2147483646 - v10;
        v12 = a3 - v9;
        while ( v11 + v10 )
        {
          v13 = *(_WORD *)&v9[v12];
          if ( !v13 )
            break;
          *(_WORD *)v9 = v13;
          v9 += 2;
          if ( !--v10 )
          {
            v9 -= 2;
            break;
          }
        }
      }
      *(_WORD *)v9 = 0;
    }
    v14 = v18;
    if ( v18 != a2 )
    {
      v15 = v18;
      v14 = 0LL;
      v18 = 0LL;
      if ( a2 )
      {
        ((void (__fastcall *)(struct IPart *, GUID *, struct IPart **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
          &v18);
        v14 = v18;
      }
      if ( v15 )
      {
        ((void (__fastcall *)(struct IPart *))v15->lpVtbl->Release)(v15);
        v14 = v18;
      }
    }
    v16 = ((__int64 (__fastcall *)(struct IPart *, char *))v14->lpVtbl->GetLocalId)(v14, (char *)this + 8);
    if ( v16 >= 0 )
    {
      v16 = ((__int64 (__fastcall *)(struct IPart *, char *))v18->lpVtbl->GetName)(v18, (char *)this + 28);
      if ( v16 >= 0 )
      {
        v16 = ((__int64 (__fastcall *)(struct IPart *, GUID *, CKsNotificationsMonitor *))a2->lpVtbl->RegisterControlChangeCallback)(
                a2,
                &CKsNotificationsMonitor::m_ctx,
                this);
        if ( v16 >= 0 )
          *((_DWORD *)this + 3) = 1;
      }
    }
  }
  else
  {
    v16 = -2147024882;
  }
  if ( v18 )
    ((void (__fastcall *)(struct IPart *))v18->lpVtbl->Release)(v18);
  return (unsigned int)v16;
}
