/*
 * XREFs of sub_140971068 @ 0x140971068
 * Callers:
 *     sub_140971848 @ 0x140971848 (sub_140971848.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402DBF3C @ 0x1402DBF3C (sub_1402DBF3C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054DBF0 @ 0x14054DBF0 (sub_14054DBF0.c)
 *     sub_1406EB3D4 @ 0x1406EB3D4 (sub_1406EB3D4.c)
 *     RtlFindExportedRoutineByName @ 0x140757F00 (RtlFindExportedRoutineByName.c)
 *     sub_14080C400 @ 0x14080C400 (sub_14080C400.c)
 *     sub_140931ED4 @ 0x140931ED4 (sub_140931ED4.c)
 *     sub_1409328A8 @ 0x1409328A8 (sub_1409328A8.c)
 *     sub_1409682E4 @ 0x1409682E4 (sub_1409682E4.c)
 *     sub_140970E00 @ 0x140970E00 (sub_140970E00.c)
 *     sub_140971708 @ 0x140971708 (sub_140971708.c)
 *     sub_140972A10 @ 0x140972A10 (sub_140972A10.c)
 *     sub_14097389C @ 0x14097389C (sub_14097389C.c)
 *     sub_1409739A4 @ 0x1409739A4 (sub_1409739A4.c)
 *     sub_140973F50 @ 0x140973F50 (sub_140973F50.c)
 *     sub_140974FBC @ 0x140974FBC (sub_140974FBC.c)
 *     sub_140976790 @ 0x140976790 (sub_140976790.c)
 *     sub_140978260 @ 0x140978260 (sub_140978260.c)
 *     sub_14097F0F0 @ 0x14097F0F0 (sub_14097F0F0.c)
 *     sub_14097F690 @ 0x14097F690 (sub_14097F690.c)
 *     sub_1409C0550 @ 0x1409C0550 (sub_1409C0550.c)
 *     sub_1409C0580 @ 0x1409C0580 (sub_1409C0580.c)
 *     sub_1409C0744 @ 0x1409C0744 (sub_1409C0744.c)
 *     sub_1409C0794 @ 0x1409C0794 (sub_1409C0794.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140971068(ULONG64 a1, ULONG64 a2, __int64 a3, char a4)
{
  void *v6; // r15
  __int64 result; // rax
  __int64 v8; // r14
  int v9; // ecx
  unsigned int v10; // r12d
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r13
  int v16; // eax
  void *v17; // rcx
  int v18; // r14d
  __int64 v19; // r13
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  int v25; // eax
  int v26; // eax
  int v27; // eax
  _QWORD *v28; // rax
  _QWORD *v29; // r8
  BOOL v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh]
  __int64 v32; // [rsp+48h] [rbp-B8h]
  _QWORD v33[8]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v34; // [rsp+90h] [rbp-70h]
  void *v35; // [rsp+98h] [rbp-68h]
  _RTL_BITMAP_EX v36[7]; // [rsp+A0h] [rbp-60h] BYREF
  _RTL_BITMAP_EX v37[10]; // [rsp+110h] [rbp+10h] BYREF
  int v38; // [rsp+1C8h] [rbp+C8h]

  v30 = 0;
  v31 = 0;
  v38 = 0;
  v6 = 0LL;
  memset(v33, 0, sizeof(v33));
  if ( (*(_DWORD *)(a2 + 196) & 0x20) != 0 )
    return 3221225496LL;
  v33[3] = sub_1409C0580(*(PVOID *)(a1 + 48));
  v8 = v33[3];
  v32 = sub_1409C0550(v33[3]);
  if ( !v32 )
    return 3221225595LL;
  v10 = *(_DWORD *)(a1 + 64);
  v11 = *(_DWORD *)(a2 + 64);
  if ( !(unsigned __int8)sub_1409C0794(v9, v32, v11, v10) )
    return 3221225595LL;
  memset(v36, 0, 0x68uLL);
  v36[0].SizeOfBitMap = a2;
  v36[0].Buffer = (PULONG64)v32;
  LODWORD(v36[1].Buffer) = (v11 >> 12) + ((v11 & 0xFFF) != 0);
  memset(v37, 0, 0x68uLL);
  v37[0].SizeOfBitMap = a1;
  LODWORD(v37[1].Buffer) = (v10 >> 12) + ((v10 & 0xFFF) != 0);
  if ( *(_QWORD *)(a2 + 280) )
  {
    result = sub_140931ED4(*(_QWORD *)(a2 + 48), &v30);
    if ( (int)result < 0 )
      return result;
    v12 = v30;
    if ( v30 )
    {
      v33[5] = sub_1402828F0(256, v30, 0x54555048u);
      if ( !v33[5] )
        return 3221225626LL;
      v13 = sub_1409328A8(*(PVOID *)(a2 + 48), v33[5], v12);
      if ( v13 < 0 )
      {
        v18 = 0;
        goto LABEL_64;
      }
    }
  }
  if ( (a4 & 1) != 0 )
    v14 = sub_14027B520();
  else
    v14 = (__int64)sub_14026DFC0(1);
  v34 = 0LL;
  v15 = v14;
  v16 = *(_DWORD *)(a1 + 196);
  v17 = *(void **)(a2 + 136);
  v35 = v17;
  if ( (v16 & 0x20) == 0 && v17 != (void *)1 )
  {
    if ( (a4 & 1) != 0 )
    {
      v34 = sub_1402DBF3C(*(_QWORD *)(a2 + 48));
      v17 = (void *)v34[11];
      v35 = v17;
    }
    v6 = (void *)sub_140978260(v17, a1);
    if ( !v6 )
    {
      v13 = -1073741670;
      goto LABEL_20;
    }
  }
  v13 = sub_1409682E4((__int64)v36, v15);
  if ( v13 < 0 )
    goto LABEL_20;
  v13 = sub_1409682E4((__int64)v37, v15);
  if ( v13 < 0 )
    goto LABEL_20;
  v19 = *(unsigned int *)(v32 + 24);
  v33[0] = v36;
  v20 = v8 + v19;
  v33[4] = v20;
  v33[1] = v37;
  v33[2] = a3;
  v30 = !(a4 & 1);
  v13 = sub_1409739A4(v33, !(a4 & 1));
  if ( v13 < 0 )
    goto LABEL_20;
  v13 = sub_14097389C(v36);
  if ( v13 < 0 )
    goto LABEL_20;
  if ( (*(_BYTE *)(a1 + 196) & 0x20) == 0 && (a4 & 1) != 0 )
  {
    v13 = sub_140972A10(v33);
    if ( v13 < 0 )
      goto LABEL_20;
  }
  v13 = sub_140976790(v33);
  if ( v13 < 0 )
    goto LABEL_20;
  v32 = *(_QWORD *)(a3 + 96);
  v13 = sub_14097F0F0(v32, v21, v22, v23);
  if ( v13 < 0 )
    goto LABEL_20;
  if ( (*(_DWORD *)(a1 + 196) & 0x20) != 0 )
  {
    v24 = v32;
    goto LABEL_46;
  }
  if ( (dword_140D06880 & 0x40000) == 0
    || !(unsigned int)sub_1409C0744(v8, v20)
    || (v13 = sub_14097F690(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), 0LL), v13 >= 0) )
  {
    v24 = v32;
    v25 = sub_14054DBF0(
            *(_QWORD *)(v32 + 56),
            *(_QWORD *)(a1 + 112),
            *(_QWORD *)(a2 + 48),
            a2,
            *(_QWORD *)(a1 + 48),
            a1,
            v30 | 2u,
            0LL);
    v13 = v25;
    if ( v25 < 0 )
    {
      if ( v25 == -1073740628 )
        KeBugCheckEx(0x1Au, 0x485019uLL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 48), 0LL);
      goto LABEL_20;
    }
    v13 = sub_140971708(v33);
    if ( v13 >= 0 )
    {
      if ( (*(_DWORD *)(a2 + 196) & 0x100) != 0 )
        v33[6] = RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "__PatchMainCallout__");
      if ( v33[6] )
      {
        LODWORD(v33[7]) = 0;
        v13 = sub_140973F50(a1, &v33[6]);
        if ( v13 < 0 )
          goto LABEL_20;
        v8 = v33[3];
        v31 = 1;
      }
      if ( (a4 & 1) != 0 )
      {
        sub_140974FBC(*(_DWORD *)(a2 + 120), *(_DWORD *)(a2 + 156), a1 + 72, v13, 3);
        v38 = 1;
        v13 = sub_140970E00(a2, a1, 0, (__int64)v33);
        if ( v13 < 0 )
          goto LABEL_20;
        v8 = v33[3];
      }
LABEL_46:
      v26 = sub_14054DBF0(
              *(_QWORD *)(v24 + 56),
              *(_QWORD *)(a1 + 112),
              *(_QWORD *)(a2 + 48),
              a2,
              *(_QWORD *)(a1 + 48),
              a1,
              v30,
              0LL);
      v13 = v26;
      if ( v26 >= 0 )
      {
        if ( v33[6] )
        {
          LODWORD(v33[7]) = 1;
          sub_140973F50(a1, &v33[6]);
          v31 = 0;
          if ( (a4 & 1) != 0 )
            sub_140970E00(a2, a1, 3, (__int64)&v33[6]);
          v8 = v33[3];
        }
        if ( v6 )
        {
          if ( (a4 & 1) != 0 )
            v34[11] = v6;
          else
            *(_QWORD *)(a2 + 136) = v6;
          sub_1406EB3D4(v35);
          v6 = 0LL;
        }
        *(_QWORD *)(a2 + 280) = a1;
        v27 = *(_DWORD *)(a1 + 196);
        if ( (v27 & 0x20) == 0 )
        {
          *(_QWORD *)(a1 + 280) = a2;
          *(_DWORD *)(a1 + 196) = v27 | 0x20;
          *(_DWORD *)(a1 + 312) = *(_DWORD *)(v8 + 8);
          v28 = (_QWORD *)(a1 + 296);
          v29 = *(_QWORD **)(a2 + 304);
          if ( *v29 != a2 + 296 )
            __fastfail(3u);
          *v28 = a2 + 296;
          *(_QWORD *)(a1 + 304) = v29;
          *v29 = v28;
          *(_QWORD *)(a2 + 304) = v28;
        }
        v18 = 0;
        goto LABEL_64;
      }
      if ( v26 == -1073740628 )
        KeBugCheckEx(0x1Au, 0x48501AuLL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 48), 0LL);
    }
  }
LABEL_20:
  v18 = v38;
LABEL_64:
  sub_14080C400(v36);
  sub_14080C400(v37);
  if ( v33[5] )
    ExFreePoolWithTag((PVOID)v33[5], 0);
  if ( v6 )
    sub_1406EB3D4(v6);
  if ( v31 )
  {
    LODWORD(v33[7]) = 2;
    sub_140973F50(a1, &v33[6]);
  }
  if ( v18 )
    sub_140970E00(a2, a1, 2, (__int64)v33);
  return (unsigned int)v13;
}
