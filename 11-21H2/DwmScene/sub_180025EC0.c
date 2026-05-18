/*
 * XREFs of sub_180025EC0 @ 0x180025EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001278 @ 0x180001278 (sub_180001278.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800230EC @ 0x1800230EC (sub_1800230EC.c)
 *     sub_180024958 @ 0x180024958 (sub_180024958.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

int __fastcall sub_180025EC0(__int64 a1, char a2, _BYTE *a3, _BYTE *a4, void *a5)
{
  const char *v9; // rax
  const char *v10; // r12
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  void *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v28[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v30; // [rsp+F0h] [rbp-10h]
  int v31; // [rsp+F8h] [rbp-8h]
  int v32; // [rsp+FCh] [rbp-4h]
  int *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  __int64 v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  const char *v37; // [rsp+120h] [rbp+20h]
  int v38; // [rsp+128h] [rbp+28h]
  int v39; // [rsp+12Ch] [rbp+2Ch]
  _BYTE *v40; // [rsp+130h] [rbp+30h]
  int v41; // [rsp+138h] [rbp+38h]
  int v42; // [rsp+13Ch] [rbp+3Ch]
  _QWORD *v43; // [rsp+140h] [rbp+40h]
  int v44; // [rsp+148h] [rbp+48h]
  int v45; // [rsp+14Ch] [rbp+4Ch]
  _BYTE *v46; // [rsp+150h] [rbp+50h]
  int v47; // [rsp+158h] [rbp+58h]
  int v48; // [rsp+15Ch] [rbp+5Ch]
  void *v49; // [rsp+160h] [rbp+60h]
  int v50; // [rsp+168h] [rbp+68h]
  int v51; // [rsp+16Ch] [rbp+6Ch]

  sub_180024958(*(volatile signed __int64 **)(a1 + 112));
  v9 = "success";
  v10 = "fail";
  if ( a2 )
    v10 = "success";
  if ( (unsigned int)dword_1801EA1C0 > 5 && (qword_1801EA1D0 & 0x400000000000LL) != 0 )
  {
    LODWORD(v9) = 0;
    if ( (qword_1801EA1D8 & 0x400000000000LL) == qword_1801EA1D8 )
    {
      v11 = (_QWORD *)(a1 + 48);
      if ( *(_QWORD *)(a1 + 72) >= 0x10uLL )
        v11 = (_QWORD *)*v11;
      v12 = sub_1800230EC(a1 + 16);
      v13 = *(_QWORD *)(a1 + 112);
      v27 = 1;
      v14 = v12;
      if ( v13 )
        sub_180025C4C((_QWORD *)v13, _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 144), 0LL), v28);
      else
        v28[0] = 0;
      v15 = a5;
      v16 = -1LL;
      if ( a5 )
      {
        v17 = -1LL;
        do
          ++v17;
        while ( *((_BYTE *)a5 + v17) );
        v18 = v17 + 1;
      }
      else
      {
        v15 = &unk_180128042;
        v18 = 1;
      }
      v49 = v15;
      v50 = v18;
      v51 = 0;
      if ( a4 )
      {
        v19 = -1LL;
        do
          ++v19;
        while ( a4[v19] );
        v20 = v19 + 1;
      }
      else
      {
        a4 = &unk_180128042;
        v20 = 1;
      }
      v46 = a4;
      v47 = v20;
      v48 = 0;
      if ( v11 )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( *((_BYTE *)v11 + v21) );
        v22 = v21 + 1;
      }
      else
      {
        v11 = &unk_180128042;
        v22 = 1;
      }
      v43 = v11;
      v44 = v22;
      v45 = 0;
      if ( a3 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( a3[v23] );
        v24 = v23 + 1;
      }
      else
      {
        a3 = &unk_180128042;
        v24 = 1;
      }
      v41 = v24;
      v25 = -1LL;
      v40 = a3;
      v42 = 0;
      do
        ++v25;
      while ( v10[v25] );
      v37 = v10;
      v38 = v25 + 1;
      v33 = &v27;
      v39 = 0;
      v35 = v14;
      v36 = 16LL;
      v34 = 4LL;
      do
        ++v16;
      while ( v28[v16] );
      v32 = 0;
      v31 = v16 + 1;
      v30 = v28;
      LODWORD(v9) = sub_180001278((__int64)&dword_1801EA1C0, (unsigned __int8 *)dword_1801CCFC9, 0LL, 0LL, 0xAu, &v29);
    }
  }
  return (int)v9;
}
