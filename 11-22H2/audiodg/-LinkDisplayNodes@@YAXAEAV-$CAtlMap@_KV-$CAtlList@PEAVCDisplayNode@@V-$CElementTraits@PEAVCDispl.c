/*
 * XREFs of ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x140062CA4
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x140062AA0 (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetNode@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x140062AD0 (-GetNode@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@AT.c)
 *     ?LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z @ 0x140062DC0 (-LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z.c)
 */

void __fastcall LinkDisplayNodes(__int64 *a1, __int64 *a2)
{
  __int64 v4; // r8
  _DWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 Node; // r15
  _QWORD *v11; // rcx
  struct CDisplayNode *v12; // rbp
  CDisplayNode **Next; // rax
  _QWORD *v14; // [rsp+30h] [rbp-48h] BYREF
  int v15; // [rsp+80h] [rbp+8h] BYREF
  int v16; // [rsp+90h] [rbp+18h] BYREF
  _QWORD *v17; // [rsp+98h] [rbp+20h] BYREF

  if ( a1[1] )
  {
    v4 = 0LL;
    v5 = a1 + 2;
    if ( *((_DWORD *)a1 + 4) )
    {
      v6 = *a1;
      while ( 1 )
      {
        v7 = *(_QWORD *)(v6 + 8 * v4);
        if ( v7 )
          break;
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= *v5 )
          return;
      }
      do
      {
        v8 = (__int64 *)v7;
        if ( *(_QWORD *)(v7 + 56) )
        {
          v7 = *(_QWORD *)(v7 + 56);
        }
        else
        {
          LODWORD(v9) = *(_DWORD *)(v7 + 64) % *v5;
          do
          {
            v9 = (unsigned int)(v9 + 1);
            v7 = 0LL;
            if ( (unsigned int)v9 >= *v5 )
              break;
            v7 = *(_QWORD *)(*a1 + 8 * v9);
          }
          while ( !v7 );
        }
        Node = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::GetNode(
                 a2,
                 *v8,
                 &v16,
                 &v15,
                 &v17);
        if ( Node )
        {
          v11 = (_QWORD *)v8[1];
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
      while ( v7 );
    }
  }
}
