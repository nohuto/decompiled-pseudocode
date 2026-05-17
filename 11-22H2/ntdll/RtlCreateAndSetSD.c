/*
 * XREFs of RtlCreateAndSetSD @ 0x180068790
 * Callers:
 *     RtlCreateUserSecurityObject @ 0x1800E1B70 (RtlCreateUserSecurityObject.c)
 * Callees:
 *     RtlCreateSecurityDescriptor @ 0x180014840 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180014870 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1800148D0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180014930 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1800186F0 (RtlCreateAcl.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlAddAce @ 0x180068A80 (RtlAddAce.c)
 *     RtlCopySid @ 0x180069210 (RtlCopySid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x180069250 (RtlSetSaclSecurityDescriptor.c)
 */

__int64 __fastcall RtlCreateAndSetSD(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 *a5)
{
  int SecurityDescriptor; // ebx
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

  SecurityDescriptor = 0;
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
    Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v16);
    v18 = Heap;
    if ( Heap )
    {
      v19 = Heap + 40;
      if ( v11 == 8
        || (v30 = Heap + 40, v19 += v11, SecurityDescriptor = RtlCreateAcl(Heap + 40, v11, 2), SecurityDescriptor >= 0) )
      {
        if ( v12 == 8 || (v31 = v19, SecurityDescriptor = RtlCreateAcl(v19, v12, 2), SecurityDescriptor >= 0) )
        {
          v7 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v6);
          if ( v7 )
          {
            v20 = 0;
            if ( a2 )
            {
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
                SecurityDescriptor = RtlCopySid(4 * (unsigned int)*(unsigned __int8 *)(v23 + 1) + 8, v7 + 8, v23);
LABEL_24:
                if ( SecurityDescriptor < 0 )
                  goto LABEL_39;
                SecurityDescriptor = RtlAddAce(v22, 2, -1, v7, v24);
                if ( SecurityDescriptor < 0 )
                  goto LABEL_39;
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
LABEL_27:
            SecurityDescriptor = RtlCreateSecurityDescriptor(v18, 1);
            if ( SecurityDescriptor >= 0 )
            {
              SecurityDescriptor = RtlSetOwnerSecurityDescriptor(v18, a3, 0);
              if ( SecurityDescriptor >= 0 )
              {
                SecurityDescriptor = RtlSetGroupSecurityDescriptor(v18, a4, 0);
                if ( SecurityDescriptor >= 0 )
                {
                  SecurityDescriptor = RtlSetDaclSecurityDescriptor(v18, 1, v30, 0);
                  if ( SecurityDescriptor >= 0 )
                  {
                    LOBYTE(v28) = v31 != 0;
                    SecurityDescriptor = RtlSetSaclSecurityDescriptor(v18, v28, v31, 0LL);
                    if ( SecurityDescriptor >= 0 )
                    {
                      SecurityDescriptor = 0;
                      *a5 = v18;
LABEL_33:
                      RtlFreeHeap((__int64)ProcessHeap, 0, v7);
                      return (unsigned int)SecurityDescriptor;
                    }
                  }
                }
              }
            }
          }
          else
          {
            SecurityDescriptor = -1073741801;
          }
        }
      }
LABEL_39:
      RtlFreeHeap((__int64)ProcessHeap, 0, v18);
      if ( !v7 )
        return (unsigned int)SecurityDescriptor;
      goto LABEL_33;
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
