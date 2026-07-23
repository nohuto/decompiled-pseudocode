/*
 * XREFs of sub_14081C05C @ 0x14081C05C
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     RtlFindSetBits @ 0x1402E4EE0 (RtlFindSetBits.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     sub_1406E1024 @ 0x1406E1024 (sub_1406E1024.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1407213B0 (SeQuerySecurityDescriptorInfo.c)
 *     sub_1407942E0 @ 0x1407942E0 (sub_1407942E0.c)
 *     sub_14079435C @ 0x14079435C (sub_14079435C.c)
 *     sub_1407943B0 @ 0x1407943B0 (sub_1407943B0.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     sub_140864164 @ 0x140864164 (sub_140864164.c)
 *     sub_1409E47C4 @ 0x1409E47C4 (sub_1409E47C4.c)
 *     sub_1409EC9EC @ 0x1409EC9EC (sub_1409EC9EC.c)
 *     sub_1409F3D68 @ 0x1409F3D68 (sub_1409F3D68.c)
 */

__int64 __fastcall sub_14081C05C(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  ULONG SetBits; // r15d
  unsigned int v8; // edi
  int v9; // ebx
  __int64 v10; // rdx
  KPROCESSOR_MODE v11; // r8
  _DWORD *v12; // r9
  __int64 v13; // r13
  unsigned int v14; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rax
  unsigned int *v17; // rbx
  __int64 v18; // rax
  unsigned int *p_SizeOfBitMap; // rcx
  char v20; // dl
  __int64 result; // rax
  unsigned int v22; // edx
  struct _KTHREAD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r13
  void *v26; // rbx
  unsigned int v27; // r14d
  unsigned int v28; // edx
  struct _KTHREAD *v29; // rax
  unsigned int *v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // eax
  unsigned int v33; // r13d
  unsigned int v34; // r14d
  struct _KPROCESS *j; // rcx
  __int64 *v36; // rax
  struct _KPROCESS *v37; // rdi
  unsigned int ProcessId; // ecx
  ULONG v39; // ebx
  unsigned int v40; // edx
  struct _KTHREAD *v41; // rax
  __int64 v42; // rax
  _RTL_BITMAP *v43; // rsi
  unsigned int v44; // eax
  DWORD v45; // ebx
  ULONG v46; // r14d
  _DWORD *i; // r12
  DWORD SecurityInformation[2]; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  int v51; // [rsp+40h] [rbp-48h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+48h] [rbp-40h] BYREF
  __int64 v53; // [rsp+50h] [rbp-38h]
  ULONG Length; // [rsp+98h] [rbp+10h] BYREF

  SetBits = 0;
  v8 = 0;
  if ( a2 < 4 )
    return 3221225485LL;
  v51 = *(_DWORD *)a1;
  v9 = v51;
  v13 = *((_QWORD *)sub_140347DB0() + 108);
  if ( v51 > 18 )
  {
    if ( v51 != 25 )
      return (unsigned int)-1073741822;
    return (unsigned int)sub_1409F3D68(a1);
  }
  if ( v51 == 18 )
    return (unsigned int)sub_1409EC9EC(a1, v10, a4);
  if ( v51 <= 5 )
  {
    switch ( v51 )
    {
      case 5:
        *v12 = 20;
        if ( (((_DWORD)v10 - 16) & 0xFFFFFFFB) == 0 )
        {
          *(_DWORD *)(a1 + 4) = dword_140D0512C;
          *(_DWORD *)(a1 + 8) = dword_140D05130;
          *(_DWORD *)(a1 + 12) = dword_140D05134;
          if ( a2 == 20 )
            *(_DWORD *)(a1 + 16) = dword_140D050AC;
          return v8;
        }
        return 3221225476LL;
      case 0:
        *v12 = 8;
        if ( a2 == 8 )
        {
          *(_DWORD *)(a1 + 4) = 85;
          return v8;
        }
        return 3221225476LL;
      case 1:
        *v12 = 48;
        if ( a2 == 48 )
        {
          v53 = *(_QWORD *)(a1 + 8);
          v14 = (unsigned __int16)v53;
          if ( (unsigned __int16)v53 == 0xFFFF )
            v14 = *(unsigned __int8 *)(v13 + 4232);
          CurrentThread = KeGetCurrentThread();
          --*((_WORD *)CurrentThread + 242);
          v16 = sub_140797594(v13, v14, 1);
          v17 = (unsigned int *)v16;
          ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)v16;
          if ( v16 )
          {
            if ( (*(_DWORD *)(v16 + 12) & 0x2000000) != 0 )
            {
              v18 = 32LL * *(unsigned __int8 *)(v16 + 818);
              *(_OWORD *)(a1 + 16) = *(_OWORD *)(v18 + v13 + 4284);
              *(_OWORD *)(a1 + 32) = *(_OWORD *)(v18 + v13 + 4300);
              sub_1406E1024(a1 + 16, 0);
LABEL_14:
              p_SizeOfBitMap = v17;
LABEL_15:
              v20 = 1;
LABEL_16:
              sub_1407981E8(p_SizeOfBitMap, v20);
LABEL_17:
              sub_1402F9540((__int64)KeGetCurrentThread());
              return v8;
            }
            sub_1407981E8((unsigned int *)v16, 1);
            sub_1402F9540((__int64)KeGetCurrentThread());
            return 3221225485LL;
          }
LABEL_83:
          v8 = -1073741162;
          goto LABEL_17;
        }
        return 3221225476LL;
      case 2:
        *v12 = 16;
        if ( a2 == 16 )
        {
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(*((_QWORD *)sub_140347DB0() + 108) + 4136LL);
          return v8;
        }
        return 3221225476LL;
      case 3:
        *v12 = 8;
        if ( a2 == 8 )
        {
          *(_DWORD *)(a1 + 4) = dword_140C0C85C;
          return v8;
        }
        return 3221225476LL;
      case 4:
        *v12 = 24;
        if ( a2 >= 0x18 )
        {
          v53 = *(_QWORD *)(a1 + 8);
          SecurityInformation[0] = *(_DWORD *)(a1 + 4);
          v22 = (unsigned __int16)v53;
          if ( (unsigned __int16)v53 == 0xFFFF )
            v22 = *(unsigned __int8 *)(v13 + 4232);
          v23 = KeGetCurrentThread();
          --*((_WORD *)v23 + 242);
          v24 = sub_140797594(v13, v22, 0);
          v25 = v24;
          if ( v24 )
          {
            v26 = (void *)sub_1407942E0(v24);
            ObjectsSecurityDescriptor = v26;
            Length = a2 - 16;
            v8 = SeQuerySecurityDescriptorInfo(
                   SecurityInformation,
                   (PSECURITY_DESCRIPTOR)(a1 + 16),
                   &Length,
                   &ObjectsSecurityDescriptor);
            *a4 = Length + 16;
            sub_1407943B0(v25, (__int64)v26);
            v20 = 0;
            p_SizeOfBitMap = (unsigned int *)v25;
            goto LABEL_16;
          }
          goto LABEL_83;
        }
        return 3221225476LL;
    }
    return (unsigned int)-1073741822;
  }
  if ( v51 == 6 )
  {
    v39 = 0;
    Length = 0;
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(a1 + 16);
    if ( a2 >= 0x10 )
    {
      v53 = *(_QWORD *)(a1 + 8);
      v40 = (unsigned __int16)v53;
      if ( (unsigned __int16)v53 == 0xFFFF )
        v40 = *(unsigned __int8 *)(v13 + 4232);
      v41 = KeGetCurrentThread();
      --*((_WORD *)v41 + 242);
      v42 = sub_140797594(v13, v40, 1);
      v43 = (_RTL_BITMAP *)v42;
      v53 = v42;
      if ( v42 )
      {
        v8 = sub_14079435C(1u, v42);
        if ( (v8 & 0x80000000) == 0 )
        {
          if ( (v43[51].SizeOfBitMap & 0x80u) != 0 )
          {
            v39 = RtlNumberOfSetBits(v43 + 62);
            Length = v39;
          }
          v44 = 4 * v39 + 16;
          *a4 = v44;
          if ( v44 > a2 )
          {
            v8 = -1073741789;
          }
          else
          {
            v45 = 0;
            v46 = Length;
            for ( i = ObjectsSecurityDescriptor; ; i[v45++] = SetBits )
            {
              SecurityInformation[0] = v45;
              if ( v45 >= v46 )
                break;
              SetBits = RtlFindSetBits(v43 + 62, 1u, SetBits + 1);
              LODWORD(Object) = SetBits;
            }
          }
        }
        p_SizeOfBitMap = &v43->SizeOfBitMap;
        goto LABEL_15;
      }
      goto LABEL_83;
    }
    return 3221225476LL;
  }
  if ( v51 == 7 )
  {
    *v12 = 16;
    if ( a2 == 16 )
    {
      *(_DWORD *)(a1 + 4) = dword_140C0DA48;
      *(_DWORD *)(a1 + 8) = dword_140C0DA44;
      *(_DWORD *)(a1 + 12) = dword_140C0DA40;
      return v8;
    }
    return 3221225476LL;
  }
  if ( v51 <= 9 )
  {
    v33 = 0;
    if ( a2 < 8 )
      return 3221225476LL;
    if ( !PsIsCurrentThreadInServerSilo() )
    {
      v34 = (a2 - 4) >> 2;
      for ( j = 0LL; ; j = v37 )
      {
        v36 = sub_1407B6B90(j);
        v37 = (struct _KPROCESS *)v36;
        Object = v36;
        if ( !v36 )
          break;
        if ( (*((_DWORD *)v36 + 543) & 0x1000) == 0 && (v9 == 9 || (unsigned __int8)sub_1409E47C4((ULONG_PTR)v36)) )
        {
          ProcessId = (unsigned int)PsGetProcessId(v37);
          if ( v33 < v34 )
            *(_DWORD *)(a1 + 4LL * v33 + 4) = ProcessId;
          ++v33;
        }
      }
      *a4 = 4 * v33 + 4;
      return v34 < v33 ? 0xC0000023 : 0;
    }
    return 3221225506LL;
  }
  if ( v51 == 10 )
  {
    if ( a2 < 0x10 )
      return 3221225476LL;
    if ( !PsIsCurrentThreadInServerSilo() )
    {
      v53 = *(_QWORD *)(a1 + 8);
      v28 = (unsigned __int16)v53;
      if ( (unsigned __int16)v53 == 0xFFFF )
        v28 = *(unsigned __int8 *)(v13 + 4232);
      v29 = KeGetCurrentThread();
      --*((_WORD *)v29 + 242);
      v30 = (unsigned int *)sub_140797594(v13, v28, 1);
      v17 = v30;
      ObjectsSecurityDescriptor = v30;
      if ( v30 )
      {
        if ( (v30[3] & 0x2000000) == 0 )
        {
          sub_1407981E8(v30, 1);
          v8 = -1073741811;
          goto LABEL_17;
        }
        v8 = sub_140864164(v30, 1LL);
        if ( (v8 & 0x80000000) == 0 )
        {
          v31 = 5LL * *((unsigned __int8 *)v17 + 818);
          v32 = 4 * (unsigned __int16)word_140C15E20[10 * *((unsigned __int8 *)v17 + 818)] + 16;
          *a4 = v32;
          if ( v32 > a2 )
            v8 = -1073741789;
          else
            memmove((void *)(a1 + 16), &word_140C15E20[2 * v31 + 2], 4LL * (unsigned __int16)word_140C15E20[2 * v31]);
        }
        goto LABEL_14;
      }
      goto LABEL_83;
    }
    return 3221225506LL;
  }
  if ( v51 != 13 )
    return (unsigned int)-1073741822;
  *(_QWORD *)SecurityInformation = 0LL;
  Object = 0LL;
  if ( a2 < 0x28 )
    return 3221225476LL;
  v27 = a2 - 8;
  result = sub_1406A904C(a1 + 8, v27, v11, IoWriteAccess, &Object, (struct _MDL **)SecurityInformation);
  if ( (int)result >= 0 )
  {
    v8 = sub_14042A5E0(20LL, v27);
    if ( Object )
      sub_140231450(*(struct _MDL **)SecurityInformation);
    return v8;
  }
  return result;
}
