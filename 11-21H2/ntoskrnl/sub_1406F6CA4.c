/*
 * XREFs of sub_1406F6CA4 @ 0x1406F6CA4
 * Callers:
 *     sub_14070AC28 @ 0x14070AC28 (sub_14070AC28.c)
 *     sub_140814660 @ 0x140814660 (sub_140814660.c)
 * Callees:
 *     sub_140280D70 @ 0x140280D70 (sub_140280D70.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406F71A0 @ 0x1406F71A0 (sub_1406F71A0.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     sub_140811DA0 @ 0x140811DA0 (sub_140811DA0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1406F6CA4(ULONG_PTR a1, __int64 a2, int *a3)
{
  int v3; // eax
  int v4; // r13d
  __int64 v5; // r15
  ULONG_PTR v6; // r9
  int v7; // ecx
  int v8; // edi
  unsigned __int16 *Pool2; // r14
  unsigned __int16 v10; // r12
  void *v11; // rax
  __int64 i; // rsi
  __int64 v13; // rax
  int v14; // edx
  unsigned __int64 v15; // rax
  __int64 v16; // r13
  PIMAGE_NT_HEADERS v17; // rax
  int CheckSum; // r8d
  __int64 TimeDateStamp; // rdx
  __int64 ImageBase; // r9
  void *v21; // r8
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // r8d
  char v25; // cl
  unsigned __int64 v26; // rcx
  __m128i v27; // xmm2
  __m128i v28; // xmm3
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  int v31; // [rsp+54h] [rbp-154h] BYREF
  __int16 v32; // [rsp+58h] [rbp-150h]
  __int16 v33; // [rsp+5Ch] [rbp-14Ch]
  __int16 v34; // [rsp+60h] [rbp-148h]
  int v35; // [rsp+64h] [rbp-144h]
  int v36; // [rsp+68h] [rbp-140h]
  int v37; // [rsp+6Ch] [rbp-13Ch]
  int v38; // [rsp+70h] [rbp-138h]
  int v39; // [rsp+74h] [rbp-134h]
  DWORD v40; // [rsp+78h] [rbp-130h]
  int v41; // [rsp+7Ch] [rbp-12Ch]
  int v42; // [rsp+80h] [rbp-128h]
  int v43; // [rsp+84h] [rbp-124h]
  int v44; // [rsp+88h] [rbp-120h]
  int v45; // [rsp+8Ch] [rbp-11Ch]
  int v46; // [rsp+90h] [rbp-118h]
  ULONG_PTR BugCheckParameter1; // [rsp+98h] [rbp-110h]
  __int64 v48; // [rsp+A0h] [rbp-108h]
  int v49; // [rsp+A8h] [rbp-100h]
  int v50; // [rsp+ACh] [rbp-FCh]
  int v51; // [rsp+B0h] [rbp-F8h]
  int v52; // [rsp+B4h] [rbp-F4h]
  __int64 v53; // [rsp+B8h] [rbp-F0h]
  __int64 v54; // [rsp+C0h] [rbp-E8h]
  __int64 v55; // [rsp+C8h] [rbp-E0h]
  unsigned __int16 *v56; // [rsp+D0h] [rbp-D8h]
  __int64 v57; // [rsp+D8h] [rbp-D0h]
  __int64 v58; // [rsp+E0h] [rbp-C8h]
  __int64 v59; // [rsp+E8h] [rbp-C0h]
  __int64 v60; // [rsp+F0h] [rbp-B8h]
  __int64 v61; // [rsp+F8h] [rbp-B0h]
  __int64 v62; // [rsp+100h] [rbp-A8h]
  ULONG_PTR v63; // [rsp+108h] [rbp-A0h]
  __int64 v64; // [rsp+110h] [rbp-98h]
  PVOID P; // [rsp+118h] [rbp-90h]
  __int128 v66; // [rsp+150h] [rbp-58h] BYREF
  __int64 v67; // [rsp+160h] [rbp-48h] BYREF
  unsigned int v68; // [rsp+168h] [rbp-40h]
  int v69; // [rsp+16Ch] [rbp-3Ch]

  v5 = a2;
  v6 = a1;
  BugCheckParameter1 = a1;
  v63 = a1;
  v64 = a2;
  v31 = 0;
  v66 = 0LL;
  v53 = 0LL;
  if ( !a3 || (v3 = *a3, v7 = 1, (*a3 & 4) == 0) )
    v7 = 0;
  if ( !a3 || (v3 = a3[1], LOBYTE(v3) = 1, (a3[1] & 0x8000) == 0) )
    LOBYTE(v3) = 0;
  v8 = v7 | 4;
  if ( !(_BYTE)v3 )
    v8 = v7;
  v35 = v8;
  if ( a2 )
  {
    if ( a3 )
    {
      v3 = *a3;
      if ( (*a3 & 0x8000) != 0 )
        v8 |= 2u;
    }
    v35 = v8;
  }
  if ( !v8 )
  {
    Pool2 = 0LL;
    goto LABEL_38;
  }
  if ( a2 )
  {
    v48 = *(_QWORD *)(a2 + 32);
    v57 = v48;
    v25 = *(_BYTE *)(a2 + 64);
    Pool2 = *(unsigned __int16 **)(a2 + 16);
    LOWORD(a2) = 5124 - (v25 != 0);
    v39 = a2;
    v32 = a2;
    LOWORD(v4) = 1064 - (v25 != 0);
    LOWORD(v3) = 641 - (v25 != 0);
  }
  else
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(64LL, 0x2000LL, 1718773072LL);
    v4 = 1062;
    v3 = 611;
    v48 = 0LL;
    v57 = 0LL;
    v39 = 0;
    v32 = 0;
    v6 = BugCheckParameter1;
  }
  v34 = v3;
  v42 = v3;
  v33 = v4;
  v36 = v4;
  v56 = Pool2;
  if ( Pool2 || (v8 &= ~1u, (v35 = v8) != 0) )
  {
    v55 = 0LL;
    v43 = 0;
    v54 = 0LL;
    v44 = 0;
    v59 = 0LL;
    v10 = 0;
    v38 = 0;
    v11 = (void *)sub_1406F71A0(v6);
    P = v11;
    if ( v11 )
    {
      for ( i = (__int64)v11; ; i += 48LL )
      {
        v60 = i;
        if ( !*(_QWORD *)i )
        {
          ExFreePoolWithTag(P, 0);
          goto LABEL_38;
        }
        v13 = *(_QWORD *)i & 3LL;
        *(_QWORD *)i &= 0xFFFFFFFFFFFFFFFCuLL;
        v14 = 0;
        v41 = 0;
        v50 = 0;
        if ( !v13 )
          break;
        if ( v13 != 2 )
        {
          v10 = v4;
          v24 = 0x8000;
          v38 = 0x8000;
          v14 = 3;
          v22 = 44;
          v31 = 44;
          v23 = 1;
          goto LABEL_34;
        }
        v10 = v42;
        v24 = 536903680;
        v38 = 536903680;
        if ( v5 )
        {
          v22 = 32;
          v31 = 32;
        }
        else
        {
          v31 = 24;
          *(_DWORD *)(i + 20) = 0x8000;
          v22 = v31;
        }
LABEL_57:
        if ( v5 )
        {
          v29 = 5249026;
          if ( v14 )
            v29 = v14 | 0x501800;
          *(_QWORD *)&v66 = i;
          *((_QWORD *)&v66 + 1) = v22;
          sub_1402AB170((__int64)&v66, *(_QWORD *)(v48 + 1096), *(_DWORD *)v48, 1u, v10, v29);
        }
        else
        {
          v30 = 5249282;
          if ( v14 )
            v30 = v14 | 0x501900;
          v67 = i;
          v68 = v22;
          v69 = 0;
          sub_14035EDE4((__int64)&v67, 1u, v24, v10, v30);
        }
LABEL_35:
        ;
      }
      if ( (v8 & 2) != 0 )
      {
        v37 = 1;
        v26 = *(_QWORD *)(i + 8);
        v55 = (v26 >> 1) & 0x1F;
        v43 = (v26 >> 1) & 0x1F;
        v59 = *(_QWORD *)(i + 32);
        v15 = v26 & 0xFFFFFFFFFFFFFFC0uLL;
        *(_QWORD *)(i + 8) = v26 & 0xFFFFFFFFFFFFFFC0uLL;
        LODWORD(v26) = v26 & 1;
        v54 = (unsigned int)v26;
        v44 = v26;
      }
      else
      {
        v37 = 0;
        v15 = *(_QWORD *)(i + 8);
      }
      v16 = (v15 >> 6) & 0xF;
      v52 = (v15 >> 6) & 0xF;
      v62 = (v15 >> 10) & 7;
      v49 = (v15 >> 10) & 7;
      *(_QWORD *)(i + 8) = v15 & 0xFFFFFFFFFFFFE03FuLL;
      v53 = 0LL;
      if ( KeAreAllApcsDisabled() )
        __int2c();
      if ( !qword_140D00A28 || (v46 = sub_14042A5E0(*(_QWORD *)i, 1024LL), v46 < 0) )
        v46 = sub_1407103B0(*(_QWORD *)i, (_DWORD)Pool2, 0x2000, (unsigned int)&v31, 0);
      v40 = 0;
      v51 = *(_DWORD *)(i + 40);
      v45 = v51;
      v61 = *(_QWORD *)(i + 16);
      v58 = v61;
      v17 = RtlImageNtHeader(*(PVOID *)(i + 8));
      if ( v17 )
      {
        CheckSum = v17->OptionalHeader.CheckSum;
        v45 = CheckSum;
        TimeDateStamp = v17->FileHeader.TimeDateStamp;
        v40 = v17->FileHeader.TimeDateStamp;
        ImageBase = v17->OptionalHeader.ImageBase;
        v58 = ImageBase;
      }
      else
      {
        TimeDateStamp = v40;
        CheckSum = v51;
        ImageBase = v61;
      }
      if ( v46 >= 0 )
      {
        if ( v5 )
          sub_140811DA0(v48, (unsigned __int16)v39, (_DWORD)Pool2, *(_QWORD *)(BugCheckParameter1 + 1088), i, v16, v62);
        else
          sub_140280D70(
            Pool2,
            BugCheckParameter1,
            *(_QWORD *)(i + 8),
            *(_QWORD *)(i + 24),
            CheckSum,
            TimeDateStamp,
            v16,
            v62,
            ImageBase,
            0);
      }
      if ( v53 )
        sub_14042A5E0(v53, TimeDateStamp);
      v21 = *(void **)i;
      if ( v37 )
      {
        v27 = *(__m128i *)i;
        v28 = *(__m128i *)(i + 16);
        *(_OWORD *)i = 0LL;
        *(_OWORD *)(i + 16) = 0LL;
        *(_OWORD *)(i + 32) = 0LL;
        *(_DWORD *)(i + 40) = *(_DWORD *)(BugCheckParameter1 + 1088);
        *(_QWORD *)(i + 8) = *(_QWORD *)(v27.m128i_i64[0] + 24);
        *(_QWORD *)i = _mm_srli_si128(v27, 8).m128i_u64[0];
        *(_QWORD *)(i + 24) = _mm_srli_si128(v28, 8).m128i_u64[0];
        *(_QWORD *)(i + 32) = v59;
        *(_QWORD *)(i + 16) = *(_QWORD *)(i + 16) & 0xFF40FFFFFFFFFFFFuLL | ((v55 & 0x1F | (32 * (v54 & 1))) << 48) | 0x40000000000000LL;
        LOWORD(v4) = v36;
        v10 = v36;
        v38 = 0x8000;
        v41 = 3;
        v31 = 44;
      }
      else
      {
        LOWORD(v4) = v36;
      }
      ObfDereferenceObject(v21);
      v22 = v31;
      v23 = v37;
      v14 = v41;
      v24 = v38;
LABEL_34:
      if ( !v23 )
        goto LABEL_35;
      goto LABEL_57;
    }
  }
LABEL_38:
  if ( !v5 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
