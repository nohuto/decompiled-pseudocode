/*
 * XREFs of sub_140705578 @ 0x140705578
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_140A0EE3C @ 0x140A0EE3C (sub_140A0EE3C.c)
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     PsGetThreadTeb @ 0x14029A290 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCopyContext @ 0x140702F70 (RtlCopyContext.c)
 *     sub_140703290 @ 0x140703290 (sub_140703290.c)
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     sub_140704980 @ 0x140704980 (sub_140704980.c)
 *     sub_1407049DC @ 0x1407049DC (sub_1407049DC.c)
 *     sub_14070592C @ 0x14070592C (sub_14070592C.c)
 *     sub_1407059D8 @ 0x1407059D8 (sub_1407059D8.c)
 *     sub_140705DA4 @ 0x140705DA4 (sub_140705DA4.c)
 */

int __fastcall sub_140705578(struct _KTHREAD *Thread, ULONG *a2, int a3, char a4)
{
  ULONG_PTR v8; // r12
  __int64 v9; // rax
  int result; // eax
  bool v11; // zf
  ULONG v12; // edi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  void *v15; // rsp
  void *v16; // rsp
  ULONG *v17; // r15
  __int64 v18; // rcx
  struct _KPROCESS *ThreadProcess; // rbx
  __int64 ThreadTeb; // rax
  char v21; // bl
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  void *v24; // rsp
  void *v25; // rsp
  bool v26; // dl
  __int64 v27; // rcx
  int v28; // ebx
  PCONTEXT_EX v29; // r8
  int v30; // ecx
  int v31; // [rsp+20h] [rbp-30h]
  int v32; // [rsp+20h] [rbp-30h]
  int v33[2]; // [rsp+20h] [rbp-30h]
  int v34; // [rsp+28h] [rbp-28h]
  int v35; // [rsp+28h] [rbp-28h]
  __int16 v36; // [rsp+50h] [rbp+0h] BYREF
  char v37; // [rsp+52h] [rbp+2h]
  ULONG v38; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength; // [rsp+58h] [rbp+8h] BYREF
  _DWORD v40[3]; // [rsp+5Ch] [rbp+Ch] BYREF
  PCONTEXT_EX v41; // [rsp+68h] [rbp+18h] BYREF
  PETHREAD Threada; // [rsp+70h] [rbp+20h]
  _DWORD v43[180]; // [rsp+80h] [rbp+30h] BYREF

  v37 = a4;
  v41 = 0LL;
  memset(v43, 0, 0x2CCuLL);
  ContextLength = 0;
  v36 = 0;
  memset(v40, 0, sizeof(v40));
  if ( a3 != 716 )
    return -1073741820;
  Threada = KeGetCurrentThread();
  v8 = *((_QWORD *)Thread + 68);
  if ( !*(_QWORD *)(v8 + 1408) || *(_WORD *)(v8 + 2412) != 332 )
    return -1073741811;
  if ( a4 )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a2;
    v38 = *(_DWORD *)v9;
  }
  else
  {
    v38 = *a2;
  }
  result = sub_140704980((int *)&v38, a4);
  if ( result >= 0 )
  {
    v11 = a4 == 0;
    v12 = v38;
    if ( v11 )
    {
      v17 = a2;
      *(_QWORD *)&v40[1] = a2 + 179;
      goto LABEL_15;
    }
    result = RtlGetExtendedContextLength(v38, &ContextLength);
    if ( result >= 0 )
    {
      v13 = ContextLength + 15LL;
      if ( v13 <= ContextLength )
        v13 = 0xFFFFFFFFFFFFFF0LL;
      v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
      v15 = alloca(v14);
      v16 = alloca(v14);
      v17 = (ULONG *)&v36;
      result = RtlInitializeExtendedContext((PCONTEXT)&v36, v12, (PCONTEXT_EX *)&v40[1]);
      if ( result >= 0 )
      {
        result = sub_140703290(v18, 1, *(__int64 *)&v40[1], v12, (__int64)a2, 0LL);
        if ( result >= 0 )
        {
LABEL_15:
          ThreadProcess = PsGetThreadProcess(Thread);
          if ( ThreadProcess != PsGetThreadProcess(Threada)
            || (*(_DWORD *)(v8 + 632) & 0x20) == 0
            || (*v17 & 0x10001) != 0x10001
            || (ThreadTeb = PsGetThreadTeb((__int64)Thread), (unsigned int)sub_140705DA4(v17[49], ThreadTeb)) )
          {
            result = sub_1407049DC(v8, (__int64)Thread, 1, (__int64)v43, v31, v34, v40, (bool *)&v36);
            if ( result >= 0 )
            {
              v21 = v36;
              if ( (_BYTE)v36 && (v12 & 0x10040) == 0x10040 )
              {
                return -1073741637;
              }
              else
              {
                result = RtlGetExtendedContextLength(0x10001Fu, &ContextLength);
                if ( result >= 0 )
                {
                  v22 = ContextLength + 15LL;
                  if ( v22 <= ContextLength )
                    v22 = 0xFFFFFFFFFFFFFF0LL;
                  v23 = v22 & 0xFFFFFFFFFFFFFFF0uLL;
                  v24 = alloca(v23);
                  v25 = alloca(v23);
                  result = RtlInitializeExtendedContext((PCONTEXT)&v36, 0x10001Fu, &v41);
                  if ( result >= 0 )
                  {
                    result = sub_1407045D0((__int64)Thread, (__int64)&v36, 0, 1, 1);
                    if ( result >= 0 )
                    {
                      result = v21
                             ? RtlCopyContext((PCONTEXT)v43, *v17, (PCONTEXT)v17)
                             : sub_1407059D8(v43, &v36, v17, (char *)&v36 + 1);
                      if ( result >= 0 )
                      {
                        if ( LOWORD(v43[2]) != 35 )
                        {
                          v26 = 0;
                          if ( (v12 & 0x10040) != 0x10040 )
                            v26 = (v12 & 0x10002) != 65538 && (v12 & 0x10020) != 65568;
                          if ( !v26 )
                            v40[0] |= 1u;
                        }
                        result = sub_1407049DC(v8, (__int64)Thread, 0, (__int64)v43, v32, v35, v40, 0LL);
                        v28 = result;
                        if ( result >= 0 )
                        {
                          if ( HIBYTE(v36) )
                          {
                            if ( (v12 & 0x10040) == 0x10040 )
                            {
                              v43[0] |= 0x100040u;
                              v29 = v41;
                              v30 = v40[1];
                              v41->XState = *(CONTEXT_CHUNK *)(*(_QWORD *)&v40[1] + 16LL);
                              v29->XState.Offset += v30 - (_DWORD)v29;
                              v29->All.Length = v29->XState.Offset + v29->XState.Length - v29->All.Offset;
                            }
                            v28 = sub_1407043D0(Thread, (__int64)&v36, 0, 1, 1);
                          }
                          if ( v28 >= 0 )
                          {
                            if ( v37 )
                            {
                              LOBYTE(v27) = *((_BYTE *)KeGetCurrentThread() + 562);
                              sub_14070592C(v27, Thread, v17, v38, *(_QWORD *)v33);
                            }
                          }
                          return v28;
                        }
                      }
                    }
                  }
                }
              }
            }
            return result;
          }
          return -1073741811;
        }
      }
    }
  }
  return result;
}
