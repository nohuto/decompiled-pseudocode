/*
 * XREFs of sub_14080DBCC @ 0x14080DBCC
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 *     sub_14076BC20 @ 0x14076BC20 (sub_14076BC20.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14055F36C @ 0x14055F36C (sub_14055F36C.c)
 *     sub_14074C534 @ 0x14074C534 (sub_14074C534.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_14080E030 @ 0x14080E030 (sub_14080E030.c)
 *     sub_14080E0AC @ 0x14080E0AC (sub_14080E0AC.c)
 *     sub_14080E218 @ 0x14080E218 (sub_14080E218.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14080DBCC(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  int v4; // esi
  _QWORD *v6; // r12
  _QWORD *v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rdx
  _DWORD *v13; // r8
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 Pool2; // rax
  __int64 *v18; // rcx
  __int64 v19; // r15
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  int v22; // eax
  PVOID *v23; // rax
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _WORD *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int16 *v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  PVOID P; // [rsp+60h] [rbp+30h] BYREF

  v2 = 0;
  v4 = 0;
  P = 0LL;
  if ( !*(_QWORD *)(a1 + 16) )
    return 3221225865LL;
  if ( !a2 )
  {
    v4 = sub_14074C534(*(_QWORD *)(a1 + 32), 2, 0LL, (__int64)&P);
    if ( v4 >= 0 )
    {
      v6 = (_QWORD *)(a1 + 192);
      v7 = *(_QWORD **)(a1 + 192);
      while ( v7 != v6 )
      {
        v8 = *v7;
        v9 = v7;
        v7 = (_QWORD *)v8;
        if ( *(_QWORD **)(v8 + 8) != v9
          || (v10 = (_QWORD *)v9[1], (_QWORD *)*v10 != v9)
          || (*v10 = v8, *(_QWORD *)(v8 + 8) = v10, v11 = v9[3], *(_QWORD **)(v11 + 8) != v9 + 3)
          || (v12 = (_QWORD *)v9[4], (_QWORD *)*v12 != v9 + 3) )
        {
LABEL_26:
          __fastfail(3u);
        }
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        ExFreePoolWithTag(v9, 0x72775044u);
      }
      v13 = P;
      if ( !P || !*(_DWORD *)P )
      {
        v4 = 0;
        goto LABEL_29;
      }
      v14 = 0;
      while ( 1 )
      {
        v15 = *(_QWORD *)&v13[2 * v14 + 2];
        if ( !v15 || (v16 = *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL)) == 0 || (*(_DWORD *)(v16 + 396) & 0x20000) != 0 )
        {
          v25 = *(_QWORD *)&v13[2 * v14 + 2];
          if ( v25 )
          {
            sub_1403D99B4(v25, (PVOID)*(unsigned __int16 *)(v25 + 2));
            v13 = P;
            v26 = *(_QWORD *)(*((_QWORD *)P + v14 + 1) + 8LL);
            if ( v26 )
            {
              sub_1403D99B4(v26, (PVOID)(unsigned int)*(__int16 *)(v26 + 2));
              v13 = P;
              v27 = (_WORD *)(*(_QWORD *)(*((_QWORD *)P + v14 + 1) + 8LL) + 56LL);
              if ( *v27 )
              {
                sub_1403D99B4((ULONG)v27, (PVOID)2);
                v28 = *(_QWORD *)(*((_QWORD *)P + v14 + 1) + 8LL);
                sub_1403D99B4(*(_QWORD *)(v28 + 64), (PVOID)*(unsigned __int16 *)(v28 + 56));
                v13 = P;
              }
            }
            v29 = *(_QWORD *)&v13[2 * v14 + 2];
            if ( v29 )
            {
              v30 = *(_QWORD *)(v29 + 312);
              if ( *(_QWORD *)(v30 + 40) )
              {
                v32 = (unsigned __int16 *)sub_14055F36C(*(_QWORD *)(v30 + 40));
                sub_1403D99B4(*(_QWORD *)(*(_QWORD *)(v31 + 312) + 40LL), (PVOID)0x310);
                if ( *v32 )
                {
                  sub_1403D99B4((ULONG)v32, (PVOID)2);
                  sub_1403D99B4(*((_QWORD *)v32 + 1), (PVOID)*v32);
                }
                v13 = P;
                v33 = *((_QWORD *)P + v14 + 1);
                if ( v33 )
                  v34 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
                else
                  v34 = 0LL;
                if ( *(_WORD *)(v34 + 56) )
                {
                  if ( v33 )
                    v35 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
                  else
                    LODWORD(v35) = 0;
                  sub_1403D99B4(v35 + 56, (PVOID)2);
                  v36 = *((_QWORD *)P + v14 + 1);
                  if ( v36 )
                  {
                    v37 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
                    v38 = v37;
                  }
                  else
                  {
                    v37 = 0LL;
                    v38 = 0LL;
                  }
                  sub_1403D99B4(*(_QWORD *)(v37 + 64), (PVOID)*(unsigned __int16 *)(v38 + 56));
                  v13 = P;
                }
                v39 = *(_QWORD *)&v13[2 * v14 + 2];
                if ( v39 )
                  v40 = *(_QWORD *)(*(_QWORD *)(v39 + 312) + 40LL);
                else
                  v40 = 0LL;
                if ( *(_QWORD *)(v40 + 16) )
                {
                  v41 = v39 ? *(_QWORD *)(*(_QWORD *)(v39 + 312) + 40LL) : 0LL;
                  if ( *(_WORD *)(*(_QWORD *)(v41 + 16) + 56LL) )
                  {
                    if ( v39 )
                      v42 = *(_QWORD *)(*(_QWORD *)(v39 + 312) + 40LL);
                    else
                      v42 = 0LL;
                    sub_1403D99B4(*(_QWORD *)(v42 + 16) + 56, (PVOID)2);
                    v43 = *((_QWORD *)P + v14 + 1);
                    if ( v43 )
                    {
                      v44 = *(_QWORD *)(*(_QWORD *)(v43 + 312) + 40LL);
                      v45 = v44;
                    }
                    else
                    {
                      v44 = 0LL;
                      v45 = 0LL;
                    }
                    sub_1403D99B4(
                      *(_QWORD *)(*(_QWORD *)(v44 + 16) + 64LL),
                      (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v45 + 16) + 56LL));
                    v13 = P;
                  }
                }
              }
            }
          }
          KeBugCheckEx(0xCAu, 2uLL, *(_QWORD *)&v13[2 * v14 + 2], 0LL, 0LL);
        }
        if ( *(_QWORD *)(v16 + 16) )
        {
          Pool2 = ExAllocatePool2(64LL, 56LL, 1920421956LL);
          if ( !Pool2 )
          {
            v4 = -1073741670;
            goto LABEL_29;
          }
          *(_BYTE *)(Pool2 + 48) = 0;
          *(_QWORD *)(Pool2 + 16) = a1 + 160;
          *(_QWORD *)(Pool2 + 40) = v16 + 160;
          v18 = *(__int64 **)(a1 + 200);
          if ( (_QWORD *)*v18 != v6 )
            goto LABEL_26;
          *(_QWORD *)Pool2 = v6;
          v19 = v16 + 176;
          *(_QWORD *)(Pool2 + 8) = v18;
          *v18 = Pool2;
          *(_QWORD *)(a1 + 200) = Pool2;
          v20 = (_QWORD *)(Pool2 + 24);
          v21 = *(_QWORD **)(v19 + 8);
          if ( *v21 != v19 )
            goto LABEL_26;
          *v20 = v19;
          v20[1] = v21;
          *v21 = v20;
          *(_QWORD *)(v19 + 8) = v20;
          v13 = P;
        }
        if ( ++v14 >= *v13 )
          goto LABEL_29;
      }
    }
    P = 0LL;
  }
LABEL_29:
  v22 = sub_14080E218(a1);
  if ( v4 >= 0 && v22 < 0 )
    v4 = v22;
  sub_14080E0AC(a1);
  v23 = (PVOID *)P;
  if ( P )
  {
    if ( *(_DWORD *)P )
    {
      do
      {
        ObfDereferenceObject(v23[v2 + 1]);
        v23 = (PVOID *)P;
        ++v2;
      }
      while ( v2 < *(_DWORD *)P );
    }
    ExFreePoolWithTag(v23, 0);
  }
  sub_14077572C(0);
  v24 = *(_DWORD *)(a1 + 300);
  if ( (unsigned int)(v24 - 768) > 2 && (unsigned int)(v24 - 789) > 1 )
    sub_14080E030(*(_QWORD *)(a1 + 32));
  sub_140775698(0);
  return (unsigned int)v4;
}
