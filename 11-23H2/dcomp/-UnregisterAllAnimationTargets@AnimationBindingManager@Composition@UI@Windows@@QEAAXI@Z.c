/*
 * XREFs of ?UnregisterAllAnimationTargets@AnimationBindingManager@Composition@UI@Windows@@QEAAXI@Z @ 0x180029030
 * Callers:
 *     ?Destroy@CompositionPropertySet@Composition@UI@Windows@@UEAAXXZ @ 0x180028180 (-Destroy@CompositionPropertySet@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ @ 0x180028D00 (-Destroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAXXZ @ 0x180029E50 (-Destroy@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Shutdown@AnimationBindingManager@Composition@UI@Windows@@QEAAXXZ @ 0x180066D98 (-Shutdown@AnimationBindingManager@Composition@UI@Windows@@QEAAXXZ.c)
 * Callees:
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::AnimationBindingManager::UnregisterAllAnimationTargets(
        PRTL_GENERIC_TABLE Table,
        unsigned int a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned int *v6; // r15
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r15
  __int64 v11; // r14
  _QWORD *i; // rcx
  __int64 v13; // r13
  int v14; // r12d
  DirectComposition::CDevice *v15; // rdi
  _DWORD *v16; // rax
  void (__fastcall ***v17)(_QWORD); // rcx
  volatile signed __int32 *v18; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v19; // rcx
  void *v20; // [rsp+20h] [rbp-88h] BYREF
  __int64 v21; // [rsp+28h] [rbp-80h]
  unsigned int Buffer; // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+38h] [rbp-70h]
  unsigned __int64 v24; // [rsp+40h] [rbp-68h] BYREF
  __int128 v25; // [rsp+48h] [rbp-60h]
  __int64 *v26; // [rsp+B0h] [rbp+8h]
  unsigned int *v27; // [rsp+C0h] [rbp+18h]

  v2 = a2;
  Buffer = a2;
  v23 = 0LL;
  v4 = RtlLookupElementGenericTable(Table + 1, &Buffer);
  v5 = v4;
  if ( !v4 )
    return;
  v6 = (unsigned int *)v4[1];
  v27 = v6;
  if ( !v6 )
LABEL_33:
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  v7 = v2;
  v21 = v2;
  do
  {
    v24 = v7 | ((unsigned __int64)*v6 << 32);
    v25 = 0LL;
    v8 = RtlLookupElementGenericTable(Table, &v24);
    v26 = v8 + 2;
    if ( v8[1] )
    {
      v26 = v8 + 2;
    }
    else if ( !v8[2] )
    {
      goto LABEL_33;
    }
    v10 = v8;
    while ( 1 )
    {
      v11 = v10[1];
      if ( v11 )
      {
        v10[1] = *(_QWORD *)(v11 + 24);
        goto LABEL_18;
      }
      v11 = *v26;
      if ( !*v26 )
        break;
      *v26 = *(_QWORD *)(v11 + 24);
LABEL_18:
      v13 = *(_QWORD *)(v11 + 8);
      if ( (*(_BYTE *)(v13 + 152) & 1) != 0 )
      {
        v14 = *(_DWORD *)(v13 + 128);
        if ( v14 )
        {
          v15 = *(DirectComposition::CDevice **)(*(_QWORD *)(v13 + 24) + 456LL);
          DirectComposition::CDevice::BeginKernelCommand(v15, 0x18u, &v20, 0);
          v16 = v20;
          *(_DWORD *)v20 = 8;
          v16[1] = v14;
          v16[2] = 1;
          *((_QWORD *)v16 + 2) = 0LL;
          v17 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v15 + 10);
          if ( v17 )
            (**v17)(v17);
        }
        *(_BYTE *)(v13 + 152) &= ~1u;
      }
      *(_QWORD *)(*(_QWORD *)(v11 + 8) + 160LL) = 0LL;
      v18 = *(volatile signed __int32 **)(v11 + 8);
      if ( v18 )
      {
        *(_QWORD *)(v11 + 8) = 0LL;
        if ( _InterlockedExchangeAdd(v18 + 4, 0xFFFFFFFF) == 1 )
        {
          LOBYTE(v9) = 1;
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 64LL))(v18, v9);
        }
      }
      if ( *(_QWORD *)v11 )
        operator delete(*(void **)v11, 8uLL);
      v19 = *(Microsoft::WRL2::NestableRuntimeClass **)(v11 + 8);
      if ( v19 )
      {
        *(_QWORD *)(v11 + 8) = 0LL;
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v19);
      }
      operator delete((void *)v11, 0x20uLL);
    }
    if ( !RtlDeleteElementGenericTable(Table, v10) )
      RaiseFailFastException(0LL, 0LL, 1u);
    v6 = (unsigned int *)*((_QWORD *)v27 + 1);
    v7 = v21;
    v27 = v6;
  }
  while ( v6 );
  for ( i = (_QWORD *)v5[1]; i; i = (_QWORD *)v5[1] )
  {
    v5[1] = i[1];
    operator delete(i, 0x10uLL);
  }
  if ( !RtlDeleteElementGenericTable(Table + 1, v5) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
