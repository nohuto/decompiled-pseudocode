/*
 * XREFs of sub_180064450 @ 0x180064450
 * Callers:
 *     sub_18009E1E0 @ 0x18009E1E0 (sub_18009E1E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800115E4 @ 0x1800115E4 (sub_1800115E4.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DCD4 @ 0x18001DCD4 (sub_18001DCD4.c)
 *     sub_1800262C4 @ 0x1800262C4 (sub_1800262C4.c)
 *     sub_180028460 @ 0x180028460 (sub_180028460.c)
 *     sub_18002858C @ 0x18002858C (sub_18002858C.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_180031DF4 @ 0x180031DF4 (sub_180031DF4.c)
 *     sub_180032F84 @ 0x180032F84 (sub_180032F84.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180037398 @ 0x180037398 (sub_180037398.c)
 *     sub_18003D898 @ 0x18003D898 (sub_18003D898.c)
 *     sub_18003D930 @ 0x18003D930 (sub_18003D930.c)
 *     sub_180047028 @ 0x180047028 (sub_180047028.c)
 *     sub_18005470C @ 0x18005470C (sub_18005470C.c)
 *     sub_180057684 @ 0x180057684 (sub_180057684.c)
 *     sub_180057794 @ 0x180057794 (sub_180057794.c)
 *     sub_180063ABC @ 0x180063ABC (sub_180063ABC.c)
 *     sub_180063BE4 @ 0x180063BE4 (sub_180063BE4.c)
 *     sub_180065080 @ 0x180065080 (sub_180065080.c)
 *     sub_180065B00 @ 0x180065B00 (sub_180065B00.c)
 *     sub_1800690B8 @ 0x1800690B8 (sub_1800690B8.c)
 *     sub_18007BBA8 @ 0x18007BBA8 (sub_18007BBA8.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 *     sub_1800B4528 @ 0x1800B4528 (sub_1800B4528.c)
 *     sub_1800B4684 @ 0x1800B4684 (sub_1800B4684.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=21
_UNKNOWN **__fastcall sub_180064450(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _UNKNOWN **result; // rax
  __int64 *v5; // r15
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 *v11; // r12
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int128 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int64 v25; // xmm6_8
  __int64 v26; // rdx
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 *v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // rsi
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _BYTE *v36; // rcx
  _QWORD *v37; // rax
  __int64 **v38; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v41; // rcx
  unsigned __int64 v42; // r13
  unsigned __int64 v43; // rsi
  __int64 v44; // rbx
  __int64 v45; // r14
  __int64 v46; // r12
  __int64 v47; // r15
  __int64 v48; // rcx
  __int64 *v49; // rax
  __int64 v50; // rax
  __int128 *v51; // rax
  __int64 v52; // [rsp+48h] [rbp-C0h]
  __int128 v53; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v54; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v55[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v56; // [rsp+80h] [rbp-88h]
  unsigned __int64 v57; // [rsp+90h] [rbp-78h]
  unsigned __int64 v58; // [rsp+98h] [rbp-70h]
  __int128 v59; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v60; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v61; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v62; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v63; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v64; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v65; // [rsp+108h] [rbp+0h]
  __int128 v66; // [rsp+118h] [rbp+10h] BYREF
  __int128 v67; // [rsp+128h] [rbp+20h] BYREF
  __int128 v68; // [rsp+138h] [rbp+30h] BYREF
  __int64 v69[2]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v70; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v71[2]; // [rsp+168h] [rbp+60h] BYREF
  __int128 v72; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v73[2]; // [rsp+188h] [rbp+80h] BYREF
  char v74[8]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v75; // [rsp+1A0h] [rbp+98h]
  _BYTE v76[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v77[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v78[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v79; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v80[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v81[3]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v82[16]; // [rsp+210h] [rbp+108h] BYREF
  __int64 v83[4]; // [rsp+220h] [rbp+118h] BYREF
  __int64 v84[4]; // [rsp+240h] [rbp+138h] BYREF
  __int64 v85[3]; // [rsp+260h] [rbp+158h] BYREF
  char *v86[3]; // [rsp+278h] [rbp+170h] BYREF
  unsigned __int64 v87; // [rsp+290h] [rbp+188h]
  _QWORD v88[4]; // [rsp+298h] [rbp+190h] BYREF
  _UNKNOWN *retaddr; // [rsp+310h] [rbp+208h] BYREF

  result = &retaddr;
  v5 = a2;
  *(_QWORD *)&v53 = a2;
  if ( *(_BYTE *)(a1 + 72) )
  {
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
    if ( (_BYTE)result )
    {
      sub_18002C7C4(*v5 + 24);
      v54 = 0LL;
      v7 = a3[1];
      if ( v7 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
        v7 = a3[1];
      }
      *(_QWORD *)&v54 = *a3;
      *((_QWORD *)&v54 + 1) = v7;
      if ( !(_QWORD)v54 )
      {
        v8 = sub_18002858C(*v5, v73, 0);
        v9 = *v8;
        v10 = v8[1];
        *v8 = 0LL;
        v8[1] = 0LL;
        v70 = v54;
        *(_QWORD *)&v54 = v9;
        *((_QWORD *)&v54 + 1) = v10;
        sub_180010910((__int64)&v70);
        sub_180010910((__int64)v73);
      }
      sub_180063BE4(a1, (__int64)v55, v5);
      v11 = (__int64 *)sub_180028460(*v5);
      v65 = v11;
      v12 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v54 + 184LL))(v54);
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v54 + 200LL))(v54, &v59);
      v13 = v55[0];
      v63 = 0LL;
      v14 = v12[1];
      if ( v14 )
      {
        *(_QWORD *)&v63 = *v12;
        *((_QWORD *)&v63 + 1) = v14;
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 12));
      }
      sub_18003D930(v13, (__int64 *)&v63);
      v15 = v55[0];
      v66 = 0LL;
      if ( *((_QWORD *)&v59 + 1) )
      {
        v66 = v59;
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 12LL));
      }
      sub_18003D898(v15, (__int64 *)&v66);
      v16 = *v11;
      v64 = 0LL;
      v17 = v12[1];
      if ( v17 )
      {
        *(_QWORD *)&v64 = *v12;
        *((_QWORD *)&v64 + 1) = v17;
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 12));
      }
      sub_18003D930(v16, (__int64 *)&v64);
      v18 = *v11;
      v67 = 0LL;
      if ( *((_QWORD *)&v59 + 1) )
      {
        v67 = v59;
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 12LL));
      }
      sub_18003D898(v18, (__int64 *)&v67);
      v19 = *((_QWORD *)&v59 + 1);
      if ( *((_QWORD *)&v59 + 1)
        && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 12LL), 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      }
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v5 + 104LL))(*v5, v55);
      sub_180065B00(a1, &v62);
      sub_18001DCD4((__int64 *)v86, (_QWORD *)(a1 + 24), " scene");
      sub_1800B4528(v80, v55, v86);
      v20 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v54 + 200LL))(v54, v74);
      sub_180031DF4(v81, v20, (__int64)v86);
      v21 = v75;
      if ( v75 && _InterlockedExchangeAdd((volatile signed __int32 *)(v75 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 192LL))(a1, v5, a3);
      v60 = 0LL;
      v22 = *(_QWORD *)(a1 + 64);
      if ( v22 )
      {
        v23 = *(_DWORD *)(v22 + 8);
        while ( v23 )
        {
          v24 = v23;
          v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 8), v23 + 1, v23);
          if ( v24 == v23 )
          {
            v60 = *(_OWORD *)(a1 + 56);
            break;
          }
        }
      }
      v25 = v60;
      v79 = v60;
      v60 = 0LL;
      sub_180010910((__int64)&v60);
      v61 = 0LL;
      v26 = *(_QWORD *)(v25 + 80);
      if ( v26 )
      {
        v27 = *(_DWORD *)(v26 + 8);
        while ( v27 )
        {
          v28 = v27;
          v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 8), v27 + 1, v27);
          if ( v28 == v27 )
          {
            v61 = *(_OWORD *)(v25 + 72);
            break;
          }
        }
      }
      v72 = v61;
      v61 = 0LL;
      sub_180010910((__int64)&v61);
      v29 = sub_18008E70C(a1);
      v30 = sub_180037388(v29);
      sub_180057794(v30, v69);
      v31 = *(__int64 **)v69[0];
      while ( !*((_BYTE *)v31 + 25) )
      {
        v32 = sub_18001875C(v83, (__int64)(v31 + 4));
        sub_180057684(v30, v71, (char **)v32);
        v33 = v71[0];
        v34 = (_QWORD *)sub_1800690B8(v71[0], v76);
        (*(void (__fastcall **)(_QWORD, __int128 *, __int128 *))(*(_QWORD *)*v34 + 32LL))(*v34, &v62, &v54);
        sub_180010910((__int64)v76);
        if ( ((*(_DWORD *)(a1 + 316) - 2) & 0xFFFFFFFD) != 0 )
        {
          v35 = (_QWORD *)sub_1800690B8(v33, v77);
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v35 + 96LL))(*v35, *v5);
          v36 = v77;
        }
        else
        {
          v37 = (_QWORD *)sub_1800690B8(v33, v78);
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v37 + 96LL))(*v37, *v5);
          v36 = v78;
        }
        sub_180010910((__int64)v36);
        sub_180010910((__int64)v71);
        v38 = (__int64 **)v31[2];
        if ( *((_BYTE *)v38 + 25) )
        {
          for ( i = (__int64 *)v31[1]; !*((_BYTE *)i + 25) && v31 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v31 = i;
          v31 = i;
        }
        else
        {
          v31 = (__int64 *)v31[2];
          for ( j = *v38; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v31 = j;
        }
      }
      v41 = *(int *)(a1 + 168);
      v56 = v41;
      if ( *(_DWORD *)(a1 + 176) == -1 )
        v42 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 4) - 1;
      else
        v42 = *(int *)(a1 + 176);
      v57 = v42;
      v43 = 0LL;
      v58 = 0LL;
      v44 = *(_QWORD *)(a1 + 104);
      if ( 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 112) - v44) >> 4) )
      {
        v45 = 0LL;
        do
        {
          if ( *(_BYTE *)(v44 + v45) )
          {
            if ( v43 != v41 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v5 + 96LL))(*v5, 9LL) )
            {
              sub_180063ABC(a1, v43);
              v46 = *(_QWORD *)(a1 + 416);
              if ( v46 != *(_QWORD *)(a1 + 424) )
              {
                v47 = *(_QWORD *)(a1 + 424);
                do
                {
                  *(_OWORD *)(a1 + 520) = *(_OWORD *)(a1 + 488);
                  *(_OWORD *)(a1 + 504) = *(_OWORD *)(a1 + 472);
                  sub_18007BBA8(a1 + 504, *(_QWORD *)(v44 + v45 + 8), 0LL);
                  sub_18007BBA8(v48, *(_QWORD *)(v44 + v45 + 16), 1LL);
                  v52 = *(_QWORD *)(v44 + v45 + 24);
                  v68 = 0LL;
                  if ( *((_QWORD *)&v62 + 1) )
                    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL));
                  v68 = v62;
                  v49 = sub_1800129F4(v84, v46);
                  sub_180047028(v72, (__int64)v49, (__int64)v55, (__int64 *)&v68, (_QWORD *)(v44 + v45 + 32), v52);
                  sub_180010910((__int64)&v68);
                  v46 += 32LL;
                }
                while ( v46 != v47 );
                v43 = v58;
                v5 = (__int64 *)v53;
                v42 = v57;
              }
              if ( (*(_BYTE *)(a1 + 440) & 1) != 0 && v42 == v43 )
                sub_180065080(a1, v55);
            }
            v41 = v56;
          }
          v58 = ++v43;
          v45 += 48LL;
          v44 = *(_QWORD *)(a1 + 104);
        }
        while ( v43 < 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 112) - v44) >> 4) );
        v11 = v65;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1);
      sub_18005470C(v69, (__int64)v69);
      sub_180010910((__int64)&v72);
      sub_180010910((__int64)&v79);
      sub_180032F84(v81);
      sub_1800B4684(v80);
      if ( v87 >= 0x10 )
        sub_180010884(v86[0], v87 + 1);
      if ( (*(_DWORD *)(a1 + 440) & 0x10000) != 0 )
      {
        sub_1800113D0(v88, "Symbols");
        sub_1800B4528(v82, v55, v88);
        v50 = sub_1800262C4((__int64)&v54);
        v51 = (__int128 *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v50 + 200LL))(v50, &v53);
        sub_180031DF4(v85, v51, (__int64)v88);
        sub_1800115E4((__int64)&v53);
        sub_180037398();
      }
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v5 + 112LL))(*v5, v55);
      v53 = 0LL;
      sub_18003D930(v55[0], (__int64 *)&v53);
      v53 = 0LL;
      sub_18003D898(v55[0], (__int64 *)&v53);
      v53 = 0LL;
      sub_18003D930(*v11, (__int64 *)&v53);
      v53 = 0LL;
      sub_18003D898(*v11, (__int64 *)&v53);
      sub_180010910((__int64)&v62);
      sub_180010910((__int64)v55);
      return (_UNKNOWN **)sub_180010910((__int64)&v54);
    }
  }
  return result;
}
