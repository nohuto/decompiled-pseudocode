/*
 * XREFs of ?AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURect@Foundation@6@AEBUMonitorInformation@KeyboardHosting@@AEBUKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800BF524
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800BE9A0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x180538B6C (-GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AddOptionsRelativeToInside(int a1, __int64 a2, __int64 a3, unsigned int *a4, char a5, __int64 *a6)
{
  int v7; // r14d
  int v8; // esi
  unsigned int v9; // r10d
  unsigned int v10; // r11d
  int v11; // edx
  int v12; // ecx
  __int128 v13; // xmm6
  __int128 v14; // xmm8
  __int128 v15; // xmm9
  _QWORD *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rcx
  __int64 v42; // rax
  _QWORD *v43; // rcx
  __int64 v44; // rax
  _QWORD *v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // rcx
  __int64 v48; // rax
  _QWORD *v49; // rcx
  __int64 v50; // rax
  __int128 v52; // [rsp+28h] [rbp-79h] BYREF
  __int128 v53; // [rsp+38h] [rbp-69h]
  __int128 v54; // [rsp+48h] [rbp-59h]
  __int64 v55; // [rsp+58h] [rbp-49h]
  __int128 v56; // [rsp+68h] [rbp-39h] BYREF
  __int128 v57; // [rsp+78h] [rbp-29h]
  __int128 v58; // [rsp+88h] [rbp-19h]
  __int64 v59; // [rsp+98h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+4Fh]

  v7 = (int)*(float *)(a2 + 8);
  v8 = (int)*(float *)(a2 + 12);
  v9 = *a4;
  v10 = a4[1];
  v11 = (int)*(float *)(a3 + 68);
  v12 = (int)*(float *)(a3 + 72);
  v52 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  LODWORD(v52) = a1;
  BYTE8(v52) = a5;
  BYTE9(v52) = a5;
  HIDWORD(v52) = v12;
  *(_QWORD *)&v53 = __PAIR64__(v10, v11);
  LODWORD(v54) = 0;
  *((_QWORD *)&v53 + 1) = v9;
  v13 = v52;
  v56 = v52;
  v14 = v53;
  v15 = v54;
  DWORD1(v56) = 5;
  v16 = (_QWORD *)*a6;
  v17 = *(_QWORD *)*a6;
  v52 = v56;
  v55 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v17 + 104))(v16, &v52);
  v19 = v18;
  if ( v18 >= 0 )
  {
    v56 = v13;
    DWORD1(v56) = 1;
    v21 = (_QWORD *)*a6;
    v22 = *(_QWORD *)*a6;
    v52 = v56;
    v53 = v14;
    v54 = v15;
    v55 = 0LL;
    v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v22 + 104))(v21, &v52);
    v19 = v18;
    if ( v18 >= 0 )
    {
      v56 = v13;
      DWORD1(v56) = 9;
      v23 = (_QWORD *)*a6;
      v24 = *(_QWORD *)*a6;
      v52 = v56;
      v53 = v14;
      v54 = v15;
      v55 = 0LL;
      v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v24 + 104))(v23, &v52);
      v19 = v18;
      if ( v18 >= 0 )
      {
        v56 = v13;
        DWORD1(v56) = 4;
        v25 = (_QWORD *)*a6;
        v26 = *(_QWORD *)*a6;
        v52 = v56;
        v53 = v14;
        v54 = v15;
        v55 = 0LL;
        v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v26 + 104))(v25, &v52);
        v19 = v18;
        if ( v18 >= 0 )
        {
          v56 = v13;
          DWORD1(v56) = 0;
          v27 = (_QWORD *)*a6;
          v28 = *(_QWORD *)*a6;
          v52 = v56;
          v53 = v14;
          v54 = v15;
          v55 = 0LL;
          v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v28 + 104))(v27, &v52);
          v19 = v18;
          if ( v18 >= 0 )
          {
            v56 = v13;
            DWORD1(v56) = 8;
            v29 = (_QWORD *)*a6;
            v30 = *(_QWORD *)*a6;
            v52 = v56;
            v53 = v14;
            v54 = v15;
            v55 = 0LL;
            v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v30 + 104))(v29, &v52);
            v19 = v18;
            if ( v18 >= 0 )
            {
              v56 = v13;
              DWORD1(v56) = 6;
              v31 = (_QWORD *)*a6;
              v32 = *(_QWORD *)*a6;
              v52 = v56;
              v53 = v14;
              v54 = v15;
              v55 = 0LL;
              v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v32 + 104))(v31, &v52);
              v19 = v18;
              if ( v18 >= 0 )
              {
                v56 = v13;
                DWORD1(v56) = 2;
                v33 = (_QWORD *)*a6;
                v34 = *(_QWORD *)*a6;
                v52 = v56;
                v53 = v14;
                v54 = v15;
                v55 = 0LL;
                v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v34 + 104))(v33, &v52);
                v19 = v18;
                if ( v18 >= 0 )
                {
                  v56 = v13;
                  DWORD1(v56) = 10;
                  v35 = (_QWORD *)*a6;
                  v36 = *(_QWORD *)*a6;
                  v52 = v56;
                  v53 = v14;
                  v54 = v15;
                  v55 = 0LL;
                  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v36 + 104))(v35, &v52);
                  v19 = v18;
                  if ( v18 >= 0 )
                  {
                    v52 = v13;
                    v53 = v14;
                    DWORD1(v52) = 7;
                    HIDWORD(v52) = v8;
                    HIDWORD(v53) = v8;
                    v37 = (_QWORD *)*a6;
                    v38 = *(_QWORD *)*a6;
                    v56 = v52;
                    v57 = v53;
                    v58 = v15;
                    v59 = 0LL;
                    v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v38 + 104))(v37, &v56);
                    v19 = v18;
                    if ( v18 >= 0 )
                    {
                      v52 = v13;
                      v53 = v14;
                      DWORD1(v52) = 3;
                      HIDWORD(v52) = v8;
                      HIDWORD(v53) = v8;
                      v39 = (_QWORD *)*a6;
                      v40 = *(_QWORD *)*a6;
                      v56 = v52;
                      v57 = v53;
                      v58 = v15;
                      v59 = 0LL;
                      v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v40 + 104))(v39, &v56);
                      v19 = v18;
                      if ( v18 >= 0 )
                      {
                        v52 = v13;
                        v53 = v14;
                        DWORD1(v52) = 11;
                        HIDWORD(v52) = v8;
                        HIDWORD(v53) = v8;
                        v41 = (_QWORD *)*a6;
                        v42 = *(_QWORD *)*a6;
                        v56 = v52;
                        v57 = v53;
                        v58 = v15;
                        v59 = 0LL;
                        v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v42 + 104))(v41, &v56);
                        v19 = v18;
                        if ( v18 >= 0 )
                        {
                          v52 = v13;
                          v53 = v14;
                          DWORD1(v52) = 13;
                          LODWORD(v53) = v7;
                          v43 = (_QWORD *)*a6;
                          v44 = *(_QWORD *)*a6;
                          v56 = v52;
                          v57 = v53;
                          v58 = v15;
                          v59 = 0LL;
                          v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v44 + 104))(v43, &v56);
                          v19 = v18;
                          if ( v18 >= 0 )
                          {
                            v52 = v13;
                            v53 = v14;
                            DWORD1(v52) = 3;
                            LODWORD(v53) = v7;
                            v45 = (_QWORD *)*a6;
                            v46 = *(_QWORD *)*a6;
                            v56 = v52;
                            v57 = v53;
                            v58 = v15;
                            v59 = 0LL;
                            v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v46 + 104))(v45, &v56);
                            v19 = v18;
                            if ( v18 >= 0 )
                            {
                              v52 = v13;
                              v53 = v14;
                              DWORD1(v52) = 14;
                              LODWORD(v53) = v7;
                              v47 = (_QWORD *)*a6;
                              v48 = *(_QWORD *)*a6;
                              v56 = v52;
                              v57 = v53;
                              v58 = v15;
                              v59 = 0LL;
                              v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v48 + 104))(v47, &v56);
                              v19 = v18;
                              if ( v18 >= 0 )
                              {
                                v52 = v13;
                                v53 = v14;
                                v54 = v15;
                                DWORD1(v52) = 15;
                                HIDWORD(v52) = v8;
                                LODWORD(v53) = v7;
                                HIDWORD(v53) = v8;
                                LODWORD(v54) = v7;
                                v49 = (_QWORD *)*a6;
                                v50 = *(_QWORD *)*a6;
                                v56 = v52;
                                v57 = v53;
                                v58 = v54;
                                v59 = 0LL;
                                v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v50 + 104))(v49, &v56);
                                v19 = v18;
                                if ( v18 >= 0 )
                                {
                                  v19 = 0;
                                  goto LABEL_35;
                                }
                                v20 = 159LL;
                              }
                              else
                              {
                                v20 = 142LL;
                              }
                            }
                            else
                            {
                              v20 = 137LL;
                            }
                          }
                          else
                          {
                            v20 = 132LL;
                          }
                        }
                        else
                        {
                          v20 = 118LL;
                        }
                      }
                      else
                      {
                        v20 = 112LL;
                      }
                    }
                    else
                    {
                      v20 = 106LL;
                    }
                  }
                  else
                  {
                    v20 = 91LL;
                  }
                }
                else
                {
                  v20 = 87LL;
                }
              }
              else
              {
                v20 = 83LL;
              }
            }
            else
            {
              v20 = 79LL;
            }
          }
          else
          {
            v20 = 75LL;
          }
        }
        else
        {
          v20 = 71LL;
        }
      }
      else
      {
        v20 = 67LL;
      }
    }
    else
    {
      v20 = 63LL;
    }
  }
  else
  {
    v20 = 59LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
    (const char *)(unsigned int)v18,
    v52);
LABEL_35:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a6);
  return v19;
}
