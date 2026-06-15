/*
 * XREFs of ??$RegisterObjects@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBG@Z @ 0x180062ECC
 * Callers:
 *     ?ConnectCallback@ServiceModule@Internal@Windows@@UEAAJXZ @ 0x180065F20 (-ConnectCallback@ServiceModule@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z @ 0x180063180 (-CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RegisterObjects<2>(
        __int64 a1,
        const struct Microsoft::WRL::Details::CreatorMap **a2)
{
  int v4; // edi
  Microsoft::WRL::Details *v5; // r15
  const struct Microsoft::WRL::Details::CreatorMap **v6; // r13
  const unsigned __int16 *v7; // r9
  unsigned int v8; // eax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned __int64 v12; // rax
  _QWORD *v13; // rbp
  unsigned __int64 v14; // rax
  void *v15; // rax
  void *v16; // rcx
  __int64 v17; // rbx
  const struct Microsoft::WRL::Details::CreatorMap **v18; // r15
  const struct Microsoft::WRL::Details::CreatorMap **v19; // r14
  const struct Microsoft::WRL::Details::CreatorMap *v20; // r11
  const struct Microsoft::WRL::Details::CreatorMap *v21; // r8
  _QWORD *v22; // r14
  const struct Microsoft::WRL::Details::CreatorMap **v23; // rbp
  const unsigned __int16 *v24; // r9
  unsigned int v25; // eax
  char *v27; // rax
  signed __int64 v28; // r8
  int v29; // edx
  int v30; // ecx
  char *v31; // rax
  signed __int64 v32; // r9
  int v33; // edx
  int v34; // ecx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // kr10_8
  _QWORD *v37; // r15
  __int64 v38; // r14
  const struct Microsoft::WRL::Details::CreatorMap **v39; // rbx
  const struct Microsoft::WRL::Details::CreatorMap **i; // rdi
  const struct Microsoft::WRL::Details::CreatorMap *v41; // r8
  char *v42; // rax
  signed __int64 v43; // r9
  int v44; // edx
  int v45; // ecx
  const struct Microsoft::WRL::Details::CreatorMap *v46; // rcx
  char *v47; // rax
  signed __int64 v48; // r9
  int v49; // r8d
  int v50; // edx
  _DWORD *v51; // [rsp+40h] [rbp-48h]
  __int64 v52[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v53; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v54; // [rsp+A0h] [rbp+18h]
  void *v55; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v5 = (Microsoft::WRL::Details *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v6 = (const struct Microsoft::WRL::Details::CreatorMap **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  v8 = Microsoft::WRL::Details::CountObjectEntries(v5, v6, a2, v7);
  v54 = v8;
  if ( v8 )
  {
    v9 = v8;
    v11 = v8;
    v10 = 4LL * v8;
    if ( !is_mul_ok(v11, 4uLL) )
      v10 = -1LL;
    v51 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v12 = 8 * v9;
    if ( !is_mul_ok(v9, 8uLL) )
      v12 = -1LL;
    v13 = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
    v14 = 16 * v9;
    if ( !is_mul_ok(v9, 0x10uLL) )
      v14 = -1LL;
    v15 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v15;
    v55 = v15;
    if ( v51 && v13 && v15 )
    {
      v17 = 0LL;
      v18 = (const struct Microsoft::WRL::Details::CreatorMap **)((char *)v5 + 8);
      v19 = v18;
      if ( v18 < v6 )
      {
        while ( 1 )
        {
          if ( v4 < 0 )
            goto LABEL_25;
          v20 = *v19;
          if ( *v19 )
          {
            if ( a2 )
            {
              v27 = (char *)*((_QWORD *)v20 + 4);
              if ( !v27 )
                goto LABEL_17;
              v28 = (char *)a2 - v27;
              do
              {
                v29 = *(unsigned __int16 *)&v27[v28];
                v30 = *(unsigned __int16 *)v27 - v29;
                if ( v30 )
                  break;
                v27 += 2;
              }
              while ( v29 );
              if ( v30 )
              {
LABEL_36:
                v16 = v55;
                goto LABEL_17;
              }
            }
            LODWORD(v53) = 2;
            v52[0] = 0LL;
            v4 = (*(__int64 (__fastcall **)(__int64 *, const struct Microsoft::WRL::Details::CreatorMap *, GUID *, __int64 *))v20)(
                   &v53,
                   v20,
                   &GUID_00000001_0000_0000_c000_000000000046,
                   v52);
            if ( v4 < 0 )
              goto LABEL_36;
            v13[v17] = v52[0];
            v16 = v55;
            *((_OWORD *)v55 + (unsigned int)v17) = *(_OWORD *)*((_QWORD *)*v19 + 1);
            v17 = (unsigned int)(v17 + 1);
          }
LABEL_17:
          if ( ++v19 >= v6 )
          {
            if ( v4 < 0 )
              goto LABEL_25;
            break;
          }
        }
      }
      v4 = (*(__int64 (__fastcall **)(__int64, const struct Microsoft::WRL::Details::CreatorMap **, void *, _QWORD *, _DWORD *, unsigned int))(*(_QWORD *)a1 + 80LL))(
             a1,
             a2,
             v16,
             v13,
             v51,
             v54);
      if ( v4 >= 0 )
      {
        v17 = 0LL;
        if ( v18 >= v6 )
          goto LABEL_28;
        do
        {
          v21 = *v18;
          if ( *v18 )
          {
            if ( !a2 )
              goto LABEL_23;
            v31 = (char *)*((_QWORD *)v21 + 4);
            if ( v31 )
            {
              v32 = (char *)a2 - v31;
              do
              {
                v33 = *(unsigned __int16 *)&v31[v32];
                v34 = *(unsigned __int16 *)v31 - v33;
                if ( v34 )
                  break;
                v31 += 2;
              }
              while ( v33 );
              if ( !v34 )
              {
LABEL_23:
                *(_DWORD *)(*((_QWORD *)v21 + 3) + 8LL) = v51[v17];
                v17 = (unsigned int)(v17 + 1);
              }
            }
          }
          ++v18;
        }
        while ( v18 < v6 );
      }
LABEL_25:
      if ( (_DWORD)v17 )
      {
        v22 = v13;
        do
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 16LL))(*v22);
          ++v22;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      v4 = -2147024882;
    }
LABEL_28:
    operator delete(v51);
    operator delete(v55);
    operator delete(v13);
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  v23 = (const struct Microsoft::WRL::Details::CreatorMap **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  v25 = Microsoft::WRL::Details::CountObjectEntries((Microsoft::WRL::Details *)v6, v23, a2, v24);
  if ( v25 )
  {
    v36 = v25;
    v35 = 8LL * v25;
    if ( !is_mul_ok(v36, 8uLL) )
      v35 = -1LL;
    v37 = operator new[](v35, (const struct std::nothrow_t *)&std::nothrow);
    if ( v37 )
    {
      v53 = 0LL;
      v38 = 0LL;
      v39 = v6 + 1;
      for ( i = v6 + 1; i < v23; ++i )
      {
        v41 = *i;
        if ( *i )
        {
          if ( !a2 )
            goto LABEL_56;
          v42 = (char *)*((_QWORD *)v41 + 4);
          if ( v42 )
          {
            v43 = (char *)a2 - v42;
            do
            {
              v44 = *(unsigned __int16 *)&v42[v43];
              v45 = *(unsigned __int16 *)v42 - v44;
              if ( v45 )
                break;
              v42 += 2;
            }
            while ( v44 );
            if ( !v45 )
            {
LABEL_56:
              v37[v38] = (*((__int64 (**)(void))v41 + 1))();
              v38 = (unsigned int)(v38 + 1);
            }
          }
        }
      }
      v4 = (*(__int64 (__fastcall **)(__int64, const struct Microsoft::WRL::Details::CreatorMap **, _QWORD *, __int64 *, _DWORD))(*(_QWORD *)a1 + 64LL))(
             a1,
             a2,
             v37,
             &v53,
             v38);
      if ( v4 >= 0 )
      {
        while ( v39 < v23 )
        {
          v46 = *v39;
          if ( *v39 )
          {
            if ( !a2 )
              goto LABEL_67;
            v47 = (char *)*((_QWORD *)v46 + 4);
            if ( v47 )
            {
              v48 = (char *)a2 - v47;
              do
              {
                v49 = *(unsigned __int16 *)&v47[v48];
                v50 = *(unsigned __int16 *)v47 - v49;
                if ( v50 )
                  break;
                v47 += 2;
              }
              while ( v49 );
              if ( !v50 )
LABEL_67:
                *(_QWORD *)(*((_QWORD *)v46 + 3) + 8LL) = v53;
            }
          }
          ++v39;
        }
      }
    }
    else
    {
      v4 = -2147024882;
    }
    operator delete(v37);
  }
  return (unsigned int)v4;
}
