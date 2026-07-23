/*
 * XREFs of sub_14067F8D0 @ 0x14067F8D0
 * Callers:
 *     sub_14067EFD0 @ 0x14067EFD0 (sub_14067EFD0.c)
 *     sub_14067F860 @ 0x14067F860 (sub_14067F860.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     sub_140367AF0 @ 0x140367AF0 (sub_140367AF0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067FE98 @ 0x14067FE98 (sub_14067FE98.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14067F8D0(
        HANDLE *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int128 *a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  HANDLE *v10; // rsi
  unsigned int v11; // r12d
  char v12; // r14
  unsigned __int8 v13; // r14
  size_t v14; // rax
  __int64 v15; // rcx
  void *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  _PRIVILEGE_SET *v24; // rax
  _PRIVILEGE_SET *v25; // rsi
  int v26; // ebx
  void *v27; // rax
  POBJECT_TYPE *v28; // rbx
  __int64 CurrentSilo; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  KPROCESSOR_MODE v33; // r9
  __int64 v34; // rcx
  char v35; // [rsp+40h] [rbp-238h]
  HANDLE Handle; // [rsp+48h] [rbp-230h] BYREF
  unsigned int v37; // [rsp+50h] [rbp-228h]
  PVOID Object; // [rsp+58h] [rbp-220h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-218h]
  size_t Size; // [rsp+68h] [rbp-210h]
  __int128 v41; // [rsp+70h] [rbp-208h]
  __int64 v42; // [rsp+80h] [rbp-1F8h]
  HANDLE *v43; // [rsp+88h] [rbp-1F0h]
  __int128 v44; // [rsp+90h] [rbp-1E8h]
  void *Src; // [rsp+A0h] [rbp-1D8h]
  HANDLE *v46; // [rsp+A8h] [rbp-1D0h]
  ULONG_PTR v47; // [rsp+B0h] [rbp-1C8h]
  _DWORD *v48; // [rsp+B8h] [rbp-1C0h]
  __int128 v49; // [rsp+C0h] [rbp-1B8h]
  __int128 v50; // [rsp+D0h] [rbp-1A8h]
  _OWORD v51[19]; // [rsp+E0h] [rbp-198h] BYREF
  _OWORD v52[2]; // [rsp+210h] [rbp-68h] BYREF

  v10 = a1;
  v43 = a1;
  v46 = a1;
  v47 = a3;
  Size = (size_t)a5;
  v48 = a7;
  Handle = 0LL;
  v41 = 0LL;
  v44 = 0LL;
  Privileges = 0LL;
  LODWORD(Object) = 0;
  memset(v52, 0, sizeof(v52));
  v42 = 0LL;
  if ( qword_140D3B008 )
    sub_140223A20((unsigned __int64)v52, 0x20000uLL);
  memset(v51, 0, 0x128uLL);
  LODWORD(v51[6]) = -1;
  *((_QWORD *)&v51[9] + 1) = &v51[9];
  *(_QWORD *)&v51[9] = &v51[9];
  memset((char *)&v51[13] + 8, 0, 0x50uLL);
  HIDWORD(v51[1]) = a2 & 0x300;
  v11 = a2 & 0xFFFFFCFF;
  v37 = v11;
  v12 = sub_140AB46D0();
  v35 = v12;
  if ( v12 )
  {
    v13 = *((_BYTE *)KeGetCurrentThread() + 562);
    if ( v13 == 1 )
    {
      if ( a5 )
      {
        v49 = 0LL;
        v14 = Size;
        if ( Size >= 0x7FFFFFFF0000LL )
          v14 = 0x7FFFFFFF0000LL;
        v15 = *(unsigned int *)v14;
        LODWORD(v49) = v15;
        v16 = *(void **)(v14 + 8);
        Src = v16;
        *((_QWORD *)&v49 + 1) = v16;
        v44 = v49;
        if ( (_WORD)v15 )
        {
          if ( ((unsigned __int8)v16 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v23 = (unsigned __int64)v16 + (unsigned __int16)v15;
          if ( v23 > 0x7FFFFFFF0000LL || v23 < (unsigned __int64)v16 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        if ( (v15 & 1) != 0 )
        {
          v26 = -1073741811;
          v12 = v35;
          goto LABEL_45;
        }
        if ( (_WORD)v15 )
        {
          Size = (unsigned __int16)v15;
          v24 = (_PRIVILEGE_SET *)sub_140367AF0(v15, (unsigned __int16)v15, 0x78634D43u);
          Privileges = v24;
          if ( !v24 )
          {
            v26 = -1073741670;
            v12 = v35;
            goto LABEL_45;
          }
          v25 = v24;
          memmove(v24, Src, Size);
          *((_QWORD *)&v44 + 1) = v25;
          v10 = v43;
        }
      }
      v17 = (__int64)v10;
      if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v17 = 0LL;
      if ( a7 )
      {
        v18 = (__int64)a7;
        if ( (unsigned __int64)a7 >= 0x7FFFFFFF0000LL )
          v18 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v18 = *(_DWORD *)v18;
      }
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = *(_QWORD *)(a3 + 16);
      v43 = (HANDLE *)v19;
      v50 = 0LL;
      if ( v19 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      v20 = *(_DWORD *)v19;
      LODWORD(v50) = v20;
      v21 = *(_QWORD *)(v19 + 8);
      *((_QWORD *)&v50 + 1) = v21;
      v41 = v50;
      if ( (_WORD)v20 )
      {
        if ( (v21 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = v21 + (unsigned __int16)v20;
        if ( v22 > 0x7FFFFFFF0000LL || v22 < v21 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( (v41 & 1) != 0 )
      {
        v26 = -1073741811;
        v12 = v35;
        goto LABEL_45;
      }
      v27 = *(void **)(a3 + 8);
      Handle = v27;
    }
    else
    {
      if ( a5 )
        v44 = *a5;
      v41 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      v27 = *(void **)(a3 + 8);
      Handle = v27;
    }
    if ( qword_140D3B008 )
    {
      if ( v27 )
      {
        v33 = *((_BYTE *)KeGetCurrentThread() + 562);
        Object = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v33, &Object, 0LL) >= 0 )
        {
          v42 = *((_QWORD *)Object + 1);
          ObfDereferenceObject(Object);
        }
      }
    }
    if ( (a6 & 0x100001F) == a6 )
    {
      DWORD2(v51[1]) = a6;
      LODWORD(v51[0]) = 1;
      *((_QWORD *)&v51[0] + 1) = *((_QWORD *)&v44 + 1);
      WORD2(v51[0]) = v44;
      *((_QWORD *)&v51[4] + 1) = a8;
      v28 = CmKeyObjectType;
      CurrentSilo = PsGetCurrentSilo();
      v26 = ObOpenObjectByNameEx(a3, v28, v13, 0LL, v11, v51, CurrentSilo, &Handle);
      if ( v26 >= 0 )
      {
        *v10 = Handle;
        if ( a7 )
          *a7 = v51[2];
      }
      v12 = v35;
    }
    else
    {
      v26 = -1073741811;
      v12 = v35;
    }
  }
  else
  {
    if ( byte_140D3CA35 && (dword_140C23508 & 8) != 0 )
      KeBugCheckEx(0x51u, 0xEuLL, 1uLL, a3, 0LL);
    v26 = -1073741431;
  }
LABEL_45:
  if ( qword_140D3B008 )
  {
    v34 = v42;
    LOBYTE(v34) = 10;
    sub_14042A5E0(v34, v52);
  }
  if ( Privileges )
    SeFreePrivileges(Privileges);
  sub_14067FE98(v51, 0LL);
  if ( v12 )
    sub_140AB42A0(v31, v30);
  return (unsigned int)v26;
}
