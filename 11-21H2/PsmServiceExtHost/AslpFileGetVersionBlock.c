/*
 * XREFs of AslpFileGetVersionBlock @ 0x1800A1620
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x1800A156C (AslpFileGetVersionAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memmove_0 @ 0x18005022E (memmove_0.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x18009F33C (AslFileMappingEnsure.c)
 *     RtlFileMapFree @ 0x18009FA64 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x18009FBC0 (RtlFileMapMapView.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  unsigned __int64 v9; // r13
  int v10; // eax
  ULONGLONG v11; // rax
  ULONGLONG v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  int v16; // eax
  unsigned __int16 *Heap; // rax
  unsigned __int16 *v18; // rbx
  SIZE_T Size; // [rsp+48h] [rbp-200h] BYREF
  void *Src; // [rsp+50h] [rbp-1F8h] BYREF
  PVOID P; // [rsp+58h] [rbp-1F0h]
  unsigned __int64 v23; // [rsp+68h] [rbp-1E0h]
  _QWORD *v24; // [rsp+70h] [rbp-1D8h]
  unsigned __int64 v25; // [rsp+78h] [rbp-1D0h]
  unsigned __int64 v26; // [rsp+80h] [rbp-1C8h]
  _QWORD *v27; // [rsp+88h] [rbp-1C0h]
  __int64 v28; // [rsp+90h] [rbp-1B8h]
  __int128 v29; // [rsp+98h] [rbp-1B0h] BYREF
  __int128 v30; // [rsp+A8h] [rbp-1A0h]
  __int128 v31; // [rsp+B8h] [rbp-190h]
  PVOID ProcessHeap; // [rsp+C8h] [rbp-180h]
  _OSVERSIONINFOEXW VersionInfo; // [rsp+E0h] [rbp-168h] BYREF
  _QWORD v34[3]; // [rsp+200h] [rbp-48h] BYREF

  v24 = a2;
  v27 = a1;
  v28 = a3;
  Src = 0LL;
  P = 0LL;
  Size = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v6 = *(_QWORD *)(a3 + 64);
  if ( v6 )
  {
    v7 = 0LL;
    if ( *(_WORD *)(v6 + 2) >= 0x34u )
      v7 = v6 + 40;
    *a2 = v7;
    *a1 = *(_QWORD *)(a3 + 64);
    v8 = 0;
    goto LABEL_46;
  }
  v8 = AslFileMappingEnsure(a3);
  if ( v8 < 0 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_46;
  }
  if ( *(_DWORD *)(a3 + 56) != 6 )
  {
    v8 = -1073741687;
    goto LABEL_46;
  }
  v34[0] = 16LL;
  v34[1] = 1LL;
  v34[2] = 0LL;
  v9 = *(_QWORD *)(a3 + 32);
  v25 = v9;
  v23 = *(_QWORD *)(a3 + 40);
  v26 = v23;
  v10 = LdrResSearchResource(v9, v34, 3LL, *(_BYTE *)(a3 + 51) == 0 ? 0x200 : 0, &Src, &Size, 0LL, 0LL);
  v8 = v10;
  if ( v10 >= 0 )
  {
    v14 = v23;
  }
  else
  {
    if ( (unsigned int)(v10 + 1073741687) <= 2 )
      goto LABEL_46;
    if ( v10 != -1073741701 || *(_BYTE *)(a3 + 51) || *(_DWORD *)(a3 + 76) )
      goto LABEL_45;
    memset_0(&VersionInfo, 0, sizeof(VersionInfo));
    VersionInfo.dwOSVersionInfoSize = 284;
    VersionInfo.dwMajorVersion = 6;
    VersionInfo.dwMinorVersion = 2;
    v11 = VerSetConditionMask(0LL, 2u, 3u);
    v12 = VerSetConditionMask(v11, 1u, 3u);
    if ( RtlVerifyVersionInfo(&VersionInfo, 3u, v12) < 0 )
    {
LABEL_15:
      v8 = -1073741687;
      goto LABEL_46;
    }
    v13 = *(_QWORD *)(a3 + 8);
    BYTE8(v31) = 0;
    *(_QWORD *)&v29 = v13;
    v8 = RtlFileMapMapView((__int64)&v29, 1);
    if ( v8 < 0
      || (AslLogCallPrintf(3LL),
          v9 = *((_QWORD *)&v30 + 1),
          v8 = LdrResSearchResource(*((_QWORD *)&v30 + 1), v34, 3LL, 0LL, &Src, &Size, 0LL, 0LL),
          AslLogCallPrintf(2LL),
          v8 < 0) )
    {
LABEL_45:
      AslLogCallPrintf(1LL);
      goto LABEL_46;
    }
    v25 = v9;
    v14 = v31;
    v26 = v31;
  }
  if ( !Src )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_15;
  }
  v15 = (unsigned __int64)Src + Size;
  if ( (char *)Src + Size < Src )
  {
    v15 = -1LL;
    v16 = -1073741675;
  }
  else
  {
    v16 = 0;
  }
  v23 = v15;
  if ( v16 < 0
    || (unsigned __int64)Src < v9
    || v15 > v14 + v9
    || !*(_BYTE *)(a3 + 51) && !*((_QWORD *)&v29 + 1) && v15 > v9 + *(_QWORD *)(a3 + 24) )
  {
    v8 = -1073741687;
    goto LABEL_45;
  }
  if ( Size < 0x26 || _wcsicmp((const wchar_t *)Src + 3, L"VS_VERSION_INFO") )
  {
    v8 = -1073741595;
    goto LABEL_45;
  }
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (unsigned __int16 *)RtlAllocateHeap(ProcessHeap, 8u, Size);
  v18 = Heap;
  P = Heap;
  if ( !Heap )
  {
    v8 = -1073741801;
    goto LABEL_45;
  }
  memmove_0(Heap, Src, Size);
  if ( Size < *v18 )
    *v18 = Size;
  *(_QWORD *)(a3 + 64) = v18;
  P = 0LL;
  if ( v18[1] >= 0x34u )
    *v24 = v18 + 20;
  else
    *v24 = 0LL;
  *v27 = *(_QWORD *)(a3 + 64);
  v8 = 0;
LABEL_46:
  RtlFileMapFree((__int64)&v29);
  return (unsigned int)v8;
}
