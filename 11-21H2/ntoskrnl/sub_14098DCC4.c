/*
 * XREFs of sub_14098DCC4 @ 0x14098DCC4
 * Callers:
 *     PoFxRegisterComponentPerfStates @ 0x14098CD20 (PoFxRegisterComponentPerfStates.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405CEC60 @ 0x1405CEC60 (sub_1405CEC60.c)
 *     sub_1405D6478 @ 0x1405D6478 (sub_1405D6478.c)
 *     sub_14098DA38 @ 0x14098DA38 (sub_14098DA38.c)
 *     sub_14098DAB8 @ 0x14098DAB8 (sub_14098DAB8.c)
 *     sub_1409939F8 @ 0x1409939F8 (sub_1409939F8.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14098DCC4(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  __int64 v7; // r9
  char v8; // bl
  __int64 v9; // rax
  int v10; // eax
  _QWORD *v11; // rdi
  unsigned int v12; // ebx
  unsigned __int64 v14; // r10
  unsigned __int128 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r15
  unsigned __int128 v19; // rax
  unsigned __int64 v20; // kr10_8
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r8
  unsigned int v23; // r11d
  unsigned __int64 v24; // r12
  unsigned int *v25; // r9
  unsigned __int64 v26; // kr20_8
  unsigned int v27; // r9d
  unsigned __int64 v28; // r8
  unsigned __int16 *v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 Pool2; // rax
  __int64 v33; // rsi
  UNICODE_STRING **v34; // rcx
  UNICODE_STRING *v35; // r15
  UNICODE_STRING *v36; // rax
  unsigned int i; // edx
  wchar_t *v38; // r13
  unsigned int v39; // r12d
  UNICODE_STRING *v40; // r14
  unsigned int v41; // eax
  unsigned int v42; // r12d
  wchar_t *j; // r13
  _QWORD *v44; // r14
  unsigned __int16 v45; // ax
  char v46; // [rsp+20h] [rbp-50h]
  PVOID P[5]; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v48; // [rsp+50h] [rbp-20h]
  unsigned __int64 v49; // [rsp+58h] [rbp-18h]
  unsigned __int64 v50; // [rsp+60h] [rbp-10h]

  v7 = BugCheckParameter3;
  P[0] = 0LL;
  v8 = a3;
  v9 = a2;
  if ( a5 )
  {
    if ( !a6 )
    {
      v11 = a5;
      P[0] = a5;
LABEL_8:
      if ( *(_DWORD *)v11 )
      {
        v46 = sub_1405CEC60(v7, *(_DWORD *)(v9 + 16), (__int64)v11);
        if ( v46 || (v8 & 1) != 0 )
        {
          v14 = *(unsigned int *)v11;
          v15 = *(unsigned int *)v11 * (unsigned __int128)0x20uLL;
          P[1] = *((PVOID *)&v15 + 1);
          if ( !is_mul_ok(v14, 0x20uLL) )
            goto LABEL_51;
          v16 = v15 + 160;
          if ( v16 < 0xA0 )
            goto LABEL_51;
          v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v18 = v17 + 8;
          if ( v17 + 8 < v17 )
            goto LABEL_51;
          v20 = (unsigned int)(DWORD2(v15) + 48);
          v19 = v14 * (unsigned __int128)(unsigned int)(DWORD2(v15) + 48);
          P[2] = *((PVOID *)&v19 + 1);
          if ( !is_mul_ok(v14, v20) || (unsigned __int64)v19 + v18 < v18 )
            goto LABEL_51;
          v21 = (unsigned int)(DWORD2(v19) + 16);
          v22 = (v19 + v18 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v23 = 0;
          v24 = v22;
          if ( (_DWORD)v14 )
          {
            v25 = (unsigned int *)(v11 + 5);
            do
            {
              if ( !*(v25 - 1) )
              {
                v26 = *v25;
                P[3] = (PVOID)((*v25 * (unsigned __int128)(unsigned int)(DWORD2(v19) + 16)) >> 64);
                if ( !is_mul_ok(v26, v21) || v22 + v26 * v21 < v22 )
                  goto LABEL_51;
                v22 += v26 * v21;
              }
              ++v23;
              v25 += 12;
            }
            while ( v23 < (unsigned int)v14 );
          }
          v27 = 0;
          v28 = (v22 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          v48 = v28;
          if ( (_DWORD)v14 )
          {
            v29 = (unsigned __int16 *)(v11 + 1);
            do
            {
              v30 = *v29;
              if ( (_WORD)v30 )
              {
                if ( v30 + v28 + 2 < v28 )
                  goto LABEL_51;
                v28 += v30 + 2;
              }
              ++v27;
              v29 += 24;
            }
            while ( v27 < (unsigned int)v14 );
          }
          *(_QWORD *)&v19 = v14 * v21;
          v31 = (v28 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v49 = v31;
          P[4] = (PVOID)((v14 * (unsigned __int128)(unsigned int)(DWORD2(v19) + 16)) >> 64);
          if ( is_mul_ok(v14, v21) && (unsigned __int64)v19 + v31 >= v31 )
          {
            v12 = 0;
            Pool2 = ExAllocatePool2(64LL, v19 + v31, 1297630800LL);
            v33 = Pool2;
            if ( Pool2 )
            {
              *(_QWORD *)(Pool2 + 32) = a4;
              v34 = (UNICODE_STRING **)(Pool2 + 160);
              *(_DWORD *)(Pool2 + 144) = *(_DWORD *)v11;
              v35 = (UNICODE_STRING *)(Pool2 + v18);
              *(_QWORD *)(Pool2 + 152) = Pool2 + 160;
              *(_DWORD *)(v17 + Pool2) = *(_DWORD *)v11;
              v36 = v35;
              v50 = v17 + v33;
              for ( i = 0; i < *(_DWORD *)v11; v34 += 4 )
              {
                *v34 = v36;
                ++i;
                v36 += 3;
              }
              v38 = (wchar_t *)(v24 + v33);
              v39 = 0;
              if ( *(_DWORD *)v11 )
              {
                v40 = v35 + 2;
                do
                {
                  *(_QWORD *)&v40[-1].Length = v11[6 * v39 + 3];
                  LODWORD(v40[-1].Buffer) = v11[6 * v39 + 4];
                  HIDWORD(v40[-1].Buffer) = HIDWORD(v11[6 * v39 + 4]);
                  if ( HIDWORD(v11[6 * v39 + 4]) )
                  {
                    *(_QWORD *)&v40->Length = v11[6 * v39 + 5];
                    v40->Buffer = (wchar_t *)v11[6 * v39 + 6];
                  }
                  else
                  {
                    v41 = v11[6 * v39 + 5];
                    *(_DWORD *)&v40->Length = v41;
                    v40->Buffer = v38;
                    memmove(v38, (const void *)v11[6 * v39 + 6], 16LL * v41);
                    v38 += 8 * *(unsigned int *)&v40->Length;
                  }
                  v40 += 3;
                  ++v39;
                }
                while ( v39 < *(_DWORD *)v11 );
              }
              v42 = 0;
              for ( j = (wchar_t *)(v33 + v48); v42 < *(_DWORD *)v11; j += (v45 >> 1) + 1 )
              {
                v44 = &v11[6 * v42];
                v45 = *((_WORD *)v44 + 4);
                if ( v45 )
                {
                  v35->Buffer = j;
                  v35->Length = *((_WORD *)v44 + 4);
                  v35->MaximumLength = *((_WORD *)v44 + 4) + 2;
                  RtlCopyUnicodeString(v35, (PCUNICODE_STRING)(v44 + 1));
                  v45 = *((_WORD *)v44 + 4);
                }
                v35 += 3;
                ++v42;
              }
              *(_QWORD *)(v33 + 48) = v33 + v49;
              *(_QWORD *)v33 = a2;
              KeInitializeEvent((PRKEVENT)(v33 + 8), NotificationEvent, 1u);
              if ( (a3 & 6) != 0 )
                *(_BYTE *)(v33 + 74) = 1;
              *(_BYTE *)(v33 + 73) = v46;
              *(_QWORD *)(v33 + 88) = 0LL;
              *(_QWORD *)(v33 + 104) = sub_1405CBF00;
              *(_QWORD *)(v33 + 112) = v33;
              sub_1409939F8(v33, 0LL);
              sub_1405D6478(*(_QWORD *)(BugCheckParameter3 + 56), *(_DWORD *)(a2 + 16), a3);
              *(_QWORD *)(a2 + 424) = v33;
              if ( a6 )
                *a6 = v50;
            }
            else
            {
              v12 = -1073741670;
            }
          }
          else
          {
LABEL_51:
            v12 = -1073741675;
          }
        }
        else
        {
          v12 = -1073741822;
        }
      }
      else
      {
        v12 = -1073741811;
      }
      if ( a5 )
        return v12;
      goto LABEL_53;
    }
    return 3221225485LL;
  }
  if ( !a6 )
    return 3221225485LL;
  v10 = sub_14098DAB8(BugCheckParameter3, *(unsigned int *)(a2 + 16), P);
  v11 = P[0];
  v12 = v10;
  if ( v10 >= 0 )
  {
    v9 = a2;
    v7 = BugCheckParameter3;
    v8 = a3;
    goto LABEL_8;
  }
LABEL_53:
  sub_14098DA38(v11);
  return v12;
}
