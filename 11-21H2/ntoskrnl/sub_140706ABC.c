/*
 * XREFs of sub_140706ABC @ 0x140706ABC
 * Callers:
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 * Callees:
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_14029C6C4 @ 0x14029C6C4 (sub_14029C6C4.c)
 *     sub_14029C6DC @ 0x14029C6DC (sub_14029C6DC.c)
 *     sub_14029C764 @ 0x14029C764 (sub_14029C764.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406ACDDC @ 0x1406ACDDC (sub_1406ACDDC.c)
 *     sub_1406ACFF0 @ 0x1406ACFF0 (sub_1406ACFF0.c)
 *     sub_140706200 @ 0x140706200 (sub_140706200.c)
 *     sub_1407064E8 @ 0x1407064E8 (sub_1407064E8.c)
 *     sub_140706680 @ 0x140706680 (sub_140706680.c)
 *     sub_140706A48 @ 0x140706A48 (sub_140706A48.c)
 *     sub_14070705C @ 0x14070705C (sub_14070705C.c)
 *     sub_1407E5148 @ 0x1407E5148 (sub_1407E5148.c)
 *     sub_1407FB114 @ 0x1407FB114 (sub_1407FB114.c)
 */

__int64 __fastcall sub_140706ABC(__int64 a1, char *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  bool v9; // r15
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int16 v14; // ax
  unsigned int v15; // eax
  unsigned int *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  int v23; // eax
  char Src; // [rsp+20h] [rbp-3B8h]
  size_t Size; // [rsp+28h] [rbp-3B0h]
  int v27; // [rsp+80h] [rbp-358h] BYREF
  int v28[3]; // [rsp+84h] [rbp-354h] BYREF
  unsigned __int64 v29; // [rsp+90h] [rbp-348h]
  int v30; // [rsp+98h] [rbp-340h]
  __int64 v31; // [rsp+A0h] [rbp-338h]
  __int64 v32; // [rsp+A8h] [rbp-330h]
  __int64 v33; // [rsp+B0h] [rbp-328h]
  __int64 v34; // [rsp+B8h] [rbp-320h]
  __int64 v35; // [rsp+C0h] [rbp-318h]
  char *v36; // [rsp+C8h] [rbp-310h]
  __int64 v37; // [rsp+D0h] [rbp-308h]
  __int64 v38; // [rsp+D8h] [rbp-300h]
  __int64 v39[2]; // [rsp+E0h] [rbp-2F8h] BYREF
  __int64 v40; // [rsp+F0h] [rbp-2E8h]
  char *v41; // [rsp+F8h] [rbp-2E0h]
  __int64 v42; // [rsp+100h] [rbp-2D8h]
  int v43[80]; // [rsp+110h] [rbp-2C8h] BYREF
  _BYTE v44[320]; // [rsp+250h] [rbp-188h] BYREF

  v35 = a1;
  v40 = a1;
  v36 = a2;
  v41 = a2;
  v37 = a3;
  v42 = a3;
  v30 = a4;
  v38 = a5;
  memset(v44, 0, 0x138uLL);
  v39[0] = 0LL;
  v28[0] = 0;
  v9 = 0;
  v29 = 0LL;
  v34 = 0LL;
  v27 = 0;
  v10 = 0;
  memset(v43, 0, sizeof(v43));
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v31 = v11;
  v32 = v11;
  *(_QWORD *)&v28[1] = *(_QWORD *)a3;
  v33 = *(_QWORD *)&v28[1];
  v12 = *(unsigned int *)(a3 + 96);
  if ( (_DWORD)v12 )
  {
    v13 = *(_DWORD *)(a3 + 100);
    v14 = *(_WORD *)(a3 + 48);
    if ( v14 == 523 )
    {
      v15 = 148;
    }
    else
    {
      if ( v14 != 267 )
        goto LABEL_21;
      v15 = 92;
    }
    if ( (unsigned int)v12 + v15 <= (unsigned int)v12 || (unsigned int)v12 + v15 > *(_DWORD *)(a3 + 16) )
      goto LABEL_21;
    v16 = (unsigned int *)&a2[v12];
    v39[1] = (__int64)&a2[v12];
    if ( v13 < v15 )
    {
      if ( *(_WORD *)(v11 + 48) != 332 )
        goto LABEL_21;
      if ( v13 > 4 )
        v13 = *v16;
      if ( v13 < v15 )
        goto LABEL_21;
    }
    if ( v13 >= 0x138 )
      v13 = 312;
    v17 = *(_DWORD *)(a3 + 96);
    if ( v17 + v13 <= v17 )
      goto LABEL_21;
    if ( v17 + v13 > *(_DWORD *)(a3 + 16) )
      goto LABEL_21;
    memmove(v44, v16, v13);
    v29 = sub_140281750(a1);
    sub_1407E5148(*(unsigned int *)(a3 + 96), v13, v29, a1);
    *(_QWORD *)v43 = v40;
    *(_QWORD *)&v43[2] = v29;
    *(_QWORD *)&v43[4] = v41;
    *(_QWORD *)&v43[6] = *(_QWORD *)&v28[1];
    v43[8] = v30;
    v43[9] = 0;
    *(_QWORD *)&v43[10] = v42;
    *(_QWORD *)&v43[12] = v44;
    v43[14] = v13;
    v10 = sub_140706680(
            a1,
            v29,
            (__int64)a2,
            *(unsigned __int64 *)&v28[1],
            a4,
            a3,
            (__int64)v44,
            v13,
            &v27,
            (__int64)&v43[16]);
    if ( v10 < 0 )
      goto LABEL_21;
    *(_DWORD *)a5 |= v27;
    v18 = v31;
    *(_WORD *)(a5 + 4) = *(_WORD *)(v31 + 48) == 452;
    *(_WORD *)(a5 + 6) = *(_WORD *)(v18 + 48);
    sub_140706A48((unsigned int *)a5, &v43[38], &v43[32], (unsigned int *)&v43[36]);
    if ( v43[36] )
    {
      v10 = sub_1407064E8(v43, v19, v20, (unsigned int)v43[36], &v43[32], Size, (__int64 *)(a5 + 8));
      if ( v10 < 0 )
        goto LABEL_21;
    }
    if ( sub_14029C6C4() || sub_14029C6DC() )
      v9 = *(_WORD *)(a3 + 48) == 523;
    if ( !v9 )
      goto LABEL_21;
    v21 = sub_140706200(a2, a4, (__int64)v44, v13, *(__int64 *)&v28[1], *(_WORD *)(a3 + 48), v28, v39);
    v10 = v21;
    if ( v21 == -1073741637 )
    {
      v10 = 0;
    }
    else if ( v21 < 0 )
    {
      goto LABEL_21;
    }
    if ( v28[0] )
    {
      v23 = sub_1406ACDDC(a2, a4, v28[0], v39, Src, (unsigned int *)&v43[24]);
      v10 = v23;
      if ( v23 == -1073741637 )
      {
        v10 = 0;
        goto LABEL_23;
      }
      if ( v23 >= 0 )
        v10 = sub_1406ACFF0((__int64)&v43[24], v43[22], a4, (_QWORD *)(a5 + 16));
    }
  }
LABEL_21:
  if ( v10 < 0 )
    sub_1407FB114(a5);
LABEL_23:
  if ( v29 )
    sub_140280D08(a1, v29);
  sub_14029C764((__int64)&v43[16]);
  sub_14070705C(&v43[24]);
  return (unsigned int)v10;
}
