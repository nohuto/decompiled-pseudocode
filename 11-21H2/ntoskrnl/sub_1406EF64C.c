/*
 * XREFs of sub_1406EF64C @ 0x1406EF64C
 * Callers:
 *     sub_1406EF58C @ 0x1406EF58C (sub_1406EF58C.c)
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406B8E18 @ 0x1406B8E18 (sub_1406B8E18.c)
 *     sub_1406F21DC @ 0x1406F21DC (sub_1406F21DC.c)
 *     sub_14078F0FC @ 0x14078F0FC (sub_14078F0FC.c)
 *     sub_14078FF9C @ 0x14078FF9C (sub_14078FF9C.c)
 *     sub_140790CA8 @ 0x140790CA8 (sub_140790CA8.c)
 *     sub_140790CF8 @ 0x140790CF8 (sub_140790CF8.c)
 *     sub_140794404 @ 0x140794404 (sub_140794404.c)
 *     sub_1407968D0 @ 0x1407968D0 (sub_1407968D0.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     sub_14080855C @ 0x14080855C (sub_14080855C.c)
 *     sub_1409EB814 @ 0x1409EB814 (sub_1409EB814.c)
 *     sub_1409EBA3C @ 0x1409EBA3C (sub_1409EBA3C.c)
 *     sub_1409F5224 @ 0x1409F5224 (sub_1409F5224.c)
 */

__int64 __fastcall sub_1406EF64C(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // esi
  __int64 v7; // r8
  ACCESS_MASK v8; // ebx
  __int64 v9; // rax
  _QWORD *v10; // rsi
  int v11; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v14; // r12
  int v15; // r14d
  _QWORD *v16; // rbx
  __int16 v17; // ax
  HANDLE v18; // rax
  bool v19; // zf
  __int64 v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int ProcessId; // eax
  int v25; // [rsp+20h] [rbp-79h]
  bool v26; // [rsp+24h] [rbp-75h]
  PVOID Object; // [rsp+38h] [rbp-61h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-59h]
  __int64 v29; // [rsp+48h] [rbp-51h]
  HANDLE Handle; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v31[18]; // [rsp+60h] [rbp-39h] BYREF
  __int16 v32; // [rsp+108h] [rbp+6Fh] BYREF
  int v33; // [rsp+118h] [rbp+7Fh]

  v3 = 0;
  Handle = 0LL;
  Object = 0LL;
  v33 = 0;
  v26 = 0;
  v28 = 0LL;
  memset(v31, 0, 0x58uLL);
  v7 = *(unsigned int *)(a2 + 4);
  if ( (unsigned int)v7 <= 0x10000 )
  {
    if ( *(_DWORD *)a2 == 11 )
    {
      if ( (unsigned int)v7 < 0x78 || (v22 = (*(_DWORD *)(a2 + 72) + 7) & 0xFFFFFFF8, v22 >= v7 - 76) )
      {
        v11 = -2147483643;
        goto LABEL_7;
      }
      v23 = *(_DWORD *)(v22 + a2 + 72);
      if ( v23 )
      {
        v28 = v22 + a2 + 76;
        if ( (unsigned int)sub_1409F5224(v23, v28, (unsigned int)(v7 - (v22 + 76)), v31) )
        {
          v11 = -1073741811;
          goto LABEL_7;
        }
      }
      *(_DWORD *)a2 = 4;
    }
    *(_DWORD *)(a2 + 36) = PsGetCurrentThreadProcessId();
    if ( *(_DWORD *)a2 == 4 )
    {
      if ( *(_DWORD *)(a2 + 4) < 0xF8u )
      {
        v11 = -1073741789;
        goto LABEL_7;
      }
      v8 = 128;
      v26 = (int)sub_140790CA8(qword_140041D88, 128LL, 0LL) < 0;
      *(_OWORD *)(a2 + 40) = xmmword_140010D88;
    }
    else
    {
      v8 = 4;
      v3 = 1;
    }
    v25 = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 20) = 0;
    v9 = sub_1407968D0(a1, a2 + 40, v3);
    v10 = (_QWORD *)v9;
    if ( !v9 )
    {
      v11 = -1073741163;
LABEL_7:
      sub_14078FF9C(v31);
      return (unsigned int)v11;
    }
    if ( a3 )
    {
      if ( *(_DWORD *)a2 != 4 )
      {
        v11 = sub_140794404(*(PSECURITY_DESCRIPTOR *)(v9 + 72), v8);
        if ( v11 < 0 )
        {
LABEL_26:
          sub_140796B04(v10);
          goto LABEL_7;
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 51), 0LL);
    v14 = v10 + 7;
    v10[52] = KeGetCurrentThread();
    if ( (_QWORD *)*v14 == v14 )
    {
      v11 = -1073741162;
    }
    else
    {
      if ( !*(_BYTE *)(a2 + 12) )
        goto LABEL_13;
      v11 = sub_1406B8E18((ULONG_PTR)v10, &Handle, &Object);
      if ( v11 >= 0 )
      {
        *(_QWORD *)(a2 + 24) = Object;
LABEL_13:
        v15 = sub_1406F21DC(*(unsigned int *)(a2 + 4), (void *)a2);
        if ( v15 < 0 )
        {
LABEL_47:
          v11 = -1073741801;
        }
        else
        {
          v16 = (_QWORD *)*v14;
          if ( (_QWORD *)*v14 != v14 )
          {
            while ( 1 )
            {
              v29 = 0LL;
              v17 = *((_WORD *)v16 + 49);
              if ( (v17 & 2) == 0 || (v17 & 0x40) != 0 || v28 && !(unsigned __int8)sub_14080855C(v16, v28, v31[10], v31) )
                goto LABEL_20;
              if ( v25 && (unsigned int)PsGetProcessId((PEPROCESS)v16[10]) != v25 )
                goto LABEL_20;
              if ( v26 )
              {
                v15 = sub_1409EB814(v16[10]);
                if ( v15 < 0 )
                  goto LABEL_20;
              }
              if ( *(_DWORD *)a2 != 4 )
                break;
              v32 = 0;
              if ( *(_DWORD *)(a2 + 76) == 1 )
                break;
              ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v16[10]);
              v15 = sub_1409EBA3C(ProcessId, *(_WORD *)(a2 + 80) & 0x7FFF, &v32);
              if ( v15 >= 0 )
              {
                v15 = sub_1406F21DC(*(unsigned int *)(a2 + 4), (void *)a2);
                if ( v15 < 0 )
                  goto LABEL_47;
                v20 = 0LL;
                MEMORY[0x50] = v32;
                goto LABEL_30;
              }
LABEL_20:
              v16 = (_QWORD *)*v16;
              if ( v16 == v14 )
                goto LABEL_21;
            }
            v20 = v29;
LABEL_30:
            v21 = sub_140790CF8(v16, v20);
            if ( v21 < 0 )
              v15 = v21;
            else
              ++v33;
            goto LABEL_20;
          }
LABEL_21:
          v11 = 0;
          v18 = Handle;
          v19 = v33 == 0;
          *(_DWORD *)(a2 + 20) = v33;
          if ( v19 )
            v11 = v15;
          *(_QWORD *)(a2 + 24) = v18;
        }
      }
    }
    v10[52] = 0LL;
    ExReleasePushLockEx((ULONG_PTR)(v10 + 51), 0LL);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( Object )
      ObfDereferenceObject(Object);
    goto LABEL_26;
  }
  return 3221225990LL;
}
