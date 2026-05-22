/*
 * XREFs of ?UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180002290
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsTestSigningEnabled@KernelContextProvider@@SA_NXZ @ 0x180025CE8 (-IsTestSigningEnabled@KernelContextProvider@@SA_NXZ.c)
 *     ?IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z @ 0x180060BC4 (-IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180097878 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?ClearAnimationDataForSource@DragManagerClientProxy@@QEAAX_K@Z @ 0x180154938 (-ClearAnimationDataForSource@DragManagerClientProxy@@QEAAX_K@Z.c)
 *     ??4?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801566F0 (--4-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?_Tidy@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAXXZ @ 0x18016FE04 (-_Tidy@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegistration@S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureServices::UnregisterGestureDragClient(
        GestureServices *this,
        struct BamoGestureServicesStub *a2,
        unsigned __int64 a3,
        struct BamoDragManagerClientProxy *a4)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r13
  __int64 *v9; // rbx
  _QWORD *v10; // r15
  __int64 v11; // rsi
  __int64 i; // rdi
  __int64 j; // r14
  struct BamoDragManagerClientProxy **v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rsi
  unsigned __int64 *v17; // rbp
  unsigned __int64 *v18; // rsi
  __int64 *v19; // rdi
  unsigned __int64 appended; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v25; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a3;
  if ( GestureServices::IsShellClient(this, a4) || KernelContextProvider::IsTestSigningEnabled() )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 10);
    v9 = (__int64 *)v8[5];
LABEL_5:
    v9 = (__int64 *)*v9;
    while ( v9 != (__int64 *)v8[5] )
    {
      v10 = v9 + 3;
      v11 = v9[4];
      for ( i = v9[3]; i != v11 && (*(_QWORD *)i != v5 || *(struct BamoDragManagerClientProxy **)(i + 16) != a4); i += 32LL )
        ;
      if ( i != v11 )
      {
        for ( j = i + 32; j != v11; j += 32LL )
        {
          v14 = (struct BamoDragManagerClientProxy **)(j + 16);
          if ( *(_QWORD *)j != v5 || *v14 != a4 )
          {
            *(_QWORD *)i = *(_QWORD *)j;
            *(_DWORD *)(i + 8) = *(_DWORD *)(j + 8);
            Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(i + 16, v14);
            *(_BYTE *)(i + 24) = *(_BYTE *)(j + 24);
            i += 32LL;
          }
        }
        if ( i != v11 )
        {
          v15 = v9[4];
          if ( v11 != v15 )
          {
            v16 = v11 - i;
            do
            {
              *(_QWORD *)i = *(_QWORD *)(i + v16);
              *(_DWORD *)(i + 8) = *(_DWORD *)(v16 + i + 8);
              Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(i + 16, v16 + i + 16);
              *(_BYTE *)(i + 24) = *(_BYTE *)(i + v16 + 24);
              i += 32LL;
            }
            while ( i + v16 != v15 );
          }
          v17 = (unsigned __int64 *)v9[4];
          if ( (unsigned __int64 *)i != v17 )
          {
            v18 = (unsigned __int64 *)(i + 16);
            do
            {
              v7 = *v18;
              if ( *v18 )
              {
                *v18 = 0LL;
                (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 8LL))(v7);
              }
              v18 += 4;
            }
            while ( v18 - 2 != v17 );
          }
          v9[4] = i;
          v5 = a3;
        }
      }
      if ( *v10 != v9[4] )
        goto LABEL_5;
      v19 = v9;
      appended = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)v9 + 16, 4uLL);
      v21 = 2 * (v8[10] & appended);
      v22 = v8[7];
      if ( *(__int64 **)(v22 + 16 * (v8[10] & appended) + 8) == v9 )
      {
        if ( *(__int64 **)(v22 + 16 * (v8[10] & appended)) == v9 )
        {
          v23 = v8[5];
          *(_QWORD *)(v22 + 8 * v21) = v23;
        }
        else
        {
          v23 = v9[1];
        }
        *(_QWORD *)(v22 + 8 * v21 + 8) = v23;
      }
      else if ( *(__int64 **)(v22 + 16 * (v8[10] & appended)) == v9 )
      {
        *(_QWORD *)(v22 + 16 * (v8[10] & appended)) = *v9;
      }
      v9 = (__int64 *)*v9;
      --v8[6];
      *(_QWORD *)v19[1] = v9;
      v9[1] = v19[1];
      std::vector<ShellGesturesProcessor::GestureRegistration>::_Tidy(v10);
      std::_Deallocate<16,0>(v19, 48LL);
    }
    DragManagerClientProxy::ClearAnimationDataForSource(a4, v5);
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x217,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\g"
                    "estureservices.cpp",
      (const char *)0x80070005LL,
      v25);
  }
  return 0LL;
}
