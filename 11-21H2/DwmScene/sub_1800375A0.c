/*
 * XREFs of sub_1800375A0 @ 0x1800375A0
 * Callers:
 *     sub_180038300 @ 0x180038300 (sub_180038300.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001D8E4 @ 0x18001D8E4 (sub_18001D8E4.c)
 *     sub_180030788 @ 0x180030788 (sub_180030788.c)
 *     sub_180030848 @ 0x180030848 (sub_180030848.c)
 *     sub_180030854 @ 0x180030854 (sub_180030854.c)
 *     sub_1800308B4 @ 0x1800308B4 (sub_1800308B4.c)
 *     sub_1800308C0 @ 0x1800308C0 (sub_1800308C0.c)
 *     sub_1800309B0 @ 0x1800309B0 (sub_1800309B0.c)
 *     sub_180030B98 @ 0x180030B98 (sub_180030B98.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180055C48 @ 0x180055C48 (sub_180055C48.c)
 *     sub_1800561F8 @ 0x1800561F8 (sub_1800561F8.c)
 *     sub_180057EC0 @ 0x180057EC0 (sub_180057EC0.c)
 *     sub_18008809C @ 0x18008809C (sub_18008809C.c)
 *     sub_1800880BC @ 0x1800880BC (sub_1800880BC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_1800375A0(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rdi
  __int64 *v15; // rax
  __int64 **v16; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  volatile signed __int32 *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  volatile signed __int32 *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  volatile signed __int32 *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  volatile signed __int32 *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  volatile signed __int32 *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  volatile signed __int32 *v60; // rcx
  __int64 v61; // rax
  __int128 v63; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v64; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v65; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v66; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v67; // [rsp+68h] [rbp-98h] BYREF
  __int128 v68; // [rsp+78h] [rbp-88h] BYREF
  __int64 v69; // [rsp+88h] [rbp-78h] BYREF
  __int64 v70; // [rsp+90h] [rbp-70h]
  __int64 v71[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v72[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v73[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v74[2]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v75[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v76[2]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v77[2]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v78[2]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v79[2]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v80[2]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v81[2]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v82[2]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v83[2]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v84[3]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v85[16]; // [rsp+180h] [rbp+80h] BYREF
  __int128 v86; // [rsp+190h] [rbp+90h] BYREF
  __int64 v87[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v88[40]; // [rsp+1C0h] [rbp+C0h] BYREF
  char *v89[3]; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned __int64 v90; // [rsp+200h] [rbp+100h]
  _QWORD v91[4]; // [rsp+208h] [rbp+108h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+228h] [rbp+128h] BYREF

  v4 = sub_180037388((__int64)a1);
  v5 = v4;
  if ( *(_QWORD *)(v6 + 624) - *(_QWORD *)(v6 + 616) >= 4uLL )
    sub_180057EC0(v4);
  v7 = a1[81];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a1[81];
  }
  v8 = a1[80];
  v69 = v8;
  v70 = v7;
  if ( v8 )
  {
    v9 = v8;
  }
  else
  {
    v10 = (__int64 *)sub_1800880BC(v85, a2);
    v9 = *v10;
    v11 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    v72[0] = 0LL;
    v8 = v9;
    v69 = v9;
    v72[1] = v7;
    v70 = v11;
    sub_180010910((__int64)v72);
    sub_180010910((__int64)v85);
  }
  if ( *(_DWORD *)(v8 + 8) != a2 )
  {
    sub_1800113D0(v91, "Shader database platform is incompatible with engine shader platform");
    sub_18001D8E4((__int64)pExceptionObject, (const char *)v91, 0);
    throw (Spectre::Utils::SpectreException *)pExceptionObject;
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 8LL))(v9, v71);
  v12 = *(__int64 **)v71[0];
  while ( !*((_BYTE *)v12 + 25) )
  {
    sub_18001875C((__int64 *)v89, (__int64)(v12 + 4));
    v13 = *((_DWORD *)v12 + 20);
    v84[2] = v88;
    v14 = sub_18008809C(v12 + 8, v88);
    v15 = sub_18001875C(v87, (__int64)v89);
    sub_1800561F8(v5, v15, v13, v14);
    if ( v90 >= 0x10 )
      sub_180010884(v89[0], v90 + 1);
    v16 = (__int64 **)v12[2];
    if ( *((_BYTE *)v16 + 25) )
    {
      for ( i = (__int64 *)v12[1]; !*((_BYTE *)i + 25) && v12 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v12 = i;
      v12 = i;
    }
    else
    {
      v12 = (__int64 *)v12[2];
      for ( j = *v16; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v12 = j;
    }
  }
  v19 = sub_18001D684();
  v20 = v19;
  if ( v19 )
  {
    *(_OWORD *)v19 = 0LL;
    *(_DWORD *)(v19 + 8) = 1;
    *(_DWORD *)(v19 + 12) = 1;
    *(_QWORD *)v19 = &std::_Ref_count_obj2<Spectre::Engine::StandardShaderExtension>::`vftable';
    sub_1800308B4();
  }
  else
  {
    v20 = 0LL;
  }
  if ( v20 != -16 )
  {
    v21 = *(_QWORD *)(v20 + 32);
    if ( !v21 || !*(_DWORD *)(v21 + 8) )
    {
      if ( v20 )
        _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
      v73[0] = v20 + 16;
      v73[1] = v20;
      v22 = 0LL;
      v23 = 0LL;
      if ( v20 )
      {
        v22 = v20 + 16;
        v23 = v20;
        _InterlockedAdd((volatile signed __int32 *)(v20 + 12), 1u);
      }
      *(_QWORD *)(v20 + 24) = v22;
      v24 = *(volatile signed __int32 **)(v20 + 32);
      *(_QWORD *)(v20 + 32) = v23;
      if ( v24 && _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      sub_180010910((__int64)v73);
    }
  }
  v86 = 0LL;
  v74[0] = a1[8];
  a1[8] = v20 + 16;
  v74[1] = a1[9];
  a1[9] = v20;
  sub_180010910((__int64)v74);
  sub_180010910((__int64)&v86);
  v25 = sub_180037388((__int64)a1);
  v63 = 0LL;
  v26 = a1[9];
  if ( v26 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v26 + 8), 1u);
    v26 = a1[9];
  }
  *(_QWORD *)&v63 = a1[8];
  *((_QWORD *)&v63 + 1) = v26;
  sub_180055C48(v25, &v63);
  v27 = sub_18001D684();
  v28 = v27;
  if ( v27 )
  {
    *(_OWORD *)v27 = 0LL;
    *(_DWORD *)(v27 + 8) = 1;
    *(_DWORD *)(v27 + 12) = 1;
    *(_QWORD *)v27 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingShaderExtension>::`vftable';
    sub_180030854();
  }
  else
  {
    v28 = 0LL;
  }
  v84[0] = v28 + 16;
  v84[1] = v28;
  if ( v28 != -16 )
  {
    v29 = *(_QWORD *)(v28 + 32);
    if ( !v29 || !*(_DWORD *)(v29 + 8) )
    {
      if ( v28 )
        _InterlockedAdd((volatile signed __int32 *)(v28 + 8), 1u);
      v75[0] = v28 + 16;
      v75[1] = v28;
      v30 = 0LL;
      v31 = 0LL;
      if ( v28 )
      {
        v30 = v28 + 16;
        _InterlockedAdd((volatile signed __int32 *)(v28 + 12), 1u);
        v31 = v28;
      }
      *(_QWORD *)(v28 + 24) = v30;
      v32 = *(volatile signed __int32 **)(v28 + 32);
      *(_QWORD *)(v28 + 32) = v31;
      if ( v32 && _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
      sub_180010910((__int64)v75);
    }
  }
  v33 = sub_180037388((__int64)a1);
  v64 = 0LL;
  if ( v28 )
    _InterlockedAdd((volatile signed __int32 *)(v28 + 8), 1u);
  *(_QWORD *)&v64 = v28 + 16;
  *((_QWORD *)&v64 + 1) = v28;
  sub_180055C48(v33, &v64);
  v34 = sub_18001D684();
  v35 = v34;
  if ( v34 )
  {
    *(_OWORD *)v34 = 0LL;
    *(_DWORD *)(v34 + 8) = 1;
    *(_DWORD *)(v34 + 12) = 1;
    *(_QWORD *)v34 = &std::_Ref_count_obj2<Spectre::Engine::SymbolShaderExtension>::`vftable';
    sub_1800308C0();
  }
  else
  {
    v35 = 0LL;
  }
  v83[0] = v35 + 16;
  v83[1] = v35;
  if ( v35 != -16 )
  {
    v36 = *(_QWORD *)(v35 + 32);
    if ( !v36 || !*(_DWORD *)(v36 + 8) )
    {
      if ( v35 )
        _InterlockedAdd((volatile signed __int32 *)(v35 + 8), 1u);
      v76[0] = v35 + 16;
      v76[1] = v35;
      v37 = 0LL;
      v38 = 0LL;
      if ( v35 )
      {
        v37 = v35 + 16;
        _InterlockedAdd((volatile signed __int32 *)(v35 + 12), 1u);
        v38 = v35;
      }
      *(_QWORD *)(v35 + 24) = v37;
      v39 = *(volatile signed __int32 **)(v35 + 32);
      *(_QWORD *)(v35 + 32) = v38;
      if ( v39 && _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
      sub_180010910((__int64)v76);
    }
  }
  v40 = sub_180037388((__int64)a1);
  v65 = 0LL;
  if ( v35 )
    _InterlockedAdd((volatile signed __int32 *)(v35 + 8), 1u);
  *(_QWORD *)&v65 = v35 + 16;
  *((_QWORD *)&v65 + 1) = v35;
  sub_180055C48(v40, &v65);
  v41 = sub_18001D684();
  v42 = v41;
  if ( v41 )
  {
    *(_OWORD *)v41 = 0LL;
    *(_DWORD *)(v41 + 8) = 1;
    *(_DWORD *)(v41 + 12) = 1;
    *(_QWORD *)v41 = &std::_Ref_count_obj2<Spectre::Engine::FontShaderExtension>::`vftable';
    sub_180030848();
  }
  else
  {
    v42 = 0LL;
  }
  v82[0] = v42 + 16;
  v82[1] = v42;
  if ( v42 != -16 )
  {
    v43 = *(_QWORD *)(v42 + 32);
    if ( !v43 || !*(_DWORD *)(v43 + 8) )
    {
      if ( v42 )
        _InterlockedAdd((volatile signed __int32 *)(v42 + 8), 1u);
      v77[0] = v42 + 16;
      v77[1] = v42;
      v44 = 0LL;
      v45 = 0LL;
      if ( v42 )
      {
        v44 = v42 + 16;
        _InterlockedAdd((volatile signed __int32 *)(v42 + 12), 1u);
        v45 = v42;
      }
      *(_QWORD *)(v42 + 24) = v44;
      v46 = *(volatile signed __int32 **)(v42 + 32);
      *(_QWORD *)(v42 + 32) = v45;
      if ( v46 && _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
      sub_180010910((__int64)v77);
    }
  }
  v47 = sub_180037388((__int64)a1);
  v66 = 0LL;
  if ( v42 )
    _InterlockedAdd((volatile signed __int32 *)(v42 + 8), 1u);
  *(_QWORD *)&v66 = v42 + 16;
  *((_QWORD *)&v66 + 1) = v42;
  sub_180055C48(v47, &v66);
  v48 = sub_18001D684();
  v49 = v48;
  if ( v48 )
  {
    *(_OWORD *)v48 = 0LL;
    *(_DWORD *)(v48 + 8) = 1;
    *(_DWORD *)(v48 + 12) = 1;
    *(_QWORD *)v48 = &std::_Ref_count_obj2<Spectre::Engine::UnlitShaderExtension>::`vftable';
    sub_1800309B0();
  }
  else
  {
    v49 = 0LL;
  }
  v81[0] = v49 + 16;
  v81[1] = v49;
  if ( v49 != -16 )
  {
    v50 = *(_QWORD *)(v49 + 32);
    if ( !v50 || !*(_DWORD *)(v50 + 8) )
    {
      if ( v49 )
        _InterlockedAdd((volatile signed __int32 *)(v49 + 8), 1u);
      v78[0] = v49 + 16;
      v78[1] = v49;
      v51 = 0LL;
      v52 = 0LL;
      if ( v49 )
      {
        v51 = v49 + 16;
        _InterlockedAdd((volatile signed __int32 *)(v49 + 12), 1u);
        v52 = v49;
      }
      *(_QWORD *)(v49 + 24) = v51;
      v53 = *(volatile signed __int32 **)(v49 + 32);
      *(_QWORD *)(v49 + 32) = v52;
      if ( v53 && _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
      sub_180010910((__int64)v78);
    }
  }
  v54 = sub_180037388((__int64)a1);
  v67 = 0LL;
  if ( v49 )
    _InterlockedAdd((volatile signed __int32 *)(v49 + 8), 1u);
  *(_QWORD *)&v67 = v49 + 16;
  *((_QWORD *)&v67 + 1) = v49;
  sub_180055C48(v54, &v67);
  v55 = sub_18001D684();
  v56 = v55;
  if ( v55 )
  {
    *(_OWORD *)v55 = 0LL;
    *(_DWORD *)(v55 + 8) = 1;
    *(_DWORD *)(v55 + 12) = 1;
    *(_QWORD *)v55 = &std::_Ref_count_obj2<Spectre::Engine::BackgroundUnlitShaderExtension>::`vftable';
    sub_180030788();
  }
  else
  {
    v56 = 0LL;
  }
  v80[0] = v56 + 16;
  v80[1] = v56;
  if ( v56 != -16 )
  {
    v57 = *(_QWORD *)(v56 + 32);
    if ( !v57 || !*(_DWORD *)(v57 + 8) )
    {
      if ( v56 )
        _InterlockedAdd((volatile signed __int32 *)(v56 + 8), 1u);
      v79[0] = v56 + 16;
      v79[1] = v56;
      v58 = 0LL;
      v59 = 0LL;
      if ( v56 )
      {
        v58 = v56 + 16;
        _InterlockedAdd((volatile signed __int32 *)(v56 + 12), 1u);
        v59 = v56;
      }
      *(_QWORD *)(v56 + 24) = v58;
      v60 = *(volatile signed __int32 **)(v56 + 32);
      *(_QWORD *)(v56 + 32) = v59;
      if ( v60 && _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
      sub_180010910((__int64)v79);
    }
  }
  v61 = sub_180037388((__int64)a1);
  v68 = 0LL;
  if ( v56 )
    _InterlockedAdd((volatile signed __int32 *)(v56 + 8), 1u);
  *(_QWORD *)&v68 = v56 + 16;
  *((_QWORD *)&v68 + 1) = v56;
  sub_180055C48(v61, &v68);
  sub_180010910((__int64)v80);
  sub_180010910((__int64)v81);
  sub_180010910((__int64)v82);
  sub_180010910((__int64)v83);
  sub_180010910((__int64)v84);
  sub_180030B98(v71, (__int64)v71);
  return sub_180010910((__int64)&v69);
}
