/*
 * XREFs of sub_140704EF8 @ 0x140704EF8
 * Callers:
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     sub_140A0EB90 @ 0x140A0EB90 (sub_140A0EB90.c)
 *     sub_140A0EE3C @ 0x140A0EE3C (sub_140A0EE3C.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCopyContext @ 0x140702F70 (RtlCopyContext.c)
 *     sub_140703290 @ 0x140703290 (sub_140703290.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     sub_140704980 @ 0x140704980 (sub_140704980.c)
 *     sub_1407049DC @ 0x1407049DC (sub_1407049DC.c)
 *     sub_140704E2C @ 0x140704E2C (sub_140704E2C.c)
 *     sub_1407051BC @ 0x1407051BC (sub_1407051BC.c)
 */

int __fastcall sub_140704EF8(__int64 a1, ULONG *a2, int a3, char a4)
{
  ULONG_PTR v8; // rdi
  __int64 v9; // rax
  int result; // eax
  unsigned int v11; // ebx
  unsigned __int64 v12; // rax
  void *v13; // rsp
  _CONTEXT *v14; // r15
  __int64 v15; // rcx
  PCONTEXT_EX v16; // r13
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  void *v19; // rsp
  void *v20; // rsp
  PCONTEXT_EX v21; // r10
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-30h]
  int v24; // [rsp+28h] [rbp-28h]
  bool v25[4]; // [rsp+50h] [rbp+0h] BYREF
  ULONG v26; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength[2]; // [rsp+58h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+60h] [rbp+10h] BYREF
  PCONTEXT_EX v29; // [rsp+68h] [rbp+18h] BYREF
  __int64 v30; // [rsp+70h] [rbp+20h]
  int v31[4]; // [rsp+78h] [rbp+28h] BYREF
  __int128 v32; // [rsp+88h] [rbp+38h]
  _BYTE v33[720]; // [rsp+A0h] [rbp+50h] BYREF

  v30 = a1;
  v29 = 0LL;
  memset(v33, 0, 0x2CCuLL);
  ContextLength[0] = 0;
  ContextEx = 0LL;
  v25[0] = 0;
  *(_OWORD *)v31 = 0LL;
  v32 = 0LL;
  if ( a3 != 716 )
    return -1073741820;
  v8 = *(_QWORD *)(a1 + 544);
  if ( !*(_QWORD *)(v8 + 1408) || *(_WORD *)(v8 + 2412) != 332 )
    return -1073741811;
  if ( a4 )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a2;
    v26 = *(_DWORD *)v9;
  }
  else
  {
    v26 = *a2;
  }
  result = sub_140704980((int *)&v26, a4);
  if ( result >= 0 )
  {
    v11 = v26;
    if ( !a4 )
    {
      v14 = (_CONTEXT *)a2;
      v16 = (PCONTEXT_EX)(a2 + 179);
LABEL_15:
      result = sub_1407049DC(v8, v30, 1, (__int64)v33, v23, v24, 0LL, v25);
      if ( result >= 0 )
      {
        if ( v25[0] && (v11 & 0x10040) == 0x10040 )
        {
          return -1073741637;
        }
        else
        {
          result = RtlGetExtendedContextLength(0x4010001Fu, ContextLength);
          if ( result >= 0 )
          {
            v17 = ContextLength[0] + 15LL;
            if ( v17 <= ContextLength[0] )
              v17 = 0xFFFFFFFFFFFFFF0LL;
            v18 = v17 & 0xFFFFFFFFFFFFFFF0uLL;
            v19 = alloca(v18);
            v20 = alloca(v18);
            result = RtlInitializeExtendedContext((PCONTEXT)v25, 0x4010001Fu, &v29);
            if ( result >= 0 )
            {
              if ( (v11 & 0x10040) == 0x10040 )
              {
                v31[2] |= 0x100040u;
                v21 = v29;
                v29->XState = v16->XState;
                v21->XState.Offset += (_DWORD)v16 - (_DWORD)v21;
                v21->All.Length = v21->XState.Offset + v21->XState.Length - v21->All.Offset;
              }
              result = sub_1407045D0(v30, (__int64)v25, 0, 1, 1);
              if ( result >= 0 )
              {
                if ( v25[0] )
                  result = RtlCopyContext(v14, v14->P1Home, (PCONTEXT)v33);
                else
                  result = sub_1407051BC(v33, v25, v14);
                if ( result >= 0 )
                {
                  if ( a4 )
                  {
                    result = sub_140704E2C(v22, (__int64)(a2 + 179), (__int64)v31, v11, (__int64)v16);
                    ContextLength[1] = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v26, ContextLength);
    if ( result >= 0 )
    {
      v12 = ContextLength[0] + 15LL;
      if ( v12 <= ContextLength[0] )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
      v14 = (_CONTEXT *)v25;
      memset(v25, 0, ContextLength[0]);
      result = RtlInitializeExtendedContext((PCONTEXT)v25, v11, &ContextEx);
      if ( result >= 0 )
      {
        v16 = ContextEx;
        result = sub_140703290(v15, 0, (__int64)ContextEx, v11, (__int64)a2, v31);
        if ( result >= 0 )
          goto LABEL_15;
      }
    }
  }
  return result;
}
