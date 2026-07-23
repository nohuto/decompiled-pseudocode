/*
 * XREFs of sub_140295210 @ 0x140295210
 * Callers:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x140294B90 (RtlVirtualUnwind.c)
 *     sub_140294D50 @ 0x140294D50 (sub_140294D50.c)
 *     sub_140294D90 @ 0x140294D90 (sub_140294D90.c)
 *     sub_1402956D0 @ 0x1402956D0 (sub_1402956D0.c)
 *     sub_140295D00 @ 0x140295D00 (sub_140295D00.c)
 *     RtlVirtualUnwind2 @ 0x140296070 (RtlVirtualUnwind2.c)
 *     sub_140297D10 @ 0x140297D10 (sub_140297D10.c)
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140389140 @ 0x140389140 (sub_140389140.c)
 *     sub_1403A6A44 @ 0x1403A6A44 (sub_1403A6A44.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_14042AAA0 @ 0x14042AAA0 (sub_14042AAA0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405E3748 @ 0x1405E3748 (sub_1405E3748.c)
 *     sub_1405E38F0 @ 0x1405E38F0 (sub_1405E38F0.c)
 */

char __fastcall sub_140295210(ULONG_PTR a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // r12
  int v4; // r15d
  ULONG_PTR v5; // rcx
  unsigned int v6; // ebx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  DWORD64 v11; // rdi
  _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  PRUNTIME_FUNCTION v13; // r14
  unsigned __int64 v14; // r13
  DWORD64 v15; // rbx
  int v16; // r12d
  ULONG_PTR v17; // rcx
  DWORD64 v18; // r9
  __int64 v19; // r14
  PUNWIND_HISTORY_TABLE v20; // rax
  char v21; // r15
  DWORD64 v22; // rdx
  ULONG_PTR v23; // rbx
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  DWORD64 v27; // rcx
  char v28; // al
  bool v29; // zf
  int v30; // edx
  DWORD64 v31; // rbx
  PRUNTIME_FUNCTION v32; // r11
  int v33; // r9d
  DWORD64 v34; // r14
  char v35; // al
  char result; // al
  __int64 v37; // rax
  int ContextRecord; // [rsp+70h] [rbp+0h] BYREF
  char v39; // [rsp+74h] [rbp+4h]
  int v40; // [rsp+78h] [rbp+8h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp+10h] BYREF
  ULONG_PTR v42; // [rsp+88h] [rbp+18h] BYREF
  ULONG_PTR v43; // [rsp+90h] [rbp+20h] BYREF
  PUNWIND_HISTORY_TABLE v44; // [rsp+98h] [rbp+28h] BYREF
  PEXCEPTION_ROUTINE v45; // [rsp+A0h] [rbp+30h] BYREF
  unsigned __int64 ImageBase; // [rsp+A8h] [rbp+38h] BYREF
  PVOID HandlerData; // [rsp+B0h] [rbp+40h] BYREF
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v48; // [rsp+B8h] [rbp+48h] BYREF
  DWORD64 v49; // [rsp+C0h] [rbp+50h]
  ULONG_PTR v50; // [rsp+C8h] [rbp+58h]
  ULONG_PTR v51; // [rsp+D0h] [rbp+60h]
  DWORD64 ControlPc[10]; // [rsp+E0h] [rbp+70h] BYREF
  _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+130h] [rbp+C0h] BYREF

  v51 = a2;
  v50 = a1;
  v3 = a1;
  LODWORD(v44) = 0;
  memset(ControlPc, 0, sizeof(ControlPc));
  v39 = 0;
  BugCheckParameter1 = 0LL;
  v45 = 0LL;
  HandlerData = 0LL;
  v42 = 0LL;
  ImageBase = 0LL;
  v43 = 0LL;
  ContextRecord = 0;
  memset(HistoryTable.Entry, 0, sizeof(HistoryTable.Entry));
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v39 = 1;
    sub_1405E3748(v3, a2);
  }
  v4 = *(_DWORD *)(v3 + 4) & 0x81;
  v40 = v4;
  sub_140294D90((__int64)&ContextRecord, (__int64)&v43, (__int64)&v42);
  v5 = *(_QWORD *)(a2 + 152);
  ContextRecord = ContextRecord == 10;
  if ( !(unsigned __int8)sub_140294D50(v5, (__int64)&v43, (__int64)&v42, a2, v3) )
  {
LABEL_48:
    v4 |= 8u;
LABEL_49:
    result = 0;
    *(_DWORD *)(v3 + 4) = v4;
    return result;
  }
  v6 = 1048587;
  if ( (_BYTE)byte_140E01841 )
    v6 = 1048715;
  sub_1402956D0(v6, &v44, 0LL);
  v7 = (unsigned int)v44 + 15LL;
  if ( v7 <= (unsigned int)v44 )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = alloca(v8);
  v10 = alloca(v8);
  sub_140297D10(&ContextRecord, v6, &v48, 0LL);
  sub_140295D00(&ContextRecord, a2);
  v11 = *(_QWORD *)(a2 + 248);
  p_HistoryTable = &HistoryTable;
  v44 = &HistoryTable;
  v49 = 0LL;
  HistoryTable.Count = 0;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  while ( 1 )
  {
    v13 = RtlLookupFunctionEntry(v11, &ImageBase, p_HistoryTable);
    v48 = v13;
    v14 = ImageBase;
    if ( (int)RtlVirtualUnwind2(
                1,
                ImageBase,
                v11,
                (_DWORD)v13,
                (__int64)&ContextRecord,
                0LL,
                (__int64)&HandlerData,
                (__int64)&BugCheckParameter1,
                0LL,
                0LL,
                0LL,
                (__int64)&v45,
                0) < 0 )
      goto LABEL_49;
    v15 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 < v43 || BugCheckParameter1 >= v42 )
    {
      if ( (_BYTE)ContextRecord == 1 )
      {
        LOBYTE(ContextRecord) = 2;
        sub_140294D50(BugCheckParameter1, (__int64)&v43, (__int64)&v42, v51, v3);
        v15 = BugCheckParameter1;
      }
      else if ( !(_BYTE)ContextRecord )
      {
        goto LABEL_48;
      }
    }
    if ( v45 )
      break;
