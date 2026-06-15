/*
 * XREFs of ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x180039EF0
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800397C0 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@K.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003FC74 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@VCSharedStreamGroupProxy@@@WRL@Microsoft@@YAJPEAVCSharedStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x1800F650C (--$AsWeak@VCSharedStreamGroupProxy@@@WRL@Microsoft@@YAJPEAVCSharedStreamGroupProxy@@PEAVWeakRef@.c)
 *     ?RegisterForLoopbackEndpointChangeNotifications@CAecAttributes@@QEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180105D2C (-RegisterForLoopbackEndpointChangeNotifications@CAecAttributes@@QEAAJAEAVWeakRef@WRL@Microsoft@@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CSharedStreamGroupProxy::RuntimeClassInitialize(
        CSharedStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        struct STREAM_GROUP_DESCRIPTOR *a3,
        int a4)
{
  HRESULT Instance; // eax
  unsigned int v9; // ebx
  HRESULT v10; // eax
  int v11; // eax
  IUnknown *v12; // rbx
  IUnknown *v13; // rcx
  char *v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  _WORD *v17; // rax
  _WORD *v18; // r9
  unsigned __int64 v19; // rax
  _WORD *v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rbx
  char *v23; // rdi
  __int16 v24; // cx
  __int64 v25; // rsi
  bool v26; // cf
  __int64 v27; // rbx
  LPVOID v28; // rdi
  size_t v29; // rsi
  __int64 v30; // rcx
  struct _RTL_CRITICAL_SECTION *v31; // rax
  struct _RTL_CRITICAL_SECTION *v32; // rdi
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG *v34; // rax
  CAecAttributes *v35; // rdi
  int v37; // eax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  DWORD dwAuthnLevel; // [rsp+20h] [rbp-58h]
  DWORD dwAuthnLevela; // [rsp+20h] [rbp-58h]
  DWORD dwAuthnLevelb; // [rsp+20h] [rbp-58h]
  IUnknown *pProxy; // [rsp+40h] [rbp-38h] BYREF
  LPMALLOC ppMalloc; // [rsp+48h] [rbp-30h] BYREF
  LPMALLOC *p_ppMalloc; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  pProxy = 0LL;
  Instance = CoCreateInstance(
               &GUID_06b2132b_5b99_42a6_b8b6_a1709e191c70,
               0LL,
               0x17u,
               &GUID_816e5b3e_5523_4efc_9223_98ec4214c3a0,
               (LPVOID *)&pProxy);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FB,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)Instance,
      dwAuthnLevel);
    goto LABEL_34;
  }
  v10 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x301,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10,
      dwAuthnLevela);
    goto LABEL_34;
  }
  v11 = ((__int64 (__fastcall *)(IUnknown *, struct STREAM_GROUP_DESCRIPTOR *))pProxy->lpVtbl[3].QueryInterface)(
          pProxy,
          a3);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x303,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v11,
      dwAuthnLevela);
    goto LABEL_34;
  }
  v12 = pProxy;
  v13 = (IUnknown *)*((_QWORD *)this + 11);
  if ( v13 != pProxy )
  {
    if ( pProxy )
    {
      ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->AddRef)(pProxy);
      v13 = (IUnknown *)*((_QWORD *)this + 11);
    }
    *((_QWORD *)this + 11) = v12;
    if ( v13 )
      ((void (__fastcall *)(IUnknown *))v13->lpVtbl->Release)(v13);
  }
  v14 = *(char **)a2;
  v15 = -1LL;
  do
    ++v15;
  while ( *(_WORD *)&v14[2 * v15] );
  *((_QWORD *)this + 7) = 0LL;
  v16 = v15 + 1;
  if ( v15 + 1 < v15 || !is_mul_ok(v16, 2uLL) )
  {
    v9 = -2147024362;
    goto LABEL_51;
  }
  v17 = CoTaskMemAlloc(2 * v16);
  v18 = v17;
  *((_QWORD *)this + 7) = v17;
  if ( !v17 )
  {
    v9 = -2147024882;
LABEL_51:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v9,
      dwAuthnLevela);
    goto LABEL_52;
  }
  if ( v16 > 0x7FFFFFFF )
  {
LABEL_42:
    *v17 = 0;
    goto LABEL_25;
  }
  if ( v15 >= 0x7FFFFFFF )
  {
    if ( v15 == -1LL )
      goto LABEL_25;
    goto LABEL_42;
  }
  if ( !v14 )
  {
    v14 = (char *)&unk_18017F160;
    v15 = 0LL;
  }
  if ( v16 )
  {
    v19 = v16;
    v20 = v18;
    v21 = 0LL;
    v22 = v15 - v16;
    v23 = (char *)(v14 - (char *)v18);
    while ( v22 + v19 )
    {
      v24 = *(_WORD *)((char *)v20 + (_QWORD)v23);
      if ( !v24 )
        break;
      *v20++ = v24;
      ++v21;
      if ( !--v19 )
      {
        *(v20 - 1) = 0;
        goto LABEL_25;
      }
    }
    *v20 = 0;
    v26 = v16 == v21;
    v25 = v16 - v21;
    if ( !v26 && v25 != 1 && (unsigned __int64)(2 * v25) > 2 )
      memset_0(&v18[v21 + 1], 0, 2 * v25 - 2);
  }
LABEL_25:
  v27 = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL);
  v28 = CoTaskMemAlloc(v27 + 18);
  *((_QWORD *)this + 6) = v28;
  if ( !v28 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x8007000ELL,
      dwAuthnLevela);
    goto LABEL_52;
  }
  v29 = 0LL;
  if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
  {
    v29 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v28);
    ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
  }
  memset_0(*((void **)this + 6), 0, v29);
  memcpy_0(*((void **)this + 6), *((const void **)a2 + 2), v27 + 18);
  v30 = *((_QWORD *)a2 + 7);
  if ( v30 )
  {
    v37 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v30 + 16LL))(v30, (char *)this + 72);
    v9 = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v37,
        dwAuthnLevela);
LABEL_52:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x306,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)v9,
        dwAuthnLevelb);
      goto LABEL_34;
    }
  }
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 2);
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_BYTE *)this + 64) = *((_BYTE *)a2 + 49);
  *((_BYTE *)this + 65) = *((_BYTE *)a2 + 50);
  v31 = (struct _RTL_CRITICAL_SECTION *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v32 = v31;
  p_ppMalloc = (LPMALLOC *)v31;
  if ( v31 )
  {
    InitializeCriticalSectionEx(v31, 0, 0);
    p_ppMalloc = (LPMALLOC *)&v32[1];
    v32[1].DebugInfo = 0LL;
    *(_QWORD *)&v32[1].LockCount = 0LL;
    ProcessHeap = GetProcessHeap();
    v34 = (struct _RTL_CRITICAL_SECTION_DEBUG *)HeapAlloc(ProcessHeap, 0, 0x28uLL);
    *(_QWORD *)&v34->Type = v34;
    v34->CriticalSection = (struct _RTL_CRITICAL_SECTION *)v34;
    v34->ProcessLocksList.Flink = (struct _LIST_ENTRY *)v34;
    LOWORD(v34->ProcessLocksList.Blink) = 257;
    v32[1].DebugInfo = v34;
    LODWORD(v32[1].OwningThread) = a4;
  }
  else
  {
    v32 = 0LL;
  }
  *((_QWORD *)this + 10) = v32;
  if ( !v32 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x8007000ELL,
      dwAuthnLevela);
    goto LABEL_52;
  }
  v35 = (CAecAttributes *)*((_QWORD *)this + 9);
  if ( !v35 || *((_DWORD *)v35 + 2) )
    goto LABEL_33;
  ppMalloc = 0LL;
  p_ppMalloc = &ppMalloc;
  v38 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&p_ppMalloc);
  v39 = Microsoft::WRL::AsWeak<CSharedStreamGroupProxy>(this, v38);
  v9 = v39;
  if ( v39 >= 0 )
  {
    v39 = CAecAttributes::RegisterForLoopbackEndpointChangeNotifications(
            v35,
            (struct Microsoft::WRL::WeakRef *)&ppMalloc);
    v9 = v39;
    if ( v39 < 0 )
    {
      v40 = 783LL;
      goto LABEL_58;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppMalloc);
LABEL_33:
    v9 = 0;
    goto LABEL_34;
  }
  v40 = 782LL;
LABEL_58:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v40,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v39,
    dwAuthnLevela);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppMalloc);
LABEL_34:
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  return v9;
}
