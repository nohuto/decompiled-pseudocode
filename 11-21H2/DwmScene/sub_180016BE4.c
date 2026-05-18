/*
 * XREFs of sub_180016BE4 @ 0x180016BE4
 * Callers:
 *     sub_18001AB5C @ 0x18001AB5C (sub_18001AB5C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18001808C @ 0x18001808C (sub_18001808C.c)
 *     sub_180018350 @ 0x180018350 (sub_180018350.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180028DDC @ 0x180028DDC (sub_180028DDC.c)
 *     sub_18002C358 @ 0x18002C358 (sub_18002C358.c)
 *     sub_18002C730 @ 0x18002C730 (sub_18002C730.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall sub_180016BE4(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  volatile signed __int32 *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v36; // [rsp+48h] [rbp-69h] BYREF
  char v37; // [rsp+50h] [rbp-61h]
  __int128 v38; // [rsp+58h] [rbp-59h] BYREF
  __int128 v39; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v40[2]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v41; // [rsp+88h] [rbp-29h] BYREF
  char v42; // [rsp+90h] [rbp-21h]
  _QWORD v43[2]; // [rsp+98h] [rbp-19h] BYREF
  __int128 v44[3]; // [rsp+A8h] [rbp-9h] BYREF

  sub_18002C730(a1 + 3);
  v36 = 0LL;
  v37 = 0;
  if ( sub_18002850C(a1) )
  {
    v13 = sub_180028DDC(v12, &v41);
    if ( &v36 != (__int64 *)v13 )
    {
      v36 = *(_QWORD *)v13;
      v37 = *(_BYTE *)(v13 + 8);
      *(_QWORD *)v13 = 0LL;
      *(_BYTE *)(v13 + 8) = 0;
    }
    if ( v42 )
      j_LanguageEnumProc(v41, v14, v15, v16);
  }
  v17 = sub_18001D684(1736LL);
  v18 = v17;
  if ( v17 )
  {
    *(_OWORD *)v17 = 0LL;
    *(_DWORD *)(v17 + 8) = 1;
    *(_DWORD *)(v17 + 12) = 1;
    *(_QWORD *)v17 = &std::_Ref_count_obj2<RenderOutputDwm>::`vftable';
    sub_18001808C(v17 + 16, a6, a7, a8, a9);
  }
  else
  {
    v18 = 0LL;
  }
  v19 = v18 + 16;
  *a2 = v18 + 16;
  a2[1] = v18;
  if ( v18 != -16 )
  {
    v20 = *(_QWORD *)(v18 + 88);
    if ( !v20 || !*(_DWORD *)(v20 + 8) )
    {
      if ( v18 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        v18 = a2[1];
      }
      v43[0] = v19;
      v43[1] = v18;
      v21 = 0LL;
      v22 = 0LL;
      if ( v18 )
      {
        v21 = v19;
        v22 = v18;
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 12));
      }
      *(_QWORD *)(v19 + 64) = v21;
      v23 = *(volatile signed __int32 **)(v19 + 72);
      *(_QWORD *)(v19 + 72) = v22;
      if ( v23 && _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
      sub_180010910((__int64)v43);
    }
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  v24 = a2[1];
  if ( v24 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
    v24 = a2[1];
  }
  v25 = *a2;
  *(_QWORD *)&v38 = *a2;
  *((_QWORD *)&v38 + 1) = v24;
  v26 = (_QWORD *)a1[32];
  if ( v26 == (_QWORD *)a1[33] )
  {
    sub_180018350(a1 + 31, v26, &v38);
  }
  else
  {
    *v26 = v25;
    v26[1] = v24;
    v38 = 0LL;
    a1[32] += 16LL;
  }
  sub_180010910((__int64)&v38);
  v39 = 0LL;
  v27 = a2[1];
  if ( v27 )
  {
    *(_QWORD *)&v39 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
    *((_QWORD *)&v39 + 1) = v27;
    _InterlockedIncrement((volatile signed __int32 *)(v27 + 12));
  }
  v44[0] = 0LL;
  v28 = a1[2];
  if ( !v28 )
LABEL_35:
    sub_1800120F4();
  v29 = *(_DWORD *)(v28 + 8);
  do
  {
    if ( !v29 )
      goto LABEL_35;
    v30 = v29;
    v29 = _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 8), v29 + 1, v29);
  }
  while ( v30 != v29 );
  v31 = a1[2];
  v40[0] = (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL);
  v40[1] = v31;
  v44[0] = 0LL;
  sub_18002C358(v40, &v39);
  sub_180010910((__int64)v44);
  if ( v37 )
    j_LanguageEnumProc(v36, v32, v33, v34);
  return a2;
}
