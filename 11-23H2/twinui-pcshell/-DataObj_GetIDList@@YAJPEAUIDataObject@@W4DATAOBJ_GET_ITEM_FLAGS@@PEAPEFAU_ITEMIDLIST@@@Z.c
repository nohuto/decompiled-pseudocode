/*
 * XREFs of ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x180753724
 * Callers:
 *     ?GetPinnableInfo@CPinnedList@@UEAAJPEAUIDataObject@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@2PEAPEAGPEAH@Z @ 0x180755CC0 (-GetPinnableInfo@CPinnedList@@UEAAJPEAUIDataObject@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@2PEAPEAGP.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DataObj_GetDataOfType@@YAPEAXPEAUIDataObject@@IPEAUtagSTGMEDIUM@@@Z @ 0x180753680 (-DataObj_GetDataOfType@@YAPEAXPEAUIDataObject@@IPEAUtagSTGMEDIUM@@@Z.c)
 *     ?DataObj_GetPath@@YAJPEAUIDataObject@@PEAGI@Z @ 0x180753928 (-DataObj_GetPath@@YAJPEAUIDataObject@@PEAGI@Z.c)
 *     ?ReleaseStgMediumHGLOBAL@@YAXPEBXPEAUtagSTGMEDIUM@@@Z @ 0x18075A530 (-ReleaseStgMediumHGLOBAL@@YAXPEBXPEAUtagSTGMEDIUM@@@Z.c)
 *     ?SHGetItemArrayFromDataObjEx@@YAJPEAUIDataObject@@GPEAUtagSTGMEDIUM@@PEAPEAU_IDA@@@Z @ 0x18075B1DC (-SHGetItemArrayFromDataObjEx@@YAJPEAUIDataObject@@GPEAUtagSTGMEDIUM@@PEAPEAU_IDA@@@Z.c)
 *     ?_InitClipboardFormats@@YAXXZ @ 0x18075E2C4 (-_InitClipboardFormats@@YAXXZ.c)
 *     SHGetUIObjectFromFullPIDL @ 0x18079A490 (SHGetUIObjectFromFullPIDL.c)
 */

__int64 __fastcall DataObj_GetIDList(struct IDataObject *a1, enum DATAOBJ_GET_ITEM_FLAGS a2, struct _ITEMIDLIST **a3)
{
  char v4; // si
  HRESULT Path; // ebx
  unsigned __int16 v7; // dx
  const void *v8; // rcx
  unsigned int v9; // r8d
  struct _ITEMIDLIST *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const CHAR *DataOfType; // rax
  struct _IDA *v15; // [rsp+30h] [rbp-D0h] BYREF
  struct _ITEMIDLIST *v16; // [rsp+38h] [rbp-C8h] BYREF
  struct tagSTGMEDIUM v17; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR pszName[2088]; // [rsp+60h] [rbp-A0h] BYREF

  *a3 = 0LL;
  v4 = a2;
  Path = -2147024809;
  if ( !a1 )
    return (unsigned int)Path;
  _InitClipboardFormats();
  _InitClipboardFormats();
  Path = SHGetItemArrayFromDataObjEx(a1, v7, &v17, &v15);
  if ( Path >= 0 )
  {
    if ( (v4 & 8) == 0 || v15->cidl == 1 )
    {
      if ( v15->cidl )
        v10 = ILCombine((LPCITEMIDLIST)((char *)v15 + v15->aoffset[0]), (LPCITEMIDLIST)((char *)v15 + v15[1].cidl));
      else
        v10 = 0LL;
      *a3 = v10;
      Path = v10 == 0LL ? 0x8007000E : 0;
    }
    else
    {
      Path = -2147467259;
    }
    goto LABEL_16;
  }
  if ( (v4 & 2) != 0
    || (Path = DataObj_GetPath(a1, pszName, v9), Path < 0)
    || (v4 |= 4u, Path = SHParseDisplayName(pszName, 0LL, a3, 0, 0LL), Path < 0) )
  {
    if ( (v4 & 4) != 0 )
      return (unsigned int)Path;
    DataOfType = (const CHAR *)DataObj_GetDataOfType(a1, g_cfURL_Storage, &v17);
    if ( !DataOfType )
      goto LABEL_17;
    SHAnsiToUnicode(DataOfType, pszName, 2084);
    Path = SHParseDisplayName(pszName, 0LL, a3, 0, 0LL);
LABEL_16:
    ReleaseStgMediumHGLOBAL(v8, &v17);
LABEL_17:
    if ( Path < 0 )
      return (unsigned int)Path;
  }
  if ( (v4 & 1) != 0 && (int)SHGetUIObjectFromFullPIDL(*a3, v11, v12, &v15) >= 0 )
  {
    if ( (*(int (__fastcall **)(struct _IDA *, struct _ITEMIDLIST **))(*(_QWORD *)v15 + 32LL))(v15, &v16) >= 0 && v16 )
    {
      ILFree(*a3);
      *a3 = v16;
    }
    (*(void (__fastcall **)(struct _IDA *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)Path;
}
