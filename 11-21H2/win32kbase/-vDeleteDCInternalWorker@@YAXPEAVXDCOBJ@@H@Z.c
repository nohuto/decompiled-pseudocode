/*
 * XREFs of ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002F514
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002EB80 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 * Callees:
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C001FD30 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0020AE0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0021290 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0021390 (DEC_SHARE_REF_CNT.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0024CD8 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00717F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0086F68 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C016D964 (-vReleaseVis@DC@@QEAAXXZ.c)
 */

void __fastcall vDeleteDCInternalWorker(struct DC **this, int a2)
{
  DC *v4; // rcx
  struct DC *v5; // rbx
  struct _SLIST_ENTRY *v6; // rcx
  struct _SLIST_ENTRY *v7; // rcx
  struct _SLIST_ENTRY *v8; // rcx
  struct _SLIST_ENTRY *v9; // rcx
  struct _SLIST_ENTRY *v10; // rcx
  struct _SLIST_ENTRY *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 )
    FreeDCAttributes(*this);
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)*this + 19));
  DEC_SHARE_REF_CNT(*((unsigned int **)*this + 12));
  v4 = *this;
  v13 = *((_QWORD *)*this + 6);
  DC::vReleaseVis(v4);
  DC::vReleaseRao(*this);
  v5 = *this;
  v6 = (struct _SLIST_ENTRY *)*((_QWORD *)*this + 143);
  if ( v6 )
  {
    REGION::vDeleteREGION(v6);
    *((_QWORD *)*this + 143) = 0LL;
    v5 = *this;
  }
  v7 = (struct _SLIST_ENTRY *)*((_QWORD *)v5 + 145);
  if ( v7 )
  {
    REGION::vDeleteREGION(v7);
    *((_QWORD *)*this + 145) = 0LL;
    v5 = *this;
  }
  v8 = (struct _SLIST_ENTRY *)*((_QWORD *)v5 + 144);
  if ( v8 )
  {
    REGION::vDeleteREGION(v8);
    *((_QWORD *)*this + 144) = 0LL;
    v5 = *this;
  }
  v9 = (struct _SLIST_ENTRY *)*((_QWORD *)v5 + 146);
  if ( v9 )
  {
    REGION::vDeleteREGION(v9);
    *((_QWORD *)*this + 146) = 0LL;
    v5 = *this;
  }
  v10 = (struct _SLIST_ENTRY *)*((_QWORD *)v5 + 147);
  if ( v10 )
  {
    REGION::vDeleteREGION(v10);
    *((_QWORD *)*this + 147) = 0LL;
    v5 = *this;
  }
  v11 = (struct _SLIST_ENTRY *)*((_QWORD *)v5 + 148);
  if ( v11 )
  {
    REGION::vDeleteREGION(v11);
    *((_QWORD *)*this + 148) = 0LL;
    v5 = *this;
  }
  v12 = *((_QWORD *)v5 + 7);
  v14 = v12;
  XDCOBJ::bDeleteDC((XDCOBJ *)this, a2);
  PDEVOBJ::vUnreferencePdev(&v13, a2 != 0);
  if ( v12 )
    PDEVOBJ::vUnreferencePdev(&v14, a2 != 0);
}
