/*
 * XREFs of ?SerializeNodeArray@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14006340C
 * Callers:
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x1400632A8 (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 * Callees:
 *     memcpy_s @ 0x14002AC78 (memcpy_s.c)
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x140062A50 (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x140063044 (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 */

__int64 __fastcall SerializeNodeArray(__int64 a1, __int64 *a2, unsigned int *a3)
{
  __int64 v3; // rbp
  int v5; // edi
  __int64 v8; // rcx
  __int64 v9; // r14
  CDisplayNode **Next; // rax
  bool v11; // zf
  _QWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v5 = 0;
  *a3 = v3 + 4;
  LODWORD(v13) = *(_DWORD *)(a1 + 16);
  if ( (unsigned int)(v3 + 4) > 0x1000
    || memcpy_s((void *const)(*a2 + (unsigned int)(v3 + 4)), (unsigned int)(4096 - (v3 + 4)), &v13, 4uLL) )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    *a3 += 4;
    v13 = *(_QWORD **)a1;
    if ( v13 )
    {
      while ( 1 )
      {
        v9 = *a3;
        *a3 = v9 + 4;
        Next = (CDisplayNode **)ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(v8, &v13);
        v5 = CDisplayNode::Serialize(*Next, a1, a2, a3);
        if ( v5 < 0 )
          break;
        v8 = *a2;
        v11 = v13 == 0LL;
        *(_DWORD *)(v9 + *a2) = *a3 - v9;
        if ( v11 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      *(_DWORD *)(v3 + *a2) = *a3 - v3;
    }
  }
  return (unsigned int)v5;
}
