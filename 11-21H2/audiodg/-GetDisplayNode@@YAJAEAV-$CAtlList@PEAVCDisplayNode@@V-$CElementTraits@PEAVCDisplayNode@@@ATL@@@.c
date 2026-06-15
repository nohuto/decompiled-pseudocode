/*
 * XREFs of ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x14005E7E4
 * Callers:
 *     ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14005E0DC (-DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVC.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x14005DC60 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCDisplayNode@@@Z @ 0x14005DC98 (-AddHead@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x14005E93C (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDisplayNode(__int64 *a1, __int64 a2, CDisplayNode **a3)
{
  CDisplayNode **v3; // r14
  __int64 *v5; // r12
  unsigned int v6; // esi
  __int64 **Next; // rax
  CDisplayNode *v8; // rax
  __int64 v9; // r8
  CDisplayNode *v10; // rdi
  ATL::CAtlException *v12; // rbx
  ATL::CAtlException *v13; // [rsp+20h] [rbp-38h] BYREF
  CDisplayNode *v14; // [rsp+60h] [rbp+8h] BYREF
  CDisplayNode **v15; // [rsp+70h] [rbp+18h]
  CDisplayNode *v16; // [rsp+78h] [rbp+20h]

  v15 = a3;
  v3 = a3;
  v5 = a1;
  v6 = 0;
  v14 = (CDisplayNode *)*a1;
  if ( !v14 )
  {
LABEL_4:
    *v3 = 0LL;
    goto LABEL_5;
  }
  while ( 1 )
  {
    Next = (__int64 **)ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(a1, &v14);
    a1 = *Next;
    if ( **Next == a2 )
      break;
    if ( !v14 )
      goto LABEL_4;
  }
  *v3 = (CDisplayNode *)a1;
  if ( !a1 )
  {
LABEL_5:
    v8 = (CDisplayNode *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v8;
    v14 = v8;
    if ( v8 )
    {
      *(_QWORD *)v8 = a2;
      *((_QWORD *)v8 + 1) = 0LL;
      *((_QWORD *)v8 + 2) = 0LL;
      *((_QWORD *)v8 + 3) = 0LL;
      *((_QWORD *)v8 + 4) = 0LL;
      *((_QWORD *)v8 + 5) = 0LL;
      *((_DWORD *)v8 + 12) = 10;
      *((_QWORD *)v8 + 7) = 0LL;
      *((_QWORD *)v8 + 8) = 0LL;
      *((_QWORD *)v8 + 9) = 0LL;
      *((_QWORD *)v8 + 10) = 0LL;
      *((_QWORD *)v8 + 11) = 0LL;
      *((_DWORD *)v8 + 24) = 10;
    }
    else
    {
      v10 = 0LL;
    }
    try
    {
      v16 = v10;
      v14 = v10;
      v6 = 0;
      ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead(v5, (__int64)&v14, v9);
    }
    catch ( ATL::CAtlException *v13 )
    {
      v12 = v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v14) = *(_DWORD *)v12;
      v6 = (unsigned int)v14;
      if ( (int)v14 < 0 )
      {
        if ( v16 )
          CDisplayNode::`scalar deleting destructor'(v16);
        return v6;
      }
      v3 = v15;
      v10 = v16;
    }
    *v3 = v10;
  }
  return v6;
}
