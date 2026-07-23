/*
 * XREFs of sub_14085DACC @ 0x14085DACC
 * Callers:
 *     sub_1409ACD20 @ 0x1409ACD20 (sub_1409ACD20.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066D0AC @ 0x14066D0AC (sub_14066D0AC.c)
 *     sub_14066F4C0 @ 0x14066F4C0 (sub_14066F4C0.c)
 *     sub_14066F864 @ 0x14066F864 (sub_14066F864.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     sub_1406D833C @ 0x1406D833C (sub_1406D833C.c)
 *     sub_140701A98 @ 0x140701A98 (sub_140701A98.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 *     sub_140882484 @ 0x140882484 (sub_140882484.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall sub_14085DACC(
        __int64 a1,
        int a2,
        __int64 a3,
        void *a4,
        KPROCESSOR_MODE AccessMode,
        int a6,
        HANDLE Handle,
        void *a8,
        void *a9)
{
  PVOID v11; // r12
  PVOID v12; // r14
  int v13; // esi
  __int64 v14; // r9
  char v15; // bl
  char v16; // r13
  char v17; // al
  int v18; // eax
  int v19; // ebx
  char v20; // al
  NTSTATUS result; // eax
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  char v26; // [rsp+80h] [rbp-248h] BYREF
  char v27; // [rsp+81h] [rbp-247h] BYREF
  char v28; // [rsp+82h] [rbp-246h] BYREF
  char v29; // [rsp+83h] [rbp-245h]
  int v30; // [rsp+88h] [rbp-240h]
  PVOID Object; // [rsp+90h] [rbp-238h] BYREF
  PVOID v32; // [rsp+98h] [rbp-230h] BYREF
  int v33; // [rsp+A0h] [rbp-228h]
  PVOID v34; // [rsp+A8h] [rbp-220h] BYREF
  PVOID v35; // [rsp+B0h] [rbp-218h] BYREF
  void *v36; // [rsp+B8h] [rbp-210h]
  __int64 v37; // [rsp+C0h] [rbp-208h] BYREF
  __int64 v38; // [rsp+C8h] [rbp-200h]
  PVOID v39; // [rsp+D0h] [rbp-1F8h]
  HANDLE v40; // [rsp+D8h] [rbp-1F0h]
  _BYTE v41[400]; // [rsp+F0h] [rbp-1D8h] BYREF

  v33 = a2;
  v38 = a1;
  v40 = a8;
  v36 = a9;
  v37 = 0LL;
  v29 = 0;
  v34 = 0LL;
  Object = 0LL;
  v27 = 0;
  v28 = 0;
  v32 = 0LL;
  if ( (a6 & 0xFFF94048) != 0 || (*(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2170LL) & 7) != 0 && AccessMode )
    return -1073741811;
  if ( (a6 & 0x4000) != 0 && (a6 & 0x2000) == 0 )
    return -1073741811;
  v30 = a6 & 0x800;
  if ( (a6 & 0x2000) != 0 && (a6 & 0x800) == 0 )
    return -1073741811;
  if ( (a6 & 0x800) != 0 )
  {
    if ( AccessMode )
      return -1073741811;
    if ( a3 )
    {
      if ( *(_QWORD *)(a3 + 8) )
        return -1073741811;
      v22 = *(_QWORD *)(a3 + 16);
      if ( !v22
        || !*(_QWORD *)(v22 + 8)
        || !*(_WORD *)v22
        || *(_DWORD *)(a3 + 24) != 512
        || *(_QWORD *)(a3 + 32)
        || *(_QWORD *)(a3 + 40) )
      {
        return -1073741811;
      }
    }
    if ( Handle || a8 || !a4 )
      return -1073741811;
  }
  if ( (a6 & 0x20000) != 0 && (AccessMode || (a6 & 0x800) == 0) )
    return -1073741811;
  memset(v41, 0, sizeof(v41));
  v41[388] = AccessMode;
  if ( a3 )
  {
    if ( AccessMode )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = *(_DWORD *)(a3 + 24);
      *(_DWORD *)&v41[384] = v23;
    }
    else
    {
      v23 = *(_DWORD *)(a3 + 24);
    }
    if ( AccessMode )
      v24 = v23 & 0x1DF2;
    else
      v24 = v23 & 0x11FF2;
    *(_DWORD *)&v41[384] = v24;
  }
  if ( Handle )
  {
    v35 = 0LL;
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, AccessMode, &v35, 0LL);
    v11 = v35;
    v39 = v35;
    if ( result < 0 )
      return result;
  }
  else
  {
    v11 = 0LL;
    v39 = 0LL;
  }
  if ( !a4
    || (v13 = ObReferenceObjectByHandleWithTag(
                a4,
                0x80u,
                (POBJECT_TYPE)PsProcessType,
                AccessMode,
                0x72437350u,
                &v34,
                0LL),
        v13 >= 0) )
  {
    v12 = v34;
    v13 = sub_14066F864((__int64)v34, a9, AccessMode, &v32);
    if ( v13 < 0 )
      goto LABEL_28;
    if ( v12 )
    {
      if ( v11 )
      {
        v26 = 0;
        LOBYTE(v14) = 0;
        v13 = sub_14066F4C0(v32, 0LL, 0LL, v14, &v27, &v28, &v26);
        if ( v13 < 0 )
          goto LABEL_27;
        v16 = v27;
        if ( (unsigned __int8)v27 > 1u || (v15 = v26) != 0 )
        {
LABEL_72:
          v13 = -1073741637;
          goto LABEL_27;
        }
LABEL_15:
        if ( !v11 )
          goto LABEL_16;
        v13 = sub_1406D833C((__int64)v11);
        if ( v13 >= 0 )
        {
          if ( v15 == v29 )
          {
LABEL_16:
            if ( v30 )
            {
              if ( a3 )
                v25 = *(_QWORD *)(a3 + 16);
              else
                v25 = 0LL;
              v13 = sub_140831810(
                      (PEPROCESS)v12,
                      v25,
                      0LL,
                      v15,
                      (void *)((unsigned __int64)v32 & -(__int64)(v36 != 0LL)),
                      a6,
                      0,
                      0LL,
                      0LL,
                      (_QWORD *)v38);
            }
            else
            {
              v18 = sub_14070BD10(
                      (__int64)v12,
                      AccessMode,
                      (_WORD *)a3,
                      v15,
                      v16,
                      v28,
                      v11,
                      v32,
                      a6,
                      0,
                      0LL,
                      v36 != 0LL,
                      0LL,
                      (__int64)&v37,
                      &Object);
              v13 = v18;
              if ( v18 >= 0 )
              {
                v19 = v18;
                v30 = v18;
                v20 = 1;
                if ( (_DWORD)v37 )
                  v20 = 3;
                v13 = sub_14066D0AC((char *)Object, (__int64)v12, v33, a6, v40, v20, 0LL, (PACCESS_STATE)v41);
                if ( v13 >= 0 )
                {
                  v13 = sub_140701A98(Object, (__int64)v41, (struct _OBJECT_TYPE *)PsProcessType);
                  if ( v13 >= 0 )
                  {
                    *(_QWORD *)v38 = *(_QWORD *)&v41[392];
                    v13 = v19;
                  }
                  sub_140882484(v41);
                }
                if ( v13 < 0 )
                  sub_140683990((ULONG_PTR)Object, 0);
                ObfDereferenceObjectWithTag(Object, 0x72437350u);
              }
            }
            goto LABEL_27;
          }
          goto LABEL_72;
        }
LABEL_27:
        ObfDereferenceObject(v32);
LABEL_28:
        if ( v12 )
          ObfDereferenceObjectWithTag(v12, 0x72437350u);
        goto LABEL_30;
      }
      v15 = *((_BYTE *)v12 + 2170);
      v17 = *((_BYTE *)v12 + 2169);
      v16 = *((_BYTE *)v12 + 2168);
    }
    else
    {
      v15 = 114;
      v16 = 30;
      v17 = 28;
    }
    v28 = v17;
    v27 = v16;
    v26 = v15;
    goto LABEL_15;
  }
LABEL_30:
  if ( v11 )
    ObfDereferenceObject(v11);
  return v13;
}
