/*
 * XREFs of sub_1800737B0 @ 0x1800737B0
 * Callers:
 *     sub_180070D90 @ 0x180070D90 (sub_180070D90.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180036540 @ 0x180036540 (sub_180036540.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180040FB8 @ 0x180040FB8 (sub_180040FB8.c)
 *     sub_180041180 @ 0x180041180 (sub_180041180.c)
 *     sub_18006BF90 @ 0x18006BF90 (sub_18006BF90.c)
 *     sub_1800A2A04 @ 0x1800A2A04 (sub_1800A2A04.c)
 *     sub_1800A2A14 @ 0x1800A2A14 (sub_1800A2A14.c)
 *     sub_1800A2A70 @ 0x1800A2A70 (sub_1800A2A70.c)
 *     sub_1800A2A80 @ 0x1800A2A80 (sub_1800A2A80.c)
 *     sub_1800A2A90 @ 0x1800A2A90 (sub_1800A2A90.c)
 *     sub_1800A2AA0 @ 0x1800A2AA0 (sub_1800A2AA0.c)
 *     sub_1800A2AB0 @ 0x1800A2AB0 (sub_1800A2AB0.c)
 *     sub_1800A2AC0 @ 0x1800A2AC0 (sub_1800A2AC0.c)
 *     sub_1800A2AD0 @ 0x1800A2AD0 (sub_1800A2AD0.c)
 *     sub_1800A2AE0 @ 0x1800A2AE0 (sub_1800A2AE0.c)
 *     sub_1800A2AF0 @ 0x1800A2AF0 (sub_1800A2AF0.c)
 *     sub_1800A2B00 @ 0x1800A2B00 (sub_1800A2B00.c)
 *     sub_1800A2B10 @ 0x1800A2B10 (sub_1800A2B10.c)
 *     sub_1800A2B20 @ 0x1800A2B20 (sub_1800A2B20.c)
 *     sub_1800A2B30 @ 0x1800A2B30 (sub_1800A2B30.c)
 *     sub_1800A2B60 @ 0x1800A2B60 (sub_1800A2B60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_UNKNOWN **__fastcall sub_1800737B0(__int64 a1, _QWORD *a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned int v43; // eax
  void (__fastcall *v44)(__int64, __int64 *, _QWORD, __int64); // r11
  unsigned int v45; // eax
  void (__fastcall *v46)(__int64, __int64 *, _QWORD, __int64); // r11
  __int64 v47; // r8
  void (__fastcall *v48)(__int64, __int64 *, __int64, __int64); // r11
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // r8
  int v55; // [rsp+38h] [rbp-29h] BYREF
  __int128 v56; // [rsp+48h] [rbp-19h] BYREF
  __int128 v57; // [rsp+58h] [rbp-9h] BYREF
  __m128 v58; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v59[2]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v60[4]; // [rsp+88h] [rbp+27h] BYREF
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

  result = &retaddr;
  v6 = *a2;
  if ( *(_BYTE *)(v6 + 116) )
  {
    v57 = 0LL;
    v7 = a2[1];
    if ( v7 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
      v6 = *a2;
      v7 = a2[1];
    }
    *(_QWORD *)&v57 = v6;
    *((_QWORD *)&v57 + 1) = v7;
    sub_180036540(a1, v59, a3, &v57);
    v8 = sub_180036808(a1, *(_DWORD *)(*a2 + 112LL));
    if ( sub_1800122C0(v59) )
    {
      v10 = v59[0];
      if ( (*(_DWORD *)(v59[0] + 440LL) & 0x2000000) != 0 )
      {
        (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &qword_1801FA558,
          v9,
          1LL);
        v56 = 0LL;
        v11 = *(_QWORD *)(v10 + 64);
        if ( v11 )
        {
          v12 = *(_DWORD *)(v11 + 8);
          while ( v12 )
          {
            v13 = v12;
            v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12);
            if ( v13 == v12 )
            {
              v14 = *(_QWORD *)(v10 + 56);
              v56 = *(_OWORD *)(v10 + 56);
              goto LABEL_11;
            }
          }
        }
        v14 = v56;
LABEL_11:
        if ( sub_1800122C0(&v56) )
        {
          sub_180040FB8(v14, (__int64)&v55);
          sub_180041180(v14, &v58);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
            v8,
            &qword_1801FA578,
            v15,
            1LL);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
            v8,
            &qword_1801FA598,
            v16,
            1LL);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
            v8,
            &qword_1801FA5B8,
            v17,
            1LL);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
            v8,
            &qword_1801FA5D8,
            v18,
            1LL);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
            v8,
            &qword_1801FA5F8,
            v19,
            1LL);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
            v8,
            &qword_1801FA618,
            v20,
            1LL);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
            v8,
            &qword_1801FA638,
            v21,
            1LL);
        }
        sub_18006BF90(v60, v59);
        if ( sub_1800122C0(v60) )
        {
          v22 = v60[0];
          v23 = sub_1800A2AB0(v60[0]);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v23 + 168))(v8, &qword_1801FA6F8, v24, 1LL);
          v25 = sub_1800A2AC0(v22);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v25 + 168))(v8, &qword_1801FA718, v26, 1LL);
          v27 = sub_1800A2AD0(v22);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v27 + 168))(v8, &qword_1801FA758, v28, 1LL);
          v29 = sub_1800A2AA0(v22);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v29 + 168))(v8, &qword_1801FA778, v30, 1LL);
          v31 = sub_1800A2A70(v22);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v31 + 168))(v8, &qword_1801FA738, v32, 1LL);
          v33 = sub_1800A2AF0(v22);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v33 + 168))(v8, &qword_1801FA798, v34, 1LL);
          v35 = sub_1800A2B10(v22);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v35 + 168))(v8, &qword_1801FA7B8, v36, 1LL);
          v37 = sub_1800A2B00(v22);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v37 + 168))(v8, &qword_1801FA7D8, v38, 1LL);
          v39 = sub_1800A2B30(v22);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v39 + 168))(v8, &qword_1801FA7F8, v40, 1LL);
          v41 = sub_1800A2B20(v22);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v41 + 168))(v8, &qword_1801FA818, v42, 1LL);
          v43 = sub_1800A2A14(v22);
          v44(v8, &qword_1801FA6D8, v43, 1LL);
          v45 = sub_1800A2AE0(v22);
          v46(v8, &qword_1801FA838, v45, 1LL);
          LOBYTE(v47) = sub_1800A2B60(v22);
          v48(v8, &qword_1801FA878, v47, 1LL);
          v49 = sub_1800A2A80(v22);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v49 + 168))(v8, &qword_1801FA918, v50, 1LL);
          v51 = sub_1800A2A90(v22);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v51 + 168))(v8, &qword_1801FA8F8, v52, 1LL);
          v53 = sub_1800A2A04(v22);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v53 + 168))(v8, &qword_1801FA8D8, v54, 1LL);
        }
        sub_180010910((__int64)v60);
        sub_180010910((__int64)&v56);
      }
    }
    return (_UNKNOWN **)sub_180010910((__int64)v59);
  }
  return result;
}
