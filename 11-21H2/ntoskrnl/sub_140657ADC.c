/*
 * XREFs of sub_140657ADC @ 0x140657ADC
 * Callers:
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 * Callees:
 *     sub_1402A2104 @ 0x1402A2104 (sub_1402A2104.c)
 *     sub_1402A21B0 @ 0x1402A21B0 (sub_1402A21B0.c)
 *     sub_1402A2204 @ 0x1402A2204 (sub_1402A2204.c)
 *     sub_140346D80 @ 0x140346D80 (sub_140346D80.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140657670 @ 0x140657670 (sub_140657670.c)
 *     sub_14067C50C @ 0x14067C50C (sub_14067C50C.c)
 *     sub_14067C528 @ 0x14067C528 (sub_14067C528.c)
 *     sub_14067E9B8 @ 0x14067E9B8 (sub_14067E9B8.c)
 *     sub_14067EA18 @ 0x14067EA18 (sub_14067EA18.c)
 *     sub_14067EF3C @ 0x14067EF3C (sub_14067EF3C.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071C120 @ 0x14071C120 (sub_14071C120.c)
 *     sub_140721F88 @ 0x140721F88 (sub_140721F88.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14091C9C8 @ 0x14091C9C8 (sub_14091C9C8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AB4484 @ 0x140AB4484 (sub_140AB4484.c)
 */

