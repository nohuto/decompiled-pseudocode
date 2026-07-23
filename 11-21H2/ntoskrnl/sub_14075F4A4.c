/*
 * XREFs of sub_14075F4A4 @ 0x14075F4A4
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140B09D6C @ 0x140B09D6C (sub_140B09D6C.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140285FE0 @ 0x140285FE0 (sub_140285FE0.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1402D8C20 @ 0x1402D8C20 (sub_1402D8C20.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406EB634 @ 0x1406EB634 (sub_1406EB634.c)
 *     sub_1407606CC @ 0x1407606CC (sub_1407606CC.c)
 *     sub_1407607D8 @ 0x1407607D8 (sub_1407607D8.c)
 *     sub_140761188 @ 0x140761188 (sub_140761188.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14075F4A4(__int64 a1, const void **a2, const void **a3, int a4, int a5, __int64 *a6)
{
  char v9; // r15
  SIZE_T v10; // rdx
  __int64 v11; // rdi
  _WORD *v12; // rax
  _WORD *v13; // r14
  char *v14; // rbx
  PIMAGE_NT_HEADERS v15; // rbp
  unsigned int NumberOfSections; // r15d
  char *v17; // rsi
  unsigned int v18; // r13d
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r12
  SIZE_T v24; // rdx
  _OWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  char *v30; // rbx
  char *v31; // r14
  char *v32; // rcx
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r14
  __int16 v35; // r8
  unsigned __int64 v36; // rsi
  int v37; // ebp
  __int64 v38; // rax
  bool v40; // cc
  __int64 VirtualAddress; // rax
  unsigned __int64 Size; // rcx
  unsigned int SizeOfImage; // r9d
  unsigned int v44; // r8d
  char *v45; // rsi
  unsigned __int64 v46; // rcx
  unsigned int v47; // eax
  int v48; // edx
  IMAGE_DATA_DIRECTORY *v49; // r12
  unsigned __int64 v50; // r12
  unsigned int v51; // r9d
  IMAGE_DATA_DIRECTORY *v52; // rbx
  __int64 v53; // r8
  unsigned int *v54; // rsi
  __int64 v55; // rax
  unsigned int v56; // r13d
  unsigned int v57; // edx
  __int64 v58; // rax
  unsigned __int128 v59; // rax
  unsigned __int64 v60; // rax
  unsigned int v61; // ebx
  __int64 v62; // [rsp+20h] [rbp-128h]
  unsigned int v63; // [rsp+20h] [rbp-128h]
  int v64; // [rsp+28h] [rbp-120h]
  unsigned __int64 v65; // [rsp+30h] [rbp-118h]
  __int64 v66; // [rsp+30h] [rbp-118h]
  __int128 v67; // [rsp+38h] [rbp-110h]
  __int64 v68; // [rsp+48h] [rbp-100h]
  char *v69; // [rsp+50h] [rbp-F8h]
  __int64 v70; // [rsp+58h] [rbp-F0h]
  __int64 v71[29]; // [rsp+60h] [rbp-E8h] BYREF
  IMAGE_DATA_DIRECTORY *v74; // [rsp+160h] [rbp+18h] BYREF
  int v75; // [rsp+168h] [rbp+20h]

  v75 = a4;
  v9 = a4;
  memset(&v71[1], 0, 0x90uLL);
  v10 = *(unsigned __int16 *)a3 + 2LL;
  v62 = 0LL;
  *a6 = 0LL;
  v11 = 0LL;
  DWORD1(v67) = 0;
  v12 = sub_1402828F0(256, v10, 0x54446D4Du);
  *((_QWORD *)&v67 + 1) = v12;
  v13 = v12;
  if ( !v12 )
    return (unsigned int)-1073741670;
  LOWORD(v67) = *(_WORD *)a3;
  WORD1(v67) = *(_WORD *)a3;
  memmove(v12, a3[1], *(unsigned __int16 *)a3);
  v13[(unsigned __int64)*(unsigned __int16 *)a3 >> 1] = 0;
  v14 = *(char **)(a1 + 48);
  v65 = (unsigned __int64)v14;
  v15 = RtlImageNtHeader(v14);
  v64 = v9 & 1;
  if ( (v9 & 1) != 0 )
  {
    v18 = 32;
    v40 = v15->OptionalHeader.NumberOfRvaAndSizes <= 6;
    v17 = 0LL;
    v74 = 0LL;
    NumberOfSections = 0;
    if ( !v40 )
    {
      VirtualAddress = v15->OptionalHeader.DataDirectory[6].VirtualAddress;
      v74 = &v15->OptionalHeader.DataDirectory[6];
      if ( (_DWORD)VirtualAddress )
      {
        Size = v15->OptionalHeader.DataDirectory[6].Size;
        if ( (_DWORD)Size )
        {
          if ( (int)Size + (int)VirtualAddress > (unsigned int)VirtualAddress )
          {
            SizeOfImage = v15->OptionalHeader.SizeOfImage;
            if ( (int)Size + (int)VirtualAddress < SizeOfImage )
            {
              v18 = Size + 32;
              v44 = 0;
              v45 = &v14[VirtualAddress];
              v46 = Size / 0x1C;
              if ( v46 )
              {
                do
                {
                  v47 = *((_DWORD *)v45 + 5);
                  if ( v47 )
                  {
                    if ( v47 < SizeOfImage )
                    {
                      v48 = *((_DWORD *)v45 + 4);
                      if ( v48 + v47 < SizeOfImage )
                        v18 += v48;
                    }
                  }
                  ++v44;
                  v45 += 28;
                }
                while ( v44 < v46 );
              }
              v17 = &v45[-28 * v44];
            }
          }
        }
      }
      v18 = (v18 + 7) & 0xFFFFFFF8;
    }
  }
  else
  {
    NumberOfSections = v15->FileHeader.NumberOfSections;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v15->FileHeader.NumberOfSections < 4 )
    {
      v61 = -1073741520;
      goto LABEL_78;
    }
    v17 = 0LL;
    v74 = 0LL;
    v18 = 0;
  }
  v19 = (v15->OptionalHeader.SizeOfImage >> 12) + ((v15->OptionalHeader.SizeOfImage & 0xFFF) != 0);
  v20 = 8 * ((v19 >> 6) + ((v19 & 0x3F) != 0) + 2);
  v21 = (unsigned int)v20;
  v22 = v20 + 330;
  v68 = v21;
  if ( v22 <= 0x14A )
    goto LABEL_76;
  if ( v18 )
  {
    if ( v22 + v18 <= v22 )
      goto LABEL_76;
    v22 += v18;
  }
  v23 = (*(unsigned __int16 *)a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v24 = v22 + v23;
  if ( v22 + v23 <= v22 )
  {
LABEL_76:
    v61 = -1073741701;
    goto LABEL_78;
  }
  if ( NumberOfSections )
  {
    if ( v24 + 4LL * NumberOfSections > v24 )
    {
      v24 += 4LL * NumberOfSections;
      goto LABEL_11;
    }
    goto LABEL_76;
  }
LABEL_11:
  v69 = (char *)sub_1402828F0(64, v24, 0x644C6D4Du);
  v11 = (__int64)v69;
  if ( !v69 )
    goto LABEL_77;
  v25 = (_OWORD *)a1;
  v26 = *(_QWORD *)(a1 + 112);
  v70 = v26;
  if ( !v26 )
    goto LABEL_15;
  v27 = *(_QWORD *)sub_140287970(v26);
  v29 = v28;
  LOBYTE(v29) = (*(_DWORD *)(v27 + 8) & 0xFFF) != 0;
  v62 = (unsigned int)((*(_DWORD *)(v27 + 8) >> 12) + v29);
  if ( !(unsigned int)sub_1402821F4(&StartContext, (unsigned int)v62, v28) )
  {
LABEL_77:
    v61 = -1073741670;
LABEL_78:
    ExFreePoolWithTag(v13, 0);
    if ( v11 )
      ExFreePoolWithTag((PVOID)v11, 0);
    return v61;
  }
  v25 = (_OWORD *)a1;
LABEL_15:
  v30 = v69 + 160;
  *((_QWORD *)v69 + 33) = 0LL;
  *((_QWORD *)v69 + 38) = v69 + 296;
  *((_QWORD *)v69 + 37) = v69 + 296;
  v31 = &v69[v68 + 328];
  v32 = &v31[v18];
  *((_QWORD *)v69 + 34) = v69 + 328;
  *((_QWORD *)v69 + 32) = v31;
  *((_QWORD *)v69 + 27) = v62;
  if ( NumberOfSections )
    *((_QWORD *)v69 + 28) = &v32[v23];
  *(_OWORD *)v69 = *v25;
  *((_OWORD *)v69 + 1) = v25[1];
  *((_OWORD *)v69 + 2) = v25[2];
  *((_OWORD *)v69 + 3) = v25[3];
  *((_OWORD *)v69 + 4) = v25[4];
  *((_OWORD *)v69 + 5) = v25[5];
  *((_OWORD *)v69 + 6) = v25[6];
  *((_OWORD *)v69 + 7) = v25[7];
  *((_OWORD *)v69 + 8) = v25[8];
  *((_OWORD *)v69 + 9) = v25[9];
  if ( v15->OptionalHeader.MajorOperatingSystemVersion >= 5u && v15->OptionalHeader.MajorImageVersion >= 5u )
    *((_DWORD *)v69 + 26) |= 0x8000000u;
  if ( (v15->OptionalHeader.DllCharacteristics & 0x80) != 0 )
    *((_DWORD *)v69 + 26) |= 0x20u;
  *((_QWORD *)v69 + 12) = v32;
  *((_WORD *)v69 + 44) = *(_WORD *)a2;
  *((_WORD *)v69 + 45) = *(_WORD *)a2;
  memmove(v32, a2[1], *(unsigned __int16 *)a2);
  v33 = v65;
  *(_WORD *)(*((_QWORD *)v69 + 12) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *(_OWORD *)(v69 + 72) = v67;
  *((_QWORD *)v69 + 5) = 0LL;
  if ( v64 )
  {
    *((_DWORD *)v69 + 26) |= 0x20000000u;
    *((_QWORD *)v69 + 5) = v31;
    *(_DWORD *)v31 = 84302;
    *((_DWORD *)v31 + 1) = v18;
    *((_WORD *)v31 + 4) = v15->FileHeader.Machine;
    *((_WORD *)v31 + 5) = v15->FileHeader.Characteristics;
    *((_DWORD *)v31 + 3) = v15->FileHeader.TimeDateStamp;
    *((_DWORD *)v31 + 4) = v15->OptionalHeader.CheckSum;
    *((_DWORD *)v31 + 5) = v15->OptionalHeader.SizeOfImage;
    *((_QWORD *)v31 + 3) = v65;
    if ( v17 )
    {
      v49 = v74;
      memmove(v31 + 32, v17, v74->Size);
      v50 = v49->Size;
      v63 = 0;
      v51 = 0;
      if ( v50 / 0x1C )
      {
        v52 = v74;
        v53 = 0LL;
        v66 = 0LL;
        v54 = (unsigned int *)(v17 + 16);
        do
        {
          v55 = v54[1];
          v56 = *v54;
          LODWORD(v74) = v50;
          if ( (_DWORD)v55
            && (v57 = v15->OptionalHeader.SizeOfImage, (unsigned int)v55 < v57)
            && (unsigned int)v55 + v56 > (unsigned int)v55
            && (unsigned int)v55 + v56 < v57 )
          {
            memmove(&v31[(unsigned int)v50 + 32], (const void *)(v33 + v55), v56);
            v53 = v66;
            LODWORD(v50) = v56 + v50;
            v51 = v63;
          }
          else
          {
            LODWORD(v74) = 0;
          }
          ++v51;
          v58 = 28 * v53;
          v53 = v51;
          v54 += 7;
          v63 = v51;
          v66 = v51;
          *(_DWORD *)&v31[v58 + 52] = (_DWORD)v74;
          v59 = v52->Size * (unsigned __int128)0x2492492492492493uLL;
        }
        while ( v51 < (*((_QWORD *)&v59 + 1) + (((unsigned __int64)v52->Size - *((_QWORD *)&v59 + 1)) >> 1)) >> 4 );
        v11 = (__int64)v69;
        v30 = v69 + 160;
      }
    }
  }
  *(_QWORD *)(v11 + 56) = v33 + v15->OptionalHeader.AddressOfEntryPoint;
  *(_DWORD *)(v11 + 120) = v15->OptionalHeader.CheckSum;
  if ( v70 )
  {
    v34 = sub_140287970(v70);
    v35 = *(_WORD *)(v11 + 110) & 0xFFF0 | (*(_BYTE *)(*(_QWORD *)v34 + 15LL) >> 4);
    *(_WORD *)(v11 + 110) = v35;
    *(_WORD *)(v11 + 110) = v35 & 0xFF8F | (16 * ((*(_BYTE *)(*(_QWORD *)v34 + 15LL) >> 1) & 7));
  }
  else
  {
    v34 = 0LL;
  }
  *(_DWORD *)(v11 + 152) = v15->OptionalHeader.SizeOfImage;
  *(_DWORD *)(v11 + 156) = v15->FileHeader.TimeDateStamp;
  sub_140761188(v11);
  sub_1407607D8(v11);
  if ( v70 )
    v36 = *(unsigned int *)(*(_QWORD *)v34 + 8LL);
  else
    v36 = (unsigned __int64)*(unsigned int *)(v11 + 64) >> 12;
  if ( v64 )
    goto LABEL_30;
  *((_QWORD *)v30 + 5) = v36;
  *((_QWORD *)v30 + 6) = v36;
  if ( (PVOID)v33 == qword_140D068F0 )
    goto LABEL_70;
  if ( (PVOID)v33 == qword_140D06988 )
  {
    if ( (PVOID)v33 != qword_140D068F0 )
    {
      v60 = v36 - qword_140D68730;
      goto LABEL_71;
    }
LABEL_70:
    v60 = v36 - qword_140D68728;
LABEL_71:
    *((_QWORD *)v30 + 5) = v60;
  }
LABEL_30:
  if ( !a5 )
    *((_DWORD *)v30 + 9) |= 1u;
  v37 = v75;
  if ( (dword_140D051B4 & 1) != 0 || (v75 & 2) != 0 )
    *((_DWORD *)v30 + 9) |= 0x10u;
  *(_QWORD *)(v11 + 128) = 0LL;
  LODWORD(v74) = 0;
  if ( dword_140C0C660 )
  {
    v38 = sub_1407606CC(*(_QWORD *)(v11 + 48), &v74);
    if ( v38 )
    {
      *(_DWORD *)(v11 + 124) = (_DWORD)v74;
      *(_QWORD *)(v11 + 128) = v38;
      DbgPrintEx(0x7Eu, 2u, "COV: Stored coverage section in PsLoadedModuleList at 0x%p\n", (const void *)v11);
      sub_1406EB634(v11, 1);
    }
  }
  if ( dword_140C4F478 && (dword_140D06880 & 0x4000) != 0 && (v37 & 0x40000001) == 1 )
    *((_DWORD *)v30 + 9) |= 0x40u;
  sub_1402D8C20((unsigned __int64 *)v11, 1);
  if ( !v64 )
  {
    if ( v70 )
    {
      *((_DWORD *)v30 + 8) = -2;
      *((_QWORD *)v30 + 2) = v33 | 3;
      *((_QWORD *)v30 + 3) = (v36 << 12) + v33 - 1;
      v71[0] = v34;
      sub_140285FE0(v71, v30, 3);
    }
  }
  *a6 = v11;
  return 0LL;
}
