/*
 * XREFs of ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C007F5C4
 * Callers:
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C007C5F0 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0007EB4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyFrame@CPresentRate@@QEAAXXZ @ 0x1C00784C8 (-NotifyFrame@CPresentRate@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z @ 0x1C007EE44 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z @ 0x1C007F548 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C007F9EC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x1C0080B64 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C00816B4 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0081710 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::ApplyIncrementalUpdate(
        struct _LIST_ENTRY *this,
        const struct CFlipPresentUpdate *a2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // ebx
  unsigned int *v4; // r15
  CEndpointResourceStateManager *v6; // rcx
  CEndpointResourceStateManager *v7; // rcx
  CEndpointResourceStateManager *v8; // rcx
  CEndpointResourceStateManager *v9; // rcx
  CContentResourceState *v10; // rax
  CContentResourceState *v11; // rbp
  __int64 v12; // rbp
  char *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  char v20; // al
  struct _LIST_ENTRY *v21; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  char v29; // al
  struct _LIST_ENTRY **v30; // rcx
  CEndpointResourceStateManager **v31; // rax
  struct CFlipResourceState *v32; // rax
  struct CPoolBufferResourceState *ResourceState; // rax

  v2 = (unsigned int *)*((_QWORD *)a2 + 6);
  v3 = 0;
  v4 = (unsigned int *)((char *)v2 + *((unsigned int *)a2 + 10));
  while ( v2 < v4 )
  {
    v6 = (CEndpointResourceStateManager *)*v2;
    if ( !(_DWORD)v6 )
    {
      ResourceState = CEndpointResourceStateManager::FindResourceState(v6, *((_QWORD *)v2 + 1), this);
      if ( !ResourceState )
        return (unsigned int)-1073741823;
      CEndpointResourceStateManager::RemovePoolBufferState((CEndpointResourceStateManager *)this, ResourceState);
      goto LABEL_25;
    }
    v7 = (CEndpointResourceStateManager *)(unsigned int)((_DWORD)v6 - 1);
    if ( !(_DWORD)v7 )
    {
      v32 = CEndpointResourceStateManager::FindResourceState(v7, *((_QWORD *)v2 + 1), this + 1);
      if ( !v32 )
        return (unsigned int)-1073741823;
      (*(void (__fastcall **)(struct CFlipResourceState *))(*(_QWORD *)v32 + 24LL))(v32);
      goto LABEL_25;
    }
    v8 = (CEndpointResourceStateManager *)(unsigned int)((_DWORD)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = (CEndpointResourceStateManager *)(unsigned int)((_DWORD)v8 - 1);
      if ( !(_DWORD)v9 )
      {
        v13 = (char *)&this[1];
        if ( CEndpointResourceStateManager::FindResourceState(v9, *(_QWORD *)(*((_QWORD *)v2 + 1) + 40LL), this + 1) )
          return (unsigned int)-1073741823;
        v18 = DXGQUOTAALLOCATOR<256,1936868166>::operator new(v15, v14, v16, v17);
        v19 = v18;
        if ( !v18 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v18 + 24) = *((_QWORD *)v2 + 1);
        v20 = *(_BYTE *)(v18 + 32);
        *(_QWORD *)v19 = &CFlipResourceState::`vftable';
        *(_BYTE *)(v19 + 32) = v20 & 0xF0 | 1;
        *(_QWORD *)(v19 + 16) = v19 + 8;
        *(_QWORD *)(v19 + 8) = v19 + 8;
        ++*(_DWORD *)(*(_QWORD *)(v19 + 24) + 24LL);
        *(_BYTE *)(v19 + 64) &= 0xFCu;
        *(_QWORD *)v19 = &CContentResourceState::`vftable';
        *(_QWORD *)(v19 + 40) = 0LL;
        *(_QWORD *)(v19 + 48) = 0LL;
        *(_QWORD *)(v19 + 56) = 0LL;
        v21 = (struct _LIST_ENTRY *)(v19 + 8);
        Blink = this[1].Blink;
        if ( (char *)Blink->Flink != v13 )
          goto LABEL_27;
        v21->Flink = (struct _LIST_ENTRY *)v13;
        v21->Blink = Blink;
        Blink->Flink = v21;
        this[1].Blink = v21;
        goto LABEL_25;
      }
      if ( (_DWORD)v9 != 1 )
        return (unsigned int)-1073741823;
      v10 = CEndpointResourceStateManager::FindResourceState(v9, *((_QWORD *)v2 + 1), this + 1);
      v11 = v10;
      if ( !v10 )
        return (unsigned int)-1073741823;
      CContentResourceState::SetBoundBuffer(v10, *((struct CPoolBufferResource **)v2 + 2));
      CContentResourceState::SetBoundPropertySet(v11, *((struct CFlipPropertySet **)v2 + 3));
      *((_QWORD *)v11 + 7) = *((_QWORD *)v2 + 4);
      v12 = *(_QWORD *)(*((_QWORD *)v11 + 3) + 48LL);
      if ( v12 )
      {
        if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v12 + 48)) >= 0 )
        {
          CPresentRate::NotifyFrame((CPresentRate *)(v12 + 96));
          CPushLock::ReleaseLock((CPushLock *)(v12 + 48));
        }
      }
      v2 += 10;
    }
    else
    {
      if ( CEndpointResourceStateManager::FindResourceState(v8, *(_QWORD *)(*((_QWORD *)v2 + 1) + 40LL), this) )
        return (unsigned int)-1073741823;
      v27 = DXGQUOTAALLOCATOR<256,1935819590>::operator new(v24, v23, v25, v26);
      v28 = v27;
      if ( !v27 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v27 + 24) = *((_QWORD *)v2 + 1);
      v29 = *(_BYTE *)(v27 + 32);
      *(_QWORD *)v28 = &CFlipResourceState::`vftable';
      *(_BYTE *)(v28 + 32) = v29 & 0xF0 | 1;
      *(_QWORD *)(v28 + 16) = v28 + 8;
      *(_QWORD *)(v28 + 8) = v28 + 8;
      ++*(_DWORD *)(*(_QWORD *)(v28 + 24) + 24LL);
      *(_QWORD *)v28 = &CPoolBufferResourceState::`vftable';
      v30 = (struct _LIST_ENTRY **)(v28 + 8);
      v31 = (CEndpointResourceStateManager **)this->Blink;
      if ( *v31 != (CEndpointResourceStateManager *)this )
LABEL_27:
        __fastfail(3u);
      *v30 = this;
      v30[1] = (struct _LIST_ENTRY *)v31;
      *v31 = (CEndpointResourceStateManager *)v30;
      this->Blink = (struct _LIST_ENTRY *)v30;
LABEL_25:
      v2 += 4;
    }
  }
  return v3;
}
