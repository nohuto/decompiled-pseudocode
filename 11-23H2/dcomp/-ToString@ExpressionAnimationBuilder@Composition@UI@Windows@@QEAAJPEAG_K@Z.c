/*
 * XREFs of ?ToString@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAG_K@Z @ 0x180163690
 * Callers:
 *     ?GetExpressionPostfixString@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@345@PEAG_K@Z @ 0x180127D90 (-GetExpressionPostfixString@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIExpressionAn.c)
 *     ?ToString@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAG_K@Z @ 0x180163690 (-ToString@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAG_K@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001E424 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180021CB8 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180069220 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?ToString@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAG_K@Z @ 0x180163690 (-ToString@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAG_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ToString(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned __int16 *a2,
        size_t a3)
{
  unsigned int v6; // esi
  unsigned int v7; // r12d
  __int64 v8; // rdi
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  signed int v14; // ebx
  unsigned int v15; // r9d
  const unsigned __int16 *v16; // r9
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  int v72; // ecx
  int v73; // ecx
  int v74; // ecx
  int v75; // ecx
  int v76; // ecx
  int v77; // ecx
  int v78; // ecx
  int v79; // ecx
  int v80; // ecx
  int v81; // ecx
  int v82; // ecx
  unsigned __int8 v83; // cl
  unsigned int v84; // esi
  unsigned __int16 *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r8
  unsigned __int16 *v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  char *v91; // r8
  unsigned __int16 v92; // r9
  unsigned __int16 *v93; // rax
  unsigned __int8 v94; // cl
  unsigned int v95; // esi
  unsigned __int16 *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r8
  unsigned __int16 *v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  char *v102; // r8
  unsigned __int16 v103; // r9
  unsigned __int16 *v104; // rax
  void *v105; // r10
  unsigned __int64 v106; // rax
  unsigned int v108[2]; // [rsp+28h] [rbp-100h]
  unsigned int v109; // [rsp+28h] [rbp-100h]
  void *v110; // [rsp+30h] [rbp-F8h]
  int v111; // [rsp+A8h] [rbp-80h]
  unsigned __int64 v112; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int16 v113[256]; // [rsp+B8h] [rbp-70h] BYREF
  unsigned __int16 v114[8]; // [rsp+2B8h] [rbp+190h] BYREF
  unsigned __int16 v115[8]; // [rsp+2C8h] [rbp+1A0h] BYREF
  unsigned __int16 v116[256]; // [rsp+2D8h] [rbp+1B0h] BYREF
  unsigned __int16 v117[256]; // [rsp+4D8h] [rbp+3B0h] BYREF

  v111 = 0;
  v112 = 0LL;
  v6 = 0;
  if ( !a2 || !a3 )
LABEL_382:
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  *a2 = 0;
  v7 = 0;
  if ( !*((_DWORD *)this + 10) )
  {
LABEL_362:
    v47 = StringCchLengthW(a2, a3, &v112);
    v14 = v47;
    if ( v47 < 0 )
    {
      v110 = v105;
      v109 = 4076;
      goto LABEL_379;
    }
    v106 = v112;
    if ( v112 )
      v106 = v112 - 1;
    v14 = (int)v105;
    goto LABEL_381;
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v7);
    v9 = *(_DWORD *)v8;
    if ( *(int *)v8 > 52 )
    {
      if ( v9 > 78 )
      {
        if ( v9 > 91 )
        {
          if ( v9 > 97 )
          {
            v79 = v9 - 98;
            if ( v79 )
            {
              v80 = v79 - 1;
              if ( v80 )
              {
                v81 = v80 - 1;
                if ( v81 )
                {
                  v82 = v81 - 1;
                  if ( v82 )
                  {
                    if ( v82 != 1 )
                      goto LABEL_382;
                    v47 = StringCchPrintfW(
                            v113,
                            250LL,
                            L"swizzle(%u",
                            (*(_QWORD *)(v8 + 16) >> (4 * *(_BYTE *)(v8 + 12) - 4)) & 0xFLL);
                    v14 = v47;
                    if ( v47 < 0 )
                    {
                      v110 = 0LL;
                      v109 = 4047;
                      goto LABEL_379;
                    }
                    v83 = *(_BYTE *)(v8 + 12);
                    v84 = 1;
                    if ( v83 > 1u )
                    {
                      while ( 1 )
                      {
                        v14 = StringCchPrintfW(
                                v114,
                                5LL,
                                L",%u",
                                (*(_QWORD *)(v8 + 16) >> (4 * (v83 - (unsigned __int8)v84) - 4)) & 0xFLL);
                        if ( v14 < 0 )
                          break;
                        v47 = StringCchCatW(v113, 250LL, v114);
                        v14 = v47;
                        if ( v47 < 0 )
                        {
                          v110 = 0LL;
                          v109 = 4052;
                          goto LABEL_379;
                        }
                        ++v84;
                        v83 = *(_BYTE *)(v8 + 12);
                        if ( v84 >= v83 )
                          goto LABEL_322;
                      }
                      v110 = 0LL;
                      v109 = 4051;
                      goto LABEL_20;
                    }
LABEL_322:
                    v85 = v113;
                    v86 = 250LL;
                    do
                    {
                      if ( !*v85 )
                        break;
                      ++v85;
                      --v86;
                    }
                    while ( v86 );
                    v87 = (250 - v86) & -(__int64)(v86 != 0);
                    v14 = v86 == 0 ? 0x80070057 : 0;
                    if ( v86 )
                    {
                      v88 = &v113[v87];
                      v89 = 250 - v87;
                      if ( v87 != 250 )
                      {
                        v90 = 2147483646LL;
                        v91 = (char *)((char *)L") " - (char *)v88);
                        do
                        {
                          if ( !v90 )
                            break;
                          v92 = *(_WORD *)&v91[(_QWORD)v88];
                          if ( !v92 )
                            break;
                          *v88 = v92;
                          --v90;
                          ++v88;
                          --v89;
                        }
                        while ( v89 );
                      }
                      v93 = v88 - 1;
                      if ( v89 )
                        v93 = v88;
                      v14 = v89 == 0 ? 0x8007007A : 0;
                      *v93 = 0;
                    }
                    if ( v14 < 0 )
                    {
                      v110 = 0LL;
                      v109 = 4055;
                      goto LABEL_20;
                    }
                  }
                  else
                  {
                    v47 = StringCchPrintfW(
                            v113,
                            250LL,
                            L"swizzle(%u",
                            (*(unsigned __int8 *)(v8 + 12) >> (2 * *(_BYTE *)(v8 + 8) - 2)) & 3);
                    v14 = v47;
                    if ( v47 < 0 )
                    {
                      v110 = 0LL;
                      v109 = 4029;
                      goto LABEL_379;
                    }
                    v94 = *(_BYTE *)(v8 + 8);
                    v95 = 1;
                    if ( v94 > 1u )
                    {
                      while ( 1 )
                      {
                        v14 = StringCchPrintfW(
                                v115,
                                5LL,
                                L",%u",
                                (*(unsigned __int8 *)(v8 + 12) >> (2 * (v94 - v95) - 2)) & 3);
                        if ( v14 < 0 )
                          break;
                        v47 = StringCchCatW(v113, 250LL, v115);
                        v14 = v47;
                        if ( v47 < 0 )
                        {
                          v110 = 0LL;
                          v109 = 4034;
                          goto LABEL_379;
                        }
                        ++v95;
                        v94 = *(_BYTE *)(v8 + 8);
                        if ( v95 >= v94 )
                          goto LABEL_341;
                      }
                      v110 = 0LL;
                      v109 = 4033;
                      goto LABEL_20;
                    }
LABEL_341:
                    v96 = v113;
                    v97 = 250LL;
                    do
                    {
                      if ( !*v96 )
                        break;
                      ++v96;
                      --v97;
                    }
                    while ( v97 );
                    v98 = (250 - v97) & -(__int64)(v97 != 0);
                    v14 = v97 == 0 ? 0x80070057 : 0;
                    if ( v97 )
                    {
                      v99 = &v113[v98];
                      v100 = 250 - v98;
                      if ( v98 != 250 )
                      {
                        v101 = 2147483646LL;
                        v102 = (char *)((char *)L") " - (char *)v99);
                        do
                        {
                          if ( !v101 )
                            break;
                          v103 = *(unsigned __int16 *)((char *)v99 + (_QWORD)v102);
                          if ( !v103 )
                            break;
                          *v99 = v103;
                          --v101;
                          ++v99;
                          --v100;
                        }
                        while ( v100 );
                      }
                      v104 = v99 - 1;
                      if ( v100 )
                        v104 = v99;
                      v14 = v100 == 0 ? 0x8007007A : 0;
                      *v104 = 0;
                    }
                    if ( v14 < 0 )
                    {
                      v110 = 0LL;
                      v109 = 4037;
                      goto LABEL_20;
                    }
                  }
                  v6 = v111;
                }
                else
                {
                  v14 = StringCchPrintfW(v113, 250LL, L"Vector4.Transform ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 4020;
                    goto LABEL_20;
                  }
                }
              }
              else
              {
                v14 = StringCchPrintfW(v113, 250LL, L"Vector4.Dot ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 4014;
                  goto LABEL_20;
                }
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"Vector3.TransformNormal ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 4008;
                goto LABEL_20;
              }
            }
          }
          else if ( v9 == 97 )
          {
            v14 = StringCchPrintfW(v113, 250LL, L"Vector3.Transform ");
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 4002;
              goto LABEL_20;
            }
          }
          else
          {
            v75 = v9 - 92;
            if ( v75 )
            {
              v76 = v75 - 1;
              if ( v76 )
              {
                v77 = v76 - 1;
                if ( v77 )
                {
                  v78 = v77 - 1;
                  if ( v78 )
                  {
                    if ( v78 != 1 )
                      goto LABEL_382;
                    v14 = StringCchPrintfW(v113, 250LL, L"Vector3.Dot ");
                    if ( v14 < 0 )
                    {
                      v110 = 0LL;
                      v109 = 3996;
                      goto LABEL_20;
                    }
                  }
                  else
                  {
                    v14 = StringCchPrintfW(v113, 250LL, L"Vector3.Cross ");
                    if ( v14 < 0 )
                    {
                      v110 = 0LL;
                      v109 = 3990;
                      goto LABEL_20;
                    }
                  }
                }
                else
                {
                  v14 = StringCchPrintfW(v113, 250LL, L"Vector2.TransformNormal ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3984;
                    goto LABEL_20;
                  }
                }
              }
              else
              {
                v14 = StringCchPrintfW(v113, 250LL, L"Vector2.Transform ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3978;
                  goto LABEL_20;
                }
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"Vector2.Dot ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3972;
                goto LABEL_20;
              }
            }
          }
        }
        else if ( v9 == 91 )
        {
          v14 = StringCchPrintfW(v113, 250LL, L"TimeSpan.FromMinutes ");
          if ( v14 < 0 )
          {
            v110 = 0LL;
            v109 = 3966;
            goto LABEL_20;
          }
        }
        else if ( v9 > 85 )
        {
          v71 = v9 - 86;
          if ( v71 )
          {
            v72 = v71 - 1;
            if ( v72 )
            {
              v73 = v72 - 1;
              if ( v73 )
              {
                v74 = v73 - 1;
                if ( v74 )
                {
                  if ( v74 != 1 )
                    goto LABEL_382;
                  v14 = StringCchPrintfW(v113, 250LL, L"TimeSpan.FromSeconds ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3960;
                    goto LABEL_20;
                  }
                }
                else
                {
                  v14 = StringCchPrintfW(v113, 250LL, L"TimeSpan.FromMilliSeconds ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3954;
                    goto LABEL_20;
                  }
                }
              }
              else
              {
                v14 = StringCchPrintfW(v113, 250LL, L"Quaternion.CreateFromYawPitchRoll ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3948;
                  goto LABEL_20;
                }
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"Quaternion.CreateFromRotationMatrix ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3942;
                goto LABEL_20;
              }
            }
          }
          else
          {
            v14 = StringCchPrintfW(v113, 250LL, L"Quaternion.Lerp ");
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 3936;
              goto LABEL_20;
            }
          }
        }
        else if ( v9 == 85 )
        {
          v14 = StringCchPrintfW(v113, 250LL, L"Quaternion.CreateFromAxisAngle ");
          if ( v14 < 0 )
          {
            v110 = 0LL;
            v109 = 3930;
            goto LABEL_20;
          }
        }
        else
        {
          v66 = v9 - 79;
          if ( v66 )
          {
            v67 = v66 - 1;
            if ( v67 )
            {
              v68 = v67 - 1;
              if ( v68 )
              {
                v69 = v68 - 1;
                if ( v69 )
                {
                  v70 = v69 - 1;
                  if ( v70 )
                  {
                    if ( v70 != 1 )
                      goto LABEL_382;
                    v14 = StringCchPrintfW(v113, 250LL, L"Matrix4x4.CreateFromYawPitchRoll ");
                    if ( v14 < 0 )
                    {
                      v110 = 0LL;
                      v109 = 3924;
                      goto LABEL_20;
                    }
                  }
                  else
                  {
                    v14 = StringCchPrintfW(v113, 250LL, L"Matrix4x4.CreateFromQuaternion ");
                    if ( v14 < 0 )
                    {
                      v110 = 0LL;
                      v109 = 3918;
                      goto LABEL_20;
                    }
                  }
                }
                else
                {
                  v14 = StringCchPrintfW(v113, 250LL, L"Matrix4x4.CreatePerspectiveOffCenter ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3912;
                    goto LABEL_20;
                  }
                }
              }
              else
              {
                v14 = StringCchPrintfW(v113, 250LL, L"Matrix4x4.CreatePerspectiveFieldOfView ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3906;
                  goto LABEL_20;
                }
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"Matrix4x4.CreatePerspective ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3900;
                goto LABEL_20;
              }
            }
          }
          else
          {
            v14 = StringCchPrintfW(v113, 250LL, L"Matrix4x4.CreateRotationZ ");
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 3894;
              goto LABEL_20;
            }
          }
        }
      }
      else if ( v9 == 78 )
      {
        v14 = StringCchPrintfW(v113, 250LL, L"Matrix4x4.CreateRotationY ");
        if ( v14 < 0 )
        {
          v110 = 0LL;
          v109 = 3888;
          goto LABEL_20;
        }
      }
      else if ( v9 > 65 )
      {
        if ( v9 > 72 )
        {
          v62 = v9 - 73;
          if ( v62 )
          {
            v63 = v62 - 1;
            if ( v63 )
            {
              v64 = v63 - 1;
              if ( v64 )
              {
                v65 = v64 - 1;
                if ( v65 )
                {
                  if ( v65 != 1 )
                    goto LABEL_382;
                  v14 = StringCchPrintfW(v113, 250LL, L"Matrix4x4.CreateRotationX ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3882;
                    goto LABEL_20;
                  }
                }
                else
                {
                  v14 = StringCchPrintfW(v113, 250LL, L"Matrix4x4.CreateFromAxisAngle ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3876;
                    goto LABEL_20;
                  }
                }
              }
              else
              {
                v14 = StringCchPrintfW(v113, 250LL, L"Matrix4x4.CreateTranslation ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3846;
                  goto LABEL_20;
                }
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"Matrix4x4.CreateScale ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3858;
                goto LABEL_20;
              }
            }
          }
          else
          {
            v14 = StringCchPrintfW(v113, 250LL, L"Matrix3x2.CreateTranslation ");
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 3840;
              goto LABEL_20;
            }
          }
        }
        else if ( v9 == 72 )
        {
          v14 = StringCchPrintfW(v113, 250LL, L"Matrix3x2.CreateSkew ");
          if ( v14 < 0 )
          {
            v110 = 0LL;
            v109 = 3864;
            goto LABEL_20;
          }
        }
        else
        {
          v57 = v9 - 66;
          if ( v57 )
          {
            v58 = v57 - 1;
            if ( v58 )
            {
              v59 = v58 - 1;
              if ( v59 )
              {
                v60 = v59 - 1;
                if ( v60 )
                {
                  v61 = v60 - 1;
                  if ( v61 )
                  {
                    if ( v61 != 1 )
                      goto LABEL_382;
                    v14 = StringCchPrintfW(v113, 250LL, L"Matrix3x2.CreateScale ");
                    if ( v14 < 0 )
                    {
                      v110 = 0LL;
                      v109 = 3852;
                      goto LABEL_20;
                    }
                  }
                  else
                  {
                    v14 = StringCchPrintfW(v113, 250LL, L"Matrix3x2.CreateRotation ");
                    if ( v14 < 0 )
                    {
                      v110 = 0LL;
                      v109 = 3870;
                      goto LABEL_20;
                    }
                  }
                }
                else
                {
                  v14 = StringCchPrintfW(v113, 250LL, L"matrix4x4 ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3834;
                    goto LABEL_20;
                  }
                }
              }
              else
              {
                v14 = StringCchPrintfW(v113, 250LL, L"matrix3x2 ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3828;
                  goto LABEL_20;
                }
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"quaternion ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3822;
                goto LABEL_20;
              }
            }
          }
          else
          {
            v14 = StringCchPrintfW(v113, 250LL, L"colorrgb ");
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 3816;
              goto LABEL_20;
            }
          }
        }
      }
      else if ( v9 == 65 )
      {
        v14 = StringCchPrintfW(v113, 250LL, L"colorhsl ");
        if ( v14 < 0 )
        {
          v110 = 0LL;
          v109 = 3810;
          goto LABEL_20;
        }
      }
      else if ( v9 > 59 )
      {
        v53 = v9 - 60;
        if ( v53 )
        {
          v54 = v53 - 1;
          if ( v54 )
          {
            v55 = v54 - 1;
            if ( v55 )
            {
              v56 = v55 - 1;
              if ( v56 )
              {
                if ( v56 != 1 )
                  goto LABEL_382;
                v14 = StringCchPrintfW(v113, 250LL, L"vector4 ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3804;
                  goto LABEL_20;
                }
              }
              else
              {
                v14 = StringCchPrintfW(v113, 250LL, L"vector3 ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3798;
                  goto LABEL_20;
                }
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"vector2 ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3792;
                goto LABEL_20;
              }
            }
          }
          else
          {
            v14 = StringCchPrintfW(v113, 250LL, L"! ");
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 3568;
              goto LABEL_20;
            }
          }
        }
        else
        {
          v14 = StringCchPrintfW(v113, 250LL, L"|| ");
          if ( v14 < 0 )
          {
            v110 = 0LL;
            v109 = 3562;
            goto LABEL_20;
          }
        }
      }
      else if ( v9 == 59 )
      {
        v14 = StringCchPrintfW(v113, 250LL, L"&& ");
        if ( v14 < 0 )
        {
          v110 = 0LL;
          v109 = 3556;
          goto LABEL_20;
        }
      }
      else
      {
        v48 = v9 - 53;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            v50 = v49 - 1;
            if ( v50 )
            {
              v51 = v50 - 1;
              if ( v51 )
              {
                v52 = v51 - 1;
                if ( v52 )
                {
                  if ( v52 != 1 )
                    goto LABEL_382;
                  v14 = StringCchPrintfW(v113, 250LL, L">= ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3550;
                    goto LABEL_20;
                  }
                }
                else
                {
                  v14 = StringCchPrintfW(v113, 250LL, L"> ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3544;
                    goto LABEL_20;
                  }
                }
              }
              else
              {
                v14 = StringCchPrintfW(v113, 250LL, L"<= ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3538;
                  goto LABEL_20;
                }
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"< ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3532;
                goto LABEL_20;
              }
            }
          }
          else
          {
            v14 = StringCchPrintfW(v113, 250LL, L"!= ");
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 3526;
              goto LABEL_20;
            }
          }
        }
        else
        {
          v14 = StringCchPrintfW(v113, 250LL, L"== ");
          if ( v14 < 0 )
          {
            v110 = 0LL;
            v109 = 3520;
            goto LABEL_20;
          }
        }
      }
      goto LABEL_360;
    }
    if ( v9 == 52 )
      break;
    if ( v9 > 26 )
    {
      if ( v9 > 39 )
      {
        if ( v9 > 45 )
        {
          v43 = v9 - 46;
          if ( v43 )
          {
            v44 = v43 - 1;
            if ( v44 )
            {
              v45 = v44 - 1;
              if ( v45 )
              {
                v46 = v45 - 1;
                if ( v46 )
                {
                  if ( v46 != 1 )
                    goto LABEL_382;
                  v14 = StringCchPrintfW(v113, 250LL, L"toradians ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3786;
                    goto LABEL_20;
                  }
                }
                else
                {
                  v14 = StringCchPrintfW(v113, 250LL, L"todegrees ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3780;
                    goto LABEL_20;
                  }
                }
              }
              else
              {
                v14 = StringCchPrintfW(v113, 250LL, L"ln ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3774;
                  goto LABEL_20;
                }
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"log10 ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3768;
                goto LABEL_20;
              }
            }
          }
          else
          {
            v14 = StringCchPrintfW(v113, 250LL, L"square ");
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 3762;
              goto LABEL_20;
            }
          }
        }
        else if ( v9 == 45 )
        {
          v14 = StringCchPrintfW(v113, 250LL, L"pow ");
          if ( v14 < 0 )
          {
            v110 = 0LL;
            v109 = 3756;
            goto LABEL_20;
          }
        }
        else
        {
          v39 = v9 - 40;
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( v41 )
              {
                v42 = v41 - 1;
                if ( v42 )
                {
                  if ( v42 != 1 )
                    goto LABEL_382;
                  v14 = StringCchPrintfW(v113, 250LL, L"sqrt ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3750;
                    goto LABEL_20;
                  }
                }
                else
                {
                  v14 = StringCchPrintfW(v113, 250LL, L"round ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3744;
                    goto LABEL_20;
                  }
                }
              }
              else
              {
                v14 = StringCchPrintfW(v113, 250LL, L"floor ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3738;
                  goto LABEL_20;
                }
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"ceil ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3732;
                goto LABEL_20;
              }
            }
          }
          else
          {
            v14 = StringCchPrintfW(v113, 250LL, L"atan ");
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 3726;
              goto LABEL_20;
            }
          }
        }
      }
      else if ( v9 == 39 )
      {
        v14 = StringCchPrintfW(v113, 250LL, L"tan ");
        if ( v14 < 0 )
        {
          v110 = 0LL;
          v109 = 3720;
          goto LABEL_20;
        }
      }
      else if ( v9 > 33 )
      {
        v35 = v9 - 34;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              v38 = v37 - 1;
              if ( v38 )
              {
                if ( v38 != 1 )
                  goto LABEL_382;
                v14 = StringCchPrintfW(v113, 250LL, L"acos ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3714;
                  goto LABEL_20;
                }
              }
              else
              {
                v14 = StringCchPrintfW(v113, 250LL, L"cos ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3708;
                  goto LABEL_20;
                }
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"asin ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3702;
                goto LABEL_20;
              }
            }
          }
          else
          {
            v14 = StringCchPrintfW(v113, 250LL, L"sin ");
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 3696;
              goto LABEL_20;
            }
          }
        }
        else
        {
          v14 = StringCchPrintfW(v113, 250LL, L"concatenate ");
          if ( v14 < 0 )
          {
            v110 = 0LL;
            v109 = 3676;
            goto LABEL_20;
          }
        }
      }
      else if ( v9 == 33 )
      {
        v14 = StringCchPrintfW(v113, 250LL, L"slerp ");
        if ( v14 < 0 )
        {
          v110 = 0LL;
          v109 = 3670;
          goto LABEL_20;
        }
      }
      else
      {
        v30 = v9 - 27;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            v32 = v31 - 1;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( v33 )
              {
                v34 = v33 - 1;
                if ( v34 )
                {
                  if ( v34 != 1 )
                    goto LABEL_382;
                  v14 = StringCchPrintfW(v113, 250LL, L"normalize ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3664;
                    goto LABEL_20;
                  }
                }
                else
                {
                  v14 = StringCchPrintfW(v113, 250LL, L"distancesquared ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3658;
                    goto LABEL_20;
                  }
                }
              }
              else
              {
                v14 = StringCchPrintfW(v113, 250LL, L"distance ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3652;
                  goto LABEL_20;
                }
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"lengthsquared ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3646;
                goto LABEL_20;
              }
            }
          }
          else
          {
            v14 = StringCchPrintfW(v113, 250LL, L"length ");
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 3640;
              goto LABEL_20;
            }
          }
        }
        else
        {
          v14 = StringCchPrintfW(v113, 250LL, L"colorlerprgb ");
          if ( v14 < 0 )
          {
            v110 = 0LL;
            v109 = 3634;
            goto LABEL_20;
          }
        }
      }
    }
    else if ( v9 == 26 )
    {
      v14 = StringCchPrintfW(v113, 250LL, L"colorlerphsl ");
      if ( v14 < 0 )
      {
        v110 = 0LL;
        v109 = 3628;
        goto LABEL_20;
      }
    }
    else if ( v9 > 13 )
    {
      if ( v9 > 20 )
      {
        v26 = v9 - 21;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 != 1 )
                  goto LABEL_382;
                v14 = StringCchPrintfW(v113, 250LL, L"colorlerp ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3622;
                  goto LABEL_20;
                }
              }
              else
              {
                v14 = StringCchPrintfW(v113, 250LL, L"lerp ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3616;
                  goto LABEL_20;
                }
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"inverse ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3610;
                goto LABEL_20;
              }
            }
          }
          else
          {
            v14 = StringCchPrintfW(v113, 250LL, L"transform ");
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 3604;
              goto LABEL_20;
            }
          }
        }
        else
        {
          v14 = StringCchPrintfW(v113, 250LL, L"scale ");
          if ( v14 < 0 )
          {
            v110 = 0LL;
            v109 = 3598;
            goto LABEL_20;
          }
        }
      }
      else if ( v9 == 20 )
      {
        v14 = StringCchPrintfW(v113, 250LL, L"clamp ");
        if ( v14 < 0 )
        {
          v110 = 0LL;
          v109 = 3592;
          goto LABEL_20;
        }
      }
      else
      {
        v21 = v9 - 14;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  if ( v25 != 1 )
                    goto LABEL_382;
                  v14 = StringCchPrintfW(v113, 250LL, L"max ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3586;
                    goto LABEL_20;
                  }
                }
                else
                {
                  v14 = StringCchPrintfW(v113, 250LL, L"min ");
                  if ( v14 < 0 )
                  {
                    v110 = 0LL;
                    v109 = 3580;
                    goto LABEL_20;
                  }
                }
              }
              else
              {
                v14 = StringCchPrintfW(v113, 250LL, L"mod ");
                if ( v14 < 0 )
                {
                  v110 = 0LL;
                  v109 = 3574;
                  goto LABEL_20;
                }
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"/ ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3514;
                goto LABEL_20;
              }
            }
          }
          else
          {
            v14 = StringCchPrintfW(v113, 250LL, L"* ");
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 3508;
              goto LABEL_20;
            }
          }
        }
        else
        {
          v14 = StringCchPrintfW(v113, 250LL, L"- ");
          if ( v14 < 0 )
          {
            v110 = 0LL;
            v109 = 3502;
            goto LABEL_20;
          }
        }
      }
    }
    else if ( v9 == 13 )
    {
      v14 = StringCchPrintfW(v113, 250LL, L"+ ");
      if ( v14 < 0 )
      {
        v110 = 0LL;
        v109 = 3496;
        goto LABEL_20;
      }
    }
    else if ( v9 > 6 )
    {
      v17 = v9 - 7;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 2;
            if ( v20 )
            {
              if ( v20 != 1 )
                goto LABEL_382;
              v14 = StringCchPrintfW(v113, 250LL, L"negate ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3490;
                goto LABEL_20;
              }
            }
            else
            {
              v14 = StringCchPrintfW(v113, 250LL, L"abs ");
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3484;
                goto LABEL_20;
              }
            }
          }
          else
          {
            v108[0] = *(_DWORD *)(*((_QWORD *)this + 15) + 24LL * *(unsigned int *)(v8 + 4));
            v14 = StringCchPrintfW(v113, 250LL, L"{%d}.%d ", v6, *(_QWORD *)v108);
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 3475;
              goto LABEL_20;
            }
            v111 = ++v6;
          }
        }
        else
        {
          v14 = StringCchPrintfW(
                  v113,
                  250LL,
                  L"matrix4x4(%f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f) ",
                  *(float *)(v8 + 4),
                  *(float *)(v8 + 8),
                  *(float *)(v8 + 12),
                  *(float *)(v8 + 16),
                  *(float *)(v8 + 20),
                  *(float *)(v8 + 24),
                  *(float *)(v8 + 28),
                  *(float *)(v8 + 32),
                  *(float *)(v8 + 36),
                  *(float *)(v8 + 40),
                  *(float *)(v8 + 44),
                  *(float *)(v8 + 48),
                  *(float *)(v8 + 52),
                  *(float *)(v8 + 56),
                  *(float *)(v8 + 60),
                  *(float *)(v8 + 64));
          if ( v14 < 0 )
          {
            v110 = 0LL;
            v109 = 3466;
            goto LABEL_20;
          }
        }
      }
      else
      {
        v14 = StringCchPrintfW(
                v113,
                250LL,
                L"matrix3x2(%f, %f, %f, %f, %f, %f) ",
                *(float *)(v8 + 4),
                *(float *)(v8 + 8),
                *(float *)(v8 + 12),
                *(float *)(v8 + 16),
                *(float *)(v8 + 20),
                *(float *)(v8 + 24));
        if ( v14 < 0 )
        {
          v110 = 0LL;
          v109 = 3452;
          goto LABEL_20;
        }
      }
    }
    else if ( v9 == 6 )
    {
      v14 = StringCchPrintfW(
              v113,
              250LL,
              L"quaternion(%f, %f, %f, %f) ",
              *(float *)(v8 + 4),
              *(float *)(v8 + 8),
              *(float *)(v8 + 12),
              *(float *)(v8 + 16));
      if ( v14 < 0 )
      {
        v110 = 0LL;
        v109 = 3439;
        goto LABEL_20;
      }
    }
    else if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 != 1 )
                goto LABEL_382;
              v14 = StringCchPrintfW(
                      v113,
                      250LL,
                      L"color(%f, %f, %f, %f) ",
                      *(float *)(v8 + 16),
                      *(float *)(v8 + 4),
                      *(float *)(v8 + 8),
                      *(float *)(v8 + 12));
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3430;
LABEL_20:
                v15 = v14;
                goto LABEL_380;
              }
            }
            else
            {
              v14 = StringCchPrintfW(
                      v113,
                      250LL,
                      L"vector4(%f, %f, %f, %f) ",
                      *(float *)(v8 + 4),
                      *(float *)(v8 + 8),
                      *(float *)(v8 + 12),
                      *(float *)(v8 + 16));
              if ( v14 < 0 )
              {
                v110 = 0LL;
                v109 = 3421;
                goto LABEL_20;
              }
            }
          }
          else
          {
            v14 = StringCchPrintfW(
                    v113,
                    250LL,
                    L"vector3(%f, %f, %f) ",
                    *(float *)(v8 + 4),
                    *(float *)(v8 + 8),
                    *(float *)(v8 + 12));
            if ( v14 < 0 )
            {
              v110 = 0LL;
              v109 = 3412;
              goto LABEL_20;
            }
          }
        }
        else
        {
          v14 = StringCchPrintfW(v113, 250LL, L"vector2(%f, %f) ", *(float *)(v8 + 4), *(float *)(v8 + 8));
          if ( v14 < 0 )
          {
            v110 = 0LL;
            v109 = 3403;
            goto LABEL_20;
          }
        }
      }
      else
      {
        v14 = StringCchPrintfW(v113, 250LL, L"%f ", *(float *)(v8 + 4));
        if ( v14 < 0 )
        {
          v110 = 0LL;
          v109 = 3395;
          goto LABEL_20;
        }
      }
    }
    else
    {
      v16 = L"true";
      if ( !*(_BYTE *)(v8 + 4) )
        v16 = L"false";
      v14 = StringCchPrintfW(v113, 250LL, L"%ws ", v16);
      if ( v14 < 0 )
      {
        v110 = 0LL;
        v109 = 3387;
        goto LABEL_20;
      }
    }
LABEL_360:
    v47 = StringCchCatW(a2, a3, v113);
    v14 = v47;
    if ( v47 < 0 )
    {
      v110 = 0LL;
      v109 = 4068;
      goto LABEL_379;
    }
    if ( ++v7 >= *((_DWORD *)this + 10) )
      goto LABEL_362;
  }
  v14 = Windows::UI::Composition::ExpressionAnimationBuilder::ToString(
          *(Windows::UI::Composition::ExpressionAnimationBuilder **)(*((_QWORD *)this + 74)
                                                                   + 8LL * *(unsigned int *)(v8 + 12)),
          v117,
          0xFAuLL);
  if ( v14 < 0 )
  {
    v110 = 0LL;
    v109 = 3687;
    goto LABEL_20;
  }
  v47 = Windows::UI::Composition::ExpressionAnimationBuilder::ToString(
          *(Windows::UI::Composition::ExpressionAnimationBuilder **)(*((_QWORD *)this + 74)
                                                                   + 8LL * *(unsigned int *)(v8 + 16)),
          v116,
          0xFAuLL);
  v14 = v47;
  if ( v47 < 0 )
  {
    v110 = 0LL;
    v109 = 3688;
    goto LABEL_379;
  }
  v47 = StringCchPrintfW(v113, 250LL, L"? (%ws) : (%ws) ", v117, v116);
  v14 = v47;
  if ( v47 >= 0 )
    goto LABEL_360;
  v110 = 0LL;
  v109 = 3690;
LABEL_379:
  v15 = v47;
LABEL_380:
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, v15, v109, v110);
  LOWORD(v105) = 0;
  v106 = 0LL;
LABEL_381:
  a2[v106] = (unsigned __int16)v105;
  return (unsigned int)v14;
}
