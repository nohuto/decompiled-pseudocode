/*
 * XREFs of SeCreateClientSecurityEx @ 0x1407275D0
 * Callers:
 *     sub_14066B514 @ 0x14066B514 (sub_14066B514.c)
 *     sub_1407A9720 @ 0x1407A9720 (sub_1407A9720.c)
 *     sub_1407B0C70 @ 0x1407B0C70 (sub_1407B0C70.c)
 * Callees:
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_1402F8EF0 @ 0x1402F8EF0 (sub_1402F8EF0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_140727350 @ 0x140727350 (sub_140727350.c)
 *     sub_14072A6B0 @ 0x14072A6B0 (sub_14072A6B0.c)
 *     sub_1409CC028 @ 0x1409CC028 (sub_1409CC028.c)
 */

__int64 __fastcall SeCreateClientSecurityEx(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v9; // rdi
  _QWORD *v10; // rsi
  int v11; // r14d
  char v12; // r15
  __int64 result; // rax
  unsigned int v14; // edi
  __int64 CurrentServerSilo; // rbx
  unsigned int v16; // ebx
  char v17; // [rsp+60h] [rbp-38h] BYREF
  char v18; // [rsp+61h] [rbp-37h] BYREF
  _BYTE v19[2]; // [rsp+62h] [rbp-36h] BYREF
  unsigned int v20; // [rsp+64h] [rbp-34h] BYREF
  __int64 v21; // [rsp+68h] [rbp-30h] BYREF
  char v22; // [rsp+A0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v17 = 0;
  v20 = 0;
  v22 = 0;
  v18 = 0;
  v21 = 0LL;
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    v9 = *((_QWORD *)CurrentThread + 23);
  else
    v9 = *(_QWORD *)(a1 + 544);
  v10 = (_QWORD *)sub_14072A6B0(a1, 0LL, 1665361235LL, v19, &v17, &v20, &v22);
  if ( v10 )
  {
    v12 = v17;
    v11 = 2;
  }
  else
  {
    v10 = (_QWORD *)sub_140347920(v9, 0x63436553u);
    v11 = 1;
    v12 = 0;
    v22 = *(_BYTE *)(v9 + 2170);
  }
  sub_1402F8EF0(v10[138], (__int64)&v22, &v18, &v21);
  result = sub_140727350(v10, a2, a3, v11, v12, v20, 1, a1, v18, v21, a4);
  v14 = result;
  if ( (int)result < 0 || !*(_BYTE *)(a4 + 8) )
  {
    ObfDereferenceObjectWithTag(v10, 0x63436553u);
    return v14;
  }
  if ( *(PEPROCESS *)(a1 + 544) != PsInitialSystemProcess )
    return result;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
    return v14;
  result = sub_1409CC028(a4, CurrentServerSilo);
  v16 = result;
  if ( (int)result < 0 )
  {
    ObfDereferenceObjectWithTag(v10, 0x63436553u);
    return v16;
  }
  return result;
}
