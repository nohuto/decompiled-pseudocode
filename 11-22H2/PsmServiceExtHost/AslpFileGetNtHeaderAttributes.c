/*
 * XREFs of AslpFileGetNtHeaderAttributes @ 0x18009BCBC
 * Callers:
 *     AslpFileGetHeaderAttributesPE @ 0x18009B948 (AslpFileGetHeaderAttributesPE.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x18009BBC0 (AslpFileGetImageNtHeader.c)
 */

__int64 __fastcall AslpFileGetNtHeaderAttributes(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7,
        _WORD *a8,
        __int64 a9)
{
  int ImageNtHeader; // eax
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int16 v16; // dx
  int v18; // [rsp+20h] [rbp-38h]
  _QWORD v19[4]; // [rsp+38h] [rbp-20h] BYREF

  ImageNtHeader = AslpFileGetImageNtHeader(v19, a9);
  v14 = ImageNtHeader;
  if ( ImageNtHeader >= 0 )
  {
    v15 = v19[0];
    *a2 = (unsigned __int8)*(_WORD *)(v19[0] + 70LL) + ((unsigned __int8)*(_WORD *)(v19[0] + 68LL) << 16);
    *a3 = *(_DWORD *)(v15 + 8);
    v16 = *(_WORD *)(v15 + 24);
    *a7 = v16;
    *a5 = *(_WORD *)(v15 + 4);
    *a8 = *(_WORD *)(v15 + 22);
    if ( v16 == 267 || v16 == 523 )
    {
      *a1 = *(_DWORD *)(v15 + 88);
      *a4 = *(_DWORD *)(v15 + 80);
      *a6 = *(_WORD *)(v15 + 92);
      return 0;
    }
    else
    {
      *a1 = 0;
      *a4 = 0;
      *a6 = 0;
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    v18 = ImageNtHeader;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetNtHeaderAttributes",
      2803,
      (unsigned int)"AslpFileGetImageNtHeader failed [%x]",
      v18);
  }
  return v14;
}
