/*
 * XREFs of ?Flush@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXV?$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd@@@Z @ 0x1800620D8
 * Callers:
 *     ?FireEvent_@ApiTelemetryLogger@details@wil@@QEAAXXZ @ 0x180064488 (-FireEvent_@ApiTelemetryLogger@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1?$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd@@QEAA@XZ @ 0x18000A3D0 (--1-$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18002206C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ProcessSingleNamespace@ApiDataList@ApiTelemetryLogger@details@wil@@CAPEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@PEAV56@V?$function@$$A6AXAEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@@Z@6@@Z @ 0x180064770 (-ProcessSingleNamespace@ApiDataList@ApiTelemetryLogger@details@wil@@CAPEAV-$unique_ptr@UApiData@.c)
 *     ?GetNameSpaceLength@ApiDataList@ApiTelemetryLogger@details@wil@@CA_KPEBG@Z @ 0x180064804 (-GetNameSpaceLength@ApiDataList@ApiTelemetryLogger@details@wil@@CA_KPEBG@Z.c)
 *     ??1?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@QEAA@XZ @ 0x180087168 (--1-$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U-$default_delete@UApiData@.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800E54E4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details::ApiTelemetryLogger::ApiDataList::Flush(RTL_SRWLOCK *a1, __int64 a2)
{
  RTL_SRWLOCK *v4; // rdi
  void *v5; // r8
  size_t NameSpaceLength; // rdi
  void *v7; // rax
  void *v8; // rbx
  void *v9; // rdx
  __int64 *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  void *v13; // rcx
  char *v14; // rdi
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  char *v20; // rbx
  void *Ptr; // [rsp+40h] [rbp-C0h] BYREF
  void *lpMem; // [rsp+48h] [rbp-B8h] BYREF
  void *v24; // [rsp+50h] [rbp-B0h] BYREF
  void *v25; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  size_t Size; // [rsp+68h] [rbp-98h] BYREF
  void *v28; // [rsp+70h] [rbp-90h] BYREF
  void *v29; // [rsp+78h] [rbp-88h] BYREF
  void *v30; // [rsp+80h] [rbp-80h] BYREF
  void *v31; // [rsp+88h] [rbp-78h] BYREF
  __int128 v32; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v33; // [rsp+A0h] [rbp-60h]
  __int128 v34; // [rsp+B0h] [rbp-50h]
  __int128 v35; // [rsp+C0h] [rbp-40h]
  __int128 v36; // [rsp+D0h] [rbp-30h]
  unsigned __int16 *v37; // [rsp+E0h] [rbp-20h]
  _BYTE v38[8]; // [rsp+F0h] [rbp-10h] BYREF
  void **v39; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v40; // [rsp+100h] [rbp+0h]
  __int128 v41; // [rsp+110h] [rbp+10h]
  __int128 v42; // [rsp+120h] [rbp+20h]
  unsigned __int16 *v43; // [rsp+130h] [rbp+30h]
  void ***v44; // [rsp+160h] [rbp+60h]
  unsigned __int16 v45; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned __int16 v46; // [rsp+1C0h] [rbp+C0h] BYREF
  int v47; // [rsp+1C8h] [rbp+C8h] BYREF

  Ptr = 0LL;
  if ( a1->Ptr )
  {
    v4 = a1 + 1;
    AcquireSRWLockExclusive(a1 + 1);
    v5 = Ptr;
    Ptr = a1->Ptr;
    a1->Ptr = v5;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  while ( Ptr )
  {
    v26 = 1LL;
    *(_QWORD *)&v32 = &v26;
    Size = 1LL;
    *((_QWORD *)&v32 + 1) = &Size;
    v33 = &v45;
    v39 = &wistd::__function::__func<_lambda_af47d61301194c5d4839e4c10d405b79_,void (wistd::unique_ptr<wil::details::ApiTelemetryLogger::ApiDataList::ApiData,wistd::default_delete<wil::details::ApiTelemetryLogger::ApiDataList::ApiData>> &)>::`vftable';
    v44 = &v39;
    v45 = 0;
    v40 = v32;
    *(_QWORD *)&v41 = &v45;
    wil::details::ApiTelemetryLogger::ApiDataList::ProcessSingleNamespace(&Ptr, v38);
    v25 = DefaultHeap::Alloc(saturated_mul(v26, 2uLL));
    v24 = DefaultHeap::Alloc(Size);
    lpMem = DefaultHeap::Alloc(saturated_mul(v45, 4uLL));
    NameSpaceLength = wil::details::ApiTelemetryLogger::ApiDataList::GetNameSpaceLength(*(const unsigned __int16 **)Ptr);
    v7 = DefaultHeap::Alloc(saturated_mul(NameSpaceLength + 1, 2uLL));
    v8 = v7;
    v9 = lpMem;
    if ( !v25 || !v24 || !lpMem )
    {
      if ( v7 )
      {
        operator delete(v7);
        v9 = lpMem;
      }
LABEL_22:
      lpMem = 0LL;
      if ( v9 )
        operator delete(v9);
      v18 = v24;
      v24 = 0LL;
      if ( v18 )
        operator delete(v18);
      v19 = v25;
      v25 = 0LL;
      if ( v19 )
        operator delete(v19);
      break;
    }
    if ( !v7 )
      goto LABEL_22;
    memset_0(v25, 0, 2 * v26);
    memset_0(v24, 0, Size);
    memset_0(lpMem, 0, 4LL * v45);
    memset_0(v8, 0, 2 * (NameSpaceLength + 1));
    StringCchCopyNW((unsigned __int16 *)v8, 0x7FFFFFFFuLL, *(size_t **)Ptr, NameSpaceLength);
    v47 = 0;
    *(_QWORD *)&v34 = &lpMem;
    *((_QWORD *)&v34 + 1) = &v47;
    *(_QWORD *)&v35 = &v25;
    *((_QWORD *)&v35 + 1) = &v26;
    *(_QWORD *)&v36 = &v24;
    *((_QWORD *)&v36 + 1) = &Size;
    v37 = &v45;
    v39 = &wistd::__function::__func<_lambda_54a20ef40f338fc6233fff5f1717a4d2_,void (wistd::unique_ptr<wil::details::ApiTelemetryLogger::ApiDataList::ApiData,wistd::default_delete<wil::details::ApiTelemetryLogger::ApiDataList::ApiData>> &)>::`vftable';
    v40 = v34;
    v44 = &v39;
    v41 = v35;
    v42 = v36;
    v43 = &v45;
    v10 = (__int64 *)wil::details::ApiTelemetryLogger::ApiDataList::ProcessSingleNamespace(&Ptr, v38);
    v46 = v45;
    v28 = lpMem;
    v29 = v24;
    v30 = v25;
    v11 = *(_QWORD *)(a2 + 112);
    v31 = v8;
    if ( !v11 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
    (*(void (__fastcall **)(__int64, void **, void **, void **, void **, unsigned __int16 *))(*(_QWORD *)v11 + 32LL))(
      v11,
      &v31,
      &v30,
      &v29,
      &v28,
      &v46);
    v12 = *v10;
    if ( *v10 )
    {
      v13 = Ptr;
      Ptr = *(void **)(v12 + 32);
      *(_QWORD *)(v12 + 32) = v13;
    }
    else
    {
      v14 = (char *)Ptr;
      Ptr = 0LL;
      if ( v14 )
      {
        wistd::unique_ptr<wil::details::ApiTelemetryLogger::ApiDataList::ApiData,wistd::default_delete<wil::details::ApiTelemetryLogger::ApiDataList::ApiData>>::~unique_ptr<wil::details::ApiTelemetryLogger::ApiDataList::ApiData,wistd::default_delete<wil::details::ApiTelemetryLogger::ApiDataList::ApiData>>(v14 + 32);
        operator delete(v14, 0x28uLL);
      }
    }
    operator delete(v8);
    v15 = lpMem;
    lpMem = 0LL;
    if ( v15 )
      operator delete(v15);
    v16 = v24;
    v24 = 0LL;
    if ( v16 )
      operator delete(v16);
    v17 = v25;
    v25 = 0LL;
    if ( v17 )
      operator delete(v17);
  }
  v20 = (char *)Ptr;
  Ptr = 0LL;
  if ( v20 )
  {
    wistd::unique_ptr<wil::details::ApiTelemetryLogger::ApiDataList::ApiData,wistd::default_delete<wil::details::ApiTelemetryLogger::ApiDataList::ApiData>>::~unique_ptr<wil::details::ApiTelemetryLogger::ApiDataList::ApiData,wistd::default_delete<wil::details::ApiTelemetryLogger::ApiDataList::ApiData>>(v20 + 32);
    operator delete(v20, 0x28uLL);
  }
  return wistd::function<void (unsigned short const *,unsigned short const *,char const *,unsigned int *,unsigned short)>::~function<void (unsigned short const *,unsigned short const *,char const *,unsigned int *,unsigned short)>(a2);
}
