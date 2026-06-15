/*
 * XREFs of ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x14005EB9C
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000C240 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x14005E93C (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetNode@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x14005E96C (-GetNode@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@AT.c)
 *     ?LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z @ 0x14005ECAC (-LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z.c)
 */

void __fastcall LinkDisplayNodes(__int64 *a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 *v7; // r11
  __int64 v8; // rdx
  __int64 Node; // rbp
  __int64 v10; // r11
  _QWORD *v11; // rcx
  struct CDisplayNode *v12; // rsi
  CDisplayNode **Next; // rax
  _QWORD *v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v17; // [rsp+88h] [rbp+20h] BYREF

  if ( a1[1] )
  {
    v4 = 0LL;
    if ( *((_DWORD *)a1 + 4) )
    {
      v5 = *a1;
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 8 * v4);
        if ( v6 )
          break;
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= *((_DWORD *)a1 + 4) )
          return;
      }
      do
      {
        v7 = (__int64 *)v6;
        if ( *(_QWORD *)(v6 + 56) )
        {
          v6 = *(_QWORD *)(v6 + 56);
        }
        else
        {
          LODWORD(v8) = *(_DWORD *)(v6 + 64) % *((_DWORD *)a1 + 4);
          do
          {
            v8 = (unsigned int)(v8 + 1);
            v6 = 0LL;
            if ( (unsigned int)v8 >= *((_DWORD *)a1 + 4) )
              break;
            v6 = *(_QWORD *)(*a1 + 8 * v8);
          }
          while ( !v6 );
        }
        Node = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::GetNode(
                 a2,
                 *v7,
                 &v16,
                 &v15,
                 &v17);
        if ( Node )
        {
          v11 = *(_QWORD **)(v10 + 8);
          v14 = v11;
          while ( v14 )
          {
            v12 = (struct CDisplayNode *)*ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(
                                            (__int64)v11,
                                            &v14);
            v17 = *(_QWORD **)(Node + 8);
            while ( v17 )
            {
              Next = (CDisplayNode **)ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(
                                        (__int64)v11,
                                        &v17);
              CDisplayNode::LinkToLeftDisplayNode(*Next, v12);
            }
          }
        }
      }
      while ( v6 );
    }
  }
}
