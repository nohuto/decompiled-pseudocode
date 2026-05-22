/*
 * XREFs of ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x18005B3B4
 * Callers:
 *     ?AddLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001F90 (-AddLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z.c)
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ @ 0x18005B258 (-EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?SetSparse_Opacity@Visual@Composition@UI@Windows@@AEAAXM@Z @ 0x18005D830 (-SetSparse_Opacity@Visual@Composition@UI@Windows@@AEAAXM@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18005DC0C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180078A40 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

struct CSparseStorage::DataInfo *__fastcall CSparseStorage::FindSlotForData(
        CSparseStorage *this,
        int a2,
        unsigned int a3)
{
  unsigned int *v3; // rdi
  __int64 v5; // rsi
  int v7; // r15d
  unsigned int v8; // ebp
  HANDLE ProcessHeap; // rax
  __int64 v10; // r12
  char *v11; // rbx
  unsigned int *v12; // rax
  unsigned __int64 v13; // r9
  int v14; // r8d
  int v15; // ecx
  struct CSparseStorage::DataInfo *result; // rax
  signed __int64 v17; // rbx
  unsigned __int64 v18; // rbp
  void *v19; // rax

  v3 = *(unsigned int **)this;
  v5 = a3;
  v7 = *(_DWORD *)(*(_QWORD *)this + 4LL) & __ROR4__(1, a2);
  if ( *(_UNKNOWN **)this == &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    v8 = a3 + 40;
    ProcessHeap = GetProcessHeap();
    v3 = (unsigned int *)HeapAlloc(ProcessHeap, 8u, v8);
    if ( !v3 )
      RaiseFailFastException(0LL, 0LL, 0);
    *v3 = v8;
    *(_QWORD *)this = v3;
  }
  v10 = *v3;
  v11 = (char *)(v3 + 3);
  v12 = v3 + 4;
  v13 = (unsigned __int64)v3 + v10;
  while ( (unsigned __int64)v12 <= v13 )
  {
    v14 = *(_DWORD *)v11;
    v15 = HIBYTE(*(_DWORD *)v11) & 0x7F;
    if ( v15 == a2 )
      return (struct CSparseStorage::DataInfo *)v11;
    if ( !v15 )
    {
      if ( (unsigned __int64)&v11[v5 + 4] <= v13 )
      {
        *(_DWORD *)v11 = v14 ^ (v5 ^ v14) & 0xFFFFFF;
        return (struct CSparseStorage::DataInfo *)v11;
      }
      break;
    }
    if ( !v7 && (v14 & 0xFFFFFF) == (_DWORD)v5 && (__ROR4__(1, v15) & v3[1]) == 0 )
      return (struct CSparseStorage::DataInfo *)v11;
    v11 += (*(_QWORD *)&v14 & 0xFFFFFFLL) + 4;
    v12 = (unsigned int *)(v11 + 4);
  }
  v17 = v11 - (char *)v3;
  v18 = v17 + v5 + 28;
  v19 = DefaultHeap::Realloc(v3, v18);
  *(_QWORD *)this = v19;
  if ( !v19 )
    RaiseFailFastException(0LL, 0LL, 0);
  memset_0((void *)(v10 + *(_QWORD *)this), 0, v18 - v10);
  **(_DWORD **)this = v18;
  result = (struct CSparseStorage::DataInfo *)(v17 + *(_QWORD *)this);
  *(_DWORD *)result &= 0xFF000000;
  *(_DWORD *)result |= v5 & 0xFFFFFF;
  return result;
}
