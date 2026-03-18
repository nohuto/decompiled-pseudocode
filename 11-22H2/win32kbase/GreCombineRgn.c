/*
 * XREFs of GreCombineRgn @ 0x1C005C1D0
 * Callers:
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C004C660 (UserSetDCVisRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0059C2C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 *     NtGdiCombineRgn @ 0x1C005C1B0 (NtGdiCombineRgn.c)
 *     UserValidateCopyRgn @ 0x1C005C980 (UserValidateCopyRgn.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0060D08 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     EngCombineRgn @ 0x1C008A1B0 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C016A8B0 (EngCopyRgn.c)
 *     EngIntersectRgn @ 0x1C016AA50 (EngIntersectRgn.c)
 *     EngSubtractRgn @ 0x1C016ABC0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C016AC60 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C016AD00 (EngXorRgn.c)
 * Callees:
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003C598 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C003C6B0 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003D9E0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C003E4A0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C0044530 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C007D860 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007D990 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C007DB80 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  struct OBJECT *v8; // rax
  unsigned int v9; // ebx
  bool v10; // zf
  RGNOBJAPI *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  struct OBJECT *v14; // rax
  struct OBJECT *v15; // rax
  unsigned __int64 v17; // [rsp+28h] [rbp-79h] BYREF
  __int64 v18; // [rsp+30h] [rbp-71h] BYREF
  struct OBJECT *v19[7]; // [rsp+38h] [rbp-69h] BYREF
  struct OBJECT *v20[7]; // [rsp+70h] [rbp-31h] BYREF
  _QWORD v21[8]; // [rsp+A8h] [rbp+7h] BYREF

  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 == 5 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a1, 0, 1);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a2, a4 - 4, 0);
      v8 = v19[0];
      v9 = 0;
      if ( v19[0] )
      {
        if ( !v20[0] )
        {
LABEL_9:
          EngSetLastError(6u);
          goto LABEL_10;
        }
        v10 = (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v19, (struct RGNOBJ *)v20) == 0;
        v8 = v19[0];
        if ( !v10 )
        {
          v17 = ((unsigned __int64)v19[0] + 24) & -(__int64)(v19[0] != 0LL);
          v9 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v17);
LABEL_10:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
          v11 = (RGNOBJAPI *)v19;
LABEL_31:
          RGNOBJAPI::~RGNOBJAPI(v11);
          return v9;
        }
      }
      if ( v20[0] && v8 )
        goto LABEL_10;
      goto LABEL_9;
    }
    if ( a1 != a2 && a1 != a3 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a2, 1, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a3, 1, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a1, 0, 1);
      v12 = v21[0];
      v9 = 0;
      if ( v21[0] )
      {
        if ( v20[0] && v19[0] )
        {
          if ( (unsigned int)RGNOBJAPI::iCombine((RGNOBJAPI *)v19, (struct RGNOBJ *)v21, (struct RGNOBJ *)v20, a4) )
          {
            v17 = ((unsigned __int64)v19[0] + 24) & -(__int64)(v19[0] != 0LL);
            v9 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v17);
LABEL_23:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
LABEL_30:
            v11 = (RGNOBJAPI *)v21;
            goto LABEL_31;
          }
          v12 = v21[0];
        }
        if ( v12 && v20[0] && v19[0] )
          goto LABEL_23;
      }
      EngSetLastError(6u);
      goto LABEL_23;
    }
    if ( a2 == a3 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a1, 0, 1);
      v13 = v21[0];
      v9 = 0;
      if ( v21[0] )
      {
        if ( (unsigned int)(a4 - 3) <= 1 )
        {
          RGNOBJ::vSet((RGNOBJ *)v21);
          v13 = v21[0];
        }
        v17 = (v13 + 24) & -(__int64)(v13 != 0);
        v9 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v17);
      }
      else
      {
        EngSetLastError(6u);
      }
      goto LABEL_30;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
    v9 = 0;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a2, 0, a1 == a2);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a3, 0, a1 == a3);
    if ( v17 )
    {
      v14 = v19[0];
      if ( !v19[0] )
      {
LABEL_45:
        EngSetLastError(6u);
        goto LABEL_46;
      }
      if ( !v20[0] )
      {
LABEL_43:
        if ( v14 && v20[0] )
          goto LABEL_46;
        goto LABEL_45;
      }
      if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v17, (struct RGNOBJ *)v19, (struct RGNOBJ *)v20, a4) )
      {
        if ( a1 == a2 )
        {
          if ( !(unsigned int)RGNOBJAPI::bSwap(v19, (struct RGNOBJ *)&v17) )
          {
LABEL_46:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((PVOID *)&v17);
            return v9;
          }
          v15 = v19[0];
        }
        else
        {
          if ( !(unsigned int)RGNOBJAPI::bSwap(v20, (struct RGNOBJ *)&v17) )
            goto LABEL_46;
          v15 = v20[0];
        }
        v18 = ((unsigned __int64)v15 + 24) & -(__int64)(v15 != 0LL);
        v9 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v18);
        goto LABEL_46;
      }
    }
    v14 = v19[0];
    goto LABEL_43;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
