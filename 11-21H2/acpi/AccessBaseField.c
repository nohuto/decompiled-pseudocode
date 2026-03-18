/*
 * XREFs of AccessBaseField @ 0x1C001AE70
 * Callers:
 *     AccessFieldData @ 0x1C001AC40 (AccessFieldData.c)
 * Callees:
 *     PushFrame @ 0x1C0018660 (PushFrame.c)
 *     ReadSystemMem @ 0x1C001B2D0 (ReadSystemMem.c)
 *     WriteSystemIO @ 0x1C001B580 (WriteSystemIO.c)
 *     ReadSystemIO @ 0x1C001DEEC (ReadSystemIO.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall AccessBaseField(struct _SLIST_ENTRY *a1, _SLIST_ENTRY *a2, unsigned int *a3, __int64 *a4, char a5)
{
  _SLIST_ENTRY *Next; // r15
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 *v8; // r10
  unsigned int v9; // r12d
  unsigned int v10; // r9d
  unsigned int v11; // r14d
  _SLIST_ENTRY *v12; // rsi
  unsigned int v13; // ecx
  __int64 v14; // r13
  __int64 v15; // r11
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // r9
  int v21; // edi
  __int64 Next_low; // rax
  __int64 v23; // rax
  char v25; // al
  unsigned __int64 v26; // rcx
  _SLIST_ENTRY *v27; // r15
  KIRQL v28; // al
  __int64 i; // r13
  __int64 (__fastcall *v30)(_QWORD, _SLIST_ENTRY **, _SLIST_ENTRY *, _QWORD, _SLIST_ENTRY *, _QWORD, __int64 (__fastcall *)(__int64), _SLIST_ENTRY **); // r10
  unsigned int v31; // eax
  _SLIST_ENTRY *v32; // rcx
  _SLIST_ENTRY **p_Next; // r8
  __int64 SystemMem; // rax
  _SLIST_ENTRY *v35; // r8
  signed __int32 v36; // eax
  unsigned int SystemIO; // eax
  _SLIST_ENTRY *v38; // r8
  __int64 (__fastcall *v39)(_QWORD, _SLIST_ENTRY *, _SLIST_ENTRY **, _QWORD, __int64 *); // rax
  int v40; // eax
  int (__fastcall *v41)(_QWORD, _SLIST_ENTRY *, _SLIST_ENTRY **, _QWORD, struct _SLIST_ENTRY **); // rax
  unsigned __int64 v42; // rax
  struct _SLIST_ENTRY **v43; // rcx
  signed __int32 v44[8]; // [rsp+0h] [rbp-E1h] BYREF
  bool v45; // [rsp+50h] [rbp-91h]
  _SLIST_ENTRY *Src; // [rsp+58h] [rbp-89h] BYREF
  _SLIST_ENTRY *v47; // [rsp+60h] [rbp-81h] BYREF
  __int64 v48; // [rsp+68h] [rbp-79h] BYREF
  struct _SLIST_ENTRY *v49; // [rsp+70h] [rbp-71h] BYREF
  __int64 v50; // [rsp+78h] [rbp-69h]
  _SLIST_ENTRY *v51; // [rsp+80h] [rbp-61h]
  __int64 v52; // [rsp+88h] [rbp-59h]
  _QWORD v53[10]; // [rsp+90h] [rbp-51h] BYREF

  Next = a2[6].Next;
  v6 = 0LL;
  v7 = *a3;
  v8 = a4;
  v49 = a1;
  v9 = 0;
  Src = (_SLIST_ENTRY *)a4;
  v10 = a3[3];
  v11 = 1;
  v12 = (_SLIST_ENTRY *)((char *)Next->Next + v7);
  v51 = a2;
  if ( (v10 & 0xF) - 1 <= 3 )
    v11 = 1 << ((v10 & 0xF) - 1);
  v13 = a3[2];
  v14 = 0LL;
  v15 = 0LL;
  if ( v13 < 0x20 )
    v14 = 1LL << v13;
  v16 = (v14 - 1) << a3[1];
  v50 = v16;
  v17 = ~v16;
  if ( 8 * v11 < 0x20 )
    v15 = 1LL << (8 * (unsigned __int8)v11);
  v52 = ~v16;
  v18 = v15 - 1;
  v47 = (_SLIST_ENTRY *)v18;
  v45 = (v10 & 0x60) == 0 && (v17 & v18) != 0;
  v19 = v16 & *v8;
  *v8 = v19;
  v20 = v19;
  v48 = v19;
  if ( !a5 )
  {
    v25 = a3[3] & 0x60;
    v48 = v19;
    if ( v25 == 32 )
    {
      v20 = v17 | v19;
      v48 = v17 | v19;
      *v8 = v17 | v19;
    }
  }
  v21 = *((unsigned __int8 *)&Next->Next + 12);
  if ( *((_BYTE *)&Next->Next + 12) )
  {
    if ( v21 == 1 )
    {
      if ( a5 )
      {
        Src->Next = (_SLIST_ENTRY *)(unsigned int)ReadSystemIO((unsigned int)v12, v11, (unsigned int)v16, v20);
      }
      else
      {
        if ( v45 )
        {
          SystemIO = ReadSystemIO((unsigned int)v12, v11, (unsigned int)~(_DWORD)v16, v20);
          v38 = Src;
          Src->Next = (_SLIST_ENTRY *)((__int64)Src->Next | SystemIO);
          v20 = (__int64)v38->Next;
        }
        WriteSystemIO((unsigned int)v12, v11, (unsigned int)v20);
      }
    }
    else
    {
      v28 = ExAcquireSpinLockShared(&RSAccessLock);
      for ( i = gpRSAccessHead; i; i = *(_QWORD *)i )
      {
        if ( *(_DWORD *)(i + 8) == v21 )
          break;
      }
      ExReleaseSpinLockShared(&RSAccessLock, v28);
      if ( i
        && (v30 = *(__int64 (__fastcall **)(_QWORD, _SLIST_ENTRY **, _SLIST_ENTRY *, _QWORD, _SLIST_ENTRY *, _QWORD, __int64 (__fastcall *)(__int64), _SLIST_ENTRY **))(i + 16)) != 0LL )
      {
        if ( a5 )
        {
          LODWORD(v50) = 0;
          if ( (gDebugger & 0x100) != 0 )
          {
            _m_prefetchw(&gDebugger);
            v36 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
            v30 = *(__int64 (__fastcall **)(_QWORD, _SLIST_ENTRY **, _SLIST_ENTRY *, _QWORD, _SLIST_ENTRY *, _QWORD, __int64 (__fastcall *)(__int64), _SLIST_ENTRY **))(i + 16);
            LODWORD(v50) = v36;
          }
          v31 = v30(0LL, &v51[7].Next + 1, v12, v11, Src, *(_QWORD *)(i + 24), RestartCtxtCallback, &v49[20].Next + 1);
          v9 = v31;
          if ( (v50 & 0x10) != 0 )
            _InterlockedOr(&gDebugger, 0x10u);
          if ( v31 == 259 )
          {
            return 32772;
          }
          else if ( v31 )
          {
            LogError(3222536216LL);
            AcpiDiagTraceAmlError(v49, 3222536216LL);
            PrintDebugMessage(2, *((unsigned __int8 *)&Next->Next + 12), v9, 0, 0LL);
            return (unsigned int)-1072431080;
          }
        }
        else
        {
          v47 = 0LL;
          v9 = PushFrame(v49, 1094931031, 0x60u, (__int64)WriteCookAccess, &v47);
          if ( !v9 )
          {
            v32 = v47;
            p_Next = &Src->Next;
            v47[2].Next = v51;
            *((_QWORD *)&v32[2].Next + 1) = i;
            v32[3].Next = v12;
            *((_DWORD *)&v32[3].Next + 2) = v11;
            v32[4].Next = *p_Next;
            *((_QWORD *)&v32[4].Next + 1) = v50;
            *((_BYTE *)&v32[5].Next + 8) = v45;
          }
        }
      }
      else
      {
        v9 = -1072431088;
        LogError(3222536208LL);
        AcpiDiagTraceAmlError(v49, 3222536208LL);
        PrintDebugMessage(1, *((unsigned __int8 *)&Next->Next + 12), 0, 0, 0LL);
      }
    }
    return v9;
  }
  if ( a5 )
  {
    LODWORD(v48) = 0;
    v47 = 0LL;
    if ( v11 > 8 )
    {
      v23 = -1LL;
    }
    else
    {
      if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
        && (v39 = *(__int64 (__fastcall **)(_QWORD, _SLIST_ENTRY *, _SLIST_ENTRY **, _QWORD, __int64 *))(PmHalDispatchTable + 144)) != 0LL
        && (v40 = v39(0LL, v12, &v47, v11, &v48), v8 = (__int64 *)Src, v40 >= 0) )
      {
        Next_low = (__int64)v47;
      }
      else
      {
        if ( v11 != 1LL )
          v6 = (unsigned __int64)v12 % v11;
        if ( v6 )
        {
          memmove(&v47, v12, v11);
          Next_low = (__int64)v47;
          v8 = (__int64 *)Src;
        }
        else
        {
          switch ( v11 )
          {
            case 1u:
              Next_low = LOBYTE(v12->Next);
              break;
            case 4u:
              Next_low = LODWORD(v12->Next);
              break;
            case 2u:
              Next_low = LOWORD(v12->Next);
              break;
            case 8u:
              Next_low = (__int64)v12->Next;
              break;
            default:
              Next_low = -1LL;
              break;
          }
        }
      }
      v23 = v16 & Next_low;
    }
    *v8 = v23;
    return v9;
  }
  if ( v45 )
  {
    SystemMem = ReadSystemMem(v12, v11);
    v35 = Src;
    v18 = (__int64)v47;
    Src->Next = (_SLIST_ENTRY *)((__int64)Src->Next | SystemMem);
    v20 = (__int64)v35->Next;
    v48 = (__int64)v35->Next;
  }
  LODWORD(v49) = 0;
  v53[4] = 0xFFFFFFFFLL;
  v53[8] = -1LL;
  v26 = 0LL;
  Src = 0LL;
  v53[0] = 0LL;
  v53[1] = 255LL;
  v53[2] = 0xFFFFLL;
  v53[3] = 0LL;
  memset(&v53[5], 0, 24);
  if ( v11 <= 8 )
  {
    v27 = (_SLIST_ENTRY *)v53[v11];
    if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
      || (v41 = *(int (__fastcall **)(_QWORD, _SLIST_ENTRY *, _SLIST_ENTRY **, _QWORD, struct _SLIST_ENTRY **))(PmHalDispatchTable + 144)) == 0LL )
    {
LABEL_26:
      if ( v11 != 1LL )
        v6 = (unsigned __int64)v12 % v11;
      if ( v6 )
      {
        if ( (_SLIST_ENTRY *)v18 != v27 )
        {
          memmove(&Src, v12, v11);
          v26 = (unsigned __int64)Src;
          v18 = (__int64)v47;
          v20 = v48;
        }
        Src = (_SLIST_ENTRY *)(v20 | v26 & ~v18);
        memmove(v12, &Src, v11);
      }
      else
      {
        switch ( v11 )
        {
          case 1u:
            if ( (_SLIST_ENTRY *)v18 != v27 )
              v26 = LOBYTE(v12->Next);
            Src = (_SLIST_ENTRY *)(v20 | v26 & ~v18);
            LOBYTE(v12->Next) = (_BYTE)Src;
LABEL_33:
            _InterlockedOr(v44, 0);
            return v9;
          case 4u:
            if ( (_SLIST_ENTRY *)v18 != v27 )
              v26 = LODWORD(v12->Next);
            Src = (_SLIST_ENTRY *)(v20 | v26 & ~v18);
            LODWORD(v12->Next) = (_DWORD)Src;
            _InterlockedOr(v44, 0);
            break;
          case 2u:
            if ( (_SLIST_ENTRY *)v18 != v27 )
              v26 = LOWORD(v12->Next);
            Src = (_SLIST_ENTRY *)(v20 | v26 & ~v18);
            LOWORD(v12->Next) = (_WORD)Src;
            goto LABEL_33;
          case 8u:
            if ( (_SLIST_ENTRY *)v18 != v27 )
              v26 = (unsigned __int64)v12->Next;
            Src = (_SLIST_ENTRY *)(v20 | v26 & ~v18);
            v12->Next = Src;
            KeFlushWriteBuffer();
            break;
        }
      }
      return v9;
    }
    if ( (_SLIST_ENTRY *)v18 != v27 )
    {
      if ( v41(0LL, v12, &Src, v11, &v49) < 0 )
      {
LABEL_78:
        v26 = (unsigned __int64)Src;
        v18 = (__int64)v47;
        v20 = v48;
        goto LABEL_26;
      }
      v26 = (unsigned __int64)Src;
      v18 = (__int64)v47;
      v20 = v48;
    }
    v42 = v26 & ~v18;
    v43 = &v49;
    Src = (_SLIST_ENTRY *)(v20 | v42);
    LOBYTE(v43) = 1;
    if ( (*(int (__fastcall **)(struct _SLIST_ENTRY **, _SLIST_ENTRY *, _SLIST_ENTRY **, _QWORD, struct _SLIST_ENTRY **))(PmHalDispatchTable + 144))(
           v43,
           v12,
           &Src,
           v11,
           &v49) >= 0 )
      return v9;
    goto LABEL_78;
  }
  return v9;
}
