/*
 * XREFs of CreateFontFromUserProfile @ 0x1C0078200
 * Callers:
 *     UserSetFont @ 0x1C0078184 (UserSetFont.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C7A54 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C002E520 (GreExtGetObjectW.c)
 *     GreMarkDeletableFont @ 0x1C0076A08 (GreMarkDeletableFont.c)
 *     GreSetLFONTOwner @ 0x1C007813C (GreSetLFONTOwner.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0078C74 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     GreCreateFontIndirectW @ 0x1C007B6E8 (GreCreateFontIndirectW.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

struct HLFONT__ *__fastcall CreateFontFromUserProfile(struct _UNICODE_STRING *a1, _DWORD *a2, unsigned int a3)
{
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  struct HLFONT__ *FontIndirectW; // rbx
  __int64 v12; // r8
  _OWORD v14[5]; // [rsp+20h] [rbp-89h] BYREF
  __int64 v15; // [rsp+70h] [rbp-39h]
  int v16; // [rsp+78h] [rbp-31h]
  struct tagLOGFONTW v17; // [rsp+80h] [rbp-29h] BYREF

  memset_0(v14, 0, 0x5CuLL);
  if ( !a2 )
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v17, a1, a3);
    a2 = v14;
    v7 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v14[0] = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    v8 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v14[1] = v7;
    v9 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v14[2] = v8;
    v10 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v14[3] = v9;
    *(_QWORD *)&v9 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    LODWORD(LogFontFromUserProfile) = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v14[4] = v10;
    v15 = v9;
    v16 = (int)LogFontFromUserProfile;
  }
  FontIndirectW = (struct HLFONT__ *)GreCreateFontIndirectW(a2, 128LL);
  if ( FontIndirectW )
  {
    memset_0(&v17, 0, sizeof(v17));
    if ( (unsigned int)GreExtGetObjectW((HBRUSH)FontIndirectW, 92LL, (__int64)&v17) && v17.lfHeight == *a2 )
    {
      GreSetLFONTOwner((__int64)FontIndirectW, 0, v12);
    }
    else
    {
      GreMarkDeletableFont(FontIndirectW);
      GreDeleteObject(FontIndirectW);
      return 0LL;
    }
  }
  return FontIndirectW;
}
