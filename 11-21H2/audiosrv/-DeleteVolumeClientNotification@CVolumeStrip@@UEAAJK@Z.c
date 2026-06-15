/*
 * XREFs of ?DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18000EDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     WPP_SF_qD @ 0x1800CB3E0 (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeStrip::DeleteVolumeClientNotification(CVolumeStrip *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _QWORD *v5; // rdx
  _DWORD *p_Type; // rcx
  bool v7; // zf
  _DWORD *i; // r8
  _QWORD *v10; // r8
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      22LL,
      &WPP_63a4fa3387a03256ea8ee70028ce711d_Traceguids,
      (char *)this - 8,
      a2);
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection(v4);
  v5 = *(_QWORD **)&v4[1].LockCount;
  p_Type = &v4[1].DebugInfo->Type;
  v11 = v4;
  while ( p_Type != (_DWORD *)v5 )
  {
    if ( *p_Type == a2 )
    {
      v7 = p_Type[1]-- == 1;
      if ( v7 )
        break;
    }
    p_Type += 2;
  }
  if ( p_Type != (_DWORD *)v5 )
  {
    for ( i = p_Type + 2; i != (_DWORD *)v5; i += 2 )
    {
      if ( *i == a2 )
      {
        v7 = i[1]-- == 1;
        if ( v7 )
          continue;
      }
      *(_QWORD *)p_Type = *(_QWORD *)i;
      p_Type += 2;
    }
    if ( p_Type != (_DWORD *)v5 )
    {
      v10 = *(_QWORD **)&v4[1].LockCount;
      while ( v5 != v10 )
      {
        *(_QWORD *)p_Type = *v5;
        p_Type += 2;
        ++v5;
      }
      *(_QWORD *)&v4[1].LockCount = p_Type;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v11);
  return 0LL;
}
