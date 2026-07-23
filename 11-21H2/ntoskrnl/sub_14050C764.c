/*
 * XREFs of sub_14050C764 @ 0x14050C764
 * Callers:
 *     sub_14050CD98 @ 0x14050CD98 (sub_14050CD98.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403A572C @ 0x1403A572C (sub_1403A572C.c)
 *     sub_1403B53D4 @ 0x1403B53D4 (sub_1403B53D4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

_UNKNOWN **__fastcall sub_14050C764(ULONG_PTR BugCheckParameter3, char a2)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v3; // r15
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r9
  signed __int64 v13; // rax
  int v14; // r8d
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  signed __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r11
  unsigned __int64 v26; // rdx
  __int64 v27; // rbp
  ULONG_PTR v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // r15
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // r10
  signed __int64 v36; // rax
  int v37; // r9d
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int64 v41; // r8
  signed __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // r15
  __int64 v48; // rbp
  __int64 v49; // r12
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // r10
  signed __int64 v54; // rax
  int v55; // r9d
  unsigned __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rcx
  unsigned __int64 v59; // r8
  signed __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rbp
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rcx
  __int64 v68; // r15
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int64 v72; // r9
  signed __int64 v73; // rax
  int v74; // r8d
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rsi
  signed __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  unsigned __int64 v82; // rax
  __int64 v83; // r11
  int v84; // eax
  signed __int32 v85[8]; // [rsp+0h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = qword_140C4E378;
  if ( qword_140C4E378 )
  {
    if ( BugCheckParameter3 == qword_140C4E378 && a2 )
    {
      v4 = sub_140303720(qword_140C4E378);
      v6 = sub_14042A5E0(v4, v5);
      if ( v6 < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v3, v6);
      if ( qword_140D01728 )
      {
        *(_QWORD *)(qword_140C4E390 + 112) = qword_140D01728;
        qword_140D01728 = 0LL;
      }
      v7 = qword_140C4E390;
      if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
      {
        v21 = sub_140303720(qword_140C4E390);
        v23 = sub_14042A5E0(v21, v22);
        v8 = *(_QWORD *)(v7 + 208);
        v19 = v23;
      }
      else
      {
        do
        {
          v8 = *(_QWORD *)(v7 + 208);
          do
          {
            v9 = *(_QWORD *)(v7 + 200);
            v10 = sub_140303720(v7);
            v12 = sub_14042A5E0(v10, v11);
            _InterlockedOr(v85, 0);
            v13 = *(_QWORD *)(v7 + 200);
          }
          while ( v9 != v13 );
        }
        while ( v8 != *(_QWORD *)(v7 + 208) );
        v14 = *(_DWORD *)(v7 + 220);
        v15 = v9 ^ v12;
        if ( _bittest64((const __int64 *)&v15, (unsigned __int8)(v14 - 1)) )
        {
          v16 = 1LL;
          if ( v14 == 64 )
            v17 = -1LL;
          else
            v17 = (1LL << v14) - 1;
          if ( v14 != 64 )
            v16 = 1LL << v14;
          v18 = v9 & v17;
          v19 = v12 | v9 ^ v18;
          if ( v12 < v18 )
            v19 += v16;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 200), v19, v13);
        }
        else
        {
          if ( v14 == 64 )
            v20 = -1LL;
          else
            v20 = (1LL << v14) - 1;
          v19 = v12 | v9 & ~v20;
        }
      }
      v24 = sub_1403A572C(v8 + v19, *(_QWORD *)(qword_140C4E390 + 192), *(_QWORD *)(qword_140C4E378 + 192));
      v26 = *(_QWORD *)(v25 + 16);
      if ( v24 >= v26 )
        v26 = v24;
      result = (_UNKNOWN **)sub_1403B53D4(v3, v26);
      if ( (int)result < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x26uLL, v3, (int)result);
      qword_140C4E378 = 0LL;
      qword_140C4E390 = v3;
    }
  }
  else
  {
    v27 = qword_140C4E390;
    if ( BugCheckParameter3 == qword_140C4E390 && !a2 )
    {
      v28 = qword_140C4E500;
      qword_140C4E378 = qword_140C4E390;
      if ( !qword_140C4E500 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x22uLL, BugCheckParameter3, 0LL);
      v29 = -1LL;
      v30 = 1LL;
      if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
      {
        v44 = sub_140303720(qword_140C4E390);
        v46 = sub_14042A5E0(v44, v45);
        v31 = *(_QWORD *)(v27 + 208);
        v42 = v46;
      }
      else
      {
        do
        {
          v31 = *(_QWORD *)(v27 + 208);
          do
          {
            v32 = *(_QWORD *)(v27 + 200);
            v33 = sub_140303720(v27);
            v35 = sub_14042A5E0(v33, v34);
            _InterlockedOr(v85, 0);
            v36 = *(_QWORD *)(v27 + 200);
          }
          while ( v32 != v36 );
        }
        while ( v31 != *(_QWORD *)(v27 + 208) );
        v37 = *(_DWORD *)(v27 + 220);
        v38 = v32 ^ v35;
        if ( _bittest64((const __int64 *)&v38, (unsigned __int8)(v37 - 1)) )
        {
          if ( v37 == 64 )
            v39 = -1LL;
          else
            v39 = (1LL << v37) - 1;
          v40 = 1LL;
          if ( v37 != 64 )
            v40 = 1LL << v37;
          v41 = v32 & v39;
          v42 = v35 | v32 ^ v41;
          if ( v35 < v41 )
            v42 += v40;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 200), v42, v36);
        }
        else
        {
          if ( v37 == 64 )
            v43 = -1LL;
          else
            v43 = (1LL << v37) - 1;
          v42 = v35 | v32 & ~v43;
        }
      }
      v47 = v42 + v31;
      v48 = qword_140C4E500;
      *(_QWORD *)(qword_140C4E390 + 16) = v47;
      if ( *(_DWORD *)(v48 + 220) == 64 )
      {
        v62 = sub_140303720(v48);
        v64 = sub_14042A5E0(v62, v63);
        v49 = *(_QWORD *)(v48 + 208);
        v60 = v64;
      }
      else
      {
        do
        {
          v49 = *(_QWORD *)(v48 + 208);
          do
          {
            v50 = *(_QWORD *)(v48 + 200);
            v51 = sub_140303720(v48);
            v53 = sub_14042A5E0(v51, v52);
            _InterlockedOr(v85, 0);
            v54 = *(_QWORD *)(v48 + 200);
          }
          while ( v50 != v54 );
        }
        while ( v49 != *(_QWORD *)(v48 + 208) );
        v55 = *(_DWORD *)(v48 + 220);
        v56 = v50 ^ v53;
        if ( _bittest64((const __int64 *)&v56, (unsigned __int8)(v55 - 1)) )
        {
          if ( v55 == 64 )
            v57 = -1LL;
          else
            v57 = (1LL << v55) - 1;
          v58 = 1LL;
          if ( v55 != 64 )
            v58 = 1LL << v55;
          v59 = v50 & v57;
          v60 = v53 | v50 ^ v59;
          if ( v53 < v59 )
            v60 += v58;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v48 + 200), v60, v54);
        }
        else
        {
          if ( v55 == 64 )
            v61 = -1LL;
          else
            v61 = (1LL << v55) - 1;
          v60 = v53 | v50 & ~v61;
        }
      }
      v65 = qword_140C4E390;
      v66 = sub_1403A572C(v49 + v60, *(_QWORD *)(qword_140C4E500 + 192), *(_QWORD *)(qword_140C4E390 + 192));
      v67 = v47 - v66;
      if ( v47 <= v66 )
        v67 = v66 - v47;
      if ( v67 > qword_140C4E490 )
      {
        ++dword_140D01730;
        if ( *(_DWORD *)(v65 + 220) == 64 )
        {
          v79 = sub_140303720(v65);
          v81 = sub_14042A5E0(v79, v80);
          v68 = *(_QWORD *)(v65 + 208);
          v77 = v81;
        }
        else
        {
          do
          {
            v68 = *(_QWORD *)(v65 + 208);
            do
            {
              v69 = *(_QWORD *)(v65 + 200);
              v70 = sub_140303720(v65);
              v72 = sub_14042A5E0(v70, v71);
              _InterlockedOr(v85, 0);
              v73 = *(_QWORD *)(v65 + 200);
            }
            while ( v69 != v73 );
          }
          while ( v68 != *(_QWORD *)(v65 + 208) );
          v74 = *(_DWORD *)(v65 + 220);
          v75 = v69 ^ v72;
          if ( _bittest64((const __int64 *)&v75, (unsigned __int8)(v74 - 1)) )
          {
            if ( v74 != 64 )
            {
              v29 = (1LL << v74) - 1;
              v30 = 1LL << v74;
            }
            v76 = v69 & v29;
            v77 = v72 | v69 ^ v76;
            if ( v72 < v76 )
              v77 += v30;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v65 + 200), v77, v73);
          }
          else
          {
            if ( v74 == 64 )
              v78 = -1LL;
            else
              v78 = (1LL << v74) - 1;
            v77 = v72 | v69 & ~v78;
          }
        }
        v82 = sub_1403A572C(v68 + v77, *(_QWORD *)(qword_140C4E390 + 192), *(_QWORD *)(qword_140C4E500 + 192));
        v84 = sub_1403B53D4(v83, v82);
        if ( v84 < 0 )
          KeBugCheckEx(0x5Cu, 0x113uLL, 0x26uLL, qword_140C4E500, v84);
      }
      qword_140D01728 = *(_QWORD *)(v28 + 112);
      *(_QWORD *)(v28 + 112) = sub_14050C5B0;
      qword_140C4E378 = qword_140C4E390;
      result = (_UNKNOWN **)qword_140C4E500;
      qword_140C4E390 = qword_140C4E500;
    }
  }
  return result;
}
