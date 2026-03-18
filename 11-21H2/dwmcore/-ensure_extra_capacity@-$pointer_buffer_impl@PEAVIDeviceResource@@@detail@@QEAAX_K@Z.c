/*
 * XREFs of ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_K@Z @ 0x1800B03A0
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAPEAPEAVIDeviceResource@@_K0@Z @ 0x1800B01D8 (-reserve_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x1800AF41C (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180111B30 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<IDeviceResource *>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r8
  void *v3; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  _QWORD *v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rax
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  __int128 v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *a1;
  v3 = 0LL;
  v6 = *a1 & 3;
  if ( (*a1 & 3) != 0 )
  {
    if ( (_DWORD)v6 == 1 )
    {
      v14 = detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
      v2 = *a1;
      v7 = *(_QWORD *)(v14 - 16);
    }
    else
    {
      if ( (unsigned int)(v6 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v7 = 0LL;
    }
  }
  else
  {
    v7 = 1LL;
  }
  v8 = v2 & 3;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v11 = *(_QWORD *)(detail::pointer_buffer_impl<IDeviceResource *>::first(a1) - 8);
      goto LABEL_9;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v11 = 0LL;
      goto LABEL_9;
    }
    if ( v10 != 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v11 = 1LL;
LABEL_9:
  result = v11 - v7;
  if ( result >= a2 )
    return result;
  v13 = v7 + a2;
  if ( v13 < v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else if ( v13 == 1 )
  {
    *a1 = 3LL;
    return result;
  }
  v15 = operator new(8 * v13 + 16);
  *((_QWORD *)&v18 + 1) = v7;
  v19 = 0LL;
  v16 = (unsigned __int64)(v15 + 2);
  *v15 = 0LL;
  *(_QWORD *)&v18 = v15 + 2;
  v15[1] = 0LL;
  v17 = detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
  v20 = v18;
  v21 = v19;
  ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
    &v18,
    v17,
    v17 + 8 * v7,
    &v20);
  if ( (*(_DWORD *)a1 & 3) == 1 )
    v3 = (void *)(detail::pointer_buffer_impl<IDeviceResource *>::first(a1) - 16);
  *a1 = v16 | 1;
  DefaultHeap::Free(v3);
  *(_QWORD *)(detail::pointer_buffer_impl<IDeviceResource *>::first(a1) - 16) = v7;
  result = detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
  *(_QWORD *)(result - 8) = v13;
  return result;
}
