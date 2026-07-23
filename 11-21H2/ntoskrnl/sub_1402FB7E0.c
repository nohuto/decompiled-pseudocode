/*
 * XREFs of sub_1402FB7E0 @ 0x1402FB7E0
 * Callers:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402B1170 @ 0x1402B1170 (sub_1402B1170.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     sub_14039C618 @ 0x14039C618 (sub_14039C618.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1402FB7E0(int *a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  char v7; // r14
  char v8; // bp
  int v9; // ebx
  int v10; // eax
  __int16 v11; // ax
  unsigned __int16 *v12; // rsi
  __int64 v13; // rax
  _WORD **v14; // rax
  _WORD *v15; // r12
  int v16; // eax
  int v17; // eax
  unsigned __int16 v18; // cx
  __int16 v19; // r15
  int v20; // edx
  int v21; // edx
  __int16 v22; // bp
  unsigned int v23; // edx
  char v24; // dl
  char v25; // al
  char v26; // dl
  __int64 result; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rsi
  int v31; // eax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v33; // r12
  __int16 v34; // cx
  char v35; // r9
  int v36; // ecx
  int v37; // ecx
  int v38; // edx
  __int64 CurrentIrql; // rdx
  struct _KTHREAD *v40; // rcx
  int v41; // ecx
  char v42; // [rsp+30h] [rbp-58h]
  unsigned __int16 v43; // [rsp+32h] [rbp-56h]
  char v44; // [rsp+34h] [rbp-54h]
  PVOID P; // [rsp+40h] [rbp-48h]
  __int64 v47; // [rsp+48h] [rbp-40h]

  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = *(_DWORD *)(a4 + 212);
  v42 = 0;
  *(_DWORD *)(a6 + 8) = v10;
  if ( (v10 & 0xFFFFFFFD) != 0 )
  {
    if ( (_BYTE)a3 )
      goto LABEL_4;
    v11 = *(_WORD *)(a2 + 2);
    if ( (v11 & 0x10) == 0 )
      goto LABEL_4;
    if ( v11 >= 0 )
    {
      v29 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      v28 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v28 )
        goto LABEL_4;
      v29 = a2 + v28;
    }
    if ( v29 )
    {
      v30 = v29 + 8;
      a3 = 0LL;
      if ( *(_WORD *)(v29 + 4) )
      {
        while ( *(_BYTE *)v30 != 17 )
        {
          a3 = (unsigned int)(a3 + 1);
          v30 += *(unsigned __int16 *)(v30 + 2);
          if ( (unsigned int)a3 >= *(unsigned __int16 *)(v29 + 4) )
            goto LABEL_4;
        }
        if ( (*(_BYTE *)(v30 + 1) & 8) == 0 )
        {
          v31 = *(_DWORD *)(v30 + 4);
          v12 = (unsigned __int16 *)(v30 + 8);
          v44 = v31;
LABEL_5:
          if ( a5 )
          {
            CurrentThread = KeGetCurrentThread();
            --*((_WORD *)CurrentThread + 242);
            v33 = *(_QWORD *)(a4 + 48);
            v34 = *(_WORD *)(v33 + 26);
            if ( (v34 & 0x41) == 1 )
              KeBugCheckEx(0x1C6u, 0xFuLL, *(_QWORD *)(a4 + 48), 0LL, 0LL);
            if ( (v34 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              v40 = KeGetCurrentThread();
              if ( (unsigned __int8)CurrentIrql > 1u )
                KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
              if ( (*((_BYTE *)v40 + 192) & 2) != 0 )
                KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
              if ( !(_BYTE)CurrentIrql && (*((_DWORD *)v40 + 29) & 0x400) == 0 && !*((_DWORD *)v40 + 121) )
                KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
              P = (PVOID)sub_14039C618(v40, CurrentIrql, a3);
              if ( !(unsigned __int8)ExAcquireFastResourceShared(v33, (ULONG_PTR)P) )
                ExFreePoolWithTag(P, 0);
            }
            else
            {
              sub_1402B1170(*(_QWORD *)(a4 + 48), 1);
            }
          }
          v13 = *(unsigned int *)(a4 + 208);
          if ( (_DWORD)v13 == -1 || (v14 = (_WORD **)(*(_QWORD *)(a4 + 152) + 16 * v13)) == 0LL )
            v15 = (_WORD *)qword_140C1B9C0;
          else
            v15 = *v14;
          if ( a5 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
            KeLeaveCriticalRegion();
          }
          v16 = *((unsigned __int8 *)v12 + 1);
          if ( (_BYTE)v16 )
            v17 = *(_DWORD *)&v12[2 * (v16 - 1) + 4];
          else
            v17 = 0;
          *(_DWORD *)(a6 + 12) = v17;
          v18 = *v15;
          v19 = *v12;
          v43 = *v15;
          if ( *v12 == *v15 )
          {
            if ( !memcmp(v12, v15, 4 * ((unsigned __int64)*v12 >> 8) + 8) )
              goto LABEL_28;
            v18 = v43;
          }
          v20 = *(_DWORD *)(v15 + 1);
          WORD2(v47) = 4096;
          if ( !v20 )
            v20 = (unsigned __int16)v15[3] - 4096;
          if ( v20 )
            goto LABEL_89;
          v21 = *(_DWORD *)(v12 + 1);
          if ( !v21 )
            v21 = v12[3] - 4096;
          if ( v21 )
          {
LABEL_89:
            LODWORD(v47) = -1073741811;
            v26 = 0;
            result = v47;
LABEL_35:
            *(_DWORD *)a6 = v9;
            *(_BYTE *)(a6 + 4) = v7;
            *(_BYTE *)(a6 + 5) = v26;
            *(_BYTE *)(a6 + 6) = v8;
            return result;
          }
          v22 = HIBYTE(v18);
          if ( v18 != v19 || memcmp(v15, v12, 4LL * HIBYTE(v18) + 8) )
          {
            v23 = (_BYTE)v22 ? *(_DWORD *)&v15[2 * (unsigned __int8)v22 + 2] : 0;
            if ( HIBYTE(v19) && v23 < *(_DWORD *)&v12[2 * HIBYTE(v19) + 2] )
            {
              v24 = 0;
LABEL_29:
              if ( (*(_DWORD *)(a6 + 8) & 1) != 0 )
              {
                v25 = 1;
                v42 = 1;
                v9 = *a1 | ~*a1 & a1[2] | 0x120000;
                if ( v24 )
                {
                  v7 = 1;
                  v8 = 1;
                  v9 |= a1[3] | 0x11FFFFF;
                  v26 = 1;
LABEL_32:
                  if ( _bittest64((const signed __int64 *)(a4 + 72), 0x20u) )
                    v9 |= 0x80000u;
                  result = 0LL;
                  goto LABEL_35;
                }
              }
              else
              {
                v25 = 0;
              }
              v7 = 0;
              v8 = v25;
              if ( v24 )
              {
                v26 = v42;
              }
              else
              {
                v7 = 0;
                v35 = 0;
                if ( (v44 & 2) == 0 )
                  v35 = v25;
                v8 = 0;
                if ( (v44 & 4) == 0 )
                  v8 = v42;
                if ( (v44 & 2) != 0 )
                {
                  v37 = *a1;
                  if ( v8 )
                    v38 = ~v37 & a1[2] | 0x100000;
                  else
                    v38 = 0;
                  v9 &= v38 | ~(v37 | 0x20000);
                }
                if ( (v44 & 4) != 0 )
                {
                  v41 = 0;
                  if ( v35 )
                    v41 = *a1 | 0x20000;
                  v9 &= ~(~v41 & (~*a1 & a1[2] | 0x100000));
                }
                v26 = v35;
                if ( (v44 & 1) != 0 )
                {
                  v36 = 0;
                  if ( v8 )
                    v36 = ~*a1 & a1[2] | 0x100000;
                  if ( v35 )
                    v36 |= *a1 | 0x20000;
                  v9 &= ~(~v36 & (a1[1] | 0x10D0000));
                }
              }
              goto LABEL_32;
            }
          }
LABEL_28:
          v24 = 1;
          goto LABEL_29;
        }
      }
    }
LABEL_4:
    v12 = (unsigned __int16 *)Buf2;
    v44 = 1;
    goto LABEL_5;
  }
  *(_DWORD *)a6 = a1[3];
  result = 0LL;
  *(_WORD *)(a6 + 4) = 257;
  *(_BYTE *)(a6 + 6) = 1;
  return result;
}
