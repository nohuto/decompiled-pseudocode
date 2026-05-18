/*
 * XREFs of sub_1800246C0 @ 0x1800246C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001278 @ 0x180001278 (sub_180001278.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800230EC @ 0x1800230EC (sub_1800230EC.c)
 *     sub_1800230F8 @ 0x1800230F8 (sub_1800230F8.c)
 *     sub_180024068 @ 0x180024068 (sub_180024068.c)
 *     sub_180024958 @ 0x180024958 (sub_180024958.c)
 *     sub_18002596C @ 0x18002596C (sub_18002596C.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

// Hidden C++ exception states: #wind=1
ULONG __fastcall sub_1800246C0(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, void *a5, void *a6)
{
  __int64 v10; // rbx
  void *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  volatile signed __int64 *v14; // rax
  __int64 v15; // rcx
  ULONG result; // eax
  __int64 v17; // rbx
  __int64 v18; // rdi
  volatile signed __int64 *v19; // rcx
  __int64 v20; // rax
  void *v21; // rdx
  __int64 v22; // rcx
  int v23; // ecx
  void *v24; // rdx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // ecx
  int v31; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v32[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v34; // [rsp+F0h] [rbp-10h]
  int v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+FCh] [rbp-4h]
  int *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  __int64 v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  __int64 v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  _BYTE *v43; // [rsp+130h] [rbp+30h]
  int v44; // [rsp+138h] [rbp+38h]
  int v45; // [rsp+13Ch] [rbp+3Ch]
  _BYTE *v46; // [rsp+140h] [rbp+40h]
  int v47; // [rsp+148h] [rbp+48h]
  int v48; // [rsp+14Ch] [rbp+4Ch]
  void *v49; // [rsp+150h] [rbp+50h]
  int v50; // [rsp+158h] [rbp+58h]
  int v51; // [rsp+15Ch] [rbp+5Ch]
  void *v52; // [rsp+160h] [rbp+60h]
  int v53; // [rsp+168h] [rbp+68h]
  int v54; // [rsp+16Ch] [rbp+6Ch]

  v10 = a1 + 120;
  v11 = (void *)sub_18002596C((char *)(a1 + 120));
  v12 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v11;
  if ( v12 )
  {
    o__aligned_free();
    v11 = *(void **)(a1 + 112);
  }
  sub_180024958(v11);
  v14 = sub_180024068(v10, v13);
  v15 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v14;
  if ( v15 )
  {
    o__aligned_free();
    v14 = *(volatile signed __int64 **)(a1 + 112);
  }
  _InterlockedExchangeAdd64(v14 + 18, 0LL);
  result = sub_180025C4C((void *)v14);
  if ( (unsigned int)dword_1801EA1C0 > 5 && (qword_1801EA1D0 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_1801EA1D8 & 0x400000000000LL) == qword_1801EA1D8 )
    {
      v17 = sub_1800230F8(a2);
      v18 = sub_1800230EC(a1 + 16);
      v31 = 1;
      v19 = *(volatile signed __int64 **)(a1 + 112);
      if ( v19 )
      {
        _InterlockedExchangeAdd64(v19 + 18, 0LL);
        sub_180025C4C((void *)v19);
      }
      else
      {
        v32[0] = 0;
      }
      v20 = -1LL;
      v21 = a6;
      if ( a6 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( *((_BYTE *)a6 + v22) );
        v23 = v22 + 1;
      }
      else
      {
        v21 = &unk_180128042;
        v23 = 1;
      }
      v52 = v21;
      v53 = v23;
      v54 = 0;
      v24 = a5;
      if ( a5 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( *((_BYTE *)a5 + v25) );
        v26 = v25 + 1;
      }
      else
      {
        v24 = &unk_180128042;
        v26 = 1;
      }
      v49 = v24;
      v50 = v26;
      v51 = 0;
      if ( a4 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( a4[v27] );
        v28 = v27 + 1;
      }
      else
      {
        a4 = &unk_180128042;
        v28 = 1;
      }
      v46 = a4;
      v47 = v28;
      v48 = 0;
      if ( a3 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( a3[v29] );
        v30 = v29 + 1;
      }
      else
      {
        a3 = &unk_180128042;
        v30 = 1;
      }
      v43 = a3;
      v44 = v30;
      v45 = 0;
      v41 = v17;
      v42 = 16LL;
      v39 = v18;
      v40 = 16LL;
      v37 = &v31;
      v38 = 4LL;
      do
        ++v20;
      while ( v32[v20] );
      v34 = v32;
      v35 = v20 + 1;
      v36 = 0;
      return sub_180001278((__int64)&dword_1801EA1C0, (unsigned __int8 *)dword_1801CC9B4, 0LL, 0LL, 0xAu, &v33);
    }
  }
  return result;
}
