/*
 * XREFs of MiApplyHotPatchToLoadedDriver @ 0x140A350D8
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x140A34EE0 (MiApplyHotPatchToDriver.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14020B2A0 (MiMakeZeroedPageTables.c)
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284790 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSectionControlArea @ 0x14029F760 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     MiDetachSessionGlobal @ 0x14033EDBC (MiDetachSessionGlobal.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     VslPrepareDriverForPatch @ 0x14054BE20 (VslPrepareDriverForPatch.c)
 *     KeIsImageIATProtected @ 0x14056C58C (KeIsImageIATProtected.c)
 *     MiDereferenceSessionGlobal @ 0x14063757C (MiDereferenceSessionGlobal.c)
 *     MiAttachToSessionForBaseImage @ 0x140641C04 (MiAttachToSessionForBaseImage.c)
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     MmUnloadSystemImage @ 0x140696020 (MmUnloadSystemImage.c)
 *     MiEnumerateBasePatches @ 0x1406971E4 (MiEnumerateBasePatches.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MiGenerateSystemImageNames @ 0x1407046F4 (MiGenerateSystemImageNames.c)
 *     MiFindEntryInImportList @ 0x140A2B0A4 (MiFindEntryInImportList.c)
 *     MiApplyDriverHotPatch @ 0x140A348E8 (MiApplyDriverHotPatch.c)
 */

__int64 __fastcall MiApplyHotPatchToLoadedDriver(unsigned __int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 *v7; // r15
  int v8; // r14d
  int PteAddress; // eax
  unsigned int v10; // edx
  int v11; // ecx
  int v13; // ebx
  int v14; // esi
  int v15; // ebx
  int v16; // eax
  ULONG_PTR v17; // r10
  __int64 v18; // r10
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r10
  int v21; // ecx
  ULONG_PTR v22; // [rsp+40h] [rbp-69h] BYREF
  __int128 v23; // [rsp+48h] [rbp-61h] BYREF
  __int64 v24; // [rsp+58h] [rbp-51h]
  PVOID v25; // [rsp+60h] [rbp-49h] BYREF
  UNICODE_STRING v26; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING v27; // [rsp+78h] [rbp-31h] BYREF
  UNICODE_STRING v28; // [rsp+88h] [rbp-21h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v29; // [rsp+98h] [rbp-11h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v25 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  v8 = 0;
  v28 = 0LL;
  v27 = 0LL;
  memset(&v29, 0, sizeof(v29));
  v23 = 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
  {
    PteAddress = MiGetPteAddress(v3);
    v11 = PteAddress + 8 * (((v10 >> 12) + ((v10 & 0xFFF) != 0) + 511) & 0xFFFFFE00);
    if ( !(unsigned int)MiMakeZeroedPageTables(
                          v11,
                          v11 + 8 * (((unsigned int)dword_140C6997C >> 12) + ((dword_140C6997C & 0xFFF) != 0) - 1),
                          0,
                          12) )
      return 3221225626LL;
  }
  v13 = 0x40000000;
  if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
  {
    v13 = 1073741825;
    KiStackAttachProcess((_KPROCESS *)*(&xmmword_140C69948 + 1), 0, (__int64)&v29);
    v7 = MiAttachToSessionForBaseImage(a1);
  }
  v14 = v13 | 0x10000000;
  if ( !(unsigned int)KeIsImageIATProtected(a1) )
    v14 = v13;
  v15 = MiGenerateSystemImageNames(a2, 0LL, 0LL, &v26, &v28, &v27);
  if ( v15 >= 0 )
  {
    v16 = MmLoadSystemImageEx((__int64)a2, 0LL, 0LL, a3, v14, &v22, &v25);
    v15 = v16;
    if ( v16 != -1073741411 )
    {
      if ( v16 != -1073741554 )
      {
        if ( v16 < 0 )
          goto LABEL_36;
        v18 = v22;
        v8 = 1;
        if ( (v14 & 1) == 0
          || _bittest((const signed __int32 *)(a1 + 104), 0x1Bu) && _bittest((const signed __int32 *)(v22 + 104), 0x1Bu) )
        {
          if ( !(unsigned int)MiFindEntryInImportList(*(_QWORD *)(v22 + 136), a1) )
          {
            v24 = 0LL;
            v23 = (unsigned __int64)v18;
            MiEnumerateBasePatches(
              a1,
              (unsigned int (__fastcall *)(_QWORD *, __int64))MiFindMatchingPatch,
              (__int64)&v23);
            if ( *((_QWORD *)&v23 + 1) )
            {
              v15 = -1073740758;
            }
            else
            {
              v15 = VslPrepareDriverForPatch(*(_QWORD *)(a1 + 48));
              if ( v15 >= 0 )
              {
                v17 = v22;
                goto LABEL_27;
              }
            }
LABEL_32:
            v18 = v22;
            goto LABEL_33;
          }
          v15 = -1073740945;
        }
        else
        {
          v15 = -1073740620;
        }
LABEL_33:
        MiDriverLoadSucceeded(v18, *(_QWORD *)(v18 + 112), (__int64)a2, (__int64)&v27, (__int64)&v26, 1);
LABEL_34:
        if ( v8 )
          MmUnloadSystemImage(v22);
        goto LABEL_36;
      }
      v17 = v22;
      if ( (*(_DWORD *)(v22 + 196) & 0x20) != 0 )
      {
        if ( *(_QWORD *)(v22 + 280) != a1 )
        {
          v15 = -1073741791;
          goto LABEL_36;
        }
        if ( !*(_QWORD *)(v22 + 112) )
        {
          v15 = -1073740758;
          goto LABEL_36;
        }
LABEL_27:
        v19 = MiSectionControlArea(*(_QWORD *)(v17 + 112));
        v15 = MiApplyDriverHotPatch(v20, a1, v19, v14);
        v21 = v8;
        if ( v15 >= 0 )
        {
          if ( (MiFlags & 0x40000) != 0 )
            *(_DWORD *)(v22 + 104) |= 0x2100u;
          v8 = 0;
        }
        if ( !v21 )
          goto LABEL_34;
        goto LABEL_32;
      }
    }
  }
LABEL_36:
  if ( v7 )
  {
    MiDetachSessionGlobal((__int64)(&xmmword_140C69958 + 1));
    MiDereferenceSessionGlobal(v7);
    KiUnstackDetachProcess(&v29);
  }
  return (unsigned int)v15;
}
