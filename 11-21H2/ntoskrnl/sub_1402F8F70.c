/*
 * XREFs of sub_1402F8F70 @ 0x1402F8F70
 * Callers:
 *     NtQuerySecurityAttributesToken @ 0x1406A09D0 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1409C6320 (SeSetSessionIdTokenWithLinked.c)
 * Callees:
 *     sub_1402324B4 @ 0x1402324B4 (sub_1402324B4.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F9578 @ 0x1402F9578 (sub_1402F9578.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_14072A6B0 @ 0x14072A6B0 (sub_14072A6B0.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 */

NTSTATUS __fastcall sub_1402F8F70(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        int a4,
        PVOID *Object,
        _BYTE *a6,
        _QWORD *a7)
{
  _BYTE *v7; // rdi
  _QWORD *v8; // rsi
  NTSTATUS v9; // ebx
  NTSTATUS result; // eax
  PVOID *v11; // r14
  struct _KTHREAD *CurrentThread; // rax
  void *v13; // rax
  __int64 v14; // rax
  void *v15; // r9
  __int64 v16; // r10
  ULONG v17; // edx
  __int64 v18; // r11
  __int64 v19; // r10
  int v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+78h] [rbp+20h] BYREF

  v21 = a4;
  v7 = a6;
  v8 = a7;
  v9 = 0;
  *a6 = 0;
  *v8 = 0LL;
  if ( (unsigned __int64)a1 + 6 <= 2 )
  {
    if ( (a2 & 0xFFFFFFE7) != 0 )
      return -1073741790;
    v11 = Object;
    LOBYTE(a6) = 0;
    v20 = 0;
    LODWORD(a7) = 0;
    *Object = 0LL;
    *v7 = 0;
    *v8 = 0LL;
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v21) = 0;
    if ( a1 == (void *)-4LL )
    {
      *v11 = (PVOID)sub_140347920(*((_QWORD *)CurrentThread + 23), 1953654867LL);
      return 0;
    }
    if ( a1 == (void *)-5LL )
    {
      v13 = (void *)sub_14072A6B0(CurrentThread, 0LL, 1953654867LL, &a7, &a6, &v20, &v21);
      if ( !v13 )
        return -1073741700;
      if ( !v20 )
      {
        v17 = 1953261124;
LABEL_16:
        ObfDereferenceObjectWithTag(v13, v17);
        return -1073741658;
      }
    }
    else
    {
      v13 = (void *)sub_1407B3B60(CurrentThread, 1953654867LL, &a7, &a6, &v20, &v21);
      if ( (_DWORD)a7 == 2 && !v20 )
      {
        v17 = 1953654867;
        goto LABEL_16;
      }
    }
    *v7 = 0;
    *v8 = 0LL;
    v14 = sub_1402F9578(&v21);
    if ( v14 && !sub_1402324B4(v14) )
      goto LABEL_27;
    if ( v16 )
    {
      if ( !sub_1402324B4(v16) )
        goto LABEL_27;
      if ( v18 )
      {
        if ( *(_DWORD *)(v18 + 8) >= *(_DWORD *)(v19 + 8) && *(_DWORD *)(v18 + 12) >= *(_DWORD *)(v19 + 12) )
          goto LABEL_10;
        goto LABEL_27;
      }
      if ( *(_DWORD *)(v19 + 8) )
      {
LABEL_27:
        *v7 = 1;
        *v8 = v18;
      }
    }
LABEL_10:
    *v11 = v15;
    return v9;
  }
  result = ObReferenceObjectByHandleWithTag(a1, a2, (POBJECT_TYPE)SeTokenObjectType, a3, 0x74726853u, Object, 0LL);
  v9 = result;
  if ( result >= 0 )
    return v9;
  return result;
}
