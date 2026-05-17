/*
 * XREFs of RtlDefaultNpAcl @ 0x1800019A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerSidType @ 0x18000AEA0 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x180013050 (RtlInitializeSid.c)
 *     RtlCreateAcl @ 0x1800186F0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x18001ABE4 (RtlpAddKnownAce.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009F210 (NtQueryInformationToken.c)
 *     RtlGetAppContainerParent @ 0x1800F0F70 (RtlGetAppContainerParent.c)
 */

__int64 __fastcall RtlDefaultNpAcl(__int64 *a1)
{
  void **v2; // rdi
  void *ProcessHeap; // rcx
  void **Heap; // r15
  int InformationToken; // ebx
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rax
  void *v9; // r14
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  int v19; // [rsp+30h] [rbp-40h] BYREF
  __int16 v20; // [rsp+34h] [rbp-3Ch]
  int v21; // [rsp+38h] [rbp-38h] BYREF
  __int16 v22; // [rsp+3Ch] [rbp-34h]
  int v23; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v24[4]; // [rsp+44h] [rbp-2Ch] BYREF
  int v25; // [rsp+48h] [rbp-28h] BYREF
  void *v26; // [rsp+50h] [rbp-20h] BYREF
  char Src[8]; // [rsp+58h] [rbp-18h] BYREF
  int v28; // [rsp+60h] [rbp-10h]
  int v29; // [rsp+64h] [rbp-Ch]

  v20 = 1280;
  *a1 = 0LL;
  v19 = 0;
  v2 = 0LL;
  v21 = 0;
  v22 = 256;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v26 = 0LL;
  v25 = 0;
  Heap = (void **)RtlAllocateHeap(ProcessHeap, 0LL, 76LL);
  if ( Heap )
  {
    InformationToken = NtQueryInformationToken(-6LL, 4LL, Heap, 76LL, v24);
    if ( InformationToken < 0 )
      goto LABEL_18;
    v23 = 0;
    if ( (int)NtQueryInformationToken(-6LL, 29LL, &v23, 4LL, v24) >= 0 && v23 )
    {
      v2 = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 76LL);
      if ( !v2 )
      {
        InformationToken = -1073741801;
        goto LABEL_18;
      }
      InformationToken = NtQueryInformationToken(-6LL, 31LL, v2, 76LL, v24);
      if ( InformationToken < 0 )
        goto LABEL_29;
      InformationToken = RtlGetAppContainerSidType(*v2, &v25);
      if ( InformationToken < 0 )
        goto LABEL_29;
      if ( v25 == 1 )
      {
        InformationToken = RtlGetAppContainerParent(*v2, &v26);
        if ( InformationToken < 0 )
          goto LABEL_29;
      }
    }
    v6 = 52;
    if ( v2 )
      v6 = 4 * *((unsigned __int8 *)*v2 + 1) + 68;
    if ( v26 )
      v6 += 4 * *((unsigned __int8 *)v26 + 1) + 16;
    v7 = v6 + 4 * (*((unsigned __int8 *)*Heap + 1) + 14);
    v8 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v7);
    v9 = v26;
    *a1 = v8;
    if ( v8 )
    {
      RtlCreateAcl(v8, v7, 2LL);
      LOBYTE(v10) = 1;
      RtlInitializeSid(Src, &v19, v10);
      v11 = *a1;
      v28 = 18;
      RtlpAddKnownAce(v11, 2, 0, 0x10000000, Src, 0);
      LOBYTE(v12) = 2;
      RtlInitializeSid(Src, &v19, v12);
      v13 = *a1;
      v28 = 32;
      v29 = 544;
      RtlpAddKnownAce(v13, 2, 0, 0x10000000, Src, 0);
      if ( v2 )
        RtlpAddKnownAce(*a1, 2, 0, 0x10000000, *v2, 0);
      if ( v9 )
        RtlpAddKnownAce(*a1, 2, 0, 0x10000000, v9, 0);
      RtlpAddKnownAce(*a1, 2, 0, 0x10000000, *Heap, 0);
      LOBYTE(v14) = 1;
      RtlInitializeSid(Src, &v21, v14);
      v15 = *a1;
      v28 = 0;
      RtlpAddKnownAce(v15, 2, 0, 0x80000000, Src, 0);
      LOBYTE(v16) = 1;
      RtlInitializeSid(Src, &v19, v16);
      v17 = *a1;
      v28 = 7;
      RtlpAddKnownAce(v17, 2, 0, 0x80000000, Src, 0);
      InformationToken = 0;
    }
    else
    {
      InformationToken = -1073741801;
    }
    if ( v2 )
    {
LABEL_29:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v2);
      v9 = v26;
    }
    if ( v9 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v26);
LABEL_18:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
    if ( InformationToken >= 0 )
      return (unsigned int)InformationToken;
    goto LABEL_21;
  }
  InformationToken = -1073741801;
LABEL_21:
  if ( *a1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *a1);
    *a1 = 0LL;
  }
  return (unsigned int)InformationToken;
}
