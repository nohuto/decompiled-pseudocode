/*
 * XREFs of RtlFindHotPatchInformation @ 0x1409C0580
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140971068 (MiApplyDriverHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x140972818 (MiCaptureHotPatchInfo.c)
 *     MiMapAndApplyPatchInSession @ 0x140975FF0 (MiMapAndApplyPatchInSession.c)
 *     MiOpenHotPatchFile @ 0x14097638C (MiOpenHotPatchFile.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     RtlFindHotPatchBase @ 0x1409C0550 (RtlFindHotPatchBase.c)
 */

__int64 __fastcall RtlFindHotPatchInformation(unsigned __int64 a1)
{
  _DWORD *v2; // rbp
  _DWORD *v3; // rdi
  __int64 v4; // r14
  int v5; // edx
  __int16 v6; // bx
  _DWORD *v7; // rax
  _DWORD *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  char *v12; // rcx
  __int64 v13; // r10
  unsigned int v14; // r8d
  unsigned int *v15; // r9
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned int v19; // r10d
  __int64 v20; // r9
  unsigned int v21; // [rsp+48h] [rbp+10h] BYREF
  __int64 v22; // [rsp+50h] [rbp+18h] BYREF

  v21 = 0;
  v22 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v22);
  v4 = v22;
  LOBYTE(v5) = 1;
  v6 = *(_WORD *)(v22 + 4);
  v7 = (_DWORD *)RtlImageDirectoryEntryToData(a1, v5, 10, (int)&v21);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  if ( v6 == -31132 || v6 == -21916 )
  {
    v9 = v21;
    if ( v21 <= 4 )
      return 0LL;
    v3 = v7;
    if ( v21 != *v7 || v21 < 0xF4 )
      return 0LL;
  }
  else
  {
    if ( v6 != 332 )
      return 0LL;
    v9 = v21;
    if ( v21 <= 4 )
      return 0LL;
    v10 = *v7;
    v2 = v8;
    if ( v21 == 64 )
      v9 = v10;
    if ( (_DWORD)v9 != v10 || (unsigned int)v9 < 0x98 )
      return 0LL;
  }
  v12 = (char *)v8 + v9;
  if ( v12 < (char *)v8 )
    return 0LL;
  v13 = *(unsigned int *)(v4 + 80);
  if ( (unsigned __int64)v8 >= a1 + v13 || (unsigned __int64)v12 > a1 + v13 )
    return 0LL;
  v14 = v6 == -31132 || v6 == -21916 ? v3[60] : v2[37];
  if ( v14 >= 0xFFFFFFF8 || v14 == 0 || v14 + 8 > (unsigned int)v13 )
    return 0LL;
  v15 = (unsigned int *)(a1 + v14);
  switch ( *v15 )
  {
    case 1u:
      v16 = 20;
      break;
    case 2u:
      v16 = 24;
      break;
    case 3u:
      v16 = 28;
      break;
    default:
      return 0LL;
  }
  v17 = v15[1];
  if ( v17 < v16 )
    return 0LL;
  if ( !v15[2] )
    return 0LL;
  if ( v17 + v14 <= v17 )
    return 0LL;
  if ( v17 + v14 > (unsigned int)v13 )
    return 0LL;
  v18 = v15[4];
  if ( v18 > 0x3FFFFFF9 )
    return 0LL;
  v19 = 4 * v18 + v15[3];
  if ( v19 <= 4 * v18 || v19 > v17 || v18 != 1 || !RtlFindHotPatchBase(v15) )
    return 0LL;
  return v20;
}
