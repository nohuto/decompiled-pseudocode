/*
 * XREFs of ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000C580
 * Callers:
 *     ?NonRTGrabSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ @ 0x14000C168 (-NonRTGrabSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ.c)
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14000C3DC (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ??4CProcessingData@@QEAAXAEAV0@@Z @ 0x14008199C (--4CProcessingData@@QEAAXAEAV0@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000BCC0 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ.c)
 *     ??4CConnectionNode@@QEAAXAEAV0@@Z @ 0x14000BD8C (--4CConnectionNode@@QEAAXAEAV0@@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140010CC0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?Create@CAtlPlex@ATLRT@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140011838 (-Create@CAtlPlex@ATLRT@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CProcessingData::CopyEndpointList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 *v6; // rcx
  void (__fastcall ***v7)(_QWORD, __int64); // rdi
  __int64 v8; // rax
  __int64 v10; // r14
  void *v11; // rax
  _QWORD *v12; // rdi
  unsigned __int64 v13; // r8
  __int64 v14; // r14
  struct ATLRT::CAtlPlex *v15; // r8
  int v16; // edx
  _QWORD *i; // rcx
  __int64 *v18; // rcx
  __int64 v19; // rax

  while ( *(_QWORD *)(a2 + 16) )
  {
    v6 = *(__int64 **)a2;
    if ( !*(_QWORD *)a2 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = (void (__fastcall ***)(_QWORD, __int64))v6[2];
    v8 = *v6;
    *(_QWORD *)a2 = *v6;
    if ( v8 )
      *(_QWORD *)(v8 + 8) = 0LL;
    else
      *(_QWORD *)(a2 + 8) = 0LL;
    *v6 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a2 + 32) = v6;
    if ( (*(_QWORD *)(a2 + 16))-- == 1LL )
      ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll((__int64 *)a2);
    if ( v7 )
      (**v7)(v7, 1LL);
  }
  v5 = *(_QWORD *)(a3 + 8);
  while ( v5 )
  {
    v10 = *(_QWORD *)(v5 + 16);
    v5 = *(_QWORD *)(v5 + 8);
    v11 = AERTGetDLLRTHeap();
    v12 = AERTAllocate(0xA8uLL, v11);
    if ( v12 )
    {
      *v12 = &CConnectionNode::`vftable';
      v12[2] = *(_QWORD *)(v10 + 16);
      v12[14] = 0LL;
      v12[17] = 0LL;
      v12[20] = 0LL;
      CConnectionNode::operator=((__int64)v12, v10);
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      v14 = *(_QWORD *)a2;
      if ( !*(_QWORD *)(a2 + 32) )
      {
        v15 = ATLRT::CAtlPlex::Create((struct ATLRT::CAtlPlex **)(a2 + 24), *(unsigned int *)(a2 + 40), v13);
        if ( !v15 )
          ATL::AtlThrowImpl(-2147024882);
        v16 = *(_DWORD *)(a2 + 40);
        for ( i = (_QWORD *)((char *)v15 + 16 * (v16 - 1) + 8 * (unsigned int)(v16 - 1) + 8); --v16 >= 0; i -= 3 )
        {
          *i = *(_QWORD *)(a2 + 32);
          *(_QWORD *)(a2 + 32) = i;
        }
      }
      v18 = *(__int64 **)(a2 + 32);
      v19 = *v18;
      v18[2] = (__int64)v12;
      *(_QWORD *)(a2 + 32) = v19;
      v18[1] = 0LL;
      *v18 = v14;
      ++*(_QWORD *)(a2 + 16);
      if ( *(_QWORD *)a2 )
        *(_QWORD *)(*(_QWORD *)a2 + 8LL) = v18;
      else
        *(_QWORD *)(a2 + 8) = v18;
      *(_QWORD *)a2 = v18;
    }
  }
}
