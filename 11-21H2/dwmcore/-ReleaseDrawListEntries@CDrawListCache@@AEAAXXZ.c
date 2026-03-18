/*
 * XREFs of ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x1800AFDD8
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x1800AF280 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800AF97C (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800AF3A8 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x1800AF3E0 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x1800AF41C (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@AEBA_KXZ @ 0x1800AF454 (-size@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@AEBA_KXZ.c)
 *     ?consume@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_J@Z @ 0x1800AF48C (-consume@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_J@Z.c)
 *     ?consume@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_J@Z @ 0x1800AF4C8 (-consume@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180111B30 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawListCache::ReleaseDrawListEntries(CDrawListCache *this)
{
  char *v1; // r14
  __int64 v3; // rdi
  int v4; // edx
  char *v5; // rbx
  char *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  char *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // rdi
  int v17; // ecx
  char *v18; // rbx
  char *v19; // rdi
  __int64 v20; // rax
  char *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  char *v24; // rbx
  char *v25; // rcx
  __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rax
  __int64 v30; // rbx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int128 v37; // [rsp+20h] [rbp-40h] BYREF
  __int64 v38; // [rsp+30h] [rbp-30h]
  __int128 v39; // [rsp+40h] [rbp-20h] BYREF
  __int64 v40; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+18h]

  v1 = (char *)this + 56;
  v3 = *((_QWORD *)this + 7);
  v4 = v3 & 3;
  if ( (v3 & 3) != 0 )
  {
    if ( (*((_DWORD *)this + 14) & 3) == 1 )
    {
      v5 = (char *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
      goto LABEL_82;
    }
    if ( (*((_DWORD *)this + 14) & 3) == 2 )
    {
      v5 = 0LL;
LABEL_5:
      v6 = 0LL;
      goto LABEL_6;
    }
    if ( (*((_DWORD *)this + 14) & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v5 = (char *)this + 56;
  if ( (v3 & 3) == 0 )
  {
LABEL_64:
    v6 = (char *)this + 56;
    goto LABEL_6;
  }
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
      goto LABEL_5;
    goto LABEL_64;
  }
LABEL_82:
  v6 = (char *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_6:
  v7 = 1LL;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v8 = *(_QWORD *)(detail::pointer_buffer_impl<IDeviceResource *>::first((_QWORD *)this + 7) - 16);
    }
    else
    {
      if ( (unsigned int)(v4 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v8 = 0LL;
    }
  }
  else
  {
    v8 = 1LL;
  }
  v9 = &v6[8 * v8];
  while ( v5 != v9 )
  {
    v34 = *(_QWORD *)v5;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v5 + 48LL))(
      *(_QWORD *)v5,
      ((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    v35 = v34 + *(int *)(*(_QWORD *)(v34 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    v5 += 8;
  }
  v10 = *(_QWORD *)v1;
  v11 = *(_QWORD *)v1 & 3LL;
  if ( (*(_QWORD *)v1 & 3) == 0 )
  {
LABEL_66:
    v12 = (unsigned __int64)v1;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)v1 & 3) != 1 )
  {
    if ( (*(_DWORD *)v1 & 3) == 2 )
    {
      v12 = 0LL;
      goto LABEL_16;
    }
    if ( (*(_DWORD *)v1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_66;
  }
  v12 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_16:
  if ( (_DWORD)v11 )
  {
    if ( (_DWORD)v11 == 1 )
    {
      v36 = detail::pointer_buffer_impl<IDeviceResource *>::first(v1);
      v10 = *(_QWORD *)v1;
      v13 = *(_QWORD *)(v36 - 16);
    }
    else
    {
      if ( (unsigned int)(v11 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v13 = 0LL;
    }
  }
  else
  {
    v13 = 1LL;
  }
  if ( (v10 & 3) == 0 )
  {
LABEL_68:
    v14 = (unsigned __int64)v1;
    goto LABEL_24;
  }
  if ( (v10 & 3) != 1 )
  {
    if ( (v10 & 3) == 2 )
    {
      v14 = 0LL;
      goto LABEL_24;
    }
    if ( (v10 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_68;
  }
  v14 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_24:
  v15 = (__int64)(v12 + 8 * v13 - v14) >> 3;
  if ( v15 )
  {
    v30 = detail::pointer_buffer_impl<IDeviceResource *>::size(v1);
    v31 = detail::pointer_buffer_impl<IDeviceResource *>::first(v1) + 8 * v30;
    v28 = (__int64)(v31 - detail::pointer_buffer_impl<IDeviceResource *>::first(v1)) >> 3;
    if ( v15 > v28 )
      goto LABEL_102;
    v32 = detail::pointer_buffer_impl<IDeviceResource *>::first(v1);
    if ( v15 != v28 )
    {
      v38 = 0LL;
      *(_QWORD *)&v37 = v32;
      *((_QWORD *)&v37 + 1) = v28;
      v40 = 0LL;
      v39 = v37;
      ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
        &v37,
        v32 + 8 * v15,
        v32 + 8 * v28,
        &v39);
    }
    detail::pointer_buffer_impl<IDeviceResource *>::consume(v1, -(__int64)v15);
  }
  v1 = (char *)this + 48;
  v16 = *((_QWORD *)this + 6);
  v17 = v16 & 3;
  if ( (v16 & 3) != 0 )
  {
    if ( (*((_DWORD *)this + 12) & 3) == 1 )
    {
      v18 = (char *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
      goto LABEL_74;
    }
    if ( (*((_DWORD *)this + 12) & 3) == 2 )
    {
      v18 = 0LL;
LABEL_29:
      v19 = 0LL;
      goto LABEL_30;
    }
    if ( (*((_DWORD *)this + 12) & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v18 = (char *)this + 48;
  if ( (v16 & 3) == 0 )
  {
LABEL_57:
    v19 = (char *)this + 48;
    goto LABEL_30;
  }
  if ( v17 != 1 )
  {
    if ( v17 == 2 )
      goto LABEL_29;
    goto LABEL_57;
  }
LABEL_74:
  v19 = (char *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_30:
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      v20 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first((_QWORD *)this + 6) - 16);
    }
    else
    {
      if ( (unsigned int)(v17 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v20 = 0LL;
    }
  }
  else
  {
    v20 = 1LL;
  }
  v21 = &v19[8 * v20];
  while ( v18 != v21 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v18 + 8LL))(*(_QWORD *)v18);
    v18 += 8;
  }
  v22 = *(_QWORD *)v1;
  v23 = *(_QWORD *)v1 & 3LL;
  if ( (*(_QWORD *)v1 & 3) == 0 )
  {
LABEL_59:
    v24 = (char *)this + 48;
    goto LABEL_40;
  }
  if ( (*(_DWORD *)v1 & 3) != 1 )
  {
    if ( (*(_DWORD *)v1 & 3) == 2 )
    {
      v24 = 0LL;
      goto LABEL_40;
    }
    if ( (*(_DWORD *)v1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_59;
  }
  v24 = (char *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_40:
  if ( (_DWORD)v23 )
  {
    if ( (_DWORD)v23 == 1 )
    {
      v33 = detail::pointer_buffer_impl<CDrawListEntry *>::first((_QWORD *)this + 6);
      v22 = *(_QWORD *)v1;
      v7 = *(_QWORD *)(v33 - 16);
    }
    else
    {
      if ( (unsigned int)(v23 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v7 = 0LL;
    }
  }
  if ( (v22 & 3) == 0 )
  {
LABEL_60:
    v25 = (char *)this + 48;
    goto LABEL_48;
  }
  if ( (v22 & 3) != 1 )
  {
    if ( (v22 & 3) == 2 )
    {
      v25 = 0LL;
      goto LABEL_48;
    }
    if ( (v22 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_60;
  }
  v25 = (char *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_48:
  v15 = (__int64)&v24[8 * v7 - (_QWORD)v25] >> 3;
  if ( v15 )
  {
    v26 = detail::pointer_buffer_impl<CDrawListEntry *>::size((_QWORD *)this + 6);
    v27 = detail::pointer_buffer_impl<CDrawListEntry *>::first((_QWORD *)this + 6) + 8 * v26;
    v28 = (__int64)(v27 - detail::pointer_buffer_impl<CDrawListEntry *>::first((_QWORD *)this + 6)) >> 3;
    if ( v15 <= v28 )
    {
      v29 = detail::pointer_buffer_impl<CDrawListEntry *>::first((_QWORD *)this + 6);
      if ( v15 == v28 )
      {
LABEL_53:
        detail::pointer_buffer_impl<CDrawListEntry *>::consume(v1, -(__int64)v15);
        return;
      }
LABEL_103:
      v38 = 0LL;
      *(_QWORD *)&v37 = v29;
      *((_QWORD *)&v37 + 1) = v28;
      v40 = 0LL;
      v39 = v37;
      ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
        &v37,
        v29 + 8 * v15,
        v29 + 8 * v28,
        &v39);
      goto LABEL_53;
    }
LABEL_102:
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_103;
  }
}
