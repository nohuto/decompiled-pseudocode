/*
 * XREFs of ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x1801047B4
 * Callers:
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x180104658 (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x180104EC0 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800E9CF0 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DResourceManager::DestroyReleasedResources(CD3DResourceManager *this)
{
  union _SLIST_HEADER *i; // rcx
  PSLIST_ENTRY v3; // rdi
  struct _SLIST_ENTRY *v4; // rbx
  char *v5; // rcx

  for ( i = (union _SLIST_HEADER *)((char *)this + 16); ; i = (union _SLIST_HEADER *)((char *)this + 16) )
  {
    v3 = InterlockedFlushSList(i);
    if ( !v3 )
      break;
    do
    {
      v4 = v3 - 3;
      v3 = v3->Next;
      CD3DResourceManager::DestroyResource(this, (struct CD3DResource *)v4);
      v5 = (char *)&v4->Next + *(int *)(*((_QWORD *)&v4->Next + 1) + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    while ( v3 );
  }
}
