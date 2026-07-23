/*
 * XREFs of sub_1402A4E10 @ 0x1402A4E10
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     FsRtlOplockBreakToNoneEx @ 0x140542200 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x140658160 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlOplockBreakH2 @ 0x1406D8C10 (FsRtlOplockBreakH2.c)
 *     FsRtlCheckUpperOplock @ 0x14092E2F0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     IoAcquireCancelSpinLock @ 0x14022A5C0 (IoAcquireCancelSpinLock.c)
 *     sub_140240DB4 @ 0x140240DB4 (sub_140240DB4.c)
 *     sub_140249470 @ 0x140249470 (sub_140249470.c)
 *     sub_14024A390 @ 0x14024A390 (sub_14024A390.c)
 *     sub_14024C370 @ 0x14024C370 (sub_14024C370.c)
 *     sub_14024E7F8 @ 0x14024E7F8 (sub_14024E7F8.c)
 *     sub_14024E884 @ 0x14024E884 (sub_14024E884.c)
 *     IoReleaseCancelSpinLock @ 0x1402A23F0 (IoReleaseCancelSpinLock.c)
 *     sub_1402A2DE8 @ 0x1402A2DE8 (sub_1402A2DE8.c)
 *     sub_1402A6AB0 @ 0x1402A6AB0 (sub_1402A6AB0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1404173E4 @ 0x1404173E4 (sub_1404173E4.c)
 *     sub_140542AEC @ 0x140542AEC (sub_140542AEC.c)
 *     sub_1407F7D6C @ 0x1407F7D6C (sub_1407F7D6C.c)
 */

