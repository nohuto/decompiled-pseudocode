/*
 * XREFs of MiApplyHotPatchToLoadedDriver @ 0x140971848
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x140971650 (MiApplyHotPatchToDriver.c)
 * Callees:
 *     MiDetachSessionGlobal @ 0x14021803C (MiDetachSessionGlobal.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MiMakeZeroedPageTables @ 0x1402DBF90 (MiMakeZeroedPageTables.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     VslPrepareDriverForPatch @ 0x14054ED80 (VslPrepareDriverForPatch.c)
 *     KeIsImageIATProtected @ 0x14056A188 (KeIsImageIATProtected.c)
 *     MiDereferenceSessionGlobal @ 0x1405994CC (MiDereferenceSessionGlobal.c)
 *     MiAttachToSessionForBaseImage @ 0x1405A2D30 (MiAttachToSessionForBaseImage.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiGenerateSystemImageNames @ 0x140760554 (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x140761234 (MiDriverLoadSucceeded.c)
 *     MiEnumerateBasePatches @ 0x140761F24 (MiEnumerateBasePatches.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     MiApplyDriverHotPatch @ 0x140971068 (MiApplyDriverHotPatch.c)
 *     MiFindEntryInImportList @ 0x1409782F8 (MiFindEntryInImportList.c)
 */

__int64 __fastcall MiApplyHotPatchToLoadedDriver(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 *v7; // r15
  int v8; // r14d
  __int64 PteAddress; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  int v13; // ebx
  _DWORD *v14; // r9
  int v15; // esi
  int v16; // ebx
  int v17; // eax
  ULONG_PTR v18; // r10
  ULONG_PTR v19; // r10
  unsigned __int64 v20; // rax
  __int64 v21; // r10
  int v22; // ecx
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-69h] BYREF
  __int128 v24; // [rsp+48h] [rbp-61h] BYREF
  __int64 v25; // [rsp+58h] [rbp-51h]
  unsigned __int64 v26; // [rsp+60h] [rbp-49h] BYREF
  UNICODE_STRING v27; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING v28; // [rsp+78h] [rbp-31h] BYREF
  UNICODE_STRING v29; // [rsp+88h] [rbp-21h] BYREF
  _OWORD v30[3]; // [rsp+98h] [rbp-11h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v26 = 0LL;
  BugCheckParameter2 = 0LL;
  v25 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  v8 = 0;
  v29 = 0LL;
  v28 = 0LL;
  memset(v30, 0, sizeof(v30));
  v24 = 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
  {
    PteAddress = MiGetPteAddress(v3);
    v11 = PteAddress + 8 * (((v10 >> 12) + ((v10 & 0xFFF) != 0) + 511LL) & 0xFFFFFFFFFFFFFE00uLL);
    if ( !(unsigned int)MiMakeZeroedPageTables(
                          v11,
                          v11 + 8 * (((unsigned int)dword_140C4F478 >> 12) + ((dword_140C4F478 & 0xFFF) != 0) - 1LL),
                          0,
                          12) )
      return 3221225626LL;
  }
  v13 = 0x40000000;
  if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
  {
    v13 = 1073741825;
    KiStackAttachProcess((_KPROCESS *)xmmword_140C533C8, 0LL, (__int64)v30, v14);
    v7 = MiAttachToSessionForBaseImage(a1);
  }
  v15 = v13 | 0x10000000;
  if ( !(unsigned int)KeIsImageIATProtected(a1) )
    v15 = v13;
  v16 = MiGenerateSystemImageNames(a2, 0LL, 0LL, &v27, &v29, &v28);
  if ( v16 >= 0 )
  {
    v17 = MmLoadSystemImageEx((__int64)a2, 0LL, 0LL, a3, v15, &BugCheckParameter2, &v26);
    v16 = v17;
    if ( v17 != -1073741411 )
    {
      if ( v17 != -1073741554 )
      {
        if ( v17 < 0 )
          goto LABEL_36;
        v19 = BugCheckParameter2;
        v8 = 1;
        if ( (v15 & 1) == 0
          || _bittest((const signed __int32 *)(a1 + 104), 0x1Bu)
          && _bittest((const signed __int32 *)(BugCheckParameter2 + 104), 0x1Bu) )
        {
          if ( !(unsigned int)MiFindEntryInImportList(*(_QWORD *)(BugCheckParameter2 + 136), a1) )
          {
            v25 = 0LL;
            v24 = v19;
            MiEnumerateBasePatches(
              a1,
              (unsigned int (__fastcall *)(_QWORD *, __int64))MiFindMatchingPatch,
              (__int64)&v24);
            if ( *((_QWORD *)&v24 + 1) )
            {
              v16 = -1073740758;
            }
            else
            {
              v16 = VslPrepareDriverForPatch(*(_QWORD *)(a1 + 48));
              if ( v16 >= 0 )
              {
                v18 = BugCheckParameter2;
                goto LABEL_27;
              }
            }
LABEL_32:
            v19 = BugCheckParameter2;
            goto LABEL_33;
          }
          v16 = -1073740945;
        }
        else
        {
          v16 = -1073740620;
        }
LABEL_33:
        MiDriverLoadSucceeded(v19, *(_QWORD *)(v19 + 112), a2, (__int64)&v28, (__int64)&v27, 1);
LABEL_34:
        if ( v8 )
          MmUnloadSystemImage(BugCheckParameter2);
        goto LABEL_36;
      }
      v18 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 196) & 0x20) != 0 )
      {
        if ( *(_QWORD *)(BugCheckParameter2 + 280) != a1 )
        {
          v16 = -1073741791;
          goto LABEL_36;
        }
        if ( !*(_QWORD *)(BugCheckParameter2 + 112) )
        {
          v16 = -1073740758;
          goto LABEL_36;
        }
LABEL_27:
        v20 = MiSectionControlArea(*(_QWORD *)(v18 + 112));
        v16 = MiApplyDriverHotPatch(v21, a1, v20, v15);
        v22 = v8;
        if ( v16 >= 0 )
        {
          if ( (MiFlags & 0x40000) != 0 )
            *(_DWORD *)(BugCheckParameter2 + 104) |= 0x2100u;
          v8 = 0;
        }
        if ( !v22 )
          goto LABEL_34;
        goto LABEL_32;
      }
    }
  }
LABEL_36:
  if ( v7 )
  {
    MiDetachSessionGlobal((__int64)&qword_140C533D8);
    MiDereferenceSessionGlobal(v7);
    KiUnstackDetachProcess((__int64)v30, 0LL);
  }
  return (unsigned int)v16;
}
