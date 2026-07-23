/*
 * XREFs of sub_140727350 @ 0x140727350
 * Callers:
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x1405F5070 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1406DF7F0 (SeCreateClientSecurityFromSubjectContext.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1407275D0 (SeCreateClientSecurityEx.c)
 * Callees:
 *     sub_14021F764 @ 0x14021F764 (sub_14021F764.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     SeQueryServerSiloToken @ 0x1406C1480 (SeQueryServerSiloToken.c)
 *     sub_14072295C @ 0x14072295C (sub_14072295C.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_1409C61B0 @ 0x1409C61B0 (sub_1409C61B0.c)
 *     sub_1409CC4D4 @ 0x1409CC4D4 (sub_1409CC4D4.c)
 */

__int64 __fastcall sub_140727350(
        _QWORD *a1,
        __int64 a2,
        char a3,
        int a4,
        char a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  char v12; // cl
  bool v13; // cf
  unsigned int v16; // eax
  __int64 v17; // rbx
  char v18; // al
  __int64 result; // rax
  bool v20; // al
  __int64 v21; // r8
  int v22; // eax
  int v23; // r15d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  void *v27; // r14
  __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // r8
  __int64 CurrentServerSilo; // rax
  PVOID v34[5]; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  v12 = 0;
  v34[0] = 0LL;
  v13 = *(_BYTE *)(a2 + 8) < 2u;
  Object = 0LL;
  if ( !v13 )
    return 3221225485LL;
  v16 = *(_DWORD *)(a2 + 4);
  if ( v16 > 3 )
    return 3221225637LL;
  if ( a4 != 2 )
  {
    v17 = a11;
    *(_BYTE *)(a11 + 25) = *(_BYTE *)(a2 + 9);
LABEL_5:
    if ( *(_BYTE *)(a2 + 8) )
    {
      *(_BYTE *)(v17 + 24) = 1;
      if ( a3 )
        sub_1409CC4D4(a1, v17 + 28);
    }
    else
    {
      *(_BYTE *)(v17 + 24) = 0;
      if ( PsIsCurrentThreadInServerSilo() )
      {
        v31 = a1[3];
        Object = 0LL;
        if ( (int)SeQueryServerSiloToken((__int64)a1, (__int64)&Object) >= 0
          && PsIsHostSilo((__int64)Object)
          && v31 == 999 )
        {
          CurrentServerSilo = PsGetCurrentServerSilo();
          v22 = sub_1409C61B0(a1, *(unsigned int *)(a2 + 4), CurrentServerSilo, v34);
        }
        else
        {
          v22 = sub_14072295C((int)a1, *(_DWORD *)(a2 + 4), v32, 0, 0LL, v34);
        }
      }
      else
      {
        v22 = sub_14072295C((int)a1, *(_DWORD *)(a2 + 4), v21, a9, a10, v34);
      }
      v23 = v22;
      a1 = v34[0];
      if ( dword_140D05010 )
      {
        sub_1405C5EC8((__int64)v34[0] - 48, 0, 1u, 0x746C6644u);
        sub_1405C5EC8((__int64)(a1 - 6), 1, 1u, 0x63436553u);
      }
      if ( v23 < 0 )
        return (unsigned int)v23;
    }
    *(_DWORD *)v17 = 12;
    *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 4);
    *(_BYTE *)(v17 + 8) = *(_BYTE *)(a2 + 8);
    v18 = *(_BYTE *)(a2 + 9);
    goto LABEL_9;
  }
  if ( (int)v16 > (int)a6 )
  {
    if ( !a7 )
      return 3221225637LL;
    v12 = 1;
  }
  if ( a6 <= 1 || a3 && a6 != 3 )
  {
    if ( a7 )
    {
      v17 = a11;
      goto LABEL_30;
    }
    return 3221225637LL;
  }
  v20 = a5 || *(_BYTE *)(a2 + 9);
  v17 = a11;
  *(_BYTE *)(a11 + 25) = v20;
  if ( !v12 )
    goto LABEL_5;
LABEL_30:
  if ( (a1[25] & 0x4000) != 0 )
  {
    v30 = (__int64)a1;
LABEL_44:
    v29 = sub_14021F764(v30, &Object);
    goto LABEL_37;
  }
  if ( !a8 )
  {
    v30 = 0LL;
    goto LABEL_44;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a8 == CurrentThread )
    v25 = *((_QWORD *)CurrentThread + 23);
  else
    v25 = *(_QWORD *)(a8 + 544);
  v26 = sub_140347920(v25, 0x746C6644u);
  v27 = (void *)v26;
  if ( (*(_DWORD *)(v26 + 200) & 0x4000) != 0 )
    v28 = v26;
  else
    v28 = 0LL;
  v29 = sub_14021F764(v28, &Object);
  ObfDereferenceObject(v27);
LABEL_37:
  if ( v29 < 0 )
    return (unsigned int)v29;
  a1 = Object;
  result = sub_140729C30(Object, 0LL, 0, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( dword_140D05010 )
    {
      sub_1405C5EC8((__int64)(a1 - 6), 0, 1u, 0x746C6644u);
      sub_1405C5EC8((__int64)(a1 - 6), 1, 1u, 0x63436553u);
    }
    *(_QWORD *)v17 = 12LL;
    *(_BYTE *)(v17 + 8) = 0;
    v18 = *(_BYTE *)(a2 + 9);
    *(_BYTE *)(v17 + 24) = 0;
LABEL_9:
    *(_QWORD *)(v17 + 16) = a1;
    *(_BYTE *)(v17 + 9) = v18;
    result = 0LL;
    *(_BYTE *)(v17 + 26) = a3;
  }
  return result;
}
