/*
 * XREFs of ?OnDeviceRemoval@CallControlDeviceCollection@@MEAAJK@Z @ 0x1800E0840
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800D74E8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?SendMuteMicrophoneInputReport@CallControlDeviceCollection@@AEAAJK_N@Z @ 0x1800E0C80 (-SendMuteMicrophoneInputReport@CallControlDeviceCollection@@AEAAJK_N@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800E5670 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 */

__int64 __fastcall CallControlDeviceCollection::OnDeviceRemoval(CallControlDeviceCollection *this, unsigned int a2)
{
  unsigned __int8 *v4; // rbx
  _WORD *v6; // rsi
  _WORD *v7; // r15
  int v8; // eax
  unsigned int v9; // ebp
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  unsigned __int64 appended; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _WORD *v19; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 345,
    &v19,
    (const unsigned __int8 *)&v20);
  v4 = (unsigned __int8 *)v19;
  if ( v19 == *((_WORD **)this + 346) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  else
  {
    v6 = v19 + 10;
    v7 = v19 + 30;
    while ( v6 != v7 )
    {
      if ( *v6 == 225 )
      {
        v8 = CallControlDeviceCollection::SendMuteMicrophoneInputReport(this, a2, 0);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6C,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
            (const char *)(unsigned int)v8);
          return v9;
        }
      }
      ++v6;
    }
    v10 = HIDDeviceCollection::OnDeviceRemoval(this, a2);
    v12 = v10;
    if ( v10 >= 0 )
    {
      appended = std::_Fnv1a_append_bytes(v11, v4 + 16, 4uLL);
      v14 = *((_QWORD *)this + 348);
      v15 = 2 * (*((_QWORD *)this + 351) & appended);
      if ( *(unsigned __int8 **)(v14 + 16 * (*((_QWORD *)this + 351) & appended) + 8) == v4 )
      {
        if ( *(unsigned __int8 **)(v14 + 16 * (*((_QWORD *)this + 351) & appended)) == v4 )
        {
          v16 = *((_QWORD *)this + 346);
          *(_QWORD *)(v14 + 8 * v15) = v16;
        }
        else
        {
          v16 = *((_QWORD *)v4 + 1);
        }
        *(_QWORD *)(v14 + 8 * v15 + 8) = v16;
      }
      else if ( *(unsigned __int8 **)(v14 + 16 * (*((_QWORD *)this + 351) & appended)) == v4 )
      {
        *(_QWORD *)(v14 + 16 * (*((_QWORD *)this + 351) & appended)) = *(_QWORD *)v4;
      }
      v17 = *(_QWORD *)v4;
      --*((_QWORD *)this + 347);
      **((_QWORD **)v4 + 1) = v17;
      *(_QWORD *)(v17 + 8) = *((_QWORD *)v4 + 1);
      std::_Deallocate<16,0>(v4, 0x40uLL);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x71,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
        (const char *)(unsigned int)v10);
      return v12;
    }
  }
}
