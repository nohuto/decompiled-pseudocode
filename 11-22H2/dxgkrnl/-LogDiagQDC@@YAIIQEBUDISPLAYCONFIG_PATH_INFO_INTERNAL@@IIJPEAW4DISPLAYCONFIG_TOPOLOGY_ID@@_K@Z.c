/*
 * XREFs of ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C017CB14
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C017D0D0 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002F24 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C017CDCC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall LogDiagQDC(
        unsigned int a1,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *const a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a6,
        unsigned __int64 a7)
{
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rdx
  __int64 v17; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v19; // ebx
  unsigned int v21; // eax
  __int64 *v22; // rcx

  v10 = a1;
  if ( (a3 & 7) == 1 )
  {
    v21 = 0;
    if ( a1 )
    {
      v22 = (__int64 *)a2;
      do
      {
        if ( *v22 >= 0 )
          break;
        ++v21;
        v22 += 27;
      }
      while ( v21 < v10 );
    }
    v10 = v21;
  }
  v11 = 200 * v10 + 88;
  v12 = operator new[](v11, 0x43434451u, 256LL);
  v13 = v12;
  if ( v12 )
  {
    *(_DWORD *)(v12 + 40) = 0;
    *(_QWORD *)(v12 + 32) = 0LL;
    *(_DWORD *)v12 = 48;
    *(_DWORD *)(v12 + 4) = v11;
    *(_OWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_DWORD *)(v12 + 56) = 0;
    *(_DWORD *)(v12 + 52) = v10;
    *(_DWORD *)(v12 + 60) = a5;
    *(_DWORD *)(v12 + 64) = a4 | a3;
    if ( a6 )
      *(_DWORD *)(v12 + 68) = *(_DWORD *)a6;
    *(_DWORD *)(v12 + 72) = 200;
    v14 = (a6 != 0LL ? 4 : 0) | (a2 == 0LL) | 2u;
    *(_QWORD *)(v12 + 80) = a7;
    *(_DWORD *)(v12 + 48) = v14;
    if ( a2 && v10 )
    {
      v14 = v12 + 104;
      v15 = v10;
      v16 = (_QWORD *)((char *)a2 + 16);
      do
      {
        *(_QWORD *)(v14 - 16) = *(v16 - 2);
        *(_QWORD *)(v14 - 8) = *(v16 - 1);
        v17 = *v16;
        v16 += 27;
        *(_QWORD *)v14 = v17;
        *(_DWORD *)(v14 + 8) = *((_DWORD *)v16 - 52);
        *(_DWORD *)(v14 + 12) = *((_DWORD *)v16 - 51);
        *(_OWORD *)(v14 + 16) = *(_OWORD *)(v16 - 25);
        *(_OWORD *)(v14 + 32) = *(_OWORD *)(v16 - 23);
        *(_OWORD *)(v14 + 48) = *(_OWORD *)(v16 - 21);
        *(_DWORD *)(v14 + 64) = *((_DWORD *)v16 - 38);
        *(_DWORD *)(v14 + 68) = *((_DWORD *)v16 - 37);
        *(_QWORD *)(v14 + 72) = *(v16 - 18);
        *(_DWORD *)(v14 + 80) = *((_DWORD *)v16 - 34);
        *(_BYTE *)(v14 + 84) = *((_BYTE *)v16 - 132);
        *(_BYTE *)(v14 + 85) = *((_BYTE *)v16 - 131);
        *(_DWORD *)(v14 + 88) = *((_DWORD *)v16 - 32);
        *(_DWORD *)(v14 + 92) = *((_DWORD *)v16 - 31);
        *(_DWORD *)(v14 + 96) = *((_DWORD *)v16 - 30);
        *(_QWORD *)(v14 + 100) = *(_QWORD *)((char *)v16 - 116);
        *(_QWORD *)(v14 + 108) = *(_QWORD *)((char *)v16 - 108);
        *(_QWORD *)(v14 + 116) = *(_QWORD *)((char *)v16 - 100);
        *(_OWORD *)(v14 + 124) = *(_OWORD *)((char *)v16 - 92);
        *(_DWORD *)(v14 + 140) = *((_DWORD *)v16 - 19);
        *(_DWORD *)(v14 + 144) = *((_DWORD *)v16 - 18);
        *(_DWORD *)(v14 + 148) = *((_DWORD *)v16 - 17);
        *(_QWORD *)(v14 + 152) = *(v16 - 8);
        *(_QWORD *)(v14 + 160) = *(v16 - 7);
        *(_DWORD *)(v14 + 168) = *((_DWORD *)v16 - 12);
        *(_QWORD *)(v14 + 172) = *(_QWORD *)((char *)v16 - 36);
        *(_DWORD *)(v14 + 180) = *((_DWORD *)v16 - 5);
        v14 += 200LL;
        --v15;
      }
      while ( v15 );
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v13, CurrentProcessSessionId);
    v19 = *(_DWORD *)(v13 + 40);
    operator delete((void *)v13);
  }
  else
  {
    WdLogSingleEntry1(6LL, 200 * v10 + 88);
    v19 = -1;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Unable to allocate QDC diagnostics packet (SizeOfQDCPacket = 0x%I64x)",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    DxgkLogCodePointPacket(0xAu, a3, a5, 0, 0LL);
  }
  return v19;
}
