/*
 * XREFs of sub_1407CABA0 @ 0x1407CABA0
 * Callers:
 *     sub_14067F130 @ 0x14067F130 (sub_14067F130.c)
 *     sub_1406A5B90 @ 0x1406A5B90 (sub_1406A5B90.c)
 *     sub_1407CA940 @ 0x1407CA940 (sub_1407CA940.c)
 *     sub_14090E160 @ 0x14090E160 (sub_14090E160.c)
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406D17F4 @ 0x1406D17F4 (sub_1406D17F4.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_1407CABA0(HANDLE *a1, int a2, __int64 a3, int a4, __int64 a5, unsigned __int8 a6)
{
  unsigned int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  void *v21; // rax
  POBJECT_TYPE *v22; // rbx
  __int64 CurrentSilo; // rax
  __int64 v24; // rdx
  int v25; // ebx
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  _OWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v31; // rcx
  KPROCESSOR_MODE v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  PVOID Object; // [rsp+58h] [rbp-1F0h] BYREF
  HANDLE v39; // [rsp+60h] [rbp-1E8h]
  HANDLE Handle; // [rsp+68h] [rbp-1E0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-1D8h]
  __int128 v42; // [rsp+80h] [rbp-1C8h]
  HANDLE *v43; // [rsp+90h] [rbp-1B8h]
  __int64 v44; // [rsp+98h] [rbp-1B0h]
  __int128 v45; // [rsp+A0h] [rbp-1A8h]
  _OWORD v46[2]; // [rsp+B0h] [rbp-198h] BYREF
  _OWORD v47[19]; // [rsp+D0h] [rbp-178h] BYREF

  v43 = a1;
  v44 = a3;
  Handle = 0LL;
  v42 = 0LL;
  v39 = 0LL;
  LODWORD(Object) = 0;
  memset(v46, 0, sizeof(v46));
  v41 = 0LL;
  if ( qword_140D3B008 )
    sub_140223A20((unsigned __int64)v46, 0x20000uLL);
  memset(v47, 0, 0x128uLL);
  LODWORD(v47[6]) = -1;
  *((_QWORD *)&v47[9] + 1) = &v47[9];
  *(_QWORD *)&v47[9] = &v47[9];
  *(_OWORD *)((char *)&v47[13] + 8) = 0LL;
  *(_OWORD *)((char *)&v47[14] + 8) = 0LL;
  *(_OWORD *)((char *)&v47[15] + 8) = 0LL;
  *(_OWORD *)((char *)&v47[16] + 8) = 0LL;
  *(_OWORD *)((char *)&v47[17] + 8) = 0LL;
  HIDWORD(v47[1]) = a2 & 0x300;
  v10 = a2 & 0xFFFFFCFF;
  if ( (unsigned __int8)sub_140AB46D0(v12, v11, v13) )
  {
    if ( (a4 & 0x1C) == a4 )
    {
      if ( a6 == 1 )
      {
        v16 = (__int64)a1;
        if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
          v16 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v16 = 0LL;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = *(_QWORD *)(a3 + 16);
        v45 = 0LL;
        if ( v17 >= 0x7FFFFFFF0000LL )
          v17 = 0x7FFFFFFF0000LL;
        v18 = *(_DWORD *)v17;
        LODWORD(v45) = v18;
        v19 = *(_QWORD *)(v17 + 8);
        *((_QWORD *)&v45 + 1) = v19;
        v42 = v45;
        if ( (_WORD)v18 )
        {
          if ( (v19 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v20 = v19 + (unsigned __int16)v18;
          if ( v20 > 0x7FFFFFFF0000LL || v20 < v19 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v42 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      }
      v21 = *(void **)(a3 + 8);
      v39 = v21;
      if ( qword_140D3B008 )
      {
        if ( v21 )
        {
          v32 = *((_BYTE *)KeGetCurrentThread() + 562);
          Object = 0LL;
          if ( ObReferenceObjectByHandle(v39, 0, (POBJECT_TYPE)CmKeyObjectType, v32, &Object, 0LL) >= 0 )
          {
            v41 = *((_QWORD *)Object + 1);
            ObfDereferenceObject(Object);
          }
        }
      }
      *((_QWORD *)&v47[4] + 1) = a5;
      DWORD2(v47[1]) = a4;
      v22 = CmKeyObjectType;
      CurrentSilo = PsGetCurrentSilo();
      v25 = ObOpenObjectByNameEx(a3, v22, a6, 0LL, v10, v47, CurrentSilo, &Handle);
      v27 = v25 >= 0;
      if ( v25 >= 0 )
      {
        v27 = (unsigned __int64)Handle;
        *a1 = Handle;
      }
      if ( qword_140D3B008 )
      {
        v33 = v41;
        LOBYTE(v33) = 11;
        sub_14042A5E0(v33, v46);
      }
      if ( *((_QWORD *)&v47[5] + 1) )
      {
        sub_140AB4370(v27, v24, v26);
        sub_14071BF40(*((ULONG_PTR *)&v47[5] + 1));
        sub_140AB4260(v35, v34, v36, v37);
      }
      v28 = *(_OWORD **)&v47[9];
      v29 = **(_QWORD **)&v47[9];
      if ( *(_OWORD **)(*(_QWORD *)&v47[9] + 8LL) == &v47[9] && *(_QWORD *)(v29 + 8) == *(_QWORD *)&v47[9] )
      {
        *(_QWORD *)&v47[9] = **(_QWORD **)&v47[9];
        *(_QWORD *)(v29 + 8) = &v47[9];
        if ( v28 == &v47[9] )
        {
LABEL_29:
          sub_140AB42A0(&v47[9], &v47[9]);
          return (unsigned int)v25;
        }
        while ( 1 )
        {
          sub_1406D17F4(v28);
          v28 = *(_OWORD **)&v47[9];
          v31 = **(_QWORD **)&v47[9];
          if ( *(_OWORD **)(*(_QWORD *)&v47[9] + 8LL) != &v47[9] || *(_QWORD *)(v31 + 8) != *(_QWORD *)&v47[9] )
            break;
          *(_QWORD *)&v47[9] = **(_QWORD **)&v47[9];
          *(_QWORD *)(v31 + 8) = &v47[9];
          if ( v28 == &v47[9] )
            goto LABEL_29;
        }
      }
      __fastfail(3u);
    }
    sub_140AB42A0(v15, v14);
    return 3221225714LL;
  }
  else
  {
    if ( qword_140D3B008 )
    {
      LOBYTE(v15) = 11;
      sub_14042A5E0(v15, v46);
    }
    return 3221225865LL;
  }
}
