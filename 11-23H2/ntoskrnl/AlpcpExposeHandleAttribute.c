/*
 * XREFs of AlpcpExposeHandleAttribute @ 0x14073C624
 * Callers:
 *     AlpcpExposeAttributes @ 0x14073BF90 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute32 @ 0x1407D195C (AlpcpExposeHandleAttribute32.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     AlpcpReferenceConnectedPort @ 0x14071D2C8 (AlpcpReferenceConnectedPort.c)
 *     AlpcpDereferenceBlobEx @ 0x14071EB3C (AlpcpDereferenceBlobEx.c)
 *     ObCompleteObjectDuplication @ 0x1407BF804 (ObCompleteObjectDuplication.c)
 */

__int64 __fastcall AlpcpExposeHandleAttribute(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // r13
  _QWORD *v6; // r15
  _DWORD *v7; // rsi
  char PreviousMode; // bl
  int v10; // r14d
  void *v11; // rdi
  int v12; // edx
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r10
  __int128 v16; // [rsp+58h] [rbp-40h] BYREF
  __int64 v17; // [rsp+68h] [rbp-30h] BYREF

  v5 = a3;
  v6 = (_QWORD *)(a2 + 152);
  v7 = *(_DWORD **)(a2 + 152);
  if ( !v7 )
    return 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = 0;
  v11 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 2 )
  {
    v14 = AlpcpReferenceConnectedPort(*(_QWORD *)(a2 + 24));
    v11 = (void *)v14;
    if ( !v14 )
    {
      v13 = -1073741769;
      goto LABEL_8;
    }
    a1 = v14;
  }
  v12 = *(_DWORD *)(a1 + 256);
  if ( (v12 & 0x80000) == 0 )
    goto LABEL_22;
  v16 = 0LL;
  v17 = 0LL;
  if ( (v12 & 0x2000000) == 0 )
  {
    if ( v7[1] <= 1u )
    {
      if ( (*v7 & *(_DWORD *)(a1 + 320)) == 0 )
      {
        v13 = -1073741788;
        goto LABEL_8;
      }
      v15 = 0LL;
      if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
        v15 = *(_QWORD *)(a1 + 24);
      if ( v15 )
      {
        LODWORD(v17) = *v7 & *(_DWORD *)(a1 + 320);
        LOBYTE(a3) = PreviousMode;
        v13 = ObCompleteObjectDuplication(v7 + 2, v15, a3, (char *)&v16 + 8, (char *)&v17 + 4);
        if ( v13 < 0 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
LABEL_22:
    v13 = -1073741790;
    goto LABEL_8;
  }
  LODWORD(v16) = 0x40000;
  LODWORD(v17) = v7[1];
  v10 = 1;
LABEL_7:
  v13 = 0;
  *(_OWORD *)v5 = v16;
  *(_QWORD *)(v5 + 16) = v17;
  *a4 |= 0x10000000u;
LABEL_8:
  if ( v11 )
    ObfDereferenceObject(v11);
  if ( !v10 )
  {
    AlpcpDereferenceBlobEx((ULONG_PTR)v7, 1);
    *v6 = 0LL;
  }
  return (unsigned int)v13;
}
