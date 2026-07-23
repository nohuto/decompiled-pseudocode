/*
 * XREFs of MiDriverLoadSucceeded @ 0x140695BC4
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A350D8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiMapAndApplyPatchInSession @ 0x140A3A024 (MiMapAndApplyPatchInSession.c)
 * Callees:
 *     DbgLoadImageSymbolsUnicode @ 0x14020A9BC (DbgLoadImageSymbolsUnicode.c)
 *     MiSessionUpdateImageCharges @ 0x14020AAF4 (MiSessionUpdateImageCharges.c)
 *     RtlStringCbPrintfW @ 0x140229624 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiSectionControlArea @ 0x14029F760 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x1402A22B4 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1402A23C0 (MiDereferenceControlAreaFile.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     _wcsnicmp @ 0x1403D9530 (_wcsnicmp.c)
 *     MiCacheImageSymbols @ 0x140695DFC (MiCacheImageSymbols.c)
 *     RtlGetNtSystemRoot @ 0x140695E40 (RtlGetNtSystemRoot.c)
 *     PsCallImageNotifyRoutines @ 0x1406AFC10 (PsCallImageNotifyRoutines.c)
 *     MiProtectSystemImage @ 0x14081F240 (MiProtectSystemImage.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     VfDriverLoadSucceeded @ 0x140ABDEB0 (VfDriverLoadSucceeded.c)
 */

__int64 __fastcall MiDriverLoadSucceeded(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 *v9; // rdi
  __int64 v10; // rcx
  char v11; // dl
  __int64 v12; // rbx
  wchar_t *Pool; // rbx
  __m128i v14; // xmm0
  PWSTR NtSystemRoot; // rax
  NTSTATUS v16; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+70h] [rbp-10h]

  v22 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( a6 == 1 )
  {
    *(_DWORD *)(a1 + 104) |= 0x41004000u;
    *(_DWORD *)(a1 + 196) |= 0x100u;
    v9 = (__int64 *)MiSectionControlArea(a2);
    v10 = *v9;
    BYTE8(v19) = 3;
    v11 = *(_BYTE *)(v10 + 15);
    DWORD2(v20) = 0;
    DWORD2(v21) = 0;
    *(_QWORD *)&v21 = *(unsigned int *)(a1 + 64);
    *(_QWORD *)&v20 = *(_QWORD *)(a1 + 48);
    DWORD2(v19) = DWORD2(v19) & 0xFFF80FFF | ((v11 & 0xF1 | ((v11 & 0xE) << 7) | 1) << 8);
    v12 = MiReferenceControlAreaFile((__int64)v9);
    PsCallImageNotifyRoutines(a3, 0LL, &v19, v12);
    MiDereferenceControlAreaFile((__int64)v9, v12);
    if ( MiCacheImageSymbols(*(_QWORD *)(a1 + 48)) )
    {
      DestinationString = 0LL;
      Pool = (wchar_t *)MiAllocatePool(256, 0x100uLL, 0x6E4C6D4Du);
      if ( Pool )
      {
        if ( *(_WORD *)a4 <= 0x16u || wcsnicmp(*(const wchar_t **)(a4 + 8), L"\\SystemRoot", 0xBuLL) )
        {
          v16 = RtlStringCbPrintfW(Pool, 0x100uLL, L"%wZ", a5);
        }
        else
        {
          v14 = *(__m128i *)a4;
          *(_QWORD *)&DestinationString.Length = *(_QWORD *)a4;
          DestinationString.Buffer = (wchar_t *)(_mm_srli_si128(v14, 8).m128i_u64[0] + 22);
          DestinationString.Length -= 22;
          NtSystemRoot = RtlGetNtSystemRoot();
          v16 = RtlStringCbPrintfW(Pool, 0x100uLL, L"%ws%wZ", NtSystemRoot + 2, &DestinationString);
        }
        if ( v16 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, Pool);
          if ( (unsigned int)DbgLoadImageSymbolsUnicode(&DestinationString, *(_QWORD *)(a1 + 48)) == 1 )
            *(_DWORD *)(a1 + 104) |= 0x100000u;
        }
        ExFreePoolWithTag(Pool, 0);
      }
    }
  }
  if ( !*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) || (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    MiProtectSystemImage(a1);
  if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
    MiSessionUpdateImageCharges(a1);
  return VfDriverLoadSucceeded(a1);
}
