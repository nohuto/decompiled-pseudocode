/*
 * XREFs of SeCreateClientSecurityFromSubjectContextEx @ 0x1405F5070
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F8A20 @ 0x1402F8A20 (sub_1402F8A20.c)
 *     sub_140727350 @ 0x140727350 (sub_140727350.c)
 */

__int64 __fastcall SeCreateClientSecurityFromSubjectContextEx(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  void *v4; // rbx
  char v5; // r12
  __int64 v6; // r15
  int v10; // r8d
  int v11; // r14d
  __int64 v12; // rbp
  int v13; // edi
  char v15; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+10h]

  v16 = a2;
  v4 = *(void **)a1;
  v5 = 0;
  v6 = 0LL;
  v15 = 0;
  if ( !v4 )
    v4 = *(void **)(a1 + 16);
  ObfReferenceObjectWithTag(v4, 0x63436553u);
  if ( *(_QWORD *)a1 )
  {
    v11 = 2;
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1104LL);
    sub_1402F8A20(v12, *(_QWORD *)(*(_QWORD *)a1 + 1104LL), &v15);
    if ( !v15 )
    {
      v5 = 1;
      v6 = v12;
    }
  }
  else
  {
    v11 = 1;
  }
  LOBYTE(v10) = a3;
  v13 = sub_140727350((_DWORD)v4, v16, v10, v11, 0, *(_DWORD *)(a1 + 8), 1, 0LL, v5, v6, a4);
  if ( v13 < 0 || !*(_BYTE *)(a4 + 8) )
    ObfDereferenceObjectWithTag(v4, 0x63436553u);
  return (unsigned int)v13;
}
