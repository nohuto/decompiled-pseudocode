/*
 * XREFs of sub_14071E230 @ 0x14071E230
 * Callers:
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 * Callees:
 *     sub_14025032C @ 0x14025032C (sub_14025032C.c)
 *     sub_140251008 @ 0x140251008 (sub_140251008.c)
 *     PsDereferenceSiloContext @ 0x140251C40 (PsDereferenceSiloContext.c)
 *     sub_1402AC270 @ 0x1402AC270 (sub_1402AC270.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F3424 @ 0x1402F3424 (sub_1402F3424.c)
 *     sub_1402F344C @ 0x1402F344C (sub_1402F344C.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_140733340 @ 0x140733340 (sub_140733340.c)
 *     sub_1407ED9FC @ 0x1407ED9FC (sub_1407ED9FC.c)
 *     sub_1409851A4 @ 0x1409851A4 (sub_1409851A4.c)
 */

__int64 __fastcall sub_14071E230(ULONG_PTR BugCheckParameter1, char a2, _QWORD *a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v5; // rdi
  ULONG_PTR v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rax
  signed __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rax
  __int128 v16; // rt0
  unsigned __int8 v17; // tt
  bool v18; // zf
  void *v19; // rbx
  int v20; // r15d
  int v21; // edx
  __int64 v22; // rsi
  int v23; // edx
  unsigned __int64 v24; // rcx
  int v26; // eax
  unsigned int v27; // edi
  int v28; // ecx
  signed __int32 v29[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v30; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+80h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v7 = BugCheckParameter1;
  v30 = 0LL;
  if ( (BugCheckParameter1 & 0x80000000) != 0LL )
  {
    if ( !a2 && BugCheckParameter1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v9 = qword_140C24F88;
      v7 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
      v31 = qword_140C24F88;
      goto LABEL_3;
    }
  }
  else
  {
    v8 = *((_QWORD *)CurrentThread + 23);
    v9 = *(_QWORD *)(v8 + 1392);
    v31 = v9;
    if ( (*(_DWORD *)(v8 + 1124) & 0x4000000) != 0 )
    {
LABEL_3:
      --*((_WORD *)CurrentThread + 242);
      if ( (v7 & 0x3FC) != 0 && (v10 = (__int64 *)sub_140733340(v9, v7), (v11 = v10) != 0LL) )
      {
        _m_prefetchw(v10);
        v12 = *v10;
        v13 = v11[1];
        *((_QWORD *)&v30 + 1) = v13;
        *(_QWORD *)&v30 = v12;
        v14 = v12;
        while ( (v14 & 0x1FFFE) != 0 )
        {
          if ( (v14 & 1) != 0 )
          {
            *(_QWORD *)&v16 = v14;
            *((_QWORD *)&v16 + 1) = v13;
            v17 = _InterlockedCompareExchange128(v11, v13, v14 - 2, (signed __int64 *)&v16);
            v15 = v16;
            v14 = v16;
            v30 = v16;
            v13 = *((_QWORD *)&v16 + 1);
            if ( v17 )
            {
              if ( (unsigned __int16)((unsigned __int64)v15 >> 1) != 16 )
              {
                v5 = (v15 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                goto LABEL_10;
              }
              *(_QWORD *)&v30 = ((unsigned int)v14 ^ (2 * (unsigned int)((unsigned __int64)v15 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v14;
              v5 = ((__int64)v30 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              sub_1402F3424((volatile signed __int64 *)v5, 32752);
              v28 = sub_140251008(v11, (signed __int64 *)&v30, 32752);
              if ( v28 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)v5, -v28);
LABEL_29:
              LODWORD(v13) = DWORD2(v30);
              v14 = v30;
              goto LABEL_10;
            }
            v9 = v31;
          }
          else
          {
            sub_1407ED9FC(v9, v11, v14);
            _m_prefetchw(v11);
            v13 = v11[1];
            *(_QWORD *)&v30 = *v11;
            v14 = v30;
            *((_QWORD *)&v30 + 1) = v13;
          }
        }
        if ( sub_1402F344C(v9, v11) )
        {
          v5 = (*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
          v30 = *(_OWORD *)v11;
          v26 = sub_1402AC270((unsigned __int64 *)v11);
          sub_1402F3424((volatile signed __int64 *)v5, v26 + 1);
          _InterlockedExchangeAdd64(v11, 1uLL);
          _InterlockedOr(v29, 0);
          if ( *(_QWORD *)(v9 + 48) )
          {
            ExfUnblockPushLock((volatile __int64 *)(v9 + 48), 0LL);
            LODWORD(v13) = DWORD2(v30);
            v14 = v30;
            goto LABEL_10;
          }
          goto LABEL_29;
        }
      }
      else
      {
        LODWORD(v13) = DWORD2(v30);
        v14 = v30;
      }
      if ( v7 )
      {
        sub_14025032C(v9, v7, *((_BYTE *)KeGetCurrentThread() + 562));
        LODWORD(v13) = DWORD2(v30);
        v14 = v30;
      }
      v11 = 0LL;
LABEL_10:
      v18 = (*((_WORD *)CurrentThread + 242))++ == 0xFFFF;
      if ( v18
        && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152)
        && !*((_WORD *)CurrentThread + 243) )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( !v11 )
      {
        v27 = -1073741816;
LABEL_35:
        *a3 = 0LL;
        return v27;
      }
      if ( dword_140D05010 )
        sub_1405C5EC8(v5, 1, 1u, 0x746C6644u);
      v19 = (void *)(v5 + 48);
      if ( (POBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v5 + 24) ^ (unsigned __int64)BYTE1(v5)] == IoFileObjectType )
      {
        v20 = v13 & 0x1FFFFFF;
        v21 = ~(unsigned __int8)(*(_DWORD *)(v5 + 128) >> 5) & 4;
        a4[1] = v20;
        v22 = (v14 >> 17) & 7;
        v23 = v21 | 2;
        *a4 = v22;
        if ( (v20 & v23) != 0 )
        {
          if ( !a2 )
            goto LABEL_22;
          if ( (*(_BYTE *)(v5 + 26) & 0x40) == 0 )
            goto LABEL_22;
          v24 = v5 - byte_140C25440[*(_BYTE *)(v5 + 26) & 0x7F];
          if ( !*(_BYTE *)(*(_QWORD *)v24 + 24LL) )
            goto LABEL_22;
          if ( *(_QWORD *)(*(_QWORD *)v24 + 16LL) != 1LL )
          {
            LODWORD(v22) = *a4;
LABEL_22:
            if ( (v22 & 4) == 0 || !a2 || (unsigned __int8)sub_1409851A4(v31, v7, (_DWORD)v11, v5, v23) )
            {
              *a3 = v19;
              return 0LL;
            }
            v27 = -1073741816;
            goto LABEL_52;
          }
          v27 = -1073700858;
        }
        else
        {
          v27 = -1073741790;
        }
      }
      else
      {
        v27 = -1073741788;
      }
LABEL_52:
      PsDereferenceSiloContext(v19);
      goto LABEL_35;
    }
  }
  return 3221225480LL;
}
