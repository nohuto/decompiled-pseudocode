/*
 * XREFs of sub_180023410 @ 0x180023410
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001278 @ 0x180001278 (sub_180001278.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800230EC @ 0x1800230EC (sub_1800230EC.c)
 *     sub_180024958 @ 0x180024958 (sub_180024958.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

int __fastcall sub_180023410(__int64 a1, char a2, _BYTE *a3, _BYTE *a4)
{
  const char *v8; // rax
  const char *v9; // r12
  _QWORD *v10; // rdi
  __int64 v11; // rax
  volatile signed __int64 *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v24[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v26; // [rsp+F0h] [rbp-10h]
  int v27; // [rsp+F8h] [rbp-8h]
  int v28; // [rsp+FCh] [rbp-4h]
  int *v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  __int64 v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  const char *v33; // [rsp+120h] [rbp+20h]
  int v34; // [rsp+128h] [rbp+28h]
  int v35; // [rsp+12Ch] [rbp+2Ch]
  _BYTE *v36; // [rsp+130h] [rbp+30h]
  int v37; // [rsp+138h] [rbp+38h]
  int v38; // [rsp+13Ch] [rbp+3Ch]
  _QWORD *v39; // [rsp+140h] [rbp+40h]
  int v40; // [rsp+148h] [rbp+48h]
  int v41; // [rsp+14Ch] [rbp+4Ch]
  _BYTE *v42; // [rsp+150h] [rbp+50h]
  int v43; // [rsp+158h] [rbp+58h]
  int v44; // [rsp+15Ch] [rbp+5Ch]

  sub_180024958(*(void **)(a1 + 112));
  v8 = "success";
  v9 = "fail";
  if ( a2 )
    v9 = "success";
  if ( (unsigned int)dword_1801EA1C0 > 5 && (qword_1801EA1D0 & 0x400000000000LL) != 0 )
  {
    LODWORD(v8) = 0;
    if ( (qword_1801EA1D8 & 0x400000000000LL) == qword_1801EA1D8 )
    {
      v10 = (_QWORD *)(a1 + 48);
      if ( *(_QWORD *)(a1 + 72) >= 0x10uLL )
        v10 = (_QWORD *)*v10;
      v11 = sub_1800230EC(a1 + 8);
      v12 = *(volatile signed __int64 **)(a1 + 112);
      v23 = 1;
      v13 = v11;
      if ( v12 )
      {
        _InterlockedExchangeAdd64(v12 + 18, 0LL);
        sub_180025C4C((void *)v12);
      }
      else
      {
        v24[0] = 0;
      }
      v14 = -1LL;
      if ( a4 )
      {
        v15 = -1LL;
        do
          ++v15;
        while ( a4[v15] );
        v16 = v15 + 1;
      }
      else
      {
        a4 = &unk_180128042;
        v16 = 1;
      }
      v42 = a4;
      v43 = v16;
      v44 = 0;
      if ( v10 )
      {
        v17 = -1LL;
        do
          ++v17;
        while ( *((_BYTE *)v10 + v17) );
        v18 = v17 + 1;
      }
      else
      {
        v10 = &unk_180128042;
        v18 = 1;
      }
      v39 = v10;
      v40 = v18;
      v41 = 0;
      if ( a3 )
      {
        v19 = -1LL;
        do
          ++v19;
        while ( a3[v19] );
        v20 = v19 + 1;
      }
      else
      {
        a3 = &unk_180128042;
        v20 = 1;
      }
      v37 = v20;
      v21 = -1LL;
      v36 = a3;
      v38 = 0;
      do
        ++v21;
      while ( v9[v21] );
      v33 = v9;
      v34 = v21 + 1;
      v29 = &v23;
      v35 = 0;
      v31 = v13;
      v32 = 16LL;
      v30 = 4LL;
      do
        ++v14;
      while ( v24[v14] );
      v28 = 0;
      v27 = v14 + 1;
      v26 = v24;
      LODWORD(v8) = sub_180001278((__int64)&dword_1801EA1C0, (unsigned __int8 *)dword_1801CD490, 0LL, 0LL, 9u, &v25);
    }
  }
  return (int)v8;
}