__int64 __fastcall sub_140657ADC(ULONG_PTR BugCheckParameter3, __int64 a2, void *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r15
  ULONG_PTR *v6; // r13
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // rbx
  unsigned int v14; // esi
  ULONG_PTR v15; // rcx
  ULONG_PTR v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  SIZE_T v19; // rbx
  ULONG_PTR *PoolWithTag; // rax
  ULONG_PTR v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r15
  unsigned int v24; // r12d
  int v25; // ebx
  ULONG_PTR *v26; // rsi
  _DWORD *v27; // r12
  _QWORD *v28; // rax
  ULONG_PTR v29; // rax
  unsigned int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rcx
  ULONG_PTR *v33; // rsi
  __int64 v34; // r14
  __int64 v35; // rcx
  ULONG_PTR v36; // rsi
  unsigned int v37; // r15d
  ULONG_PTR v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // edx
  ULONG_PTR v41; // rcx
  _DWORD *v42; // rax
  __int64 v43; // rax
  ULONG_PTR v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  _DWORD v48[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v49; // [rsp+48h] [rbp-30h] BYREF
  int v50; // [rsp+4Ch] [rbp-2Ch]
  _DWORD v51[2]; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v52[2]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v53; // [rsp+60h] [rbp-18h]
  __int64 v54; // [rsp+68h] [rbp-10h]
  __int64 v55; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v56; // [rsp+C8h] [rbp+50h]
  void *Src; // [rsp+D0h] [rbp+58h]
  ULONG_PTR v58; // [rsp+D8h] [rbp+60h] BYREF

  Src = a3;
  v56 = a2;
  v51[1] = 0;
  v52[1] = 0;
  v4 = *(_QWORD *)(BugCheckParameter3 + 72);
  v5 = a2;
  v50 = -1;
  LODWORD(v58) = -1;
  v51[0] = -1;
  v6 = 0LL;
  v53 = 0LL;
  v52[0] = -1;
  v49 = 0;
  v55 = 0LL;
  v10 = sub_140721F88(v4 + 208, &v55, a3, 0xFFFFFFFFLL);
  if ( v10 )
  {
    do
    {
      if ( *(_DWORD *)(v10 + 68) == 3 && *(_QWORD *)(v10 + 88) == BugCheckParameter3 )
        break;
      v10 = sub_140721F88(v7, &v55, v8, v9);
    }
    while ( v10 );
    if ( v10 )
    {
      v55 = 0LL;
      v11 = sub_140721F88(BugCheckParameter3 + 208, &v55, v8, v9);
      v54 = v11;
      if ( v11 )
      {
        if ( *(_DWORD *)(v11 + 68) == 2 )
        {
          if ( *(_QWORD *)(BugCheckParameter3 + 288) == v5 )
          {
            v13 = *(unsigned int *)(BugCheckParameter3 + 280);
            v14 = *(_DWORD *)(BugCheckParameter3 + 284);
            LODWORD(v55) = *(_DWORD *)(BugCheckParameter3 + 280);
          }
          else
          {
            v15 = *(_QWORD *)(BugCheckParameter3 + 32);
            v16 = *(unsigned int *)(BugCheckParameter3 + 40);
            v48[0] = v12;
            v48[1] = 0;
            if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
              v17 = sub_1406BF400(v15, v16);
            else
              v17 = sub_1407C9820(v15);
            if ( !v17 )
              return 3221225626LL;
            v18 = *(_QWORD *)(BugCheckParameter3 + 32);
            v13 = *(unsigned int *)(v17 + 36);
            v14 = *(_DWORD *)(v17 + 40);
            LODWORD(v55) = *(_DWORD *)(v17 + 36);
            if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
              sub_1406BF450(v18, v48);
            else
              sub_1407C97C0(v18, v48);
          }
          if ( !(_DWORD)v13 )
          {
            v24 = v55;
            goto LABEL_47;
          }
          v19 = 8 * v13;
          PoolWithTag = (ULONG_PTR *)ExAllocatePoolWithTag(PagedPool, v19, 0x37344D43u);
          v6 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, v19);
            v21 = *(_QWORD *)(BugCheckParameter3 + 32);
            if ( (*(_BYTE *)(v21 + 140) & 1) != 0 )
              v22 = sub_1406BF400(v21, v14);
            else
              v22 = sub_1407C9820(v21);
            v23 = v22;
            if ( !v22 )
            {
              v24 = v55;
              v25 = -1073741670;
LABEL_75:
              if ( v24 )
              {
LABEL_37:
                v33 = v6;
                v34 = v24;
                do
                {
                  if ( *v33 )
                  {
                    sub_14071C120(*v33);
                    ExFreePoolWithTag((PVOID)*v33, 0x77554D43u);
                  }
                  ++v33;
                  --v34;
                }
                while ( v34 );
              }
LABEL_41:
              ExFreePoolWithTag(v6, 0x37344D43u);
              if ( v23 )
              {
                v35 = *(_QWORD *)(BugCheckParameter3 + 32);
                if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
                  sub_1406BF450(v35, v51);
                else
                  sub_1407C97C0(v35, v51);
              }
              return (unsigned int)v25;
            }
            v48[0] = 0;
            v24 = v55;
            if ( (_DWORD)v55 )
            {
              v26 = v6;
              v27 = (_DWORD *)v22;
              while ( 1 )
              {
                v28 = (_QWORD *)sub_14067EA18();
                *v26 = (ULONG_PTR)v28;
                if ( !v28 )
                  break;
                sub_1402A21B0(v28, BugCheckParameter3);
                v25 = sub_1402A2204((_QWORD *)*v26, v56);
                if ( v25 < 0 )
                  goto LABEL_36;
                if ( !(unsigned __int8)sub_14067EF3C(BugCheckParameter3 + 248, *v26)
                  || !(unsigned __int8)sub_14067E9B8(BugCheckParameter3 + 264, *v26, 1LL) )
                {
                  v25 = -1072103423;
                  goto LABEL_36;
                }
                v29 = *v26;
                v30 = ++v48[0];
                *(_DWORD *)(v29 + 68) = 6;
                v31 = *v26++;
                LODWORD(v29) = *v27++;
                *(_DWORD *)(v31 + 88) = v29;
                if ( v30 >= (unsigned int)v55 )
                {
                  v24 = v55;
                  goto LABEL_32;
                }
              }
              v25 = -1073741670;
LABEL_36:
              v24 = v55;
              goto LABEL_37;
            }
LABEL_32:
            v32 = *(_QWORD *)(BugCheckParameter3 + 32);
            if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
              sub_1406BF450(v32, v51);
            else
              sub_1407C97C0(v32, v51);
            v5 = v56;
LABEL_47:
            v36 = sub_14067EA18();
            if ( !v36 )
            {
              v25 = -1073741670;
              goto LABEL_73;
            }
            sub_14067C50C(*(_QWORD *)(BugCheckParameter3 + 32));
            sub_14091C9C8(*(_QWORD *)(BugCheckParameter3 + 32));
            sub_1402A21B0((_QWORD *)v36, BugCheckParameter3);
            v25 = sub_1402A2204((_QWORD *)v36, v5);
            if ( v25 < 0 )
            {
              v37 = v50;
            }
            else
            {
              if ( !(unsigned __int8)sub_14067E9B8(BugCheckParameter3 + 248, v36, 0LL)
                || !(unsigned __int8)sub_14067E9B8(BugCheckParameter3 + 264, v36, 1LL) )
              {
                v25 = -1072103423;
LABEL_71:
                sub_14071C120(v36);
                ExFreePoolWithTag((PVOID)v36, 0x77554D43u);
LABEL_72:
                sub_140AB4484(*(_QWORD *)(BugCheckParameter3 + 32));
                sub_14067C528(*(_QWORD *)(BugCheckParameter3 + 32));
LABEL_73:
                if ( !v6 )
                  return (unsigned int)v25;
                v23 = 0LL;
                if ( v25 >= 0 )
                  goto LABEL_41;
                goto LABEL_75;
              }
              *(_QWORD *)(v36 + 88) = 0LL;
              *(_DWORD *)(v36 + 68) = 9;
              v37 = -1;
              *(_DWORD *)(v36 + 96) = -1;
              *(_BYTE *)(v36 + 100) = 0;
              v38 = *(_QWORD *)(BugCheckParameter3 + 32);
              if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
                v39 = sub_1406BF400(v38, *(unsigned int *)(BugCheckParameter3 + 40));
              else
                v39 = sub_1407C9820(v38);
              v40 = *(_DWORD *)(BugCheckParameter3 + 40);
              v41 = *(_QWORD *)(BugCheckParameter3 + 32);
              v53 = v39;
              v25 = sub_140657670(v41, v40, v39, 1u, Src, 1, (unsigned int *)&v58);
              if ( v25 < 0 )
              {
                v37 = v58;
              }
              else
              {
                if ( !sub_140346D80(*(_QWORD *)(BugCheckParameter3 + 32), v58, &v49) )
                  KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, (unsigned int)v58);
                v42 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 32) + 1888LL) + 16LL * v49 + 8);
                *(_QWORD *)(v36 + 88) = v42;
                *(_DWORD *)(v36 + 96) = *v42;
                v43 = v54;
                *(_BYTE *)(v36 + 100) = 1;
                v36 = 0LL;
                *(_DWORD *)(v10 + 68) = 13;
                *(_DWORD *)(v43 + 68) = 14;
                if ( *(_QWORD *)(BugCheckParameter3 + 288) )
                {
                  v44 = *(unsigned int *)(BugCheckParameter3 + 284);
                  if ( (_DWORD)v44 != -1 )
                    sub_14079BD98(*(_QWORD *)(BugCheckParameter3 + 32), v44);
                }
                v45 = v56;
                *(_DWORD *)(BugCheckParameter3 + 280) = 0;
                *(_DWORD *)(BugCheckParameter3 + 284) = -1;
                *(_QWORD *)(BugCheckParameter3 + 288) = v45;
              }
            }
            if ( v37 != -1 )
              sub_1402A2104(*(_QWORD *)(BugCheckParameter3 + 32), v37);
            if ( v53 )
            {
              v46 = *(_QWORD *)(BugCheckParameter3 + 32);
              if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
                sub_1406BF450(v46, v52);
              else
                sub_1407C97C0(v46, v52);
            }
            if ( !v36 )
              goto LABEL_72;
            goto LABEL_71;
          }
          return 3221225626LL;
        }
      }
    }
  }
  return 3221225524LL;
}
