/*
 * XREFs of FsRtlCheckOplockEx2 @ 0x1402A5D00
 * Callers:
 *     FsRtlCheckOplockEx @ 0x1402A5CB0 (FsRtlCheckOplockEx.c)
 *     FsRtlCheckOplock @ 0x1402A68A0 (FsRtlCheckOplock.c)
 * Callees:
 *     sub_140240DB4 @ 0x140240DB4 (sub_140240DB4.c)
 *     sub_14024A5B4 @ 0x14024A5B4 (sub_14024A5B4.c)
 *     sub_14024E7F8 @ 0x14024E7F8 (sub_14024E7F8.c)
 *     sub_140256F58 @ 0x140256F58 (sub_140256F58.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402A2DE8 @ 0x1402A2DE8 (sub_1402A2DE8.c)
 *     sub_1402A30D0 @ 0x1402A30D0 (sub_1402A30D0.c)
 *     sub_1402A386C @ 0x1402A386C (sub_1402A386C.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402A3F9C @ 0x1402A3F9C (sub_1402A3F9C.c)
 *     sub_1402A4E10 @ 0x1402A4E10 (sub_1402A4E10.c)
 *     sub_1402A6980 @ 0x1402A6980 (sub_1402A6980.c)
 *     sub_1402A6AB0 @ 0x1402A6AB0 (sub_1402A6AB0.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140359548 @ 0x140359548 (sub_140359548.c)
 *     sub_14039E588 @ 0x14039E588 (sub_14039E588.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140542128 @ 0x140542128 (sub_140542128.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066EF20 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x14069B6E0 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x1406B54B0 (FsRtlAcknowledgeEcp.c)
 *     FsRtlFindExtraCreateParameter @ 0x14072AB80 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x14072AC10 (FsRtlRemoveExtraCreateParameter.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlCheckOplockEx2(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v13; // r14d
  __int64 v14; // r15
  struct _KTHREAD *v15; // r12
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // rsi
  struct _KTHREAD *CurrentThread; // r9
  struct _KTHREAD *v23; // r8
  __int64 v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // esi
  char v29; // al
  int v30; // edi
  int v31; // eax
  __int64 v32; // rsi
  unsigned __int8 v33; // al
  int v34; // eax
  bool v35; // zf
  unsigned int v36; // eax
  ULONG_PTR v37; // rdi
  unsigned __int32 v38; // eax
  _QWORD *v40; // rcx
  struct _ECP_LIST *v41; // r12
  __int64 v42; // rax
  int v43; // eax
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // [rsp+20h] [rbp-148h]
  bool v49; // [rsp+81h] [rbp-E7h] BYREF
  char v50; // [rsp+82h] [rbp-E6h]
  bool v51; // [rsp+83h] [rbp-E5h]
  _BYTE v52[4]; // [rsp+84h] [rbp-E4h] BYREF
  int v53; // [rsp+88h] [rbp-E0h]
  unsigned int v54; // [rsp+8Ch] [rbp-DCh]
  unsigned int v55; // [rsp+90h] [rbp-D8h]
  struct _KTHREAD *v56; // [rsp+98h] [rbp-D0h]
  PVOID P; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned int v58; // [rsp+A8h] [rbp-C0h]
  PVOID EcpContext; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-B0h]
  int v61; // [rsp+C0h] [rbp-A8h]
  int v62; // [rsp+C4h] [rbp-A4h]
  unsigned int v63; // [rsp+C8h] [rbp-A0h]
  __int64 v64; // [rsp+D0h] [rbp-98h]
  __int64 v65; // [rsp+D8h] [rbp-90h]
  __int64 v66; // [rsp+E0h] [rbp-88h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-78h]
  __int64 v69; // [rsp+F8h] [rbp-70h]
  struct _KTHREAD *v70; // [rsp+100h] [rbp-68h]
  __int64 v71; // [rsp+108h] [rbp-60h]
  GUID EcpType; // [rsp+110h] [rbp-58h] BYREF

  v62 = a4;
  v63 = a3;
  v60 = a5;
  P = a6;
  v66 = a7;
  v65 = a9;
  v64 = a10;
  v13 = 0;
  v55 = 0;
  v14 = *a1;
  v69 = *a1;
  if ( a4 )
    return 3221225485LL;
  v15 = *(struct _KTHREAD **)(a2 + 184);
  v56 = v15;
  if ( (a3 & 4) != 0 )
  {
    P = 0LL;
    if ( !v14 )
      return 0LL;
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v14 + 152));
    if ( *(_BYTE *)v15 )
    {
      v13 = -1073741811;
    }
    else if ( (*(_DWORD *)(v14 + 144) & 0x10000) != 0 && sub_1402A3F9C(v14, *((_QWORD *)v15 + 6), &P) )
    {
      v44 = P;
      sub_1402A386C((__int64)P);
      v45 = v44[7];
      v46 = (_QWORD *)v44[8];
      if ( *(_QWORD **)(v45 + 8) != v44 + 7 || (_QWORD *)*v46 != v44 + 7 )
        __fastfail(3u);
      *v46 = v45;
      *(_QWORD *)(v45 + 8) = v46;
      if ( *(_QWORD *)(v14 + 120) == v14 + 120 )
        *(_DWORD *)(v14 + 144) &= 0xFFFCFFFF;
      if ( v44[5] )
        sub_140240DB4(v14, (__int64)v44);
      ExFreePoolWithTag(v44, 0);
      sub_1402A2DE8(v14);
      sub_14024E7F8(v47);
    }
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v14 + 152));
    return v13;
  }
  if ( (a3 & 0x10000000) == 0 )
  {
    v16 = 0;
    if ( *(_BYTE *)v15 )
      goto LABEL_5;
    v40 = *(_QWORD **)(*((_QWORD *)v15 + 6) + 208LL);
    if ( v40 )
    {
      if ( v40 != off_140C06A80 )
      {
        v42 = v40[7];
        if ( v42 )
        {
          if ( (*(_BYTE *)(v42 + 2) & 3) != 0 )
            goto LABEL_5;
        }
      }
    }
    EcpContext = 0LL;
    ExtraCreateParameter = 0LL;
    EcpType = 0LL;
    IoGetIrpExtraCreateParameter((PIRP)a2, &ExtraCreateParameter);
    v41 = ExtraCreateParameter;
    if ( ExtraCreateParameter )
    {
      EcpType = (GUID)xmmword_140015EF8;
      if ( FsRtlFindExtraCreateParameter(ExtraCreateParameter, &EcpType, &EcpContext, 0LL) )
      {
        EcpType = (GUID)xmmword_140015F08;
        if ( FsRtlRemoveExtraCreateParameter(v41, &EcpType, &EcpContext, 0LL) )
          goto LABEL_124;
        v43 = 1;
      }
      else
      {
        v43 = 2;
      }
      v54 = v43;
      v15 = v56;
      v16 = sub_14039E588(*((_QWORD *)v56 + 6), EcpContext, (unsigned __int16)v43);
      if ( (_WORD)v54 == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v16 == -1073741823 )
        v16 = 0;
      goto LABEL_5;
    }
LABEL_124:
    v15 = v56;
LABEL_5:
    v55 = v16;
  }
  sub_1402A6980(a1, a2, a3);
  if ( v14 != *a1 )
  {
    v14 = *a1;
    v69 = *a1;
  }
  if ( (a3 & 2) == 0 && v14 && (*(_DWORD *)(a2 + 16) & 2) == 0 && !v55 )
  {
    v49 = (a3 & 0x20000000) != 0;
    v50 = 1;
    while ( 1 )
    {
      v52[0] = 0;
      v18 = a3 & 0x10;
      v54 = a3 & 0x10;
      if ( (a3 & 0x10) == 0 && !v49 )
      {
        v58 = *(_DWORD *)(v14 + 144);
        v19 = *(_QWORD *)(v14 + 8);
        v71 = v19;
        v20 = *(_BYTE *)v15;
        v17 = v58;
        if ( *(_BYTE *)v15 == 3 && (v58 & 0xFFFF4FFE) == 0 )
          v50 = 0;
        if ( v20 == 4 && (v58 & 0xFFFFDFFE) == 0 )
          v50 = 0;
        if ( (a3 & 8) == 0 && v20 != 18 && v19 && v19 == *((_QWORD *)v15 + 6) )
        {
          v50 = 0;
          goto LABEL_113;
        }
      }
      if ( !v50 )
        goto LABEL_113;
      if ( !v49 )
        break;
LABEL_34:
      v49 = 1;
      v28 = *(_DWORD *)(v14 + 144);
      if ( v28 != 1 )
      {
        LOBYTE(v17) = 0;
        v54 = v17;
        v51 = 0;
        v29 = 0;
        v30 = 0;
        v53 = 0;
        if ( (_DWORD)v18 )
          goto LABEL_49;
        v31 = *(unsigned __int8 *)v15;
        if ( v31 == 3 )
        {
          if ( (v28 & 8) != 0 )
          {
LABEL_67:
            v30 = 0x4000;
            v53 = 0x4000;
          }
          else
          {
            LOBYTE(v17) = 1;
            v51 = 1;
            v30 = 0x4000;
            v53 = 0x4000;
          }
          goto LABEL_39;
        }
        if ( v31 == 4 )
        {
LABEL_48:
          v29 = 1;
LABEL_49:
          v30 = 20480;
          v53 = 20480;
        }
        else
        {
          switch ( *(_BYTE *)v15 )
          {
            case 0:
              if ( ((v28 & 0x7000) == 0 || (*(_DWORD *)(*((_QWORD *)v15 + 1) + 16LL) & 0xFFEDFE7F) == 0)
                && ((v28 & 0x1E) == 0 || (*(_DWORD *)(*((_QWORD *)v15 + 1) + 16LL) & 0xFFEFFE7F) == 0)
                && (*((_DWORD *)v15 + 4) & 0x100000) == 0
                || (v28 & 8) != 0
                && (*(_DWORD *)(*((_QWORD *)v15 + 1) + 16LL) & 0xFFEDFE56) == 0
                && (*((_BYTE *)v15 + 26) & 1) != 0 )
              {
                break;
              }
              v33 = *((_BYTE *)v15 + 19);
              if ( ((v33 & 0xFA) != 0 || v33 == 1) && (*((_DWORD *)v15 + 4) & 0x100000) == 0 )
                goto LABEL_66;
              goto LABEL_48;
            case 2:
              if ( (*(_DWORD *)(*((_QWORD *)v15 + 6) + 80LL) & 0x4000) != 0 )
                break;
              goto LABEL_57;
            case 6:
              v34 = *((_DWORD *)v15 + 4);
              if ( v34 == 20 )
              {
                v35 = *((_BYTE *)v15 + 33) == 0;
                goto LABEL_76;
              }
              if ( v34 == 19 )
                goto LABEL_48;
              switch ( v34 )
              {
                case 10:
                case 11:
                case 40:
                case 65:
                  v30 = 0x2000;
                  v53 = 0x2000;
                  if ( (v28 & 0xC) == 0 )
                    goto LABEL_39;
                  v29 = 1;
                  break;
                case 13:
                  if ( **(_BYTE **)(a2 + 24) )
                    goto LABEL_83;
                  goto LABEL_39;
                case 39:
                  goto LABEL_48;
                case 64:
                  if ( (**(_DWORD **)(a2 + 24) & 1) != 0 )
                  {
                    v30 = 0x2000;
                    v53 = 0x2000;
                  }
                  goto LABEL_39;
                default:
                  goto LABEL_39;
              }
              goto LABEL_40;
            case 9:
LABEL_66:
              LOBYTE(v17) = 1;
              v51 = 1;
              goto LABEL_67;
            case 0xD:
              v36 = *((_DWORD *)v15 + 6);
              if ( v36 > 0x98268 )
              {
                if ( v36 == 623428 || v36 == 623592 )
                  goto LABEL_48;
                v35 = v36 == 639668;
LABEL_76:
                if ( v35 )
                  goto LABEL_48;
              }
              else
              {
                switch ( v36 )
                {
                  case 0x98268u:
                    goto LABEL_48;
                  case 0x900FCu:
                    if ( (sub_140542128(a2, v17, v18, 0x140000000uLL) & 0x4000) == 0 )
                    {
LABEL_60:
                      v17 = v54;
                      goto LABEL_39;
                    }
                    v30 = 0x2000;
                    v53 = 0x2000;
                    v17 = v54;
                    if ( (v28 & 0xC) != 0 )
                    {
                      v29 = 1;
                      goto LABEL_40;
                    }
                    break;
                  case 0x94264u:
                    v17 = (v28 & 8) == 0;
                    v51 = (v28 & 8) == 0;
                    v30 = 0x4000;
                    v53 = 0x4000;
                    goto LABEL_39;
                  case 0x980C8u:
                  case 0x98208u:
                    goto LABEL_48;
                }
              }
              break;
            case 0x11:
              if ( (v28 & 8) != 0 )
                break;
              goto LABEL_48;
            case 0x12:
LABEL_57:
              sub_1402A30D0(v14, (__int64)v15);
              if ( *(_BYTE *)v15 == 18 && (a3 & 0x20) != 0 )
              {
                v30 = 0x2000;
                v53 = 0x2000;
              }
              goto LABEL_60;
            case 0x15:
LABEL_83:
              v30 = 0x2000;
              v53 = 0x2000;
              break;
            default:
              break;
          }
LABEL_39:
          v29 = 0;
        }
LABEL_40:
        if ( (_BYTE)v17 )
        {
          if ( (*(_DWORD *)(v14 + 144) & 0x1F0FFDF) == 0x10
            || (unsigned __int8)sub_1402A6AB0(*((_QWORD *)v15 + 6), *(_QWORD *)(v14 + 8), 0LL) )
          {
            goto LABEL_43;
          }
          v32 = v60;
          v55 = sub_14024A5B4(v14, (__int64)v15, a2, a3, v48, v60, (__int64)P, v66, a8, v65, v64, &v49, v52);
        }
        else if ( v29
               && ((*(_DWORD *)(v14 + 144) & 0x1F0FFDF) == 0x10
                || !(unsigned __int8)sub_1402A6AB0(*((_QWORD *)v15 + 6), *(_QWORD *)(v14 + 8), 0LL)) )
        {
          v32 = v60;
          v55 = sub_140256F58(v14, (__int64)v15, a2, a3, v48, v60, (__int64)P, v66, a8, v65, v64, &v49, v52);
        }
        else
        {
LABEL_43:
          v32 = v60;
        }
        if ( !v55 && (*(_DWORD *)(v14 + 144) & v30) != 0 )
        {
          LODWORD(v48) = v62;
          v55 = sub_1402A4E10(
                  v14,
                  (__int64)v15,
                  a2,
                  a3,
                  v48,
                  v30,
                  0LL,
                  0LL,
                  v32,
                  (__int64)P,
                  v66,
                  a8,
                  v65,
                  v64,
                  &v49,
                  v52);
        }
      }
LABEL_113:
      if ( v49 && (a3 & 0x20000000) == 0 )
      {
        v37 = *(_QWORD *)(v14 + 152);
        *(_QWORD *)(v37 + 8) = 0LL;
        v38 = _InterlockedCompareExchange((volatile signed __int32 *)v37, 1, 0);
        if ( v38 )
          sub_140359548(v37, v38);
        sub_1402AFC00(v37);
      }
      if ( !v52[0] )
        return v55;
    }
    v21 = *(_QWORD *)(v14 + 152);
    CurrentThread = KeGetCurrentThread();
    v56 = CurrentThread;
    v61 = 0;
    v23 = CurrentThread;
    v70 = CurrentThread;
    v24 = 0LL;
    v68 = 0LL;
    _disable();
    v25 = *((unsigned __int8 *)v70 + 792);
    if ( !*((_BYTE *)v70 + 792) )
    {
      v25 = sub_14029F6A8(v21, (__int64)CurrentThread);
      CurrentThread = v56;
      if ( !v25 )
      {
LABEL_29:
        if ( !_interlockedbittestandreset((volatile signed __int32 *)v21, 0) )
        {
          sub_14029EF4C(v21, v24);
          CurrentThread = v56;
        }
        if ( v24 )
          *(_BYTE *)(v24 + 18) = 1;
        *(_QWORD *)(v21 + 8) = CurrentThread;
        v18 = v54;
        goto LABEL_34;
      }
      v23 = v70;
    }
    _BitScanForward((unsigned int *)&v26, v25);
    v61 = v26;
    *((_BYTE *)v23 + 792) = v25 & ~(unsigned __int8)(1 << v26);
    _enable();
    v17 = 96 * v26;
    v24 = (__int64)v23 + 96 * v26 + 1696;
    v68 = v24;
    if ( (unsigned __int64)(v21 - qword_140C50630) < 0x8000000000LL )
    {
      v27 = sub_140287F30(*((_QWORD *)v23 + 23));
      CurrentThread = v56;
    }
    else
    {
      v27 = -1;
    }
    *(_DWORD *)(v24 + 8) = v27;
    *(_QWORD *)v24 = v21 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_29;
  }
  return v55;
}
