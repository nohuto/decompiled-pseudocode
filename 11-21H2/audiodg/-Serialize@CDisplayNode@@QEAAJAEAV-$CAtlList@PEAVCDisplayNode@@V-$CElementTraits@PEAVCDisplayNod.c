/*
 * XREFs of ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14005EF78
 * Callers:
 *     ?SerializeNodeArray@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14005F314 (-SerializeNodeArray@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@AT.c)
 * Callees:
 *     memcpy_s_0 @ 0x14004F70C (memcpy_s_0.c)
 *     ?DisplayNodeToIndex@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCDisplayNode@@PEAI@Z @ 0x14005DD38 (-DisplayNodeToIndex@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@AT.c)
 *     ?GetDisplayName@CDisplayNode@@QEAAPEBDXZ @ 0x14005E3F0 (-GetDisplayName@CDisplayNode@@QEAAPEBDXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x14005E93C (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetNodeMode@CDisplayNode@@QEAAIXZ @ 0x14005E9BC (-GetNodeMode@CDisplayNode@@QEAAIXZ.c)
 */

__int64 __fastcall CDisplayNode::Serialize(CDisplayNode *this, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  const char *DisplayName; // r14
  int v9; // ebx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // r8d
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *Next; // rax
  unsigned int Source; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *i; // [rsp+28h] [rbp-20h] BYREF

  DisplayName = CDisplayNode::GetDisplayName(this);
  if ( memcpy_s_0((void *const)(*a3 + *a4), 4096 - *a4, "NODE", 5uLL) )
    return (unsigned int)-2147024774;
  *a4 += 5;
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( DisplayName[v11] );
  if ( memcpy_s_0((void *const)(*a3 + *a4), 4096 - *a4, DisplayName, (unsigned int)(v11 + 1)) )
    return (unsigned int)-2147024774;
  do
    ++v10;
  while ( DisplayName[v10] );
  v12 = *a4 + 1 + v10;
  *a4 = v12;
  Source = *(_DWORD *)(*(_QWORD *)this + 40LL);
  if ( memcpy_s_0((void *const)(*a3 + v12), 4096 - v12, &Source, 4uLL) )
    return (unsigned int)-2147024774;
  v13 = *a4 + 4;
  *a4 = v13;
  v9 = 0;
  Source = CDisplayNode::GetNodeMode(this);
  if ( memcpy_s_0((void *const)(*a3 + v13), 4096 - v13, &Source, 4uLL) )
    return (unsigned int)-2147024774;
  *a4 += 4;
  v14 = *a4;
  Source = *((_DWORD *)this + 6);
  if ( memcpy_s_0((void *const)(*a3 + v14), (unsigned int)(4096 - v14), &Source, 4uLL) )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    *a4 += 4;
    for ( i = (_QWORD *)*((_QWORD *)this + 1); i; *a4 += 4 )
    {
      Next = ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(v15, &i);
      v9 = DisplayNodeToIndex(a2, *Next, &Source);
      if ( v9 < 0 )
        break;
      if ( memcpy_s_0((void *const)(*a3 + *a4), 4096 - *a4, &Source, 4uLL) )
        return (unsigned int)-2147024774;
    }
  }
  return (unsigned int)v9;
}
