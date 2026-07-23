/*
 * XREFs of sub_140AF77F8 @ 0x140AF77F8
 * Callers:
 *     HalReportResourceUsage @ 0x140AFC970 (HalReportResourceUsage.c)
 * Callees:
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     HalTranslateBusAddress @ 0x1403B5160 (HalTranslateBusAddress.c)
 *     RtlCmEncodeMemIoResource @ 0x1403B84C0 (RtlCmEncodeMemIoResource.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14050BC6C @ 0x14050BC6C (sub_14050BC6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     IoReportHalResourceUsage @ 0x140AF7620 (IoReportHalResourceUsage.c)
 *     sub_140AF7D88 @ 0x140AF7D88 (sub_140AF7D88.c)
 */

void __fastcall sub_140AF77F8(UNICODE_STRING *a1)
{
  __int64 v1; // r11
  unsigned int *v2; // rsi
  char *v3; // rax
  __int64 v4; // r15
  unsigned int v5; // edx
  char *v6; // r12
  _DWORD *v7; // r13
  char *v8; // rcx
  char *v9; // r8
  unsigned __int8 v10; // r8
  ULONG_PTR v11; // rdi
  unsigned int v12; // edx
  unsigned int v13; // r14d
  char v14; // cl
  __int128 v15; // xmm0
  __int16 v16; // ax
  int v17; // r8d
  unsigned int v18; // r10d
  _DWORD *v19; // r9
  _DWORD *v20; // rax
  _DWORD *v21; // rcx
  ULONGLONG v22; // r8
  int v23; // ecx
  ULONGLONG v24; // r9
  NTSTATUS v25; // eax
  unsigned __int64 v26; // r13
  unsigned int v27; // r14d
  __int64 v28; // r10
  unsigned int v29; // r15d
  int v30; // esi
  unsigned int v31; // r14d
  unsigned int v32; // r15d
  int v33; // r11d
  __int64 v34; // r14
  __int128 *v35; // r10
  __int128 *v36; // rdi
  char *v37; // r13
  __int128 *v38; // r10
  int v39; // r11d
  bool v40; // cc
  int v41; // ecx
  __int128 v42; // xmm1
  int v43; // ecx
  __int128 v44; // xmm1
  _DWORD *v45; // r9
  char v46; // [rsp+38h] [rbp-D0h]
  unsigned __int8 v47; // [rsp+39h] [rbp-CFh]
  unsigned int v48; // [rsp+3Ch] [rbp-CCh]
  unsigned int v49; // [rsp+3Ch] [rbp-CCh]
  ULONG Descriptor; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int Descriptor_4; // [rsp+44h] [rbp-C4h] BYREF
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor_8; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v53; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v54; // [rsp+64h] [rbp-A4h]
  __int64 v55; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+70h] [rbp-98h] BYREF
  _DWORD *v57; // [rsp+78h] [rbp-90h]
  _DWORD *v58; // [rsp+80h] [rbp-88h]
  LARGE_INTEGER TranslatedAddress; // [rsp+88h] [rbp-80h] BYREF
  _DWORD *v60; // [rsp+90h] [rbp-78h]
  _DWORD *v61; // [rsp+98h] [rbp-70h]
  PVOID P; // [rsp+A0h] [rbp-68h]
  __int128 v63; // [rsp+A8h] [rbp-60h]
  __int64 Pool2; // [rsp+C0h] [rbp-48h]
  UNICODE_STRING *v65; // [rsp+C8h] [rbp-40h]
  _QWORD v66[34]; // [rsp+D8h] [rbp-30h] BYREF

  v65 = a1;
  memset(v66, 0, 0x108uLL);
  v1 = KdComPortInUse;
  Descriptor_4 = 0;
  v55 = 0LL;
  v53 = 0;
  v56 = 0LL;
  TranslatedAddress.QuadPart = 0LL;
  Descriptor = 0;
  memset(&Descriptor_8, 0, sizeof(Descriptor_8));
  if ( KdComPortInUse )
    sub_14050BC6C((ULONG_PTR)&unk_140C0CA38, KdComPortInUse);
  if ( KdHvComPortInUse && KdHvComPortInUse != v1 )
    sub_14050BC6C((ULONG_PTR)&unk_140C0CA68, KdHvComPortInUse);
  Pool2 = ExAllocatePool2(64LL, 0x2000uLL, 0x6D6C6148u);
  v2 = (unsigned int *)Pool2;
  v3 = (char *)ExAllocatePool2(64LL, 0x2000uLL, 0x6D6C6148u);
  P = v3;
  if ( !Pool2 || !v3 )
    KeBugCheckEx(0xACu, 0x4000uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\misc\\usage.c", 0x18EuLL);
  v4 = Pool2 + 4;
  v5 = 0;
  *(_DWORD *)(Pool2 + 4) = -1;
  v6 = v3 + 4;
  v60 = v2 + 1;
  v7 = v2 + 1;
  v58 = v3 + 4;
  v8 = byte_140D688E0;
  v9 = byte_140D68AE1;
  do
  {
    if ( (*v8 & 1) == 0 )
    {
      *v8 = 17;
      *(_DWORD *)v9 = v5;
    }
    ++v5;
    ++v8;
    v9 += 5;
  }
  while ( v5 < 0x30 );
  v61 = 0LL;
  v10 = 0;
  v57 = 0LL;
  v47 = 0;
  do
  {
    v11 = qword_140D68688;
    v12 = 0;
    v13 = 0;
    v14 = v10 != 0 ? 16 : 32;
    v46 = v14;
LABEL_12:
    v48 = v12;
    while ( 1 )
    {
      while ( v12 <= 0xFF )
      {
        if ( ((unsigned __int8)v14 & (unsigned __int8)byte_140D688E0[v12]) == 0 )
        {
          ++v12;
          goto LABEL_12;
        }
        LODWORD(v66[0]) = 2097153;
        memset((char *)v66 + 4, 0, 0x104uLL);
        sub_140300030((__int64)v66, 0x20u, (unsigned __int16 *)dword_140D06E40);
        *(_DWORD *)&Descriptor_8.Type = 66050;
        if ( (byte_140D688E0[v48] & 2) == 0 )
          Descriptor_8.Flags = 0;
        Descriptor_8.u.Generic.Start.HighPart = *(_DWORD *)&byte_140D68AE0[5 * v48 + 1];
        Descriptor_8.u.Generic.Start.LowPart = LOWORD(Descriptor_8.u.MessageInterrupt.Translated.Vector);
        Descriptor_8.u.Interrupt.Affinity = v66[1];
        v15 = *(_OWORD *)&Descriptor_8.Type;
        v16 = (unsigned __int8)byte_140D68AE0[5 * v48];
        v17 = HIDWORD(v66[1]);
        v18 = HIDWORD(v66[1]);
        v63 = *(_OWORD *)&Descriptor_8.Type;
        DWORD2(v63) = v48;
        v12 = ++v48;
        WORD2(v63) = v16;
LABEL_19:
        if ( *v60 )
        {
          ++*v2;
          v60 = v7;
          ++*(_DWORD *)P;
          v45 = v58;
          *v7 = 0;
          *v45 = 0;
          v21 = v45 + 2;
          v20 = v7 + 2;
          v57 = v45 + 2;
          v7 += 4;
          v61 = v20;
          v19 = v45 + 4;
        }
        else
        {
          v19 = v58;
          v20 = v61;
          v21 = v57;
        }
        ++v20[1];
        ++v21[1];
        v14 = v46;
        *(_OWORD *)v7 = v15;
        v7[4] = v17;
        v7 += 5;
        *(_OWORD *)v19 = v63;
        v19[4] = v18;
        v58 = v19 + 5;
      }
      if ( !v11 )
        break;
      if ( ((unsigned __int8)v14 & *(_BYTE *)(v11 + 12)) != 0 )
      {
        v22 = *(_QWORD *)(v11 + 16LL * v13 + 21);
        if ( v22 )
        {
          v23 = *(_DWORD *)(v11 + 8);
          if ( ((v23 - 1) & 0xFFFFFFF9) == 0 && v23 != 5 )
          {
            v24 = *(_QWORD *)(v11 + 16LL * v13 + 13);
            Descriptor_8.Flags = 0;
            v25 = RtlCmEncodeMemIoResource(&Descriptor_8, v23, v22, v24);
            if ( v25 < 0 )
              KeBugCheckEx(0x5Cu, 0x10FuLL, v25, v11, v13);
            Descriptor_8.ShareDisposition = 2;
            if ( Descriptor_8.Type == 1 )
            {
              Descriptor = 1;
              Descriptor_8.Flags = 17;
            }
            else if ( Descriptor_8.Type == 3 || Descriptor_8.Type == 7 )
            {
              Descriptor = 0;
              if ( (*(_BYTE *)(v11 + 12) & 4) != 0 )
                Descriptor_8.Flags |= 1u;
            }
            v54 = *((_DWORD *)&Descriptor_8.u.Memory48 + 3);
            v63 = *(_OWORD *)&Descriptor_8.Type;
            HalTranslateBusAddress(Internal, 0, Descriptor_8.u.Generic.Start, &Descriptor, &TranslatedAddress);
            *(LARGE_INTEGER *)((char *)&v63 + 4) = TranslatedAddress;
            if ( !Descriptor && Descriptor_8.Type == 1 )
              WORD1(v63) = 0;
            v15 = *(_OWORD *)&Descriptor_8.Type;
            v12 = v48;
            ++v13;
            v17 = *((_DWORD *)&Descriptor_8.u.Memory48 + 3);
            v18 = v54;
            goto LABEL_19;
          }
          v14 = v46;
        }
        v11 = *(_QWORD *)v11;
        v13 = 0;
      }
      else
      {
        v11 = *(_QWORD *)v11;
        v13 = 0;
      }
    }
    v10 = v47 + 1;
    v47 = v10;
  }
  while ( v10 < 2u );
  v26 = (unsigned int)((_DWORD)v7 - (_DWORD)v2);
  v49 = 0;
  v27 = 0;
  v57 = (_DWORD *)v26;
  if ( *v2 )
  {
LABEL_41:
    v28 = v4 + 16;
    v6 += 16;
    v29 = *(_DWORD *)(v4 + 12);
    v54 = v29;
    if ( !v29 )
      goto LABEL_52;
    while ( 1 )
    {
      sub_140AF7D88(v28, &Descriptor_4, &v55);
      v30 = HIDWORD(v55);
      v31 = v29;
      v32 = Descriptor_4;
      v34 = v31 - v33;
      v36 = v35;
      v37 = v6;
      do
      {
        sub_140AF7D88(v36, &v53, &v56);
        if ( v53 >= v32 )
        {
          if ( v53 != v32 )
            goto LABEL_49;
          v40 = SHIDWORD(v56) < v30;
          if ( HIDWORD(v56) != v30 )
            goto LABEL_48;
          if ( (unsigned int)v56 >= (unsigned int)v55 )
          {
            v40 = SHIDWORD(v56) < v30;
LABEL_48:
            if ( !v40 )
              goto LABEL_49;
          }
        }
        v41 = *((_DWORD *)v38 + 4);
        v42 = *v38;
        *v38 = *v36;
        *((_DWORD *)v38 + 4) = *((_DWORD *)v36 + 4);
        *v36 = v42;
        *((_DWORD *)v36 + 4) = v41;
        v43 = *((_DWORD *)v6 + 4);
        v44 = *(_OWORD *)v6;
        *(_OWORD *)v6 = *(_OWORD *)v37;
        *((_DWORD *)v6 + 4) = *((_DWORD *)v37 + 4);
        *(_OWORD *)v37 = v44;
        *((_DWORD *)v37 + 4) = v43;
        sub_140AF7D88(v38, &Descriptor_4, &v55);
        v30 = HIDWORD(v55);
        v32 = Descriptor_4;
LABEL_49:
        v36 = (__int128 *)((char *)v36 + 20);
        v37 += 20;
        --v34;
      }
      while ( v34 );
      v29 = v54;
      v28 = (__int64)v38 + 20;
      v6 += 20;
      if ( v39 + 1 >= v54 )
      {
        v2 = (unsigned int *)Pool2;
        v27 = v49;
LABEL_52:
        ++v27;
        v4 = v28;
        v49 = v27;
        if ( v27 >= *v2 )
        {
          LODWORD(v26) = (_DWORD)v57;
          break;
        }
        goto LABEL_41;
      }
    }
  }
  IoReportHalResourceUsage(v65, v2, P, v26);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
