/*
 * XREFs of sub_140824268 @ 0x140824268
 * Callers:
 *     sub_1403BA01C @ 0x1403BA01C (sub_1403BA01C.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_140354BBC @ 0x140354BBC (sub_140354BBC.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1403BA108 @ 0x1403BA108 (sub_1403BA108.c)
 *     sub_1403BA314 @ 0x1403BA314 (sub_1403BA314.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_140824268(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  char v5; // bl
  unsigned int v9; // esi
  unsigned int v10; // r10d
  __int64 v11; // rdx
  unsigned int v12; // r11d
  int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 Pool2; // rax
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 *v20; // r8
  _QWORD *v21; // rdx
  char *v22; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // r13d
  __int64 *v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r15
  char *v28; // rax
  unsigned __int64 v29; // rdx
  __int64 *v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // r11
  int v33; // eax
  int v34; // ecx
  _DWORD *v35; // rax
  unsigned int v36; // eax
  unsigned int v37; // r9d
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  int v40; // eax
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v46; // [rsp+30h] [rbp-48h]
  __int64 v47; // [rsp+38h] [rbp-40h]
  _QWORD *v48; // [rsp+90h] [rbp+18h]

  v5 = 0;
  *a5 = 0LL;
  v9 = *(_DWORD *)(a3 + 8);
  if ( v9 )
  {
    v10 = 0;
    v11 = a3 + 16;
    v12 = 0;
    while ( 1 )
    {
      v13 = *(_DWORD *)(*(_QWORD *)v11 + 28LL);
      if ( v13 <= 0 )
        break;
      v14 = v13 + v10;
      if ( v13 + v10 < v10 )
        break;
      ++v12;
      v11 += 8LL;
      v10 += v13;
      if ( v12 >= v9 )
      {
        v15 = 0LL;
        v16 = (int)(208 * v9 + 192);
        if ( v14 )
        {
          v15 = (int)(208 * v9 + 192);
          v16 += 24LL * v14;
        }
        v47 = v16 + 60LL * (v9 + 1);
        Pool2 = ExAllocatePool2(64LL, v47, 1416652112LL);
        v18 = Pool2;
        if ( Pool2 )
        {
          DbgPrintEx(0x92u, 3u, "PopPep: register device (0x%p, %wZ)\n", Pool2, a1);
          *(_QWORD *)(v18 + 32) = a2;
          v48 = (_QWORD *)(v15 + v18);
          v19 = v18 + v16;
          *(_QWORD *)(v18 + 24) = *(_QWORD *)a3;
          KeInitializeEvent((PRKEVENT)(v18 + 40), NotificationEvent, 0);
          v20 = (__int64 *)(v18 + 72);
          *(_DWORD *)(v18 + 180) = v9;
          v21 = (_QWORD *)(v18 + 72);
          *(_DWORD *)(v18 + 140) = v9;
          *(_BYTE *)(v18 + 136) = 1;
          v22 = byte_140002ED0;
          v23 = 0LL;
          do
          {
            if ( v23 <= 5 && *v22 == 1 )
            {
              *v21 = v19;
              v19 += 20LL;
            }
            ++v23;
            ++v21;
            v22 += 136;
          }
          while ( (__int64)v22 < (__int64)&off_140003200 );
          *(_QWORD *)(v18 + 16) |= 1uLL;
          v24 = 0;
          v25 = (__int64 *)(a3 + 16);
          v46 = a3 + 16;
          v26 = v18 + 224;
          while ( 1 )
          {
            v27 = *v25;
            *(_DWORD *)(v26 - 24) = v24;
            v28 = byte_140002ED0;
            *(_DWORD *)(v26 - 28) = 3;
            v29 = 0LL;
            v30 = v20;
            do
            {
              v31 = v19;
              if ( v29 <= 5 && *v28 == 1 )
                v31 = *v30;
              else
                v19 += 20LL;
              *(__int64 *)((char *)v30 + -48 - v18 + v26) = v31;
              ++v29;
              ++v30;
              v28 += 136;
            }
            while ( (__int64)v28 < (__int64)&off_140003200 );
            KeInitializeEvent((PRKEVENT)v26, NotificationEvent, 0);
            v32 = v48;
            *(_QWORD *)(v26 - 16) = *(_QWORD *)(v27 + 16);
            v33 = *(_DWORD *)(v27 + 28);
            *(_DWORD *)(v26 + 156) = v33;
            v34 = v33 - 1;
            if ( (unsigned int)(v33 - 1) >= *(_DWORD *)(v27 + 24) )
              v34 = *(_DWORD *)(v27 + 24);
            *(_DWORD *)(v27 + 24) = v34;
            *(_QWORD *)(v26 + 80) = -1LL;
            *(_QWORD *)(v26 + 88) = 0LL;
            v35 = *(_DWORD **)(v26 + 48);
            *(_DWORD *)(v26 + 116) = v34;
            *(_QWORD *)(v26 + 168) = v48;
            *(_QWORD *)(v26 + 96) = 0LL;
            *v35 |= 4u;
            v36 = *(_DWORD *)(v27 + 28);
            if ( v36 > 1 )
            {
              *(_QWORD *)(v18 + 16) &= ~1uLL;
              v36 = *(_DWORD *)(v27 + 28);
            }
            v37 = 0;
            if ( v36 )
              break;
LABEL_27:
            v39 = *(_QWORD *)(v26 + 80);
            *(_DWORD *)(v26 + 120) = 0;
            v40 = sub_1403BA314(v26 - 32, v39);
            v41 = *(_QWORD *)(v26 + 88);
            *(_DWORD *)(v26 + 124) = v40;
            *(_DWORD *)(v26 + 128) = sub_140354BBC(v42, v41);
            ++v24;
            v44 = *(_DWORD *)(v26 + 156) - 1;
            *(_DWORD *)(v26 + 132) = v44;
            *(_DWORD *)(v26 + 136) = v44;
            *(_DWORD *)(v26 + 140) = v44;
            v26 += 208LL;
            v25 = (__int64 *)(v46 + 8);
            v46 += 8LL;
            if ( v24 >= v9 )
            {
              v5 = 1;
              *a5 = v18;
              if ( a4 == 2 )
                *(_BYTE *)(v18 + 124) = 1;
              *(_DWORD *)(v18 + 168) = 1;
              sub_1403BA108(v43, (__int64 *)v18);
              return v5;
            }
            v20 = (__int64 *)(v18 + 72);
          }
          while ( (unsigned __int64)v32 - v18 <= v47 - 24 )
          {
            v38 = v37++;
            *v32 = *(_QWORD *)(*(_QWORD *)(v27 + 32) + 24 * v38);
            v32[1] = *(_QWORD *)(*(_QWORD *)(v27 + 32) + 24 * v38 + 8);
            v32 += 3;
            v48 = v32;
            if ( v37 >= *(_DWORD *)(v27 + 28) )
              goto LABEL_27;
          }
          ExFreePoolWithTag((PVOID)v18, 0x54706550u);
        }
        return v5;
      }
    }
  }
  return v5;
}
