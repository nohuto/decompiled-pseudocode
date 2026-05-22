/*
 * XREFs of ?SetPropertyChangedListener@ComponentTransform3D@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@PEAVProxyObject@234@@Z @ 0x180070280
 * Callers:
 *     ?SetPropertyChangedListener@Partner@Visual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@345@@Z @ 0x18006FFC0 (-SetPropertyChangedListener@Partner@Visual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSIO.c)
 * Callees:
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?RemovePropertyChangeCallback@AnimationBindingManager@Composition@UI@Windows@@AEAAXUObjectPropertyReference@234@PEAI@Z @ 0x180071C28 (-RemovePropertyChangeCallback@AnimationBindingManager@Composition@UI@Windows@@AEAAXUObjectProper.c)
 *     ??0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ @ 0x180072B5C (--0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ComponentTransform3D::SetPropertyChangedListener(
        __int64 a1,
        int a2,
        __int64 a3,
        volatile signed __int32 *a4)
{
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r13
  unsigned int v10; // r12d
  bool v11; // zf
  PVOID v12; // rax
  Microsoft::WRL2::NestableRuntimeClass *v13; // rcx
  PVOID inserted; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v18; // rcx
  _DWORD *v19; // rax
  Microsoft::WRL2::NestableRuntimeClass *v20; // rcx
  unsigned int v21; // r14d
  Microsoft::WRL2::NestableRuntimeClass *v22; // rcx
  int v23; // edi
  DirectComposition::CDevice *v24; // rbx
  _DWORD *v25; // rcx
  void (__fastcall ***v26)(_QWORD); // rcx
  unsigned __int64 v28; // rcx
  Windows::UI::Composition::AnimationBindingManager *v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  void *v32; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-58h] BYREF
  unsigned int v34; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v35[2]; // [rsp+38h] [rbp-48h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v36[2]; // [rsp+40h] [rbp-40h]
  unsigned __int64 Buffer; // [rsp+50h] [rbp-30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v38[2]; // [rsp+58h] [rbp-28h]
  unsigned int v39; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int8 NewElement; // [rsp+B8h] [rbp+38h] BYREF

  switch ( a2 )
  {
    case 2:
      v7 = 2;
      break;
    case 7:
      v7 = 0;
      break;
    case 8:
      v7 = 1;
      break;
    case 10:
      v7 = 4;
      break;
    case 11:
      v7 = 6;
      break;
    case 12:
      v7 = 7;
      break;
    case 13:
      v7 = 8;
      break;
    default:
      Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
  v8 = *(_QWORD *)(a1 + 24);
  LODWORD(v32) = v7;
  v39 = 0;
  v9 = *(_QWORD *)(v8 + 832);
  if ( !v9 )
  {
    v29 = (Windows::UI::Composition::AnimationBindingManager *)DefaultHeap::AllocClear(0x130uLL);
    if ( v29 )
    {
      v31 = Windows::UI::Composition::AnimationBindingManager::AnimationBindingManager(v29);
      *(_QWORD *)(v8 + 832) = v31;
      v9 = v31;
      if ( v31 )
      {
        v7 = (int)v32;
        goto LABEL_4;
      }
    }
    else
    {
      *(_QWORD *)(v8 + 832) = 0LL;
    }
    Microsoft::WRL2::FailFast::OutOfMemory(v30);
  }
LABEL_4:
  v10 = *(_DWORD *)(a1 + 128);
  if ( a3 )
  {
    v11 = *(_DWORD *)(v9 + 296) == 0;
    *(_OWORD *)v36 = 0LL;
    v34 = 0;
    if ( !v11 )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    v35[1] = v7;
    v33 = __PAIR64__(v7, v10);
    Buffer = __PAIR64__(v7, v10);
    v35[0] = v10;
    *(_OWORD *)v38 = 0LL;
    v12 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v9 + 144), &Buffer);
    v13 = v38[1];
    inserted = v12;
    if ( v38[1] )
    {
      v38[1] = 0LL;
      (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v15 = v38[0];
    if ( v38[0] )
    {
      v38[0] = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v15);
    }
    if ( !inserted )
    {
      NewElement = 0;
      inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(v9 + 144), v35, 0x18u, &NewElement);
      if ( !inserted )
        Microsoft::WRL2::FailFast::OutOfMemory(v16);
    }
    if ( *((_QWORD *)inserted + 2) != a3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
      v17 = *((_QWORD *)inserted + 2);
      *((_QWORD *)inserted + 2) = a3;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( *((volatile signed __int32 **)inserted + 1) != a4 )
    {
      if ( a4 && _InterlockedIncrement(a4 + 4) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a4 + 80LL))(a4);
      v18 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)inserted + 1);
      *((_QWORD *)inserted + 1) = a4;
      if ( v18 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v18);
    }
    LODWORD(v33) = v10;
    v19 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v9 + 216), &v33);
    if ( !v19 )
    {
      LOBYTE(v39) = 0;
      v34 = v10;
      v19 = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(v9 + 216), &v34, 8u, (PBOOLEAN)&v39);
      if ( !v19 )
        Microsoft::WRL2::FailFast::OutOfMemory(v28);
      v19[1] = 0;
    }
    v19[1] |= 1 << (char)v32;
    v20 = v36[1];
    v21 = v19[1];
    if ( v36[1] )
    {
      v36[1] = 0LL;
      (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v22 = v36[0];
    if ( v36[0] )
    {
      v36[0] = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v22);
    }
  }
  else
  {
    LODWORD(v32) = *(_DWORD *)(a1 + 128);
    HIDWORD(v32) = v7;
    Windows::UI::Composition::AnimationBindingManager::RemovePropertyChangeCallback(v9, &v32, &v39);
    v21 = v39;
  }
  v23 = *(_DWORD *)(a1 + 128);
  if ( v23 )
  {
    v24 = *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL);
    DirectComposition::CDevice::BeginKernelCommand(v24, 0x18u, &v32, 0);
    v25 = v32;
    *(_DWORD *)v32 = 8;
    v25[1] = v23;
    v25[2] = 0xFFFF;
    *((_QWORD *)v25 + 2) = v21;
    v26 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v24 + 10);
    if ( v26 )
      (**v26)(v26);
  }
  return 0LL;
}
