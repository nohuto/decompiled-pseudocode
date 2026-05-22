/*
 * XREFs of ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828
 * Callers:
 *     ?SetClip@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionClip@234@@Z @ 0x18000F51C (-SetClip@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionClip@234@@Z.c)
 *     ?SetWindowBackgroundTreatment@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z @ 0x180015900 (-SetWindowBackgroundTreatment@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z.c)
 *     ?GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUICompositionInteractionPartner@234@@Z @ 0x18001CA44 (-GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUIComposition.c)
 *     ?SetComment@ProxyObject@Composition@UI@Windows@@UEAAXPEAUHSTRING__@@@Z @ 0x180021F70 (-SetComment@ProxyObject@Composition@UI@Windows@@UEAAXPEAUHSTRING__@@@Z.c)
 *     ?Destroy@SpriteVisual@Composition@UI@Windows@@UEAAXXZ @ 0x180027F60 (-Destroy@SpriteVisual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?SetInputSinkHandle@Visual@Composition@UI@Windows@@QEAAJPEAX@Z @ 0x180035C98 (-SetInputSinkHandle@Visual@Composition@UI@Windows@@QEAAJPEAX@Z.c)
 *     ?SetParentForTransform@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x180063354 (-SetParentForTransform@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 *     ?SetPropertyChangedListener@Partner@Visual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@345@@Z @ 0x18006FFC0 (-SetPropertyChangedListener@Partner@Visual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSIO.c)
 *     ?put_Clip@Api@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionClip@345@@Z @ 0x1800747A0 (-put_Clip@Api@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionClip@345@@Z.c)
 *     ?SetComment@CompositionObject@Composition@UI@Windows@@UEAAXPEAUHSTRING__@@@Z @ 0x180088330 (-SetComment@CompositionObject@Composition@UI@Windows@@UEAAXPEAUHSTRING__@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_9d25aa87665819507bc7612a38b25429___::_ScopeExitFn__lambda_9d25aa87665819507bc7612a38b25429___ @ 0x18010AD24 (wil--details--ScopeExitFn__lambda_9d25aa87665819507bc7612a38b25429___--_ScopeExitFn__lambda_9d25.c)
 *     ?GetParentForTransform@Visual@Composition@UI@Windows@@QEAAPEAV1234@XZ @ 0x18010B4D4 (-GetParentForTransform@Visual@Composition@UI@Windows@@QEAAPEAV1234@XZ.c)
 *     ?RemovePointerEventRouter@Visual@Composition@UI@Windows@@QEAAXXZ @ 0x18010B6D8 (-RemovePointerEventRouter@Visual@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?SetParentForTransformFromReference@Visual@Composition@UI@Windows@@QEAAJPEAVVisualReference@Internal@234@@Z @ 0x18010BF30 (-SetParentForTransformFromReference@Visual@Composition@UI@Windows@@QEAAJPEAVVisualReference@Inte.c)
 *     ?SetShadow@SpriteVisual@Composition@UI@Windows@@QEAAXPEAVCompositionShadow@234@@Z @ 0x18017BF18 (-SetShadow@SpriteVisual@Composition@UI@Windows@@QEAAXPEAVCompositionShadow@234@@Z.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180078A40 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSparseStorage::SetReference(
        CSparseStorage *this,
        int a2,
        void *a3,
        const struct CSparseStorage::ReferenceAdapter *a4)
{
  void *v5; // rbp
  int v6; // esi
  unsigned int *v8; // rdi
  int v9; // r15d
  HANDLE ProcessHeap; // rax
  __int64 v11; // r13
  unsigned int *v12; // rbx
  unsigned int *v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // ecx
  const struct CSparseStorage::ReferenceAdapter *v18; // rdi
  unsigned int v19; // r12d
  signed __int64 v20; // rbx
  signed __int64 v21; // rbp
  void *v22; // rax
  __int128 v23; // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  void *v25; // [rsp+80h] [rbp+18h]
  const struct CSparseStorage::ReferenceAdapter *v26; // [rsp+88h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v5 = a3;
  v6 = __ROR4__(1, a2);
  v8 = *(unsigned int **)this;
  v9 = *(_DWORD *)(*(_QWORD *)this + 4LL) & v6;
  if ( v9 || a3 )
  {
    if ( v8 == (unsigned int *)&CSparseStorage::s_defaultEmptyAllocatedStorage )
    {
      ProcessHeap = GetProcessHeap();
      v8 = (unsigned int *)HeapAlloc(ProcessHeap, 8u, 0x38uLL);
      if ( !v8 )
        RaiseFailFastException(0LL, 0LL, 0);
      *v8 = 56;
      *(_QWORD *)this = v8;
    }
    v11 = *v8;
    v12 = v8 + 3;
    v13 = v8 + 4;
    v14 = 0xFFFFFFLL;
    v15 = (unsigned __int64)v8 + v11;
    while ( (unsigned __int64)v13 <= v15 )
    {
      v16 = *v12;
      v17 = BYTE3(v16) & 0x7F;
      if ( v17 == a2 )
        goto LABEL_13;
      if ( !v17 )
      {
        if ( (unsigned __int64)(v12 + 5) <= v15 )
        {
          v16 = v16 & 0xFF000000 | 0x10;
          *v12 = v16;
          goto LABEL_13;
        }
        break;
      }
      if ( !v9 && (v16 & 0xFFFFFF) == 0x10 && (__ROR4__(1, v17) & v8[1]) == 0 )
        goto LABEL_13;
      v12 = (unsigned int *)((char *)v12 + (v16 & 0xFFFFFF) + 4);
      v13 = v12 + 1;
    }
    v20 = (char *)v12 - (char *)v8;
    v21 = v20 + 44;
    v22 = DefaultHeap::Realloc(v8, v20 + 44);
    *(_QWORD *)this = v22;
    if ( !v22 )
      RaiseFailFastException(0LL, 0LL, 0);
    memset_0((void *)(v11 + *(_QWORD *)this), 0, v21 - v11);
    **(_DWORD **)this = v21;
    v12 = (unsigned int *)(*(_QWORD *)this + v20);
    v5 = v25;
    *v12 &= 0xFF000010;
    *v12 |= 0x10u;
LABEL_13:
    if ( v9 )
      (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, __int64))(_mm_srli_si128(*(__m128i *)(v12 + 1), 8).m128i_u64[0]
                                                                         + 8))(
        *(_QWORD *)(v12 + 1),
        v16,
        v15,
        v14);
    if ( v5 )
    {
      v18 = v26;
      (*(void (__fastcall **)(void *, __int64 *, unsigned __int64, __int64))v26)(v5, &v24, v15, v14);
      *(_QWORD *)&v23 = v24;
      v19 = *v12 & 0xFFFFFF | ((a2 | 0xFFFFFF80) << 24);
      *((_QWORD *)&v23 + 1) = v18;
      *(_OWORD *)(v12 + 1) = v23;
      *v12 = v19;
      *(_DWORD *)(*(_QWORD *)this + 4LL) |= v6;
      *(_BYTE *)(*(_QWORD *)this + 8LL) = 1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)this + 4LL) &= ~v6;
    }
  }
}
