/*
 * XREFs of RtlUnwindEx @ 0x1402957A0
 * Callers:
 *     RtlUnwind @ 0x140387A90 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1403DF790 (__C_specific_handler.c)
 *     sub_140433E80 @ 0x140433E80 (sub_140433E80.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x140294B90 (RtlVirtualUnwind.c)
 *     sub_140294C30 @ 0x140294C30 (sub_140294C30.c)
 *     sub_140294D50 @ 0x140294D50 (sub_140294D50.c)
 *     sub_140294D90 @ 0x140294D90 (sub_140294D90.c)
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     sub_1402956D0 @ 0x1402956D0 (sub_1402956D0.c)
 *     sub_140295D00 @ 0x140295D00 (sub_140295D00.c)
 *     sub_140296FC0 @ 0x140296FC0 (sub_140296FC0.c)
 *     sub_140297D10 @ 0x140297D10 (sub_140297D10.c)
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     sub_1402AB970 @ 0x1402AB970 (sub_1402AB970.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140389140 @ 0x140389140 (sub_140389140.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041E540 @ 0x14041E540 (sub_14041E540.c)
 *     sub_140429B00 @ 0x140429B00 (sub_140429B00.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_14042AB20 @ 0x14042AB20 (sub_14042AB20.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __cdecl RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  _CONTEXT *p_ContextLength; // r14
  _UNWIND_HISTORY_TABLE *v8; // r13
  char v10; // di
  unsigned int v11; // ebx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  _CONTEXT *v16; // r12
  _CONTEXT *v17; // rbx
  DWORD64 v18; // r15
  DWORD64 v19; // r13
  int v20; // r11d
  NTSTATUS v21; // eax
  unsigned __int64 v22; // rbx
  int v23; // r15d
  bool v24; // zf
  DWORD v25; // ebx
  DWORD64 v26; // rax
  _EXCEPTION_RECORD *v27; // rcx
  int v28; // ecx
  int v29; // ecx
  _CONTEXT *v30; // rax
  int v31; // et0
  char v32; // al
  _CONTEXT *v33; // rax
  _EXCEPTION_RECORD *v34; // r15
  DWORD64 v35; // rbx
  _CONTEXT *v36; // r15
  PRUNTIME_FUNCTION v37; // r11
  DWORD64 Rip; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  void *v41; // rsp
  void *v42; // rsp
  ULONG ContextLength; // [rsp+60h] [rbp+0h] BYREF
  int v44; // [rsp+64h] [rbp+4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp+8h] BYREF
  ULONG_PTR v46; // [rsp+70h] [rbp+10h] BYREF
  ULONG_PTR v47; // [rsp+78h] [rbp+18h] BYREF
  _CONTEXT *v48; // [rsp+80h] [rbp+20h]
  PEXCEPTION_ROUTINE v49; // [rsp+88h] [rbp+28h] BYREF
  PVOID HandlerData; // [rsp+90h] [rbp+30h] BYREF
  _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+98h] [rbp+38h]
  PCONTEXT_EX ContextEx; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 ImageBase; // [rsp+A8h] [rbp+48h] BYREF
  DWORD64 v54; // [rsp+B0h] [rbp+50h]
  PUNWIND_HISTORY_TABLE v55; // [rsp+B8h] [rbp+58h]
  PVOID v56; // [rsp+C0h] [rbp+60h]
  PVOID v57; // [rsp+C8h] [rbp+68h]
  DWORD64 ControlPc[10]; // [rsp+D0h] [rbp+70h] BYREF
  PCONTEXT v59; // [rsp+120h] [rbp+C0h]
  __int128 v60; // [rsp+128h] [rbp+C8h] BYREF
  __int64 v61; // [rsp+138h] [rbp+D8h]
  _QWORD v62[20]; // [rsp+140h] [rbp+E0h] BYREF

  p_ContextLength = ContextRecord;
  v8 = HistoryTable;
  v57 = TargetIp;
  ExceptionRecorda = ExceptionRecord;
  v56 = ReturnValue;
  v48 = ContextRecord;
  v55 = HistoryTable;
  memset(ControlPc, 0, sizeof(ControlPc));
  memset(v62, 0, 0x98uLL);
  v49 = 0LL;
  HandlerData = 0LL;
  v47 = 0LL;
  ImageBase = 0LL;
  ContextLength = 0;
  v46 = 0LL;
  v44 = 0;
  sub_140294D90((__int64)&v44, (__int64)&v46, (__int64)&v47);
  v10 = v44 == 10;
  if ( !(unsigned __int8)sub_1402AB970(&v46, &v47) )
LABEL_68:
    RtlRaiseStatus(-1073741784);
  v11 = 1048587;
  if ( (_BYTE)byte_140E01841 )
  {
    v11 = 1048715;
    if ( (ContextRecord->ContextFlags & 0x100080) != 0x100080 )
    {
      RtlGetExtendedContextLength(0x10008Bu, &ContextLength);
      v39 = ContextLength + 15LL;
      if ( v39 <= ContextLength )
        v39 = 0xFFFFFFFFFFFFFF0LL;
      v40 = v39 & 0xFFFFFFFFFFFFFFF0uLL;
      v41 = alloca(v40);
      v42 = alloca(v40);
      p_ContextLength = (_CONTEXT *)&ContextLength;
      v48 = (_CONTEXT *)&ContextLength;
      RtlInitializeExtendedContext((PCONTEXT)&ContextLength, 0x10008Bu, &ContextEx);
    }
  }
  sub_1402956D0(v11, &ContextLength, 0LL);
  v12 = ContextLength + 15LL;
  if ( v12 <= ContextLength )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = alloca(v13);
  v15 = alloca(v13);
  v16 = (_CONTEXT *)&ContextLength;
  v59 = (PCONTEXT)&ContextLength;
  sub_140297D10(&ContextLength, v11, &ContextEx, 0LL);
  v17 = v48;
  sub_140429B00(v48);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    LODWORD(v62[0]) = -1073741785;
    v62[1] = 0LL;
    Rip = v17->Rip;
    LODWORD(v62[3]) = 0;
    ExceptionRecorda = (_EXCEPTION_RECORD *)v62;
    v62[2] = Rip;
  }
  ContextLength = 2;
  if ( !TargetFrame )
    ContextLength = 6;
  BugCheckParameter1 = 0LL;
  while ( 1 )
  {
    v54 = p_ContextLength->Rip;
    v18 = v54;
    ContextEx = (PCONTEXT_EX)RtlLookupFunctionEntry(v54, &ImageBase, v8);
    sub_140295D00(v16, p_ContextLength);
    v19 = ImageBase;
    v61 = 0LL;
    v60 = 0LL;
    v21 = sub_140296FC0(
            2,
            ImageBase,
            v18,
            v20,
            (__int64)v16,
            0LL,
            (__int64)&HandlerData,
            (__int64)&BugCheckParameter1,
            (__int64)&v49,
            (__int64)&v60);
    if ( v21 < 0 )
      RtlRaiseStatus(v21);
    v22 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 >= v47 || BugCheckParameter1 < v46 )
    {
      if ( v10 != 1 )
        goto LABEL_68;
      v10 = 2;
      if ( !(unsigned __int8)sub_140294D50(
                               BugCheckParameter1,
                               (__int64)&v46,
                               (__int64)&v47,
                               (ULONG_PTR)p_ContextLength,
                               0LL) )
        goto LABEL_68;
      v22 = BugCheckParameter1;
    }
    if ( TargetFrame && !v10 && (unsigned __int64)TargetFrame < v22 )
      goto LABEL_68;
    if ( v49 )
    {
      v23 = 0;
      ControlPc[4] = (DWORD64)v57;
      while ( 1 )
      {
        v24 = TargetFrame == (PVOID)v22;
        v25 = ContextLength;
        if ( v24 )
          v25 = ContextLength | 0x20;
        v26 = (DWORD64)v56;
        v27 = ExceptionRecorda;
        ExceptionRecorda->ExceptionFlags = v25;
        p_ContextLength->Rax = v26;
        ControlPc[0] = v54;
        ControlPc[2] = (DWORD64)ContextEx;
        ControlPc[6] = (DWORD64)v49;
        ControlPc[7] = (DWORD64)HandlerData;
        ControlPc[8] = (DWORD64)v55;
        ControlPc[1] = v19;
        ControlPc[3] = BugCheckParameter1;
        ControlPc[5] = (DWORD64)p_ContextLength;
        LODWORD(ControlPc[9]) = v23;
        if ( (p_ContextLength->ContextFlags & 0x100040) == 0x100040 )
        {
          v28 = sub_14042AB20(v27, BugCheckParameter1, p_ContextLength, ControlPc);
        }
        else
        {
          v28 = sub_14042AB20(v27, BugCheckParameter1, p_ContextLength, ControlPc);
          if ( (p_ContextLength->ContextFlags & 0x100040) == 0x100040 )
            p_ContextLength->ContextFlags &= ~0x40u;
        }
        ContextLength = v25 & 0xFFFFFF9F;
        v29 = v28 - 1;
        if ( v29 )
        {
          if ( v29 != 2 )
            RtlRaiseStatus(-1073741786);
          v35 = ControlPc[0];
          v19 = ControlPc[1];
          v54 = ControlPc[0];
          ImageBase = ControlPc[1];
          ContextEx = (PCONTEXT_EX)ControlPc[2];
          sub_140295D00(v48, ControlPc[5]);
          v36 = v59;
          p_ContextLength = v48;
          v16 = v59;
          sub_140295D00(v59, v48);
          v49 = RtlVirtualUnwind(2u, v19, v35, v37, v36, &HandlerData, &BugCheckParameter1, 0LL);
          if ( v49 != (PEXCEPTION_ROUTINE)ControlPc[6]
            || (v22 = BugCheckParameter1, BugCheckParameter1 != ControlPc[3])
            || HandlerData != (PVOID)ControlPc[7] )
          {
            __fastfail(0x27u);
          }
          v23 = ControlPc[9];
          ContextLength |= 0x40u;
          v55 = (PUNWIND_HISTORY_TABLE)ControlPc[8];
          if ( (unsigned __int8)sub_140389140(&v46, BugCheckParameter1, &v47) || v10 != 1 )
            goto LABEL_31;
          v10 = 2;
          sub_140294D50(v22, (__int64)&v46, (__int64)&v47, (ULONG_PTR)p_ContextLength, 0LL);
        }
        else
        {
          if ( (PVOID)BugCheckParameter1 != TargetFrame )
          {
            v30 = p_ContextLength;
            p_ContextLength = v16;
            v16 = v30;
          }
          v31 = _mm_getcsr();
          v44 = v31;
          p_ContextLength->MxCsr = v31;
          p_ContextLength->FltSave.MxCsr = v31;
        }
        v22 = BugCheckParameter1;
LABEL_31:
        if ( (ContextLength & 0x40) == 0 )
        {
          v18 = v54;
          goto LABEL_33;
        }
      }
    }
    if ( (PVOID)v22 != TargetFrame )
    {
      v33 = p_ContextLength;
      p_ContextLength = v16;
      v16 = v33;
    }
LABEL_33:
    v32 = 0;
    if ( v10 != 2 )
      v32 = v10;
    if ( (v22 & 7) != 0 || v22 < v46 || v22 >= v47 )
      break;
    if ( (PVOID)v22 == TargetFrame )
      goto LABEL_42;
    v8 = v55;
    v10 = v32;
  }
  if ( (PVOID)v22 == TargetFrame )
  {
LABEL_42:
    v34 = ExceptionRecorda;
    p_ContextLength->Rax = (DWORD64)v56;
    if ( v34->ExceptionCode != -2147483607 )
    {
      p_ContextLength->Rip = (DWORD64)v57;
      if ( v34->ExceptionCode != -2147483610 )
        v34->ExceptionCode = -1073741785;
    }
    sub_140294C30(p_ContextLength, v34);
  }
  else
  {
    if ( v18 == p_ContextLength->Rip )
      RtlRaiseStatus(-1073741569);
    sub_14041E540(ExceptionRecorda, p_ContextLength, 0LL);
  }
}
