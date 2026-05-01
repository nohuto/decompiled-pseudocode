/*
 * XREFs of AslpFileGetVersionBlock @ 0x18009BCBC
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x18009BC08 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1800534AE (memmove_0.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x180099998 (AslFileMappingEnsure.c)
 *     RtlFileMapFree @ 0x18009A0A8 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x18009A204 (RtlFileMapMapView.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  unsigned __int64 v10; // r13
  int v11; // eax
  ULONGLONG v12; // rax
  ULONGLONG v13; // rax
  __int64 v14; // rax
  int v15; // eax
  const wchar_t *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  int v19; // eax
  const char *v20; // r9
  int v21; // r8d
  unsigned __int16 *Heap; // rax
  unsigned __int16 *v23; // rbx
  __int64 v25; // [rsp+20h] [rbp-228h]
  __int64 v26; // [rsp+28h] [rbp-220h]
  __int64 v27; // [rsp+28h] [rbp-220h]
  SIZE_T Size; // [rsp+48h] [rbp-200h] BYREF
  void *Src; // [rsp+50h] [rbp-1F8h] BYREF
  PVOID P; // [rsp+58h] [rbp-1F0h]
  unsigned __int64 v31; // [rsp+68h] [rbp-1E0h]
  _QWORD *v32; // [rsp+70h] [rbp-1D8h]
  unsigned __int64 v33; // [rsp+78h] [rbp-1D0h]
  unsigned __int64 v34; // [rsp+80h] [rbp-1C8h]
  _QWORD *v35; // [rsp+88h] [rbp-1C0h]
  __int64 v36; // [rsp+90h] [rbp-1B8h]
  __int128 v37; // [rsp+98h] [rbp-1B0h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-1A0h]
  __int128 v39; // [rsp+B8h] [rbp-190h]
  PVOID ProcessHeap; // [rsp+C8h] [rbp-180h]
  _OSVERSIONINFOEXW VersionInfo; // [rsp+E0h] [rbp-168h] BYREF
  _QWORD v42[3]; // [rsp+200h] [rbp-48h] BYREF

  v32 = a2;
  v35 = a1;
  v36 = a3;
  Src = 0LL;
  P = 0LL;
  Size = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v6 = *(_QWORD *)(a3 + 64);
  if ( v6 )
  {
    v7 = 0LL;
    if ( *(_WORD *)(v6 + 2) >= 0x34u )
      v7 = v6 + 40;
    *a2 = v7;
    *a1 = *(_QWORD *)(a3 + 64);
    v8 = 0;
    goto LABEL_53;
  }
  v9 = AslFileMappingEnsure(a3);
  v8 = v9;
  if ( v9 < 0 )
  {
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetVersionBlock",
      1391,
      (unsigned int)"AslFileMappingEnsure failed [%x]",
      v9);
    goto LABEL_53;
  }
  if ( *(_DWORD *)(a3 + 56) != 6 )
  {
    v8 = -1073741687;
    goto LABEL_53;
  }
  v42[0] = 16LL;
  v42[1] = 1LL;
  v42[2] = 0LL;
  v10 = *(_QWORD *)(a3 + 32);
  v33 = v10;
  v31 = *(_QWORD *)(a3 + 40);
  v34 = v31;
  v11 = LdrResSearchResource(v10, v42, 3LL, *(_BYTE *)(a3 + 51) == 0 ? 0x200 : 0, &Src, &Size, 0LL, 0LL);
  v8 = v11;
  if ( v11 >= 0 )
  {
    v17 = v31;
  }
  else
  {
    if ( (unsigned int)(v11 + 1073741687) <= 2 )
      goto LABEL_53;
    if ( v11 != -1073741701 || *(_BYTE *)(a3 + 51) || *(_DWORD *)(a3 + 76) )
    {
      LODWORD(v26) = v11;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetVersionBlock",
        1516,
        (unsigned int)"LdrResFindResource failed %ls [%x]",
        *(_QWORD *)a3,
        v26);
      goto LABEL_53;
    }
    memset_0(&VersionInfo, 0, sizeof(VersionInfo));
    VersionInfo.dwOSVersionInfoSize = 284;
    VersionInfo.dwMajorVersion = 6;
    VersionInfo.dwMinorVersion = 2;
    v12 = VerSetConditionMask(0LL, 2u, 3u);
    v13 = VerSetConditionMask(v12, 1u, 3u);
    if ( RtlVerifyVersionInfo(&VersionInfo, 3u, v13) < 0 )
    {
LABEL_15:
      v8 = -1073741687;
      goto LABEL_53;
    }
    v14 = *(_QWORD *)(a3 + 8);
    BYTE8(v39) = 0;
    *(_QWORD *)&v37 = v14;
    v15 = RtlFileMapMapView((__int64)&v37, 1);
    v8 = v15;
    if ( v15 < 0 )
    {
      LODWORD(v25) = v15;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetVersionBlock",
        1483,
        (unsigned int)"RtlFileMapMapView failed [%x]",
        v25);
      goto LABEL_53;
    }
    AslLogCallPrintf(
      3LL,
      (unsigned int)"AslpFileGetVersionBlock",
      1492,
      (unsigned int)"Re-mapped file as image to get version block: %ls",
      *(_QWORD *)a3);
    v10 = *((_QWORD *)&v38 + 1);
    v8 = LdrResSearchResource(*((_QWORD *)&v38 + 1), v42, 3LL, 0LL, &Src, &Size, 0LL, 0LL);
    v16 = L"Found";
    if ( v8 < 0 )
      v16 = L"Did not find";
    LODWORD(v27) = v8;
    AslLogCallPrintf(
      2LL,
      (unsigned int)"AslpFileGetVersionBlock",
      1505,
      (unsigned int)"%ls version block after re-mapping as image [%x]",
      v16,
      v27);
    if ( v8 < 0 )
    {
      LODWORD(v25) = v8;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetVersionBlock",
        1508,
        (unsigned int)"LdrResFindResource failed [%x]",
        v25);
      goto LABEL_53;
    }
    v33 = v10;
    v17 = v39;
    v34 = v39;
  }
  if ( !Src )
  {
    LODWORD(v25) = v8;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetVersionBlock",
      1523,
      (unsigned int)"LdrResFindResource returned null version block with status: [%x]",
      v25);
    goto LABEL_15;
  }
  v18 = (unsigned __int64)Src + Size;
  if ( (char *)Src + Size < Src )
  {
    v18 = -1LL;
    v19 = -1073741675;
  }
  else
  {
    v19 = 0;
  }
  v31 = v18;
  if ( v19 < 0 )
  {
    v20 = "Version block has bad size";
    v21 = 1537;
    goto LABEL_51;
  }
  if ( (unsigned __int64)Src < v10 || v18 > v17 + v10 )
  {
    v21 = 1549;
    goto LABEL_50;
  }
  if ( !*(_BYTE *)(a3 + 51) && !*((_QWORD *)&v37 + 1) && v18 > v10 + *(_QWORD *)(a3 + 24) )
  {
    v21 = 1567;
LABEL_50:
    v20 = "Version block out of range";
LABEL_51:
    v8 = -1073741687;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetVersionBlock", v21, (_DWORD)v20);
    goto LABEL_53;
  }
  if ( Size < 0x26 || _wcsicmp((const wchar_t *)Src + 3, L"VS_VERSION_INFO") )
  {
    v8 = -1073741595;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetVersionBlock", 1578, (unsigned int)"Version block invalid");
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = (unsigned __int16 *)RtlAllocateHeap(ProcessHeap, 8u, Size);
    v23 = Heap;
    P = Heap;
    if ( Heap )
    {
      memmove_0(Heap, Src, Size);
      if ( Size < *v23 )
        *v23 = Size;
      *(_QWORD *)(a3 + 64) = v23;
      P = 0LL;
      if ( v23[1] >= 0x34u )
        *v32 = v23 + 20;
      else
        *v32 = 0LL;
      *v35 = *(_QWORD *)(a3 + 64);
      v8 = 0;
    }
    else
    {
      v8 = -1073741801;
      AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetVersionBlock", 1589, (unsigned int)"Out of memory");
    }
  }
LABEL_53:
  RtlFileMapFree((__int64)&v37);
  return (unsigned int)v8;
}
