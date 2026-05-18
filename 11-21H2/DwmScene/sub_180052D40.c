/*
 * XREFs of sub_180052D40 @ 0x180052D40
 * Callers:
 *     sub_1800A8370 @ 0x1800A8370 (sub_1800A8370.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18001DAD8 @ 0x18001DAD8 (sub_18001DAD8.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DCD4 @ 0x18001DCD4 (sub_18001DCD4.c)
 *     sub_18003D56C @ 0x18003D56C (sub_18003D56C.c)
 *     sub_18003D868 @ 0x18003D868 (sub_18003D868.c)
 *     sub_18003DB00 @ 0x18003DB00 (sub_18003DB00.c)
 *     sub_180040BC4 @ 0x180040BC4 (sub_180040BC4.c)
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 *     sub_180043B44 @ 0x180043B44 (sub_180043B44.c)
 *     sub_18004871C @ 0x18004871C (sub_18004871C.c)
 *     sub_1800491C8 @ 0x1800491C8 (sub_1800491C8.c)
 *     sub_18004EE74 @ 0x18004EE74 (sub_18004EE74.c)
 *     sub_1800520D8 @ 0x1800520D8 (sub_1800520D8.c)
 *     sub_18005211C @ 0x18005211C (sub_18005211C.c)
 *     sub_1800521F8 @ 0x1800521F8 (sub_1800521F8.c)
 *     sub_18005232C @ 0x18005232C (sub_18005232C.c)
 *     sub_1800532F0 @ 0x1800532F0 (sub_1800532F0.c)
 *     sub_1800690B8 @ 0x1800690B8 (sub_1800690B8.c)
 *     sub_180091F9C @ 0x180091F9C (sub_180091F9C.c)
 *     sub_1800B3008 @ 0x1800B3008 (sub_1800B3008.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_180052D40(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  int v9; // ecx
  _QWORD *v10; // r8
  __int64 v11; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // rbx
  __int64 *v17; // rax
  void *v18; // rax
  __int64 v19; // rax
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  __m128 **v24; // rax
  double *v25; // rax
  char v26; // r14
  unsigned __int64 v27; // r15
  __int64 v28; // r12
  __int64 v29; // r8
  Concurrency::details::ResourceManager *v30; // rbx
  __int64 v31; // r14
  int v32; // ecx
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // r13
  bool v38; // al
  _QWORD *v39; // rcx
  unsigned int v40; // ebx
  _QWORD *v41; // rcx
  _QWORD *v42; // rcx
  _QWORD *v43; // rcx
  signed __int32 v44; // eax
  signed __int32 v45; // ett
  __int64 result; // rax
  char v47; // [rsp+30h] [rbp-D0h]
  unsigned __int128 v48; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int128 v49; // [rsp+50h] [rbp-B0h]
  __int128 v50; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v51[2]; // [rsp+70h] [rbp-90h] BYREF
  Concurrency::details::ResourceManager *v52[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v53[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-50h]
  char v57[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-40h]
  __int128 v59; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v60; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v61[24]; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v62; // [rsp+100h] [rbp+0h] BYREF
  __int128 v63[4]; // [rsp+110h] [rbp+10h] BYREF
  char *v64[3]; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v65; // [rsp+168h] [rbp+68h]
  char *v66[3]; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v67; // [rsp+188h] [rbp+88h]
  char *v68[3]; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v69; // [rsp+1A8h] [rbp+A8h]
  char *v70[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned __int64 v71; // [rsp+1C8h] [rbp+C8h]

  v5 = a3;
  *(_QWORD *)&v48 = a3;
  v8 = *a4;
  v9 = *(_DWORD *)(*a4 + 440);
  if ( (v9 & 0x10000) != 0 && (v9 & 0x800000) != 0 )
  {
    sub_1800532F0(a1);
    v8 = *a4;
  }
  v49 = 0LL;
  if ( (*(_DWORD *)(v8 + 440) & 0x4000000) != 0 )
  {
    v10 = sub_18003D56C((_QWORD *)*a2, &v55);
    v50 = 0LL;
    v11 = v10[1];
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 8);
      while ( v12 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12);
        if ( v13 == v12 )
        {
          v50 = *(_OWORD *)v10;
          break;
        }
      }
    }
    v14 = v56;
    if ( v56 && _InterlockedExchangeAdd((volatile signed __int32 *)(v56 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v14 + 8LL))(v14, v11, v10);
    if ( (_QWORD)v50 )
    {
      v15 = (__int64 *)sub_18004871C(a1, &v59);
      v16 = sub_180040BC4(*v15, (__int64 *)v70);
      v17 = sub_18001DCD4((__int64 *)v68, (_QWORD *)(*a4 + 24), "_");
      v18 = (void *)sub_18001DAD8((__int64)v66, v17, v16);
      v19 = sub_18001DC84((__int64)v64, v18);
      v20 = (unsigned __int64 *)sub_1800B3008(v50, v57, v19, a2);
      v21 = *v20;
      v22 = v20[1];
      *v20 = 0LL;
      v20[1] = 0LL;
      v49 = __PAIR128__(v22, v21);
      v23 = v58;
      if ( v58 && _InterlockedExchangeAdd((volatile signed __int32 *)(v58 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
      if ( v65 >= 0x10 )
        sub_180010884(v64[0], v65 + 1);
      v64[2] = 0LL;
      v65 = 15LL;
      LOBYTE(v64[0]) = 0;
      if ( v67 >= 0x10 )
        sub_180010884(v66[0], v67 + 1);
      v66[2] = 0LL;
      v67 = 15LL;
      LOBYTE(v66[0]) = 0;
      if ( v69 >= 0x10 )
        sub_180010884(v68[0], v69 + 1);
      v68[2] = 0LL;
      v69 = 15LL;
      LOBYTE(v68[0]) = 0;
      if ( v71 >= 0x10 )
        sub_180010884(v70[0], v71 + 1);
      v70[2] = 0LL;
      v71 = 15LL;
      LOBYTE(v70[0]) = 0;
      sub_180010910((__int64)&v59);
      v5 = v48;
    }
    sub_180010910((__int64)&v50);
  }
  v24 = (__m128 **)sub_18004871C(a1, &v60);
  v25 = (double *)sub_1800414A0(*v24, v63);
  sub_180043B44(*v25, v25[2], v25[4], v25[6]);
  v26 = (unsigned int)o__fdsign() != 0;
  v47 = v26;
  sub_180010910((__int64)&v60);
  v27 = 0LL;
  if ( sub_1800521F8(a1) )
  {
    v28 = 0LL;
    while ( 1 )
    {
      if ( !sub_18005232C(a1, v27) || !sub_1800520D8(v27) )
        goto LABEL_53;
      sub_18005211C(a1, v52, v27);
      if ( sub_1800122C0(v52) )
        break;
LABEL_52:
      sub_180010910((__int64)v52);
LABEL_53:
      ++v27;
      v28 += 88LL;
      v5 = v48;
      if ( v27 >= sub_1800521F8(a1) )
        goto LABEL_54;
    }
    v29 = v5;
    v30 = v52[0];
    sub_1800491C8(v52[0], (__int64)v53, v29, a2, v26);
    v31 = v53[0];
    v32 = *(_DWORD *)(v53[0] + 128LL);
    if ( v32 )
    {
      if ( v32 != 1 )
      {
LABEL_51:
        sub_180010910((__int64)v53);
        v26 = v47;
        goto LABEL_52;
      }
      v33 = *(_QWORD *)(v53[0] + 144LL) == *(_QWORD *)(v53[0] + 152LL);
    }
    else
    {
      v33 = *(_QWORD *)(v53[0] + 136LL) == 0LL;
    }
    if ( !v33 )
    {
      v34 = *((_QWORD *)v30 + 18);
      if ( v34 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
        v34 = *((_QWORD *)v30 + 18);
      }
      v51[0] = *((_QWORD *)v30 + 17);
      v51[1] = v34;
      if ( sub_1800122C0(v51) )
      {
        v36 = (_QWORD *)sub_1800690B8(v35, v61);
        (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)*v36 + 48LL))(*v36, a1, v27);
        sub_180010910((__int64)v61);
        v37 = *(_QWORD *)(a1 + 104);
        v38 = sub_1800122C0((_QWORD *)(v28 + v37 + 24));
        v40 = v54;
        if ( v38 )
          sub_180091F9C(*v39, a2, v54);
        sub_18003DB00(*a2, *(_BYTE *)(a1 + 168));
        v62 = *(_OWORD *)(a1 + 172);
        sub_18003D868(*a2, &v62);
        if ( sub_1800122C0((_QWORD *)(v28 + v37 + 40)) )
          sub_180091F9C(*v41, a2, v40);
        if ( sub_1800122C0((_QWORD *)(v28 + v37 + 56)) )
          sub_180091F9C(*v42, a2, v40);
        if ( sub_1800122C0((_QWORD *)(v28 + v37 + 72)) )
          sub_180091F9C(*v43, a2, v40);
        sub_18004EE74(*(_QWORD *)(a1 + 88), a2, *(_QWORD *)(v31 + 136));
      }
      sub_180010910((__int64)v51);
    }
    goto LABEL_51;
  }
LABEL_54:
  v48 = 0LL;
  if ( *((_QWORD *)&v49 + 1) )
  {
    v44 = *(_DWORD *)(*((_QWORD *)&v49 + 1) + 8LL);
    while ( v44 )
    {
      v45 = v44;
      v44 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL), v44 + 1, v44);
      if ( v45 == v44 )
      {
        v48 = v49;
        break;
      }
    }
  }
  if ( (_QWORD)v48 )
    (**(void (__fastcall ***)(_QWORD))v48)(v48);
  result = sub_180010910((__int64)&v48);
  if ( *((_QWORD *)&v49 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 12LL));
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v49 + 1) + 8LL))(*((_QWORD *)&v49 + 1));
  }
  return result;
}
