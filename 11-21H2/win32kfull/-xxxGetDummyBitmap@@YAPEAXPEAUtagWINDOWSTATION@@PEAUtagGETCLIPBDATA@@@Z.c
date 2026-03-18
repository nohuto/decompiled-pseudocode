/*
 * XREFs of ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0219D30
 * Callers:
 *     xxxGetClipboardData @ 0x1C014AE38 (xxxGetClipboardData.c)
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C00CD1F0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C014AA2C (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     xxxGetClipboardData @ 0x1C014AE38 (xxxGetClipboardData.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C0219BAC (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 */

HSURF __fastcall xxxGetDummyBitmap(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  void *v2; // rbx
  void *ClipboardData; // rbp
  struct tagCLIP *ClipFormat; // rax
  HSURF result; // rax
  struct tagCLIP *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  HSURF v13; // rbx
  __int64 v14; // r8
  struct tagCLIP *v15; // rax
  struct tagCLIP *v16; // rsi
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  v2 = 0LL;
  ClipboardData = 0LL;
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
    ClipboardData = xxxGetClipboardData(a1, 9LL, (__int64)a2);
  ClipFormat = FindClipFormat(a1, 0x11u, 1);
  if ( ClipFormat
    && *((_QWORD *)ClipFormat + 1) != 2LL
    && (result = (HSURF)xxxGetClipboardData(a1, 17LL, (__int64)a2), (v2 = result) != 0LL) )
  {
    *(_DWORD *)a2 = 17;
    *((_QWORD *)a2 + 1) = ClipboardData;
  }
  else
  {
    v8 = FindClipFormat(a1, 8u, 1);
    if ( v8 && *((_QWORD *)v8 + 1) != 2LL )
      v2 = xxxGetClipboardData(a1, 8LL, (__int64)a2);
    if ( v2 && (v9 = HMValidateHandleNoRip((__int64)v2, 6), (v10 = v9) != 0) )
    {
      ThreadLock(v9, (__int64 *)&v17);
      v13 = xxxDIBtoBMP((const struct tagBITMAPINFO *)(v10 + 20), (__int64)ClipboardData, *(_DWORD *)(v10 + 16));
      if ( v13 )
      {
        v15 = FindClipFormat(a1, 2u, 1);
        v16 = v15;
        if ( v15 )
        {
          UT_FreeCBFormat(v15);
          *((_QWORD *)v16 + 1) = v13;
          GreSetBitmapOwner(v13, 0LL);
          *(_DWORD *)a2 = 2;
        }
        else
        {
          GreDeleteObject(v13);
          v13 = 0LL;
        }
      }
      ThreadUnlock1(v12, v11, v14);
      return v13;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
