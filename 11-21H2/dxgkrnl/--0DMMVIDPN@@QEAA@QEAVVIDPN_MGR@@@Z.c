/*
 * XREFs of ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C018A4B0
 * Callers:
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B0CF4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000C834 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C0010744 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C0010960 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@Z @ 0x1C00116A0 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDeleter@.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C0011748 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C001C740 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C001D904 (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C001D9AC (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C001DC80 (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004ED14 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C018A3C0 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C01A9A24 (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, struct VIDPN_MGR *const a2, __int64 a3, __int64 a4)
{
  unsigned __int8 (__fastcall ***v4)(_QWORD); // rsi
  struct VIDPN_MGR *v6; // r14
  struct DMMVIDPNSOURCESET *const *v7; // r15
  struct DMMVIDPNTARGETSET *const *v8; // r13
  __int64 v9; // r9
  DMMVIDPNSOURCESET *v10; // rax
  DMMVIDPNSOURCESET *v11; // rax
  __int64 v12; // r9
  DMMVIDPNTARGETSET *v13; // rax
  DMMVIDPNTARGETSET *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rsi
  struct DMMVIDEOPRESENTSOURCE *v18; // rsi
  DMMVIDPNSOURCE *v19; // rax
  DMMVIDPNSOURCE *v20; // rax
  DMMVIDPNSOURCE *v21; // r14
  struct DMMVIDPNSOURCESET *v22; // rcx
  int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rsi
  struct DMMVIDEOPRESENTTARGET *v27; // rsi
  DMMVIDPNTARGET *v28; // rax
  __int64 v29; // r9
  DMMVIDPNTARGET *v30; // rax
  DMMVIDPNTARGET *v31; // r14
  struct DMMVIDPNTARGETSET *v32; // rcx
  int v33; // r14d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v38; // eax
  struct DMMVIDPNSOURCESET *v39; // rax
  DMMVIDPNTARGET *v40; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v41[32]; // [rsp+48h] [rbp-20h] BYREF
  DMMVIDPNSOURCE *v42; // [rsp+B0h] [rbp+48h] BYREF
  struct VIDPN_MGR *v43; // [rsp+B8h] [rbp+50h]
  DMMVIDPNTARGET *v44; // [rsp+C0h] [rbp+58h] BYREF
  DMMVIDPNSOURCE *v45; // [rsp+C8h] [rbp+60h] BYREF

  v43 = a2;
  *(_QWORD *)this = &SetElement::`vftable';
  v4 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 96);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 3) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 16) = 1833172997;
  *((_DWORD *)this + 20) = 0;
  v6 = a2;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96), (__int64)a2, a3, a4);
  v7 = (struct DMMVIDPNSOURCESET *const *)((char *)this + 304);
  *((_QWORD *)this + 38) = 0LL;
  v8 = (struct DMMVIDPNTARGETSET *const *)((char *)this + 312);
  *((_QWORD *)this + 39) = 0LL;
  if ( !v6 )
    WdLogSingleEntry0(1LL);
  *((_DWORD *)this + 22) = 1;
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)this + 40, (__int64)v6);
  if ( !(**v4)(v4) )
  {
    WdLogSingleEntry1(7LL, this);
    v38 = *((_DWORD *)this + 28);
    if ( v38 >= 0 )
      v38 = *((_DWORD *)this + 40);
    *((_DWORD *)this + 20) = v38;
    return this;
  }
  v10 = (DMMVIDPNSOURCESET *)operator new[](0x60uLL, 0x4E506456u, 256LL, v9);
  if ( v10 )
    v11 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v10, this);
  else
    v11 = 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
    (__int64 *)this + 38,
    (__int64)v11);
  if ( !*v7 )
    goto LABEL_39;
  if ( !(***(unsigned __int8 (__fastcall ****)(struct DMMVIDPNSOURCESET *const))v7)(*v7) )
  {
    WdLogSingleEntry1(7LL, this);
    v39 = *v7;
LABEL_42:
    *((_DWORD *)this + 20) = *((_DWORD *)v39 + 4);
    return this;
  }
  v13 = (DMMVIDPNTARGETSET *)operator new[](0x60uLL, 0x4E506456u, 256LL, v12);
  v14 = v13 ? DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v13, this) : 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
    (__int64 *)this + 39,
    (__int64)v14);
  if ( !*v8 )
  {
LABEL_39:
    WdLogSingleEntry0(6LL);
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(***(unsigned __int8 (__fastcall ****)(struct DMMVIDPNTARGETSET *const))v8)(*v8) )
  {
    WdLogSingleEntry1(7LL, this);
    v39 = *v8;
    goto LABEL_42;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 14) + 72LL));
  v16 = *((_QWORD *)v6 + 14);
  v17 = *(_QWORD *)(v16 + 24);
  if ( v17 != v16 + 24 )
  {
    v18 = (struct DMMVIDEOPRESENTSOURCE *)(v17 - 8);
    if ( v18 )
    {
      while ( 1 )
      {
        v19 = (DMMVIDPNSOURCE *)operator new[](0xB8uLL, 0x4E506456u, 256LL, v15);
        if ( !v19 )
          break;
        v20 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(v19, *v7, v18);
        v42 = v20;
        v21 = v20;
        if ( !v20 )
          goto LABEL_47;
        if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v20 + 8))((__int64)v20 + 64) )
        {
          WdLogSingleEntry1(7LL, this);
          *((_DWORD *)this + 20) = *((_DWORD *)v21 + 18);
          goto LABEL_48;
        }
        v22 = *v7;
        v42 = 0LL;
        v45 = v21;
        v23 = DMMVIDPNSOURCESET::AddSource(v22, &v45);
        if ( v23 < 0 )
        {
          WdLogSingleEntry0(2LL);
          *((_DWORD *)this + 20) = v23;
          goto LABEL_48;
        }
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v42);
        v24 = *((_QWORD *)v18 + 1);
        v18 = (struct DMMVIDEOPRESENTSOURCE *)(v24 - 8);
        if ( v24 == v16 + 24 )
          v18 = 0LL;
        if ( !v18 )
        {
          v6 = v43;
          goto LABEL_22;
        }
      }
      v42 = 0LL;
LABEL_47:
      WdLogSingleEntry0(6LL);
      *((_DWORD *)this + 20) = -1073741801;
LABEL_48:
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v42);
      goto LABEL_52;
    }
  }
LABEL_22:
  ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 15) + 72LL));
  v16 = *((_QWORD *)v6 + 15);
  v26 = *(_QWORD *)(v16 + 24);
  if ( v26 != v16 + 24 )
  {
    v27 = (struct DMMVIDEOPRESENTTARGET *)(v26 - 8);
    if ( v27 )
    {
      while ( 1 )
      {
        v28 = (DMMVIDPNTARGET *)operator new[](0x80uLL, 0x4E506456u, 256LL, v25);
        if ( !v28 )
        {
          v44 = 0LL;
LABEL_50:
          WdLogSingleEntry0(6LL);
          *((_DWORD *)this + 20) = -1073741801;
          goto LABEL_51;
        }
        v30 = DMMVIDPNTARGET::DMMVIDPNTARGET(v28, *v8, v27, v29);
        v44 = v30;
        v31 = v30;
        if ( !v30 )
          goto LABEL_50;
        if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v30 + 8))((__int64)v30 + 64) )
          break;
        v32 = *v8;
        v44 = 0LL;
        v40 = v31;
        v33 = DMMVIDPNTARGETSET::AddTarget(v32, (__int64 (__fastcall ****)(_QWORD, __int64))&v40);
        if ( v33 < 0 )
        {
          WdLogSingleEntry0(2LL);
          *((_DWORD *)this + 20) = v33;
          goto LABEL_51;
        }
        v34 = *((_QWORD *)v27 + 1);
        v27 = (struct DMMVIDEOPRESENTTARGET *)(v34 - 8);
        if ( v34 == v16 + 24 )
          v27 = 0LL;
        if ( !v27 )
          goto LABEL_31;
      }
      WdLogSingleEntry1(7LL, this);
      *((_DWORD *)this + 20) = *((_DWORD *)v31 + 18);
LABEL_51:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v44);
LABEL_52:
      ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
      return this;
    }
  }
LABEL_31:
  ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
  if ( ((unsigned __int16)((2 << *((_BYTE *)this + 172)) - 1) & *((_WORD *)this + 87)) != 0 )
    WdLogSingleEntry0(1LL);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    v41,
    ((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)((unsigned __int64)this + 96) >> 64),
    0LL);
  DMMVIDPNTOPOLOGY::_SetContainingVidPn((DMMVIDPN *)((char *)this + 96), this);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v41);
  *((_DWORD *)this + 22) = 2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v36, v35) + 24) = this;
  return this;
}
