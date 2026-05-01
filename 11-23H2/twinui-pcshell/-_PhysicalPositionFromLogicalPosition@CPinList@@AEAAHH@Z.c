/*
 * XREFs of ?_PhysicalPositionFromLogicalPosition@CPinList@@AEAAHH@Z @ 0x18075E77C
 * Callers:
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18075A570 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     DSA_GetItemPtr @ 0x18074A880 (DSA_GetItemPtr.c)
 *     ?GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z @ 0x180756BA4 (-GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z.c)
 */

__int64 __fastcall CPinList::_PhysicalPositionFromLogicalPosition(struct _DSA **this, int a2)
{
  int v2; // ebp
  int v3; // ebx
  struct _DSA *v6; // rcx
  int v7; // eax
  const ITEMIDLIST **ItemPtr; // rax
  int TimestampFromPidl; // eax
  int v10; // edx
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  if ( a2 > 0 )
  {
    do
    {
      v6 = *this;
      if ( *this )
      {
        v7 = *(_DWORD *)v6;
      }
      else
      {
        v7 = 0;
        v6 = 0LL;
      }
      if ( v3 >= v7 )
        break;
      ItemPtr = (const ITEMIDLIST **)DSA_GetItemPtr(v6, v3);
      TimestampFromPidl = GetTimestampFromPidl(*ItemPtr, -1091633108, &v12);
      v10 = v2 + 1;
      if ( TimestampFromPidl >= 0 )
        v10 = v2;
      ++v3;
      v2 = v10;
    }
    while ( v10 < a2 );
  }
  return (unsigned int)v3;
}