LABEL_14:
    v11 = HistoryTable.Entry[2].ImageBase;
    if ( (ControlPc[5] & 7) == 0 && ControlPc[5] >= v43 )
    {
      p_HistoryTable = v44;
      if ( ControlPc[5] < v42 )
        continue;
    }
    if ( (_BYTE)ContextRecord != 1 )
      goto LABEL_49;
    LOBYTE(ContextRecord) = 0;
    if ( !(unsigned __int8)sub_140294D50(ControlPc[5], (__int64)&v43, (__int64)&v42, v51, v3) )
      goto LABEL_49;
    p_HistoryTable = v44;
  }
  v16 = 0;
  while ( 1 )
  {
    v17 = v50;
    v18 = (DWORD64)v45;
    ControlPc[2] = (DWORD64)v13;
    v19 = 0LL;
    ControlPc[7] = (DWORD64)HandlerData;
    v20 = v44;
    *(_DWORD *)(v50 + 4) = v4;
    v21 = 0;
    ControlPc[0] = v11;
    ControlPc[1] = v14;
    ControlPc[3] = v15;
    ControlPc[5] = (DWORD64)&ContextRecord;
    ControlPc[6] = v18;
    ControlPc[8] = (DWORD64)v20;
    LODWORD(ControlPc[9]) = v16;
    if ( v39 )
    {
      v37 = sub_1405E38F0(v17, &ContextRecord, v11);
      v15 = BugCheckParameter1;
      v19 = v37;
    }
    v22 = v15;
    v23 = v50;
    v24 = sub_14042AAA0(v50, v22, v51, ControlPc);
    if ( v19 )
      *(_DWORD *)(v19 + 1396) = v24;
    v25 = *(_DWORD *)(v23 + 4) & 1;
    v15 = BugCheckParameter1;
    v26 = v25 | v40;
    v27 = v49;
    v40 = v26;
    if ( v49 == BugCheckParameter1 )
    {
      v26 &= ~0x10u;
      v27 = 0LL;
      v40 = v26;
      v49 = 0LL;
    }
    if ( v24 == 1 )
      goto LABEL_26;
    if ( !v24 )
      break;
    v30 = v24 - 2;
    if ( !v30 )
    {
      v34 = ControlPc[3];
      v35 = 1;
      v40 = v26 | 0x10;
      if ( (_BYTE)ContextRecord )
      {
        v35 = sub_140389140(&v43, ControlPc[3], &v42);
        v27 = v49;
      }
      if ( v34 > v27 || !v35 )
        v49 = v34;
LABEL_26:
      v28 = ContextRecord;
      v13 = v48;
      goto LABEL_27;
    }
    if ( v30 != 1 )
      RtlRaiseStatus(-1073741786);
    v31 = ControlPc[1];
    v11 = ControlPc[0];
    ImageBase = ControlPc[1];
    sub_140295D00(&ContextRecord, ControlPc[5]);
    v45 = RtlVirtualUnwind(1u, v31, v11, v32, (PCONTEXT)&ContextRecord, &HandlerData, &BugCheckParameter1, 0LL);
    BugCheckParameter1 = ControlPc[3];
    v13 = RtlLookupFunctionEntry(v11, &ImageBase, v44);
    v48 = v13;
    if ( v13 != (PRUNTIME_FUNCTION)ControlPc[2]
      || (v14 = ImageBase, (int)sub_1403A6A44((_DWORD)v13, ImageBase, 2, v33, (__int64)&v45, (__int64)&HandlerData) < 0)
      || v45 != (PEXCEPTION_ROUTINE)ControlPc[6]
      || HandlerData != (PVOID)ControlPc[7] )
    {
      __fastfail(0x27u);
    }
    v15 = BugCheckParameter1;
    v16 = ControlPc[9];
    v44 = (PUNWIND_HISTORY_TABLE)ControlPc[8];
    v21 = 1;
    v29 = (unsigned __int8)sub_140389140(&v43, BugCheckParameter1, &v42) == 0;
    v28 = ContextRecord;
    if ( v29 && (_BYTE)ContextRecord == 1 )
    {
      sub_140294D50(v15, (__int64)&v43, (__int64)&v42, v51, v50);
      v15 = BugCheckParameter1;
LABEL_40:
      LOBYTE(ContextRecord) = 0;
      goto LABEL_28;
    }
LABEL_27:
    if ( v28 == 2 )
      goto LABEL_40;
LABEL_28:
    v29 = v21 == 0;
    v4 = v40;
    if ( v29 )
    {
      v3 = v50;
      goto LABEL_14;
    }
  }
  if ( (v26 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}
