/*
 * XREFs of UmfdLoadFontFileView @ 0x1C0010120
 * Callers:
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C0010028 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 * Callees:
 *     _lambda_3837b0e11e5c1550d1f290a74bcd7a94_::operator() @ 0x1C00103BC (_lambda_3837b0e11e5c1550d1f290a74bcd7a94_--operator().c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C0010458 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1HPEAH3PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C0010744 (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1HPEAH3PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTO.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C001F138 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?bIsPathInSystemFontsDir@@YAHPEBG@Z @ 0x1C010E344 (-bIsPathInSystemFontsDir@@YAHPEBG@Z.c)
 *     ?FNTCacheValidateFntFileInfo@@YA?AW4FntFileInfoValidationResult@@PEAPEAU_FONTFILEVIEW@@K@Z @ 0x1C0285BBC (-FNTCacheValidateFntFileInfo@@YA-AW4FntFileInfoValidationResult@@PEAPEAU_FONTFILEVIEW@@K@Z.c)
 *     SearchFntCacheNewLink @ 0x1C0285C74 (SearchFntCacheNewLink.c)
 */

__int64 __fastcall UmfdLoadFontFileView(
        unsigned __int16 *a1,
        unsigned int a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        char a5,
        char a6,
        struct tagDESIGNVECTOR *a7,
        unsigned int a8,
        __int64 *a9,
        _QWORD *a10,
        unsigned int *a11,
        int a12,
        int *a13)
{
  unsigned int v15; // r15d
  __int64 result; // rax
  unsigned int *v17; // rdi
  int v18; // esi
  int v19; // r13d
  unsigned int v20; // r8d
  unsigned int v21; // edx
  char v22; // bl
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdi
  unsigned int v27; // edi
  int v28; // r14d
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int j; // esi
  int IsPathInSystemFontsDir; // eax
  int v33; // edx
  __int16 v34; // r14
  __int64 v35; // r13
  struct _FONTFILEVIEW **v36; // r12
  unsigned int v37; // r8d
  int v38; // eax
  int v39; // edx
  int v40; // edx
  _QWORD *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r8
  _QWORD *v44; // rdx
  __int64 v45; // r9
  _QWORD *v46; // rax
  unsigned int v47; // [rsp+78h] [rbp-49h] BYREF
  int v48; // [rsp+7Ch] [rbp-45h] BYREF
  int v49; // [rsp+80h] [rbp-41h] BYREF
  struct PDEV *v50; // [rsp+88h] [rbp-39h] BYREF
  __int64 i; // [rsp+90h] [rbp-31h] BYREF
  _QWORD v52[12]; // [rsp+98h] [rbp-29h] BYREF
  struct _FONTFILEVIEW **v53; // [rsp+118h] [rbp+57h] BYREF
  unsigned int v54; // [rsp+120h] [rbp+5Fh] BYREF

  v54 = a4;
  v53 = a3;
  v15 = 0;
  result = UmfdHostLifeTimeManager::EnsureUmfdHost();
  *a9 = 0LL;
  *a10 = 0LL;
  if ( (_BYTE)result )
  {
    v17 = a11;
    v50 = 0LL;
    v47 = 0;
    v49 = 0;
    v48 = 0;
    result = LookUpFNTCacheTable(a2, a1, a11, a11 + 1, &v50, &v47, a12, &v48, &v49, v53, v54, a7, a8);
    v18 = result;
    v19 = v48;
    if ( a13 )
      *a13 = v48;
    if ( !v49 )
    {
      v20 = 0;
      v21 = v54;
      v22 = 1;
      for ( i = qword_1C033BDF8; v20 < v54; v21 = v54 )
      {
        v23 = v20++;
        *((_DWORD *)v53[v23] + 16) = 0;
      }
      UmfdInsertFontFileViewForLookup(v53, v21);
      v52[0] = &i;
      v52[1] = &a7;
      v52[2] = &v54;
      v52[3] = &v53;
      v52[4] = &a5;
      v52[5] = &a6;
      if ( v18 )
      {
        if ( v47 != 1 && a1 )
          LOBYTE(v15) = 1;
        v27 = *v17;
        v28 = 0;
        if ( v19 && (_BYTE)v15 )
        {
          v38 = FNTCacheValidateFntFileInfo(v53, v54);
          v28 = v38;
          if ( v38 == 1 )
          {
            v27 = 0;
          }
          else if ( v38 == 2 )
          {
            goto LABEL_9;
          }
        }
        LOBYTE(v24) = v15;
        v29 = lambda_3837b0e11e5c1550d1f290a74bcd7a94_::operator()(v52, v24, v27);
        v30 = 0LL;
        v26 = v29;
        if ( v29 )
        {
          for ( j = 0; j < v54; ++j )
          {
            *((_DWORD *)v53[j] + 10) |= 8u;
            if ( !(_BYTE)v15 )
            {
              IsPathInSystemFontsDir = bIsPathInSystemFontsDir(*((wchar_t **)v53[j] + 10));
              *((_DWORD *)v53[j] + 10) ^= (*((_DWORD *)v53[j] + 10) ^ (16 * IsPathInSystemFontsDir)) & 0x10;
            }
          }
        }
        else
        {
          if ( v47 != 1 || !a1 )
            v22 = 0;
          if ( v19 && v22 )
            v28 = FNTCacheValidateFntFileInfo(v53, v54);
          if ( v28 == 2 )
            goto LABEL_9;
          LOBYTE(v30) = v22;
          v26 = lambda_3837b0e11e5c1550d1f290a74bcd7a94_::operator()(v52, v30, 0LL);
        }
        if ( !v26 )
        {
LABEL_9:
          result = (__int64)a10;
          *a10 = 0LL;
          return result;
        }
      }
      else
      {
        LOBYTE(v24) = a1 != 0LL;
        v25 = lambda_3837b0e11e5c1550d1f290a74bcd7a94_::operator()(v52, v24, *v17);
        v26 = v25;
        if ( !v25 )
          goto LABEL_9;
        v33 = *(_DWORD *)(v25 + 8);
        if ( v33 )
        {
          v39 = v33 - 1;
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( v40 )
            {
              if ( v40 == 1 )
                v34 = 4;
              else
                v34 = 0;
            }
            else
            {
              v34 = 3;
            }
          }
          else
          {
            v34 = 2;
          }
        }
        else
        {
          v34 = 1;
        }
        v35 = v54;
        v36 = v53;
        v37 = *a11;
        if ( (dword_1C0335DA0 & 3) != 0 && qword_1C0335DA8 && v37 )
        {
          v41 = &gaFntPDev;
          while ( qword_1C033BDF8 != *v41 )
          {
            ++v15;
            ++v41;
            if ( v15 >= 6 )
              goto LABEL_19;
          }
          if ( v15 )
          {
            if ( (dword_1C0335DA0 & 2) != 0 )
            {
              v42 = SearchFntCacheNewLink(v37);
              v43 = qword_1C0335DA8;
              if ( v42 )
              {
                if ( *(_WORD *)(v42 + 14) )
                {
                  *(_DWORD *)(v42 + 24) |= 1u;
                }
                else
                {
                  *(_WORD *)(v42 + 12) = v15;
                  *(_WORD *)(v42 + 14) = v34;
                  if ( (_DWORD)v35 )
                  {
                    v44 = (_QWORD *)(v42 + 40);
                    v45 = v35;
                    do
                    {
                      *((_DWORD *)v44 - 2) = *((_DWORD *)*v36 + 6);
                      v46 = *v36++;
                      *v44 = *v46;
                      v44 += 2;
                      --v45;
                    }
                    while ( v45 );
                  }
                }
              }
              else
              {
                *(_DWORD *)(qword_1C0335DA8 + 16) |= 2u;
              }
              *(_DWORD *)(v43 + 20) = 1;
            }
            else
            {
              *(_DWORD *)(qword_1C0335DA8 + 16) |= 2u;
            }
          }
        }
      }
LABEL_19:
      *a10 = qword_1C033BDF8;
      result = (__int64)a9;
      *a9 = v26;
    }
  }
  return result;
}
