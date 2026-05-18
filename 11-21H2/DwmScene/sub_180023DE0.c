/*
 * XREFs of sub_180023DE0 @ 0x180023DE0
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
ULONG __fastcall sub_180023DE0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, void *a5, void *a6)
{
  __int64 v10; // rbx
  void *v11; // rax
  __int64 v12; // rcx
  volatile signed __int64 *v13; // rax
  __int64 v14; // rcx
  ULONG result; // eax
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rsi
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
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v30[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v32; // [rsp+F0h] [rbp-10h]
  int v33; // [rsp+F8h] [rbp-8h]
  int v34; // [rsp+FCh] [rbp-4h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  __int64 v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  __int64 v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  __int64 v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  _BYTE *v43; // [rsp+140h] [rbp+40h]
  int v44; // [rsp+148h] [rbp+48h]
  int v45; // [rsp+14Ch] [rbp+4Ch]
  void *v46; // [rsp+150h] [rbp+50h]
  int v47; // [rsp+158h] [rbp+58h]
  int v48; // [rsp+15Ch] [rbp+5Ch]
  void *v49; // [rsp+160h] [rbp+60h]
  int v50; // [rsp+168h] [rbp+68h]
  int v51; // [rsp+16Ch] [rbp+6Ch]

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
  v13 = (volatile signed __int64 *)sub_180024068(v10);
  v14 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v13;
  if ( v14 )
  {
    o__aligned_free();
    v13 = *(volatile signed __int64 **)(a1 + 112);
  }
  _InterlockedExchangeAdd64(v13 + 18, 0LL);
  result = sub_180025C4C((void *)v13);
  if ( (unsigned int)dword_1801EA1C0 > 5 && (qword_1801EA1D0 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_1801EA1D8 & 0x400000000000LL) == qword_1801EA1D8 )
    {
      v16 = sub_1800230F8(a3);
      v17 = sub_1800230F8(a2);
      v18 = sub_1800230EC(a1 + 16);
      v29 = 1;
      v19 = *(volatile signed __int64 **)(a1 + 112);
      if ( v19 )
      {
        _InterlockedExchangeAdd64(v19 + 18, 0LL);
        sub_180025C4C((void *)v19);
      }
      else
      {
        v30[0] = 0;
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
      v49 = v21;
      v50 = v23;
      v51 = 0;
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
      v46 = v24;
      v47 = v26;
      v48 = 0;
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
      v43 = a4;
      v44 = v28;
      v45 = 0;
      v41 = v16;
      v42 = 16LL;
      v39 = v17;
      v40 = 16LL;
      v37 = v18;
      v38 = 16LL;
      v35 = &v29;
      v36 = 4LL;
      do
        ++v20;
      while ( v30[v20] );
      v32 = v30;
      v33 = v20 + 1;
      v34 = 0;
      return sub_180001278((__int64)&dword_1801EA1C0, (unsigned __int8 *)dword_1801CC757, 0LL, 0LL, 0xAu, &v31);
    }
  }
  return result;
}