__int64 __fastcall sub_1402A4E10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned int *a7,
        unsigned __int16 *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        _BYTE *a15,
        _BYTE *a16)
{
  IRP *v17; // r10
  __int64 v18; // r9
  unsigned int v20; // r14d
  bool v21; // si
  char v22; // bl
  __int64 v23; // r8
  int v25; // eax
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // r15
  __int64 v31; // rcx
  int v32; // eax
  PIRP v33; // r15
  struct _IRP *MasterIrp; // rcx
  char v35; // r15
  int v36; // eax
  __int64 v37; // rax
  __int64 *v38; // rbx
  _QWORD *v39; // rbx
  _QWORD *v40; // rbx
  __int64 v41; // rdx
  _QWORD *v42; // rbx
  PVOID *v43; // rax
  PVOID *v44; // rbx
  int v45; // edx
  int v46; // eax
  __int16 v47; // cx
  __int64 *v48; // rbx
  _QWORD *v49; // rbx
  char v50; // al
  PVOID *v51; // rbx
  char v52; // al
  _QWORD *v53; // rbx
  PIRP v54; // r15
  struct _IRP *v55; // rcx
  PIRP v56; // r15
  struct _IRP *v57; // rdx
  int v58; // eax
  PIRP v59; // r15
  PIRP v60; // rax
  _QWORD *v61; // rcx
  struct _IRP *v62; // rcx
  int v63; // eax
  _QWORD *v64; // rbx
  int v65; // eax
  char v66; // [rsp+61h] [rbp-67h]
  char v67; // [rsp+62h] [rbp-66h]
  char v68; // [rsp+63h] [rbp-65h]
  __int128 v69; // [rsp+78h] [rbp-50h] BYREF
  __int64 v70; // [rsp+88h] [rbp-40h]
  int v73; // [rsp+E8h] [rbp+20h]

  v17 = (IRP *)a3;
  v18 = a2;
  v20 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v21 = 0;
  v22 = 0;
  v66 = 0;
  v68 = 0;
  v67 = 1;
  v23 = a4 & 8;
  v73 = a4 & 8;
  if ( a6 == 28672 || a6 == 20480 || a6 == 0x4000 || a6 == 0x2000 )
  {
    if ( !a1 )
      return v20;
    v25 = *(_DWORD *)(a1 + 144);
    if ( v25 == 1 || (v25 & a6) == 0 )
      return v20;
    if ( (a4 & 8) == 0 )
    {
      if ( (unsigned __int8)sub_1402A6AB0(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), a4) )
        return v20;
      v23 = a4 & 8;
      v18 = a2;
      v17 = (IRP *)a3;
    }
    v26 = *(_DWORD *)(a1 + 144);
    if ( (v26 & 0x40) != 0 && (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    v27 = v26 & 0x1F0FFDF;
    if ( (v26 & 0x1F0FFDFu) <= 0x105040 )
    {
      if ( v27 == 1069120 )
      {
        if ( (a6 & 0x1000) != 0 )
          *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
        if ( (a6 & 0x5000) != 0 )
          v21 = 1;
        goto LABEL_185;
      }
      if ( v27 <= 0x5040 )
      {
        if ( v27 != 20544 )
        {
          v28 = v27 - 4096;
          if ( v28 )
          {
            v29 = v28 - 16;
            if ( v29 )
            {
              if ( v29 != 8176 )
              {
LABEL_182:
                if ( (v26 & 0x1000000) != 0 )
                  v21 = 1;
                goto LABEL_185;
              }
              goto LABEL_67;
            }
          }
LABEL_55:
          if ( (a6 & 0x1000) != 0 )
          {
            v40 = *(_QWORD **)(a1 + 40);
            while ( v40 != (_QWORD *)(a1 + 40) )
            {
              v41 = v40[2];
              if ( *(_DWORD *)(v41 + 24) == 590400 )
              {
                if ( (_DWORD)v23 || !(unsigned __int8)sub_1402A6AB0(*(_QWORD *)(v18 + 48), *(_QWORD *)(v41 + 48), a4) )
                {
                  if ( (a4 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  v42 = (_QWORD *)v40[1];
                  sub_140542AEC(*v42, 0LL, 0LL);
                  v40 = (_QWORD *)*v42;
                  v23 = a4 & 8;
                  v18 = a2;
                }
                else
                {
                  v40 = (_QWORD *)*v40;
                  v23 = a4 & 8;
                  v18 = a2;
                }
              }
              else
              {
                v40 = (_QWORD *)*v40;
                v23 = a4 & 8;
                v18 = a2;
              }
            }
            v22 = 0;
          }
          if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) != 0xB000 )
            goto LABEL_119;
LABEL_67:
          if ( a6 == 0x2000 )
          {
            v43 = (PVOID *)(a1 + 56);
            v44 = *(PVOID **)(a1 + 56);
            while ( v44 != v43 )
            {
              if ( ((_DWORD)v23 || !(unsigned __int8)sub_1402A6AB0(*(_QWORD *)(v18 + 48), v44[3], v23))
                && ((a4 & 0x40000080) != 0x40000080 || (int)sub_1407F7D6C(a3, v44[3], *a7, *a8) < 0) )
              {
                if ( (a4 & 0x10010000) != 0 )
                  return (unsigned int)-1073739511;
                if ( v44[7] )
                {
                  v21 = 1;
                }
                else
                {
                  v44 = (PVOID *)v44[1];
                  v45 = 1;
                  v46 = 0;
                  v47 = 0;
                  if ( !*(_BYTE *)a2 )
                  {
                    v45 = 3;
                    v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
                    v47 = *(_WORD *)(a2 + 26);
                  }
                  if ( (unsigned __int8)sub_1404173E4(*v44, v45, v46, v47) )
                  {
                    v67 = 0;
                    v21 = 1;
                    v68 = v73 != 0;
                  }
                  else
                  {
                    v66 = 1;
                  }
                }
              }
              v44 = (PVOID *)*v44;
              v23 = a4 & 8;
              v43 = (PVOID *)(a1 + 56);
              v18 = a2;
            }
          }
          else
          {
            if ( (a6 & 0x5000) != 0x5000 )
              goto LABEL_109;
            v48 = *(__int64 **)(a1 + 72);
            while ( v48 != (__int64 *)(a1 + 72) )
            {
              if ( (_DWORD)v23 || !(unsigned __int8)sub_1402A6AB0(*(_QWORD *)(v18 + 48), v48[3], a4) )
              {
                if ( (a4 & 0x10010000) != 0 )
                  return (unsigned int)-1073739511;
                *((_DWORD *)v48 + 12) &= 0xFF0FFFFF;
                *((_DWORD *)v48 + 12) |= 0x800000u;
                if ( (a6 & 0x2000) != 0 )
                  v21 = 1;
              }
              v48 = (__int64 *)*v48;
              LODWORD(v23) = a4 & 8;
              v18 = a2;
            }
            v49 = *(_QWORD **)(a1 + 56);
            while ( v49 != (_QWORD *)(a1 + 56) )
            {
              if ( (_DWORD)v23 || !(unsigned __int8)sub_1402A6AB0(*(_QWORD *)(v18 + 48), v49[3], a4) )
              {
                if ( (a4 & 0x10010000) != 0 )
                  return (unsigned int)-1073739511;
                if ( v49[7] )
                {
                  v50 = v21;
                  if ( (a6 & 0x2000) != 0 )
                    v50 = 1;
                  v21 = v50;
                  v49 = (_QWORD *)*v49;
                  LODWORD(v23) = a4 & 8;
                  v18 = a2;
                }
                else
                {
                  v51 = (PVOID *)v49[1];
                  if ( (unsigned __int8)sub_1404173E4(*v51, 1, 0, 0) )
                  {
                    v67 = 0;
                    v52 = v21;
                    if ( (a6 & 0x2000) != 0 )
                      v52 = 1;
                    v21 = v52;
                    v68 = v73 != 0;
                  }
                  else
                  {
                    v66 = 1;
                  }
                  v49 = *v51;
                  LODWORD(v23) = a4 & 8;
                  v18 = a2;
                }
              }
              else
              {
                v49 = (_QWORD *)*v49;
                LODWORD(v23) = a4 & 8;
                v18 = a2;
              }
            }
          }
          v22 = v66;
LABEL_109:
          if ( v22 )
            sub_14024E7F8(a1);
          if ( !v21 )
          {
            v53 = *(_QWORD **)(a1 + 72);
            if ( v53 != (_QWORD *)(a1 + 72) && (a6 & 0x2000) != 0 )
            {
              if ( (a4 & 8) != 0 )
              {
LABEL_118:
                v21 = 1;
              }
              else
              {
                while ( v53 != (_QWORD *)(a1 + 72) )
                {
                  if ( !(unsigned __int8)sub_1402A6AB0(v53[3], *(_QWORD *)(a2 + 48), 0LL) )
                    goto LABEL_118;
                  v53 = (_QWORD *)*v53;
                }
              }
            }
          }
LABEL_119:
          sub_1402A2DE8(a1);
          goto LABEL_185;
        }
        if ( (a6 & 0x5000) == 0x5000 )
        {
          v30 = *(_QWORD *)a1;
          IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
          _InterlockedExchange64((volatile __int64 *)(v30 + 104), 0LL);
          IoReleaseCancelSpinLock(*(_BYTE *)(v30 + 69));
          if ( !*(_BYTE *)(v30 + 68) )
          {
            v31 = *(_QWORD *)(v30 + 24);
            *(_OWORD *)v31 = 0LL;
            *(_QWORD *)(v31 + 16) = 0LL;
            *(_DWORD *)v31 = 1572865;
            *(_DWORD *)(v31 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            *(_DWORD *)(v31 + 12) |= 1u;
            *(_QWORD *)(v30 + 56) = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            v32 = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
LABEL_123:
            *(_DWORD *)(a1 + 144) = v32;
            v21 = 1;
            v20 = 0;
            goto LABEL_185;
          }
        }
        else
        {
          if ( (a6 & 0x4000) == 0 )
            goto LABEL_185;
          v33 = *(PIRP *)a1;
          IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
          _InterlockedExchange64((volatile __int64 *)&v33->CancelRoutine, 0LL);
          IoReleaseCancelSpinLock(v33->CancelIrql);
          if ( !v33->Cancel )
          {
            MasterIrp = v33->AssociatedIrp.MasterIrp;
            *(_OWORD *)&MasterIrp->Type = 0LL;
            *(_QWORD *)&MasterIrp->Flags = 0LL;
            *(_DWORD *)&MasterIrp->Type = 1572865;
            *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            LODWORD(MasterIrp->MdlAddress) = 1;
            HIDWORD(MasterIrp->MdlAddress) |= 1u;
            v33->IoStatus.Information = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            v32 = *(_DWORD *)(a1 + 144) & 0x20 | 0x105040;
            goto LABEL_123;
          }
        }
LABEL_132:
        sub_14024A390(a1, 0LL, 0LL);
        sub_140240DB4(a1, 0LL);
        *(_BYTE *)(a1 + 32) = 0;
        v60 = *(PIRP *)a1;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
        {
          v60->IoStatus.Information = 0LL;
          v60 = *(PIRP *)a1;
        }
        v60->IoStatus.Status = -1073741536;
        IofCompleteRequest(*(PIRP *)a1, 1);
        *(_QWORD *)a1 = 0LL;
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
        while ( 1 )
        {
          v61 = *(_QWORD **)(a1 + 88);
          if ( v61 == (_QWORD *)(a1 + 88) )
            break;
          sub_14024E884(v61);
        }
        v68 = 0;
        v67 = 1;
        v20 = 0;
        goto LABEL_185;
      }
      if ( v27 != 28736 )
      {
        if ( v27 != 45056 )
        {
          if ( v27 == 1060864 )
          {
            v35 = 0;
            v36 = a6 & 0x1000;
            if ( (a6 & 0x1000) != 0 )
            {
              v37 = a1 + 72;
              v38 = *(__int64 **)(a1 + 72);
              while ( v38 != (__int64 *)v37 )
              {
                if ( (_DWORD)v23 || !(unsigned __int8)sub_1402A6AB0(*(_QWORD *)(v18 + 48), v38[3], a4) )
                {
                  v35 = 1;
                  if ( (a4 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  *((_DWORD *)v38 + 12) &= 0xFF0FFFFF;
                  *((_DWORD *)v38 + 12) |= 0x800000u;
                }
                v38 = (__int64 *)*v38;
                v37 = a1 + 72;
                LODWORD(v23) = a4 & 8;
                v18 = a2;
              }
              sub_1402A2DE8(a1);
              v36 = a6 & 0x1000;
            }
            if ( (a6 & 0x2000) != 0 )
            {
              if ( v35 )
              {
                v21 = 1;
              }
              else if ( !v36 )
              {
                v39 = *(_QWORD **)(a1 + 72);
                while ( v39 != (_QWORD *)(a1 + 72) )
                {
                  if ( (a4 & 8) != 0 || !(unsigned __int8)sub_1402A6AB0(*(_QWORD *)(a2 + 48), v39[3], 0LL) )
                  {
                    if ( (a4 & 0x40000080) != 0x40000080 || (int)sub_1407F7D6C(a3, v39[3], *a7, *a8) < 0 )
                      goto LABEL_179;
                    v39 = (_QWORD *)*v39;
                  }
                  else
                  {
                    v39 = (_QWORD *)*v39;
                  }
                }
              }
            }
            goto LABEL_185;
          }
          goto LABEL_182;
        }
        goto LABEL_55;
      }
      if ( a6 == 0x4000 )
      {
        v54 = *(PIRP *)a1;
        IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
        _InterlockedExchange64((volatile __int64 *)&v54->CancelRoutine, 0LL);
        IoReleaseCancelSpinLock(v54->CancelIrql);
        if ( !v54->Cancel )
        {
          v55 = v54->AssociatedIrp.MasterIrp;
          *(_OWORD *)&v55->Type = 0LL;
          *(_QWORD *)&v55->Flags = 0LL;
          *(_DWORD *)&v55->Type = 1572865;
          *(_DWORD *)(&v55->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
          LODWORD(v55->MdlAddress) = 3;
          HIDWORD(v55->MdlAddress) |= 1u;
          v54->IoStatus.Information = 24LL;
          *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
          IofCompleteRequest(*(PIRP *)a1, 1);
          *(_QWORD *)a1 = 0LL;
          v32 = *(_DWORD *)(a1 + 144) & 0x20 | 0x507040;
          goto LABEL_123;
        }
        goto LABEL_132;
      }
      if ( a6 != 0x2000 )
      {
        v59 = *(PIRP *)a1;
        IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
        _InterlockedExchange64((volatile __int64 *)&v59->CancelRoutine, 0LL);
        IoReleaseCancelSpinLock(v59->CancelIrql);
        if ( !v59->Cancel )
        {
          v62 = v59->AssociatedIrp.MasterIrp;
          *(_OWORD *)&v62->Type = 0LL;
          *(_QWORD *)&v62->Flags = 0LL;
          *(_DWORD *)&v62->Type = 1572865;
          *(_DWORD *)(&v62->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
          HIDWORD(v62->MdlAddress) |= 1u;
          v59->IoStatus.Information = 24LL;
          *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
          IofCompleteRequest(*(PIRP *)a1, 1);
          *(_QWORD *)a1 = 0LL;
          v32 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
          goto LABEL_123;
        }
        goto LABEL_132;
      }
      v56 = *(PIRP *)a1;
      if ( (a4 & 0x40000080) != 0x40000080 || (int)sub_1407F7D6C(v17, *(_QWORD *)(a1 + 8), *a7, *a8) < 0 )
      {
        IoAcquireCancelSpinLock(&v56->CancelIrql);
        _InterlockedExchange64((volatile __int64 *)&v56->CancelRoutine, 0LL);
        IoReleaseCancelSpinLock(v56->CancelIrql);
        if ( !v56->Cancel )
        {
          v57 = v56->AssociatedIrp.MasterIrp;
          *(_OWORD *)&v57->Type = 0LL;
          *(_QWORD *)&v57->Flags = 0LL;
          *(_DWORD *)&v57->Type = 1572865;
          *(_DWORD *)(&v57->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
          LODWORD(v57->MdlAddress) = 5;
          v58 = HIDWORD(v57->MdlAddress) | 1;
          HIDWORD(v57->MdlAddress) = v58;
          if ( !*(_BYTE *)a2 )
          {
            HIDWORD(v57->MdlAddress) = v58 | 2;
            v57->Flags = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
            *((_WORD *)&v57->Flags + 2) = *(_WORD *)(a2 + 26);
          }
          v56->IoStatus.Information = 24LL;
          *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
          IofCompleteRequest(*(PIRP *)a1, 1);
          *(_QWORD *)a1 = 0LL;
          v32 = *(_DWORD *)(a1 + 144) & 0x20 | 0x307040;
          goto LABEL_123;
        }
        goto LABEL_132;
      }
LABEL_185:
      if ( v21 )
      {
        if ( (a4 & 1) != 0 )
        {
          v65 = *(_DWORD *)(a1 + 144);
          if ( (v65 & 0x10000) != 0 )
            *(_DWORD *)(a1 + 144) = v65 | 0x20000;
          return 264;
        }
        else
        {
          if ( v67 )
          {
            LOBYTE(v23) = 1;
            sub_14024A390(a1, 0LL, v23);
            sub_14024C370(a1, 0LL);
          }
          *a15 = 0;
          return (unsigned int)sub_140249470(a1, a3, a9, a10, a11, (char *)&v69, v68, a12, a13, a14, a16);
        }
      }
      return v20;
    }
    if ( v27 > 0x803000 )
    {
      if ( v27 == 8409152 )
      {
        v21 = (a6 & 0x5000) != 0;
        goto LABEL_185;
      }
      if ( v27 != 8417344 )
        goto LABEL_182;
    }
    else
    {
      if ( v27 == 8400896 )
      {
        if ( (a6 & 0x3000) != 0 )
        {
          if ( (a4 & 0x80u) == 0 && (a4 & 0x10010000) != 0 )
            return (unsigned int)-1073739511;
          if ( (a6 & 0x2000) != 0 )
          {
            v64 = *(_QWORD **)(a1 + 72);
            while ( v64 != (_QWORD *)(a1 + 72) )
            {
              if ( (_DWORD)v23 || !(unsigned __int8)sub_1402A6AB0(*(_QWORD *)(v18 + 48), v64[3], v23) )
              {
                if ( (a4 & 0x40000080) != 0x40000080 || (int)sub_1407F7D6C(a3, v64[3], *a7, *a8) < 0 )
                {
                  if ( (a4 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  goto LABEL_179;
                }
                v64 = (_QWORD *)*v64;
                v23 = a4 & 8;
                v18 = a2;
              }
              else
              {
                v64 = (_QWORD *)*v64;
                v23 = a4 & 8;
                v18 = a2;
              }
            }
          }
        }
        goto LABEL_185;
      }
      if ( v27 != 1077312 )
      {
        if ( v27 != 3174464 )
        {
          if ( v27 == 5271616 )
          {
            if ( a6 == 0x2000 )
            {
              if ( (a4 & 0x40000080) != 0x40000080 || (int)sub_1407F7D6C(v17, *(_QWORD *)(a1 + 8), *a7, *a8) < 0 )
              {
                *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
                v21 = 1;
              }
            }
            else
            {
              if ( (a6 & 0x1000) != 0 )
                *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
              v21 = 1;
            }
            goto LABEL_185;
          }
          goto LABEL_182;
        }
        if ( a6 == 0x4000 )
        {
          v63 = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
LABEL_159:
          *(_DWORD *)(a1 + 144) = v63;
          goto LABEL_160;
        }
        if ( (a6 & 0x5000) != 0x5000 )
          goto LABEL_160;
LABEL_158:
        v63 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
        goto LABEL_159;
      }
      if ( (a6 & 0x1000) != 0 )
        goto LABEL_158;
    }
LABEL_160:
    if ( (a4 & 0x40000080) == 0x40000080 )
    {
      if ( (int)sub_1407F7D6C(v17, *(_QWORD *)(a1 + 8), *a7, *a8) < 0 )
        v21 = 1;
    }
    else
    {
LABEL_179:
      v21 = 1;
    }
    goto LABEL_185;
  }
  if ( v17 )
  {
    v17->IoStatus.Status = -1073741597;
    IofCompleteRequest(v17, 1);
  }
  return 3221225699LL;
}
