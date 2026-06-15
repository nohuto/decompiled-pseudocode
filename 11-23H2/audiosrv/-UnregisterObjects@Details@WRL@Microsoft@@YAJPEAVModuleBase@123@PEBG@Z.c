/*
 * XREFs of ?UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z @ 0x1800F097C
 * Callers:
 *     ?DisconnectCallback@ServiceModule@Internal@Windows@@UEAAJXZ @ 0x1800EF9F0 (-DisconnectCallback@ServiceModule@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z @ 0x180063180 (-CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x1800F062C (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::UnregisterObjects(
        Microsoft::WRL::Details *this,
        const struct Microsoft::WRL::Details::CreatorMap **a2,
        const unsigned __int16 *a3)
{
  int v5; // ebp
  Microsoft::WRL::Details *v6; // rdi
  const struct Microsoft::WRL::Details::CreatorMap **v7; // r14
  const unsigned __int16 *v8; // r9
  unsigned int v9; // eax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  _DWORD *v12; // rsi
  __int64 v13; // r11
  const struct Microsoft::WRL::Details::CreatorMap **v14; // rdi
  const struct Microsoft::WRL::Details::CreatorMap **i; // rdx
  const struct Microsoft::WRL::Details::CreatorMap *v16; // r8
  char *v17; // rax
  char *v18; // r10
  int v19; // r9d
  int v20; // ecx
  __int64 v21; // r10
  const struct Microsoft::WRL::Details::CreatorMap *v22; // rcx
  char *v23; // rax
  char *v24; // r9
  int v25; // r8d
  int v26; // edx
  unsigned __int64 v27; // rsi
  __int64 *v28; // rdi
  __int64 *v29; // rcx
  __int64 v30; // r10
  char *v31; // rax
  char *v32; // r9
  int v33; // r8d
  int v34; // edx
  __int64 v35; // rcx
  char *v36; // rax
  char *v37; // r9
  int v38; // r8d
  int v39; // edx

  v5 = 0;
  v6 = (Microsoft::WRL::Details *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *, const struct Microsoft::WRL::Details::CreatorMap **, const unsigned __int16 *))(*(_QWORD *)this + 32LL))(
                                    this,
                                    a2,
                                    a3);
  v7 = (const struct Microsoft::WRL::Details::CreatorMap **)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 40LL))(this);
  v9 = Microsoft::WRL::Details::CountObjectEntries(v6, v7, a2, v8);
  v10 = v9;
  if ( !v9 )
    goto LABEL_51;
  v11 = 4LL * v9;
  if ( !is_mul_ok(v10, 4uLL) )
    v11 = -1LL;
  v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v13 = 0LL;
    v14 = (const struct Microsoft::WRL::Details::CreatorMap **)((char *)v6 + 8);
    for ( i = v14; i < v7; ++i )
    {
      v16 = *i;
      if ( *i )
      {
        if ( !a2 )
          goto LABEL_14;
        v17 = (char *)*((_QWORD *)v16 + 4);
        if ( v17 )
        {
          v18 = (char *)((char *)a2 - v17);
          do
          {
            v19 = *(unsigned __int16 *)&v18[(_QWORD)v17];
            v20 = *(unsigned __int16 *)v17 - v19;
            if ( v20 )
              break;
            v17 += 2;
          }
          while ( v19 );
          if ( !v20 )
          {
LABEL_14:
            v12[v13] = *(_DWORD *)(*((_QWORD *)v16 + 3) + 8LL);
            v13 = (unsigned int)(v13 + 1);
          }
        }
      }
    }
    v5 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *, const struct Microsoft::WRL::Details::CreatorMap **, _DWORD *, _QWORD))(*(_QWORD *)this + 88LL))(
           this,
           a2,
           v12,
           (unsigned int)v10);
    v21 = 0LL;
    while ( v14 < v7 )
    {
      v22 = *v14;
      if ( *v14 )
      {
        if ( !a2 )
          goto LABEL_24;
        v23 = (char *)*((_QWORD *)v22 + 4);
        if ( v23 )
        {
          v24 = (char *)((char *)a2 - v23);
          do
          {
            v25 = *(unsigned __int16 *)&v24[(_QWORD)v23];
            v26 = *(unsigned __int16 *)v23 - v25;
            if ( v26 )
              break;
            v23 += 2;
          }
          while ( v25 );
          if ( !v26 )
          {
LABEL_24:
            *(_DWORD *)(*((_QWORD *)v22 + 3) + 8LL) = v12[v21];
            v21 = (unsigned int)(v21 + 1);
          }
        }
      }
      ++v14;
    }
  }
  else
  {
    v5 = -2147024882;
  }
  operator delete(v12);
  if ( v5 >= 0 )
  {
LABEL_51:
    v27 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 48LL))(this);
    v28 = (__int64 *)(v7 + 1);
    v29 = (__int64 *)(v7 + 1);
    if ( (unsigned __int64)(v7 + 1) < v27 )
    {
      while ( 1 )
      {
        v30 = *v29;
        if ( *v29 )
        {
          if ( !a2 )
            break;
          v31 = *(char **)(v30 + 32);
          if ( v31 )
          {
            v32 = (char *)((char *)a2 - v31);
            do
            {
              v33 = *(unsigned __int16 *)&v32[(_QWORD)v31];
              v34 = *(unsigned __int16 *)v31 - v33;
              if ( v34 )
                break;
              v31 += 2;
            }
            while ( v33 );
            if ( !v34 )
              break;
          }
        }
        if ( (unsigned __int64)++v29 >= v27 )
          goto LABEL_48;
      }
      v5 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *, const struct Microsoft::WRL::Details::CreatorMap **, _QWORD))(*(_QWORD *)this + 72LL))(
             this,
             a2,
             *(_QWORD *)(*(_QWORD *)(v30 + 24) + 8LL));
      if ( v5 >= 0 )
      {
        do
        {
          v35 = *v28;
          if ( *v28 )
          {
            if ( !a2 )
              goto LABEL_46;
            v36 = *(char **)(v35 + 32);
            if ( v36 )
            {
              v37 = (char *)((char *)a2 - v36);
              do
              {
                v38 = *(unsigned __int16 *)&v37[(_QWORD)v36];
                v39 = *(unsigned __int16 *)v36 - v38;
                if ( v39 )
                  break;
                v36 += 2;
              }
              while ( v38 );
              if ( !v39 )
LABEL_46:
                *(_QWORD *)(*(_QWORD *)(v35 + 24) + 8LL) = 0LL;
            }
          }
          ++v28;
        }
        while ( (unsigned __int64)v28 < v27 );
      }
    }
  }
LABEL_48:
  Microsoft::WRL::Details::TerminateMap(this, (struct Microsoft::WRL::Details::ModuleBase *)a2, 0LL);
  return (unsigned int)v5;
}
