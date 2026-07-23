/*
 * XREFs of sub_14085BD34 @ 0x14085BD34
 * Callers:
 *     sub_14085BC40 @ 0x14085BC40 (sub_14085BC40.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_1403D97A4 @ 0x1403D97A4 (sub_1403D97A4.c)
 *     sub_1403D981C @ 0x1403D981C (sub_1403D981C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045ECC6 @ 0x14045ECC6 (sub_14045ECC6.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     sub_140851C58 @ 0x140851C58 (sub_140851C58.c)
 *     sub_140851EBC @ 0x140851EBC (sub_140851EBC.c)
 *     sub_1409B3320 @ 0x1409B3320 (sub_1409B3320.c)
 *     sub_1409B3358 @ 0x1409B3358 (sub_1409B3358.c)
 */

__int64 __fastcall sub_14085BD34(int a1, ACCESS_MASK a2, char a3, __int64 a4, __int64 a5, _QWORD *a6, __int64 a7)
{
  int v10; // r8d
  int inserted; // edi
  char v12; // si
  char v13; // r8
  char v14; // r14
  _QWORD *v16; // rcx
  HANDLE v17; // rax
  PVOID Object; // [rsp+58h] [rbp-49h]
  HANDLE Handle; // [rsp+60h] [rbp-41h] BYREF
  __int64 v21; // [rsp+68h] [rbp-39h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-31h] BYREF

  v21 = a7;
  Handle = 0LL;
  v10 = a1;
  LOBYTE(a1) = a3;
  memset(&ApcState, 0, sizeof(ApcState));
  Object = 0LL;
  inserted = ObCreateObject(a1, (int)PsPartitionType, v10, a3);
  if ( inserted < 0 )
    return (unsigned int)inserted;
  memset(Object, 0, 0x80uLL);
  MEMORY[0x18] = 2LL;
  ObfReferenceObjectWithTag(0LL, 0x64726148u);
  MEMORY[0x20] = 1LL;
  v12 = a5 & 1;
  MEMORY[0x60] = 0LL;
  if ( a4 )
  {
    sub_14045ECC6(a4);
    MEMORY[0x38] = a4;
    v13 = a5 & 1;
    if ( v12 )
      goto LABEL_4;
LABEL_13:
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    inserted = sub_1409B3358(104LL, 112LL);
    KeUnstackDetachProcess(&ApcState);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    v14 = a5 & 2;
    inserted = sub_140851EBC(0LL);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    goto LABEL_5;
  }
  v13 = a5 & 1;
  if ( !v12 )
  {
    sub_14045ECC6((__int64)qword_140D06C40);
    MEMORY[0x38] = qword_140D06C40;
    goto LABEL_13;
  }
LABEL_4:
  v14 = 1;
  v12 = v13;
LABEL_5:
  inserted = sub_1403D981C(0LL, v14);
  if ( inserted >= 0 )
  {
    sub_1403D97A4(0LL);
    if ( v12 )
    {
      MEMORY[0x78] |= 1u;
      *a6 = 0LL;
      return 0;
    }
    inserted = sub_140851C58(MEMORY[0x10]);
    if ( inserted >= 0 )
    {
      if ( (a5 & 2) != 0 )
        MEMORY[0x78] |= 1u;
      inserted = ObInsertObject(0LL, 0LL, a2, 0, 0LL, &Handle);
      if ( inserted >= 0 )
      {
        v16 = (_QWORD *)v21;
        v17 = Handle;
        *a6 = 0LL;
        *v16 = v17;
        return 0;
      }
    }
  }
  return (unsigned int)inserted;
}
