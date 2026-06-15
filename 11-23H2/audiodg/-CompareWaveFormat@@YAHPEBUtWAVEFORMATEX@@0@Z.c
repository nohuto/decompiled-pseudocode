/*
 * XREFs of ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14001990C
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140007820 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140013CE0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400168AC (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x14002A5C3 (memcmp_0.c)
 */

__int64 __fastcall CompareWaveFormat(const struct tWAVEFORMATEX *a1, const struct tWAVEFORMATEX *a2)
{
  unsigned int v2; // ebx
  const struct tWAVEFORMATEX *v3; // r8
  const struct tWAVEFORMATEX *v4; // r9
  __int16 v5; // r11
  int v6; // r14d
  __int16 v7; // r10
  __int16 v8; // r15
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  int v11; // r14d
  __int16 v12; // r12
  int v13; // esi
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  int v16; // esi
  __int16 v17; // r8
  int v18; // edx
  __int16 v19; // r9
  __int16 v20; // r10
  WORD nChannels; // cx
  __int128 v23; // xmm0
  int wFormatTag; // eax
  WORD v25; // cx
  WORD wBitsPerSample; // dx
  __int128 v27; // xmm0
  int v28; // eax
  __int128 Buf2; // [rsp+28h] [rbp-39h] BYREF
  _BYTE v30[24]; // [rsp+38h] [rbp-29h] BYREF
  __int128 Buf1; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v32[24]; // [rsp+60h] [rbp-1h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = a1;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
  {
    v5 = -2;
    v6 = 0;
    if ( a1->wFormatTag == 0xFFFE )
    {
      v7 = 22;
      if ( a1->cbSize == 22
        || IsEqualGUID(
             (const struct _GUID *)((char *)&a1[1].nSamplesPerSec + 2),
             &GUID_00000003_0000_0010_8000_00aa00389b71)
        || IsEqualGUID(
             (const struct _GUID *)((char *)&v4[1].nSamplesPerSec + 2),
             &GUID_00000001_0000_0010_8000_00aa00389b71) )
      {
        v8 = v7;
        v6 = 1;
        v9 = *(_OWORD *)&v4->cbSize;
        Buf1 = *(_OWORD *)&v4->wFormatTag;
        v10 = *(_QWORD *)&v4[1].wBitsPerSample;
        *(_OWORD *)v32 = v9;
        *(_WORD *)v32 = v7;
        *(_QWORD *)&v32[16] = v10;
      }
      else
      {
        v8 = *(_WORD *)v32;
      }
      if ( !v6 )
        return v2;
      v11 = *(_DWORD *)&v32[4];
      v12 = Buf1;
    }
    else
    {
      if ( a1->cbSize && ((a1->wFormatTag - 1) & 0xFFFD) != 0 )
        return v2;
      nChannels = a1->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u || ((v4->wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v23 = *(_OWORD *)&v4->wFormatTag;
      wFormatTag = v4->wFormatTag;
      *(_WORD *)&v32[2] = v4->wBitsPerSample;
      v7 = 22;
      v12 = -2;
      *(_WORD *)v32 = 22;
      Buf1 = v23;
      v11 = 4 - (nChannels != 1);
      LOWORD(Buf1) = -2;
      *(GUID *)&v32[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      v8 = 22;
      *(_DWORD *)&v32[8] = wFormatTag;
    }
    v13 = 0;
    if ( v3->wFormatTag != v5 )
    {
      if ( v3->cbSize && ((v3->wFormatTag - 1) & 0xFFFD) != 0 )
        return v2;
      v25 = v3->nChannels;
      if ( (unsigned __int16)(v25 - 1) > 1u )
        return v2;
      wBitsPerSample = v3->wBitsPerSample;
      if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v27 = *(_OWORD *)&v3->wFormatTag;
      v28 = v3->wFormatTag;
      *(_WORD *)v30 = v7;
      Buf2 = v27;
      LOWORD(Buf2) = v5;
      *(GUID *)&v30[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      v16 = 4 - (v25 != 1);
      *(_WORD *)&v30[2] = wBitsPerSample;
      *(_DWORD *)&v30[8] = v28;
      goto LABEL_13;
    }
    if ( v3->cbSize == v7
      || IsEqualGUID(
           (const struct _GUID *)((char *)&v3[1].nSamplesPerSec + 2),
           &GUID_00000003_0000_0010_8000_00aa00389b71)
      || IsEqualGUID(
           (const struct _GUID *)((char *)&v3[1].nSamplesPerSec + 2),
           &GUID_00000001_0000_0010_8000_00aa00389b71) )
    {
      v13 = 1;
      v14 = *(_OWORD *)&v3->cbSize;
      Buf2 = *(_OWORD *)&v3->wFormatTag;
      v15 = *(_QWORD *)&v3[1].wBitsPerSample;
      *(_OWORD *)v30 = v14;
      *(_WORD *)v30 = v7;
      *(_QWORD *)&v30[16] = v15;
    }
    if ( v13 )
    {
      v16 = *(_DWORD *)&v30[4];
      v5 = Buf2;
LABEL_13:
      if ( WORD1(Buf1) )
      {
        v17 = WORD1(Buf2);
      }
      else
      {
        v17 = 0;
        WORD1(Buf2) = 0;
        DWORD2(Buf2) = 0;
        WORD6(Buf2) = 0;
      }
      if ( DWORD1(Buf1) )
      {
        v18 = DWORD1(Buf2);
      }
      else
      {
        v18 = 0;
        *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
      }
      if ( HIWORD(Buf1) )
      {
        v19 = HIWORD(Buf2);
      }
      else
      {
        v19 = 0;
        HIDWORD(Buf2) = 0;
      }
      *(_DWORD *)&v30[4] = v11 != 0 ? v16 : 0;
      if ( !v12 )
      {
        v5 = 0;
        LOWORD(Buf2) = 0;
      }
      if ( !v17 )
      {
        WORD1(Buf1) = 0;
        DWORD2(Buf1) = 0;
        WORD6(Buf1) = 0;
      }
      if ( !v18 )
        *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
      if ( !v19 )
        HIDWORD(Buf1) = 0;
      *(_DWORD *)&v32[4] = (v11 != 0 ? v16 : 0) != 0 ? v11 : 0;
      if ( !v5 )
        LOWORD(Buf1) = 0;
      if ( IsEqualGUID((const struct _GUID *)&v32[8], (const struct _GUID *)&v30[8])
        && v20 == v8
        && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
      {
        return 1;
      }
    }
  }
  return v2;
}
