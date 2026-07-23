/*
 * XREFs of sub_140845A60 @ 0x140845A60
 * Callers:
 *     sub_140845CD8 @ 0x140845CD8 (sub_140845CD8.c)
 * Callees:
 *     sub_14023A8D0 @ 0x14023A8D0 (sub_14023A8D0.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     sub_1403CD208 @ 0x1403CD208 (sub_1403CD208.c)
 *     sub_1403CD3EC @ 0x1403CD3EC (sub_1403CD3EC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140515358 @ 0x140515358 (sub_140515358.c)
 *     sub_140846200 @ 0x140846200 (sub_140846200.c)
 *     sub_140846BEC @ 0x140846BEC (sub_140846BEC.c)
 */

__int64 __fastcall sub_140845A60(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool v4; // cc
  char v5; // si
  char v6; // cl
  unsigned int v7; // r15d
  int v8; // ebx
  char v9; // r12
  char v10; // r14
  char v11; // al
  unsigned int v12; // esi
  unsigned int v13; // ebp
  __int64 v14; // r13
  __int64 v15; // r12
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  __int64 *v19; // rax
  __int64 **v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  char v24; // al
  unsigned int v26; // edx
  unsigned int v27; // r8d
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  int v30; // ebx
  bool v31; // r13
  __int64 v32; // rax
  char v33; // [rsp+40h] [rbp-58h]
  PMDL Mdl; // [rsp+48h] [rbp-50h]
  char v35; // [rsp+A0h] [rbp+8h]
  __int64 v36; // [rsp+A8h] [rbp+10h]
  unsigned int v38; // [rsp+B8h] [rbp+20h] BYREF

  v36 = a2;
  v4 = *(_DWORD *)a1 <= 2u;
  LOBYTE(v38) = 0;
  Mdl = 0LL;
  if ( !v4 )
    return 0LL;
  if ( *(_BYTE *)(a1 + 4) && (*(_DWORD *)(a1 + 20) != 1 || *(_DWORD *)(a1 + 16) > 7u) )
  {
    v5 = 0;
    v35 = 0;
  }
  else
  {
    v5 = 1;
    v35 = 1;
    if ( !(unsigned __int8)sub_14042A5E0(a1, a2) )
      return 0LL;
    a2 = v36;
  }
  v6 = *(_BYTE *)(a1 + 4);
  v7 = *(_DWORD *)(a1 + 32) & 0x7FFFFFFF;
  if ( v6 && *(_BYTE *)(a1 + 5) )
    *(_BYTE *)(a1 + 8) = 1;
  if ( *(_BYTE *)(a1 + 11) )
  {
    *(_BYTE *)(a1 + 8) = 1;
  }
  else if ( !*(_BYTE *)(a1 + 8) )
  {
    v8 = 0;
    v9 = 0;
    if ( !v6 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v8 = 1;
LABEL_11:
  v9 = 1;
LABEL_12:
  v33 = v9;
  if ( v5 || !a2 )
  {
    v10 = 1;
    goto LABEL_15;
  }
  sub_140846200(0LL, a2, &v38);
  v10 = v38;
  if ( !(_BYTE)v38 )
    return 0LL;
LABEL_15:
  v11 = *(_BYTE *)(a1 + 5);
  if ( v11 && v10 && ((unsigned __int64)qword_140C4E038 < 0x100000000LL || *(_BYTE *)(a1 + 11)) )
  {
    v12 = 0;
    v38 = 0;
    v13 = 0;
  }
  else
  {
    if ( v8 )
    {
      v26 = 64;
      if ( v11 )
        v26 = v10 != 0 ? 512 : 64;
    }
    else
    {
      v26 = 16;
    }
    v12 = (v7 >> 12) + ((v7 & 0xFFF) != 0) + 1;
    v38 = v12;
    v27 = v12;
    if ( v12 > v26 )
    {
      v12 = v26;
      v38 = v26;
      v27 = v26;
    }
    v28 = dword_140C4E018;
    v13 = v27;
    if ( !v8 )
      v28 = dword_140C4DF38;
    if ( !v9 )
    {
      v29 = v28 >> 13;
      if ( v27 > v29 )
      {
        v12 = v29;
        v38 = v29;
        v13 = v29;
      }
    }
  }
  if ( !v10 )
  {
    Mdl = IoAllocateMdl(0LL, v13 << 12, 0, 0, 0LL);
    if ( !Mdl )
      return 0LL;
  }
  v14 = *(unsigned int *)(a1 + 16);
  v15 = v14;
  if ( v35 )
  {
    v23 = *(_QWORD *)(qword_140C54B98 + 8 * v14);
    if ( v23 )
    {
      if ( v13 > *(_DWORD *)(v23 + 224) )
        *(_DWORD *)(v23 + 224) = v12;
      ObReferenceObjectByPointer((PVOID)v23, 0x20000u, qword_140D06AF8, 0);
      goto LABEL_31;
    }
  }
  KeWaitForSingleObject(&stru_140C4BD00, WrExecutive, 0, 0, 0LL);
  if ( v35 )
  {
    v23 = *(_QWORD *)(qword_140C54B98 + 8 * v14);
    if ( v23 )
    {
      if ( v13 > *(_DWORD *)(v23 + 224) )
        *(_DWORD *)(v23 + 224) = v12;
      ObReferenceObjectByPointer((PVOID)v23, 0x20000u, qword_140D06AF8, 0);
      goto LABEL_30;
    }
  }
  if ( v36 )
  {
    v19 = sub_1403CD208(v36);
    v20 = (__int64 **)v19;
    if ( v19 )
    {
      v30 = sub_14023A8D0((__int64)v19);
      v31 = sub_140515358(v20[63]);
      ObfDereferenceObject(v20);
      if ( v30 != 2 && !v31 )
        goto LABEL_72;
      LODWORD(v14) = v15;
    }
  }
  LOBYTE(v18) = *(_BYTE *)(a1 + 5);
  LOBYTE(v17) = *(_BYTE *)(a1 + 11);
  LOBYTE(v16) = *(_BYTE *)(a1 + 8);
  v21 = sub_140846BEC(v12, v16, v17, v18, *(_BYTE *)(a1 + 4), v33, v10, (__int64)&v38);
  v23 = v21;
  if ( !v21 )
  {
LABEL_72:
    KeSetEvent(&stru_140C4BD00, 0, 0);
    return 0LL;
  }
  *(_BYTE *)(v21 + 516) = 1;
  if ( v35 )
  {
    *(_QWORD *)(qword_140C54B98 + 8 * v15) = v21;
    v32 = sub_14042A5E0(a1, v22);
    if ( v32 )
    {
      *(_QWORD *)(v23 + 424) = v32;
      ObReferenceObjectByPointer((PVOID)v23, 0x20000u, qword_140D06AF8, 0);
      goto LABEL_27;
    }
    goto LABEL_72;
  }
LABEL_27:
  if ( v38 )
  {
    *(_DWORD *)(v23 + 224) = v38;
    v24 = 1;
  }
  else
  {
    *(_DWORD *)(v23 + 224) = (v7 >> 12) + ((v7 & 0xFFF) != 0) + 1;
    v24 = 0;
  }
  *(_BYTE *)(v23 + 432) = v24;
  *(_QWORD *)(v23 + 304) = 0LL;
LABEL_30:
  KeSetEvent(&stru_140C4BD00, 0, 0);
LABEL_31:
  *(_BYTE *)(v23 + 436) = 0;
  if ( *(_DWORD *)a1 )
    *(_BYTE *)(v23 + 436) = *(_BYTE *)(a1 + 9);
  *a3 = *(_DWORD *)(v23 + 224);
  *(_QWORD *)(v23 + 296) = Mdl;
  if ( v35 )
  {
    *(_DWORD *)(v23 + 372) = v14;
  }
  else
  {
    *(_QWORD *)(v23 + 520) = v36;
    sub_1403CD3EC(v23);
  }
  return v23;
}
