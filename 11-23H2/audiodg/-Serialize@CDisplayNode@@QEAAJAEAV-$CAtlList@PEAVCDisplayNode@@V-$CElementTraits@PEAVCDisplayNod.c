/*
 * XREFs of ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x140063044
 * Callers:
 *     ?SerializeNodeArray@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14006340C (-SerializeNodeArray@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@AT.c)
 * Callees:
 *     memcpy_s @ 0x14002AC78 (memcpy_s.c)
 *     ?DisplayNodeToIndex@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCDisplayNode@@PEAI@Z @ 0x140061D78 (-DisplayNodeToIndex@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@AT.c)
 *     ?GetDisplayName@CDisplayNode@@QEAAPEBDXZ @ 0x14006249C (-GetDisplayName@CDisplayNode@@QEAAPEBDXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x140062A50 (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetNodeMode@CDisplayNode@@QEAAIXZ @ 0x140062AD0 (-GetNodeMode@CDisplayNode@@QEAAIXZ.c)
 */

__int64 __fastcall CDisplayNode::Serialize(CDisplayNode *this, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  const char *DisplayName; // r14
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // r8d
  int v13; // ebx
  unsigned int v14; // r10d
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *Next; // rax
  unsigned int Source; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *i; // [rsp+28h] [rbp-20h] BYREF

  DisplayName = CDisplayNode::GetDisplayName(this);
  if ( *a4 > 0x1000 )
    return (unsigned int)-2147024774;
  if ( memcpy_s((void *const)(*a3 + *a4), 4096 - *a4, "NODE", 5uLL) )
    return (unsigned int)-2147024774;
  v9 = *a4 + 5;
  *a4 = v9;
  if ( (unsigned int)v9 > 0x1000 )
    return (unsigned int)-2147024774;
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( DisplayName[v11] );
  if ( memcpy_s((void *const)(*a3 + v9), (unsigned int)(4096 - v9), DisplayName, (unsigned int)(v11 + 1)) )
    return (unsigned int)-2147024774;
  do
    ++v10;
  while ( DisplayName[v10] );
  v12 = *a4 + 1 + v10;
  *a4 = v12;
  Source = *(_DWORD *)(*(_QWORD *)this + 40LL);
  if ( v12 > 0x1000 )
    return (unsigned int)-2147024774;
  if ( memcpy_s((void *const)(*a3 + v12), 4096 - v12, &Source, 4uLL) )
    return (unsigned int)-2147024774;
  *a4 += 4;
  v13 = 0;
  Source = CDisplayNode::GetNodeMode(this);
  if ( v14 > 0x1000 )
    return (unsigned int)-2147024774;
  if ( memcpy_s((void *const)(*a3 + v14), 4096 - v14, &Source, 4uLL) )
    return (unsigned int)-2147024774;
  v15 = *a4 + 4;
  *a4 = v15;
  Source = *((_DWORD *)this + 6);
  if ( (unsigned int)v15 > 0x1000 || memcpy_s((void *const)(*a3 + v15), (unsigned int)(4096 - v15), &Source, 4uLL) )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    *a4 += 4;
    for ( i = (_QWORD *)*((_QWORD *)this + 1); i; *a4 += 4 )
    {
      Next = ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(v16, &i);
      v13 = DisplayNodeToIndex(a2, *Next, &Source);
      if ( v13 < 0 )
        break;
      if ( *a4 > 0x1000 || memcpy_s((void *const)(*a3 + *a4), 4096 - *a4, &Source, 4uLL) )
        return (unsigned int)-2147024774;
    }
  }
  return (unsigned int)v13;
}
