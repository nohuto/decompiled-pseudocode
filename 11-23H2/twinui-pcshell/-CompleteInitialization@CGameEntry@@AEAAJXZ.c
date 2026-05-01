/*
 * XREFs of ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x180013E70
 * Callers:
 *     ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180013CC0 (-GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x180740E48 (-RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?VerifyAvailable@CGameEntry@@AEAAJK@Z @ 0x180052AE4 (-VerifyAvailable@CGameEntry@@AEAAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall CGameEntry::CompleteInitialization(CGameEntry *this)
{
  int v1; // r15d
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  unsigned __int64 v6; // rcx
  bool v7; // cf
  unsigned __int16 v8; // cx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // edx
  unsigned __int16 *v12; // rdi
  unsigned __int16 v13; // cx
  unsigned int v14; // eax
  _WORD *v15; // rsi
  unsigned __int16 v16; // cx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  void *v20; // rax
  void *v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // ebp
  __int64 v24; // rdi
  int v25; // eax
  int v26; // eax
  _WORD *v27; // r14
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // ecx
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // ecx
  unsigned __int64 v36; // rax
  void *v37; // rax
  void *v38; // rcx
  unsigned int v39; // ebp
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  unsigned int v45; // ecx
  __int64 v46; // rdx
  int v47; // ecx
  unsigned __int16 *v48; // r15
  int v49; // ecx
  unsigned int v50; // edi
  int v51; // eax
  unsigned int v52; // r12d
  unsigned int v53; // edi
  int v54; // eax
  unsigned int v55; // edi
  int v56; // eax
  unsigned int v57; // r12d
  __int64 v58; // rdx
  __int64 v59; // rdx
  unsigned int v60; // r15d
  int v61; // eax
  unsigned int v62; // r15d
  int v63; // eax
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r9
  __int64 v69; // rdx
  wil::details::in1diag3 *v70; // rcx
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rdx
  unsigned int v75; // r14d
  int v76; // eax
  unsigned int v77; // esi
  int v78; // eax
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  int v89; // [rsp+20h] [rbp-28h]
  int v90; // [rsp+20h] [rbp-28h]
  int v91; // [rsp+20h] [rbp-28h]
  int v92; // [rsp+20h] [rbp-28h]
  int v93; // [rsp+20h] [rbp-28h]
  int v94; // [rsp+20h] [rbp-28h]
  int v95; // [rsp+20h] [rbp-28h]
  int v96; // [rsp+20h] [rbp-28h]
  int v97; // [rsp+20h] [rbp-28h]
  int v98; // [rsp+20h] [rbp-28h]
  int v99; // [rsp+20h] [rbp-28h]
  int v100; // [rsp+20h] [rbp-28h]
  int v101; // [rsp+20h] [rbp-28h]
  int v102; // [rsp+20h] [rbp-28h]
  int v103; // [rsp+20h] [rbp-28h]
  int v104; // [rsp+20h] [rbp-28h]
  int v105; // [rsp+20h] [rbp-28h]
  int v106; // [rsp+20h] [rbp-28h]
  int v107; // [rsp+20h] [rbp-28h]
  int v108; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_DWORD *)this + 8) < 4u )
  {
    v57 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v89);
    v58 = 1457LL;
    goto LABEL_117;
  }
  v3 = **((_DWORD **)this + 2);
  *((_DWORD *)this + 8) -= 4;
  v4 = *((_DWORD *)this + 8);
  *((_QWORD *)this + 2) += 4LL;
  *((_DWORD *)this + 9) = v3;
  v5 = v4 & 3;
  if ( !v5 )
    goto LABEL_3;
  v55 = 4 - v5;
  v56 = CGameEntry::VerifyAvailable(this, 4 - v5);
  v57 = v56;
  if ( v56 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x593,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v56,
      v89);
    v58 = 1461LL;
LABEL_117:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v58,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v57,
      v91);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x536,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v57,
      v108);
    return v57;
  }
  *((_DWORD *)this + 8) &= 0xFFFFFFFC;
  *((_QWORD *)this + 2) += v55;
LABEL_3:
  v6 = *((unsigned int *)this + 9);
  if ( v6 > (unsigned __int64)*((unsigned int *)this + 8) + 4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53A,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v89);
    return 2147483659LL;
  }
  if ( (unsigned int)v6 < 4 )
  {
    *((_DWORD *)this + 8) = -1;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53E,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070216LL,
      v89);
    return 2147942934LL;
  }
  *((_DWORD *)this + 8) = v6 - 4;
  if ( (unsigned int)(v6 - 4) < 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v89);
    v88 = 1446LL;
    goto LABEL_113;
  }
  v7 = *((_DWORD *)this + 8) < 2u;
  v8 = **((_WORD **)this + 2);
  *((_WORD *)this + 24) = v8;
  if ( v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v89);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x589,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v105);
    v88 = 1450LL;
LABEL_113:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v88,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v106);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x542,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v107);
    return 2147483659LL;
  }
  *((_QWORD *)this + 2) += 2LL;
  *((_DWORD *)this + 8) -= 2;
  if ( (unsigned int)v8 > *((_DWORD *)this + 8) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v89);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x544,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v104);
    return 2147483659LL;
  }
  *((_QWORD *)this + 5) = *((_QWORD *)this + 2);
  if ( (unsigned int)v8 > *((_DWORD *)this + 8) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v89);
    v59 = 1417LL;
    goto LABEL_109;
  }
  v9 = *((_DWORD *)this + 8);
  *((_QWORD *)this + 2) += v8;
  v10 = v9 - v8;
  *((_DWORD *)this + 8) = v10;
  v11 = v10 & 3;
  if ( (v10 & 3) == 0 )
    goto LABEL_10;
  if ( 4 - v11 > v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v89);
    v59 = 1427LL;
LABEL_109:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v59,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v92);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x548,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v103);
    return 2147483659LL;
  }
  *((_DWORD *)this + 8) &= 0xFFFFFFFC;
  *((_QWORD *)this + 2) += (unsigned int)(4 - v11);
LABEL_10:
  if ( *((_DWORD *)this + 8) < 2u )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v89);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A6,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v101);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54A,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v102);
    return 2147483659LL;
  }
  v12 = (unsigned __int16 *)((char *)this + 50);
  v13 = **((_WORD **)this + 2);
  *((_DWORD *)this + 8) -= 2;
  *((_QWORD *)this + 2) += 2LL;
  *((_WORD *)this + 25) = v13;
  v14 = *((_DWORD *)this + 8);
  if ( 12 * (unsigned int)v13 > v14 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54C,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070057LL,
      v89);
    return 2147942487LL;
  }
  if ( v14 < 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v89);
    v87 = 1446LL;
    goto LABEL_105;
  }
  v7 = *((_DWORD *)this + 8) < 2u;
  v15 = (_WORD *)((char *)this + 52);
  v16 = **((_WORD **)this + 2);
  *((_WORD *)this + 26) = v16;
  if ( v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v89);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x589,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v98);
    v87 = 1450LL;
LABEL_105:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v87,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v99);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54E,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v100);
    return 2147483659LL;
  }
  *((_QWORD *)this + 2) += 2LL;
  *((_DWORD *)this + 8) -= 2;
  if ( 4 * (unsigned int)v16 > *((_DWORD *)this + 8) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x550,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070057LL,
      v89);
    return 2147942487LL;
  }
  else
  {
    v17 = *v12;
    v90 = v1;
    if ( (_WORD)v17 )
    {
      v36 = 16 * v17;
      if ( !is_mul_ok(*v12, 0x10uLL) )
        v36 = -1LL;
      v37 = operator new[](v36, (const struct std::nothrow_t *)&std::nothrow);
      v38 = (void *)*((_QWORD *)this + 7);
      *((_QWORD *)this + 7) = v37;
      if ( v38 )
        operator delete[](v38);
      if ( !*((_QWORD *)this + 7) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x556,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8007000ELL,
          v1);
        return 2147942414LL;
      }
      v39 = 0;
      if ( *v12 )
      {
        while ( *((_DWORD *)this + 8) >= 4u )
        {
          *(_DWORD *)(*((_QWORD *)this + 7) + 16LL * v39) = **((_DWORD **)this + 2);
          if ( *((_DWORD *)this + 8) < 4u )
          {
            v52 = -2147483637;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x59F,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)0x8000000BLL,
              v90);
            v64 = 2147483659LL;
            v65 = 1417LL;
LABEL_80:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v65,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)v64,
              v90);
            v74 = 1461LL;
LABEL_82:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v74,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)v52,
              v95);
            v70 = retaddr;
            v71 = v52;
            v72 = 1370LL;
            goto LABEL_73;
          }
          *((_DWORD *)this + 8) -= 4;
          v40 = *((_DWORD *)this + 8);
          *((_QWORD *)this + 2) += 4LL;
          v41 = v40 & 3;
          if ( v41 )
          {
            v60 = 4 - v41;
            v61 = CGameEntry::VerifyAvailable(this, 4 - v41);
            v52 = v61;
            if ( v61 < 0 )
            {
              v64 = (unsigned int)v61;
              v65 = 1427LL;
              goto LABEL_80;
            }
            *((_DWORD *)this + 8) &= 0xFFFFFFFC;
            *((_QWORD *)this + 2) += v60;
          }
          if ( *((_DWORD *)this + 8) < 4u )
          {
            v52 = -2147483637;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x59F,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)0x8000000BLL,
              v90);
            v73 = 1457LL;
            goto LABEL_78;
          }
          *(_DWORD *)(*((_QWORD *)this + 7) + 16LL * v39 + 4) = **((_DWORD **)this + 2);
          if ( *((_DWORD *)this + 8) < 4u )
          {
            v52 = -2147483637;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x59F,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)0x8000000BLL,
              v90);
            v66 = 2147483659LL;
            v67 = 1417LL;
LABEL_76:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v67,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)v66,
              v90);
            v73 = 1461LL;
LABEL_78:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v73,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)v52,
              v94);
            v70 = retaddr;
            v71 = v52;
            v72 = 1372LL;
            goto LABEL_73;
          }
          *((_DWORD *)this + 8) -= 4;
          v42 = *((_DWORD *)this + 8);
          *((_QWORD *)this + 2) += 4LL;
          v43 = v42 & 3;
          if ( v43 )
          {
            v62 = 4 - v43;
            v63 = CGameEntry::VerifyAvailable(this, 4 - v43);
            v52 = v63;
            if ( v63 < 0 )
            {
              v66 = (unsigned int)v63;
              v67 = 1427LL;
              goto LABEL_76;
            }
            *((_DWORD *)this + 8) &= 0xFFFFFFFC;
            *((_QWORD *)this + 2) += v62;
          }
          v44 = *((_QWORD *)this + 7);
          if ( *(_DWORD *)(v44 + 16LL * v39 + 4) > *((_DWORD *)this + 8) )
          {
            v52 = -2147483637;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x59F,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)0x8000000BLL,
              v90);
            v70 = retaddr;
            v71 = 2147483659LL;
            v72 = 1374LL;
            goto LABEL_73;
          }
          *(_QWORD *)(v44 + 16LL * v39 + 8) = *((_QWORD *)this + 2);
          v45 = *((_DWORD *)this + 8);
          v46 = *(unsigned int *)(*((_QWORD *)this + 7) + 16LL * v39 + 4);
          if ( (unsigned int)v46 > v45 )
          {
            v52 = -2147483637;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x59F,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)0x8000000BLL,
              v90);
            v68 = 2147483659LL;
            v69 = 1417LL;
            goto LABEL_72;
          }
          *((_QWORD *)this + 2) += v46;
          v47 = v45 - v46;
          *((_DWORD *)this + 8) = v47;
          v48 = v12;
          v49 = v47 & 3;
          if ( v49 )
          {
            v50 = 4 - v49;
            v51 = CGameEntry::VerifyAvailable(this, 4 - v49);
            v52 = v51;
            if ( v51 < 0 )
            {
              v68 = (unsigned int)v51;
              v69 = 1427LL;
LABEL_72:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v69,
                (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                (const char *)v68,
                v90);
              v70 = retaddr;
              v71 = v52;
              v72 = 1378LL;
              goto LABEL_73;
            }
            *((_DWORD *)this + 8) &= 0xFFFFFFFC;
            *((_QWORD *)this + 2) += v50;
          }
          ++v39;
          v12 = v48;
          if ( v39 >= *v48 )
            goto LABEL_16;
        }
        v52 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          v90);
        v74 = 1457LL;
        goto LABEL_82;
      }
    }
LABEL_16:
    v18 = (unsigned __int16)*v15;
    if ( !(_WORD)v18 )
      return 0LL;
    v19 = 16 * v18;
    if ( !is_mul_ok(v18, 0x10uLL) )
      v19 = -1LL;
    v20 = operator new[](v19, (const struct std::nothrow_t *)&std::nothrow);
    v21 = (void *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = v20;
    if ( v21 )
      operator delete[](v21);
    v22 = *((_QWORD *)this + 8);
    if ( !v22 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56A,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL,
        v90);
      return 2147942414LL;
    }
    v23 = 0;
    if ( !*v15 )
      return 0LL;
    while ( 1 )
    {
      v24 = 2LL * v23;
      *(_DWORD *)(v22 + 8 * v24 + 4) = 0;
      *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v24 + 8) = 0LL;
      if ( *((_DWORD *)this + 8) < 4u )
      {
        v52 = -2147483637;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59F,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x8000000BLL,
          v90);
        v86 = 1457LL;
        goto LABEL_101;
      }
      *(_DWORD *)(*((_QWORD *)this + 8) + 16LL * v23) = **((_DWORD **)this + 2);
      if ( *((_DWORD *)this + 8) < 4u )
        break;
      *((_DWORD *)this + 8) -= 4;
      v25 = *((_DWORD *)this + 8);
      *((_QWORD *)this + 2) += 4LL;
      v26 = v25 & 3;
      if ( v26 )
      {
        v75 = 4 - v26;
        v76 = CGameEntry::VerifyAvailable(this, 4 - v26);
        v52 = v76;
        if ( v76 < 0 )
        {
          v79 = (unsigned int)v76;
          v80 = 1427LL;
          goto LABEL_99;
        }
        *((_DWORD *)this + 8) &= 0xFFFFFFFC;
        *((_QWORD *)this + 2) += v75;
      }
      v22 = *((_QWORD *)this + 8);
      v27 = v15;
      if ( (*(_DWORD *)(v22 + 16LL * v23) & 0x10000000) == 0 )
      {
        if ( *((_DWORD *)this + 8) < 4u )
        {
          v52 = -2147483637;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59F,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            v90);
          v85 = 1457LL;
LABEL_97:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v85,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)v52,
            v96);
          v70 = retaddr;
          v71 = v52;
          v72 = 1399LL;
          goto LABEL_73;
        }
        *(_DWORD *)(v22 + 16LL * v23 + 4) = **((_DWORD **)this + 2);
        if ( *((_DWORD *)this + 8) < 4u )
        {
          v52 = -2147483637;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59F,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            v90);
          v81 = 2147483659LL;
          v82 = 1417LL;
LABEL_95:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v82,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)v81,
            v90);
          v85 = 1461LL;
          goto LABEL_97;
        }
        *((_DWORD *)this + 8) -= 4;
        v28 = *((_DWORD *)this + 8);
        *((_QWORD *)this + 2) += 4LL;
        v29 = v28 & 3;
        if ( v29 )
        {
          v77 = 4 - v29;
          v78 = CGameEntry::VerifyAvailable(this, 4 - v29);
          v52 = v78;
          if ( v78 < 0 )
          {
            v81 = (unsigned int)v78;
            v82 = 1427LL;
            goto LABEL_95;
          }
          *((_DWORD *)this + 8) &= 0xFFFFFFFC;
          *((_QWORD *)this + 2) += v77;
        }
        v30 = *((_QWORD *)this + 8);
        if ( *(_DWORD *)(v30 + 16LL * v23 + 4) > *((_DWORD *)this + 8) )
        {
          v52 = -2147483637;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59F,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            v90);
          v70 = retaddr;
          v71 = 2147483659LL;
          v72 = 1401LL;
          goto LABEL_73;
        }
        *(_QWORD *)(v30 + 16LL * v23 + 8) = *((_QWORD *)this + 2);
        v31 = *((_DWORD *)this + 8);
        v32 = *(unsigned int *)(*((_QWORD *)this + 8) + 16LL * v23 + 4);
        if ( (unsigned int)v32 > v31 )
        {
          v52 = -2147483637;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59F,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000000BLL,
            v90);
          v83 = 2147483659LL;
          v84 = 1417LL;
          goto LABEL_92;
        }
        *((_QWORD *)this + 2) += v32;
        v33 = v31 - v32;
        *((_DWORD *)this + 8) = v33;
        v34 = v33 & 3;
        if ( v34 )
        {
          v53 = 4 - v34;
          v54 = CGameEntry::VerifyAvailable(this, 4 - v34);
          v52 = v54;
          if ( v54 < 0 )
          {
            v83 = (unsigned int)v54;
            v84 = 1427LL;
LABEL_92:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v84,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)v83,
              v90);
            v70 = retaddr;
            v71 = v52;
            v72 = 1405LL;
            goto LABEL_73;
          }
          *((_DWORD *)this + 8) &= 0xFFFFFFFC;
          *((_QWORD *)this + 2) += v53;
        }
        v22 = *((_QWORD *)this + 8);
        v15 = v27;
      }
      if ( ++v23 >= (unsigned __int16)*v15 )
        return 0LL;
    }
    v52 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59F,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL,
      v90);
    v79 = 2147483659LL;
    v80 = 1417LL;
LABEL_99:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v80,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v79,
      v90);
    v86 = 1461LL;
LABEL_101:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v86,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v52,
      v97);
    v70 = retaddr;
    v71 = v52;
    v72 = 1393LL;
LABEL_73:
    wil::details::in1diag3::Return_Hr(
      v70,
      (void *)v72,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v71,
      v93);
    return v52;
  }
}
