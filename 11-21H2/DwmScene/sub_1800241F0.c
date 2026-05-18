/*
 * XREFs of sub_1800241F0 @ 0x1800241F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001278 @ 0x180001278 (sub_180001278.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800230EC @ 0x1800230EC (sub_1800230EC.c)
 *     sub_1800230F8 @ 0x1800230F8 (sub_1800230F8.c)
 *     sub_180024958 @ 0x180024958 (sub_180024958.c)
 *     sub_18002596C @ 0x18002596C (sub_18002596C.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800241F0(__int64 a1, __int64 a2, _BYTE *a3, int a4, void *a5)
{
  __int64 v9; // rdi
  __int64 v10; // rsi
  volatile signed __int64 *v11; // rcx
  __int64 v12; // rax
  void *v13; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 result; // rax
  __int64 v19; // rcx
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v22[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v24; // [rsp+F0h] [rbp-10h]
  int v25; // [rsp+F8h] [rbp-8h]
  int v26; // [rsp+FCh] [rbp-4h]
  int *v27; // [rsp+100h] [rbp+0h]
  int v28; // [rsp+108h] [rbp+8h]
  int v29; // [rsp+10Ch] [rbp+Ch]
  __int64 v30; // [rsp+110h] [rbp+10h]
  int v31; // [rsp+118h] [rbp+18h]
  int v32; // [rsp+11Ch] [rbp+1Ch]
  __int64 v33; // [rsp+120h] [rbp+20h]
  int v34; // [rsp+128h] [rbp+28h]
  int v35; // [rsp+12Ch] [rbp+2Ch]
  _BYTE *v36; // [rsp+130h] [rbp+30h]
  int v37; // [rsp+138h] [rbp+38h]
  int v38; // [rsp+13Ch] [rbp+3Ch]
  int *v39; // [rsp+140h] [rbp+40h]
  int v40; // [rsp+148h] [rbp+48h]
  int v41; // [rsp+14Ch] [rbp+4Ch]
  void *v42; // [rsp+150h] [rbp+50h]
  int v43; // [rsp+158h] [rbp+58h]
  int v44; // [rsp+15Ch] [rbp+5Ch]

  sub_180024958(*(void **)(a1 + 112));
  if ( (unsigned int)dword_1801EA1C0 > 5
    && (qword_1801EA1D0 & 0x400000000000LL) != 0
    && (qword_1801EA1D8 & 0x400000000000LL) == qword_1801EA1D8 )
  {
    v20 = a4;
    v9 = sub_1800230F8(a2);
    v10 = sub_1800230EC(a1 + 16);
    v21 = 1;
    v11 = *(volatile signed __int64 **)(a1 + 112);
    if ( v11 )
    {
      _InterlockedExchangeAdd64(v11 + 18, 0LL);
      sub_180025C4C((void *)v11);
    }
    else
    {
      v22[0] = 0;
    }
    v12 = -1LL;
    v13 = a5;
    if ( a5 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *((_BYTE *)a5 + v14) );
      v15 = v14 + 1;
    }
    else
    {
      v13 = &unk_180128042;
      v15 = 1;
    }
    v42 = v13;
    v43 = v15;
    v44 = 0;
    v39 = &v20;
    v40 = 4;
    v41 = 0;
    if ( a3 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a3[v16] );
      v17 = v16 + 1;
    }
    else
    {
      a3 = &unk_180128042;
      v17 = 1;
    }
    v36 = a3;
    v37 = v17;
    v38 = 0;
    v33 = v9;
    v34 = 16;
    v35 = 0;
    v30 = v10;
    v31 = 16;
    v32 = 0;
    v27 = &v21;
    v28 = 4;
    v29 = 0;
    do
      ++v12;
    while ( v22[v12] );
    v24 = v22;
    v25 = v12 + 1;
    v26 = 0;
    sub_180001278((__int64)&dword_1801EA1C0, (unsigned __int8 *)dword_1801CCC96, 0LL, 0LL, 9u, &v23);
  }
  result = sub_18002596C((char *)(a1 + 120));
  v19 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v19 )
    return o__aligned_free();
  return result;
}
