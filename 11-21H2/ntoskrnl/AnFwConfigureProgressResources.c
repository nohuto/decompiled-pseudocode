/*
 * XREFs of AnFwConfigureProgressResources @ 0x140AAB930
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AAD490 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     BgpTxtRegionSize @ 0x1403A7A98 (BgpTxtRegionSize.c)
 *     BgpGxRectangleSize @ 0x1403A7AF8 (BgpGxRectangleSize.c)
 *     BgpGetBitsPerPixel @ 0x1403A8368 (BgpGetBitsPerPixel.c)
 *     BgpFoGetFontHandle @ 0x140AABE98 (BgpFoGetFontHandle.c)
 *     BgpTxtCreateRegion @ 0x140AAC868 (BgpTxtCreateRegion.c)
 */

__int64 __fastcall AnFwConfigureProgressResources(int *a1)
{
  int BitsPerPixel; // eax
  _DWORD v4[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]
  __int64 v8; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = 0LL;
  KeInitializeEvent(&stru_140D009C0, NotificationEvent, 1u);
  if ( !a1 || (a1[6] & 1) == 0 )
    return 0LL;
  if ( dword_140C0E11C == 1 )
  {
    word_140C0C674 = 0;
    word_140C0C678 = -7936;
    word_140C0C67C = -7818;
    word_140C09770 = -7937;
  }
  if ( (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  v4[0] = HIDWORD(qword_140C0E110);
  v4[1] = dword_140C0E118;
  v6 = a1[5];
  v7 = 1;
  if ( (int)BgpTxtCreateRegion((_DWORD)a1, (int)a1 + 8, (unsigned int)v4, (int)a1 + 28, (__int64)&v8, 10) < 0 )
    return 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  dword_140C0DFB4 = ((BgpGxRectangleSize(a1[3], a1[2], BitsPerPixel) + 15) & 0xFFFFFFF0) + 128;
  dword_140C0DFB0 = dword_140C0DFB4 * ((unsigned __int16)word_140C0C67C - (unsigned __int16)word_140C0C678 + 1);
  dword_140C0DFB8 = BgpTxtRegionSize(v8);
  return v8;
}
