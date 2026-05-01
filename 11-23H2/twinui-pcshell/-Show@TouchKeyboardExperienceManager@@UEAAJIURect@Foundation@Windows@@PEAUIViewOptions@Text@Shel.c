/*
 * XREFs of ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1805164C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18020B060 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x1802DA8C8 (--0ViewOptions@@QEAA@AEBU0@@Z.c)
 *     ??1?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@XZ @ 0x1803E5F70 (--1-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEAURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAPEAURect@Foundation@Windows@@QEAU234@AEAU234@@Z @ 0x18050A75C (--$_Emplace_reallocate@AEAURect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$alloc.c)
 *     ??1ViewOptions@@QEAA@XZ @ 0x18050CDFC (--1ViewOptions@@QEAA@XZ.c)
 *     ??4?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18050CEC4 (--4-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEA.c)
 *     ?_Reallocate_exactly@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18051C840 (-_Reallocate_exactly@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::Show(__int64 a1, unsigned int a2, float *a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // esi
  _BYTE *v16; // rdi
  float v17; // xmm6_4
  float v18; // xmm7_4
  ViewOptions *v19; // rax
  int v20; // eax
  char v22; // [rsp+28h] [rbp-E0h] BYREF
  char v23; // [rsp+29h] [rbp-DFh] BYREF
  char v24; // [rsp+2Ah] [rbp-DEh] BYREF
  char v25; // [rsp+2Bh] [rbp-DDh] BYREF
  unsigned int v26; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v27; // [rsp+30h] [rbp-D8h] BYREF
  ViewOptions v28; // [rsp+38h] [rbp-D0h] BYREF
  ViewOptions v29; // [rsp+3Ch] [rbp-CCh] BYREF
  ViewOptions v30; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v31; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE *v32; // [rsp+58h] [rbp-B0h]
  ViewOptions v33[14]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+98h] [rbp-70h] BYREF
  ViewOptions v35[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-50h]
  __int128 v37; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-30h]
  __int128 v39; // [rsp+E0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v27 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a4 + 48LL))(a4, &v22);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a4 + 56LL))(a4, &v23);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 6270LL;
      goto LABEL_19;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a4 + 64LL))(a4, &v24);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 6271LL;
      goto LABEL_19;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a4 + 72LL))(a4, &v25);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 6272LL;
      goto LABEL_19;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, ViewOptions *))(*(_QWORD *)a4 + 80LL))(a4, &v28);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 6273LL;
      goto LABEL_19;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, ViewOptions *))(*(_QWORD *)a4 + 88LL))(a4, &v29);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 6274LL;
      goto LABEL_19;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, ViewOptions *))(*(_QWORD *)a4 + 96LL))(a4, &v30);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 6275LL;
      goto LABEL_19;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a4 + 104LL))(a4, &v39);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 6276LL;
      goto LABEL_19;
    }
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a4 + 112LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
    v8 = v11(a4, &v27);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 6277LL;
      goto LABEL_19;
    }
    v31 = 0LL;
    v32 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 56LL))(v27, &v26);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v14 = v26;
      if ( v26 )
      {
        std::vector<Windows::Foundation::Rect>::_Reallocate_exactly(&v31, v26);
        v14 = v26;
      }
      v15 = 0;
      if ( !v14 )
      {
LABEL_31:
        v37 = 0LL;
        v38 = 0LL;
        LOBYTE(v35[0]) = v22 != 0;
        BYTE1(v35[0]) = v23 != 0;
        BYTE2(v35[0]) = v24 != 0;
        HIBYTE(v35[0]) = v25 != 0;
        v35[1] = v28;
        v35[2] = v29;
        v35[3] = v30;
        v36 = v39;
        std::vector<Windows::Foundation::Rect>::operator=(&v37, &v31);
        v17 = *a3;
        v18 = a3[1];
        v19 = ViewOptions::ViewOptions(v33, (const struct ViewOptions *)v35);
        LODWORD(v34) = (int)v17;
        DWORD1(v34) = (int)v18;
        DWORD2(v34) = (int)(float)(v17 + a3[2]);
        HIDWORD(v34) = (int)(float)(v18 + a3[3]);
        v20 = TouchKeyboardExperienceManager::OnInputAppRequestedShow(a1 - 200, a2, &v34, (__int64)v19);
        v9 = v20;
        if ( v20 >= 0 )
          v9 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x189D,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v20);
        ViewOptions::~ViewOptions(v35);
        goto LABEL_37;
      }
      v16 = (_BYTE *)*((_QWORD *)&v31 + 1);
      while ( 1 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v27 + 48LL))(v27, v15, &v34);
        v9 = v12;
        if ( v12 < 0 )
          break;
        if ( v16 == v32 )
        {
          std::vector<Windows::Foundation::Rect>::_Emplace_reallocate<Windows::Foundation::Rect &>(
            (const void **)&v31,
            v16,
            &v34);
          v16 = (_BYTE *)*((_QWORD *)&v31 + 1);
        }
        else
        {
          *(_OWORD *)v16 = v34;
          v16 += 16;
          *((_QWORD *)&v31 + 1) = v16;
        }
        if ( ++v15 >= v26 )
          goto LABEL_31;
      }
      v13 = 6286LL;
    }
    else
    {
      v13 = 6281LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_37:
    std::vector<Windows::Foundation::Rect>::~vector<Windows::Foundation::Rect>((__int64)&v31);
    goto LABEL_38;
  }
  v10 = 6269LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_38:
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v27);
  return v9;
}
