/*
 * XREFs of ?ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z @ 0x180756F04
 * Callers:
 *     ?ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z @ 0x180756DB4 (-ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z.c)
 *     ?SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z @ 0x18075BA1C (-SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z.c)
 *     ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x18075D484 (-_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800ECE64 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z @ 0x1803CC82C (-ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z.c)
 */

__int64 __fastcall ILCloneWithHiddenID(
        const struct _ITEMIDLIST *Src,
        const struct _HIDDENITEMID *a2,
        struct _ITEMIDLIST **a3)
{
  UINT v6; // r14d
  void *v7; // rcx
  int v8; // ebx
  __int64 v9; // rbx
  struct _ITEMIDLIST *ID; // r14
  __int64 cb; // r15
  char *v12; // rsi
  unsigned __int16 v13; // ax
  USHORT v14; // ax

  *a3 = 0LL;
  if ( Src && Src->mkid.cb && HIWORD(*((_DWORD *)a2 + 1)) == 0xBEEF )
  {
    v6 = ILGetSize(Src);
    v8 = CTCoAllocPolicy::Alloc(v7, 1, v6 + *(unsigned __int16 *)a2 + 2, (void **)a3);
    if ( v8 >= 0 )
    {
      v9 = v6;
      memcpy(*a3, Src, v6);
      ID = ILFindLastID(*a3);
      cb = ID->mkid.cb;
      if ( ILFindFirstHiddenID(ID) )
        LOWORD(cb) = *(_WORD *)((char *)ID + cb - 2);
      v12 = (char *)*a3 + v9;
      memmove(v12 - 2, a2, *(unsigned __int16 *)a2);
      v13 = *((_WORD *)v12 - 1) + 2;
      if ( v13 < *((_WORD *)v12 - 1) || (*((_WORD *)v12 - 1) = v13, v14 = ID->mkid.cb + v13, v14 < ID->mkid.cb) )
      {
        v8 = -2147024362;
        CoTaskMemFree(*a3);
        *a3 = 0LL;
      }
      else
      {
        ID->mkid.cb = v14;
        v8 = 0;
        *(_WORD *)&v12[*((unsigned __int16 *)v12 - 1) - 4] = cb;
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v8;
}
