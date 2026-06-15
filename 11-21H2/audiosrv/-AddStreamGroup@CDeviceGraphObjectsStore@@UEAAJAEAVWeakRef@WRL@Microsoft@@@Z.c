/*
 * XREFs of ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180017A20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800186D0 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800DF5F4 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 *     ??$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x1800FB5DC (--$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDeviceGraphObjectsStore::AddStreamGroup(
        CDeviceGraphObjectsStore *this,
        struct Microsoft::WRL::WeakRef *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // r13
  __int64 *v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rcx
  __int64 *i; // rsi
  __int64 *v10; // rsi
  __int64 *v11; // rdi
  unsigned int v12; // esi
  char *v13; // rbx
  __int64 *v14; // r14
  __int64 *v15; // rdi
  __int64 *v16; // r14
  __int64 v17; // rdx
  __int64 *v18; // rdi
  __int64 *v19; // rbx
  struct _RTL_CRITICAL_SECTION *v20; // r13
  __int64 *v21; // r8
  __int64 v22; // rcx
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rcx
  __int64 *j; // r12
  __int64 *v28; // r12
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v34; // [rsp+88h] [rbp+10h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+98h] [rbp+20h] BYREF

  v34 = (__int64 *)a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  EnterCriticalSection(v3);
  v36 = v3;
  v4 = (__int64 *)*((_QWORD *)this + 9);
  v5 = (__int64 *)*((_QWORD *)this + 8);
  if ( v5 != v4 )
  {
    while ( 1 )
    {
      v6 = 0LL;
      v33 = 0LL;
      if ( *v5 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)*v5 + 24LL))(
               *v5,
               &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
               &v33);
        v6 = v33;
      }
      else
      {
        v7 = 0;
      }
      if ( v7 < 0 || !v6 )
        break;
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v33);
      if ( ++v5 == v4 )
        goto LABEL_7;
    }
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v33);
LABEL_7:
    if ( v5 != v4 )
    {
      for ( i = v5 + 1; i != v4; ++i )
      {
        if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v8, i) )
        {
          v29 = 0LL;
          if ( &v33 != i )
          {
            v29 = *i;
            *i = 0LL;
          }
          v33 = *v5;
          *v5 = v29;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
          ++v5;
        }
      }
    }
  }
  v10 = (__int64 *)*((_QWORD *)this + 9);
  if ( v5 != v10 )
  {
    v11 = v5;
    do
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v11++);
    while ( v11 != v10 );
    *((_QWORD *)this + 9) = v5;
  }
  v12 = 0;
  v13 = (char *)this + 88;
  do
  {
    v14 = (__int64 *)*((_QWORD *)v13 + 1);
    v15 = *(__int64 **)v13;
    if ( *(__int64 **)v13 != v14 )
    {
      while ( 1 )
      {
        v33 = 0LL;
        Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v33);
        v24 = 0LL;
        v33 = 0LL;
        if ( *v15 )
        {
          v25 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)*v15 + 24LL))(
                  *v15,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  &v33);
          v24 = v33;
        }
        else
        {
          v25 = 0;
        }
        if ( v25 < 0 || !v24 )
          break;
        Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v33);
        if ( ++v15 == v14 )
          goto LABEL_30;
      }
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v33);
LABEL_30:
      if ( v15 != v14 )
      {
        for ( j = v15 + 1; j != v14; ++j )
        {
          if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v26, j) )
          {
            v30 = 0LL;
            if ( &v33 != j )
            {
              v30 = *j;
              *j = 0LL;
            }
            v33 = *v15;
            *v15 = v30;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
            ++v15;
          }
        }
      }
    }
    v16 = (__int64 *)*((_QWORD *)v13 + 1);
    if ( v15 != v16 )
    {
      v28 = v15;
      do
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v28++);
      while ( v28 != v16 );
      *((_QWORD *)v13 + 1) = v15;
    }
    ++v12;
    v13 += 24;
  }
  while ( v12 < 4 );
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v36);
  v18 = (__int64 *)*((_QWORD *)this + 8);
  v19 = (__int64 *)*((_QWORD *)this + 9);
  v20 = lpCriticalSection;
  v21 = v34;
  if ( v19 == *((__int64 **)this + 10) )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
      (char *)this + 64,
      *((_QWORD *)this + 8),
      v34);
  }
  else
  {
    v22 = *v34;
    if ( v18 == v19 )
    {
      *v19 = v22;
      if ( v22 )
        (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v22 + 8LL))(v22, v17, v21);
      *((_QWORD *)this + 9) += 8LL;
    }
    else
    {
      v32[0] = *v34;
      if ( v22 )
        (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v22 + 8LL))(v22, v17, v34);
      *v19 = 0LL;
      *v19 = *(v19 - 1);
      *(v19 - 1) = 0LL;
      *((_QWORD *)this + 9) += 8LL;
      std::_Move_backward_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v18, v19 - 1, v19);
      v31 = v32[0];
      v32[0] = 0LL;
      v33 = *v18;
      *v18 = v31;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v32);
    }
  }
  if ( v20 )
    LeaveCriticalSection(v20);
  return 0LL;
}
