/*
 * XREFs of ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x140018938
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140013CE0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400168AC (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

void __fastcall ConvertPCMWfxToIEEEFloat(struct tWAVEFORMATEX *a1)
{
  struct tWAVEFORMATEX *v1; // r8
  __int16 v2; // r11
  GUID *v3; // r9
  __int16 v4; // r10
  struct tWAVEFORMATEX *v5; // rax
  WORD v6; // ax
  int v7; // ecx

  if ( a1 )
  {
    v1 = a1;
    v2 = 32;
    if ( a1->wFormatTag == 1 )
    {
      v3 = (GUID *)((char *)&a1[1].nSamplesPerSec + 2);
    }
    else
    {
      if ( a1->wFormatTag != 0xFFFE
        || !(unsigned int)IsEqualGUID(
                            &GUID_00000001_0000_0010_8000_00aa00389b71,
                            (const struct _GUID *)((char *)&a1[1].nSamplesPerSec + 2)) )
      {
        return;
      }
      if ( v4 == v1->wFormatTag )
      {
        v5 = v1 + 1;
        if ( (v1[1].wFormatTag & 7) != 0 )
          return;
        goto LABEL_9;
      }
    }
    v5 = v1 + 1;
    if ( v1->wFormatTag == 1 )
    {
      v1->wFormatTag = 3;
      goto LABEL_10;
    }
LABEL_9:
    v5->wFormatTag = v2;
    *v3 = GUID_00000003_0000_0010_8000_00aa00389b71;
LABEL_10:
    v6 = 4 * v1->nChannels;
    v1->nBlockAlign = v6;
    v7 = v1->nSamplesPerSec * v6;
    v1->wBitsPerSample = v2;
    v1->nAvgBytesPerSec = v7;
  }
}
