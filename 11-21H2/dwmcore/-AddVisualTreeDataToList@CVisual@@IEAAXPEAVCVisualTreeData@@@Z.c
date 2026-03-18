/*
 * XREFs of ?AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z @ 0x1800D9200
 * Callers:
 *     ?Link@CVisualTreeData@@MEAAXXZ @ 0x1800D91A0 (-Link@CVisualTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x18004C27C (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 */

void __fastcall CVisual::AddVisualTreeDataToList(CVisual *this, struct CVisualTreeData *a2)
{
  struct _LIST_ENTRY **v4; // rdi
  struct _LIST_ENTRY *TreeDataListHead; // rbx
  __int64 v6; // r8
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v8; // rax
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  unsigned int v11; // eax

  v4 = 0LL;
  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  if ( !TreeDataListHead )
  {
    TreeDataListHead = (struct _LIST_ENTRY *)DefaultHeap::Alloc(0x10uLL);
    if ( !TreeDataListHead )
      RaiseFailFastException(0LL, 0LL, 0);
    TreeDataListHead->Blink = TreeDataListHead;
    TreeDataListHead->Flink = TreeDataListHead;
    v6 = *((_QWORD *)this + 29);
    if ( *(int *)v6 >= 0 )
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((_QWORD *)this + 29, 1) = TreeDataListHead;
      goto LABEL_6;
    }
    v9 = *(unsigned int *)(v6 + 4);
    v10 = (_BYTE *)(v6 + 8);
    v11 = 0;
    if ( (_DWORD)v9 )
    {
      while ( *v10 != 1 )
      {
        ++v11;
        ++v10;
        if ( v11 >= (unsigned int)v9 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( v11 >= (unsigned int)v9 )
      {
LABEL_13:
        *v4 = TreeDataListHead;
        goto LABEL_6;
      }
    }
    v4 = (struct _LIST_ENTRY **)(v9 + 15 + v6 + 8LL * v11 - (((_BYTE)v9 + 15) & 7));
    goto LABEL_13;
  }
LABEL_6:
  Blink = TreeDataListHead->Blink;
  v8 = (struct _LIST_ENTRY *)((char *)a2 + 384);
  if ( Blink->Flink != TreeDataListHead )
    __fastfail(3u);
  v8->Flink = TreeDataListHead;
  *((_QWORD *)a2 + 49) = Blink;
  Blink->Flink = v8;
  TreeDataListHead->Blink = v8;
}
