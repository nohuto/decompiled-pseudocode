/*
 * XREFs of RtlCreateAndSetSD @ 0x18000B740
 * Callers:
 *     RtlCreateUserSecurityObject @ 0x1800E2F00 (RtlCreateUserSecurityObject.c)
 * Callees:
 *     RtlSetSaclSecurityDescriptor @ 0x18000B690 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddAce @ 0x18000BAB0 (RtlAddAce.c)
 *     RtlCopySid @ 0x18000F120 (RtlCopySid.c)
 *     RtlCreateAcl @ 0x180010E90 (RtlCreateAcl.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180049B30 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180049B90 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x18004D6E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x18004D750 (RtlCreateSecurityDescriptor.c)
 */

__int64 __fastcall RtlCreateAndSetSD(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 *a5)
{
  int Acl; // ebx
  unsigned int v6; // r12d
  __int64 v7; // r14
  unsigned int v8; // r9d
  void *ProcessHeap; // r13
  unsigned int v11; // esi
  unsigned int v12; // r15d
  __int64 v13; // r8
  int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 Heap; // rax
  __int64 v18; // rdi
  __int64 v19; // rbp
  unsigned int v20; // r15d
  int *v21; // rsi
  int v22; // r12d
  __int64 v23; // r8
  int v24; // ebp
  int v25; // edx
  char v26; // al
  char v27; // cl
  __int64 v28; // rdx
  __int64 v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-50h]

  Acl = 0;
  v30 = 0LL;
  v6 = 0;
  v31 = 0LL;
  v7 = 0LL;
  v8 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v11 = 8;
  v12 = 8;
  if ( !a2 )
  {
LABEL_9:
    v16 = 40;
    if ( v11 != 8 )
    {
      if ( v11 + 40 < 0x28 )
        return (unsigned int)-1073741801;
      v16 = v11 + 40;
    }
    if ( v12 != 8 )
    {
      if ( v16 + v12 < v16 )
        return (unsigned int)-1073741801;
      v16 += v12;
    }
    Heap = RtlAllocateHeap(ProcessHeap, (unsigned int)(NtdllBaseTag + 1310720), v16);
    v18 = Heap;
    if ( Heap )
    {
      v19 = Heap + 40;
      if ( v11 != 8 )
      {
        v30 = Heap + 40;
        v19 += v11;
        Acl = RtlCreateAcl(Heap + 40, v11, 2LL);
        if ( Acl < 0 )
          goto LABEL_46;
      }
      if ( v12 != 8 )
      {
        v31 = v19;
        Acl = RtlCreateAcl(v19, v12, 2LL);
        if ( Acl < 0 )
          goto LABEL_46;
      }
      v7 = RtlAllocateHeap(ProcessHeap, (unsigned int)(NtdllBaseTag + 1310720), v6);
      if ( !v7 )
      {
        Acl = -1073741801;
        goto LABEL_46;
      }
      v20 = 0;
      if ( !a2 )
      {
LABEL_27:
        Acl = RtlCreateSecurityDescriptor(v18, 1LL);
        if ( Acl >= 0 )
        {
          Acl = RtlSetOwnerSecurityDescriptor(v18, a3, 0LL);
          if ( Acl >= 0 )
          {
            Acl = RtlSetGroupSecurityDescriptor(v18, a4, 0LL);
            if ( Acl >= 0 )
            {
              LOBYTE(v28) = 1;
              Acl = RtlSetDaclSecurityDescriptor(v18, v28, v30, 0LL);
              if ( Acl >= 0 )
              {
                Acl = RtlSetSaclSecurityDescriptor(v18, v31 != 0, v31, 0);
                if ( Acl >= 0 )
                {
                  Acl = 0;
                  *a5 = v18;
LABEL_33:
                  RtlFreeHeap(ProcessHeap, 0LL, v7);
                  return (unsigned int)Acl;
                }
              }
            }
          }
        }
LABEL_46:
        RtlFreeHeap(ProcessHeap, 0LL, v18);
        if ( !v7 )
          return (unsigned int)Acl;
        goto LABEL_33;
      }
      v21 = (int *)(a1 + 4);
      while ( 1 )
      {
        v22 = 0;
        v23 = **(_QWORD **)(v21 + 1);
        v24 = 4 * *(unsigned __int8 *)(v23 + 1) + 8;
        if ( !*((_BYTE *)v21 - 4) )
          break;
        if ( *((_BYTE *)v21 - 4) == 1 )
        {
          v25 = *v21;
          v26 = *((_BYTE *)v21 - 2);
          v27 = *((_BYTE *)v21 - 3);
          *(_BYTE *)v7 = 1;
          goto LABEL_22;
        }
        if ( *((_BYTE *)v21 - 4) != 2 )
          goto LABEL_24;
        v25 = *v21;
        v26 = *((_BYTE *)v21 - 2);
        v27 = *((_BYTE *)v21 - 3);
        v22 = v31;
        *(_BYTE *)v7 = 2;
LABEL_23:
        *(_DWORD *)(v7 + 4) = v25;
        *(_BYTE *)(v7 + 1) = v26 | v27;
        v24 += 12;
        *(_WORD *)(v7 + 2) = v24;
        Acl = RtlCopySid(4 * (unsigned int)*(unsigned __int8 *)(v23 + 1) + 8, v7 + 8);
LABEL_24:
        if ( Acl < 0 )
          goto LABEL_46;
        Acl = RtlAddAce(v22, 2, -1, v7, v24);
        if ( Acl < 0 )
          goto LABEL_46;
        ++v20;
        v21 += 4;
        if ( v20 >= a2 )
          goto LABEL_27;
      }
      v25 = *v21;
      v26 = *((_BYTE *)v21 - 2);
      v27 = *((_BYTE *)v21 - 3);
      *(_BYTE *)v7 = 0;
LABEL_22:
      v22 = v30;
      goto LABEL_23;
    }
    return (unsigned int)-1073741801;
  }
  v13 = a1;
  while ( 1 )
  {
    v14 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v13 + 8) + 1LL);
    if ( *(_BYTE *)v13 )
    {
      if ( *(_BYTE *)v13 != 1 )
        break;
    }
    v15 = v14 + 20;
    if ( v14 + 20 + v11 < v11 )
      return (unsigned int)-1073741801;
    v11 += v14 + 20;
LABEL_6:
    if ( v6 > v15 )
      v15 = v6;
    ++v8;
    v13 += 16LL;
    v6 = v15;
    if ( v8 >= a2 )
      goto LABEL_9;
  }
  if ( *(_BYTE *)v13 == 2 )
  {
    v15 = v14 + 20;
    if ( v14 + 20 + v12 < v12 )
      return (unsigned int)-1073741801;
    v12 += v14 + 20;
    goto LABEL_6;
  }
  return 3221225485LL;
}
