/*
 * XREFs of sub_140B2E208 @ 0x140B2E208
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B2E208()
{
  ULONG MaximumProcessorCount; // ebx
  unsigned int v1; // r14d
  __int64 Pool2; // rsi
  unsigned int v3; // ebp
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rdx
  ULONG *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  PVOID *v13; // rcx
  PVOID v14; // rcx
  PVOID *v15; // rcx
  PVOID v16; // rcx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v1 = 3 * (MaximumProcessorCount * dword_140C0C64C + 8);
  qword_140D06998 = (PVOID)ExAllocatePool2(64LL, v1, 0x704D5050u);
  if ( qword_140D06998 )
  {
    Pool2 = ExAllocatePool2(64LL, MaximumProcessorCount, 0x704D5050u);
    if ( Pool2 )
    {
      v3 = 2 * dword_140C0C64C;
      v4 = ExAllocatePool2(64LL, (unsigned int)(2 * dword_140C0C64C), 0x704D5050u);
      if ( v4 )
      {
        v5 = qword_140D06998;
        *((_QWORD *)qword_140D06998 + 1) = Pool2;
        v5[2] = v4;
        qword_140D06A70 = (PVOID)ExAllocatePool2(64LL, v1, 0x704D5050u);
        if ( qword_140D06A70 )
        {
          v6 = ExAllocatePool2(64LL, MaximumProcessorCount, 0x704D5050u);
          if ( v6 )
          {
            v7 = ExAllocatePool2(64LL, v3, 0x704D5050u);
            if ( v7 )
            {
              v8 = qword_140D06A70;
              v9 = (ULONG *)qword_140D06998;
              *((_QWORD *)qword_140D06A70 + 2) = v7;
              v10 = dword_140C0C64C;
              v8[1] = v6;
              *v9 = MaximumProcessorCount;
              *(_DWORD *)v8 = MaximumProcessorCount;
              v11 = 0;
              v9[1] = v10;
              *((_DWORD *)v8 + 1) = v10;
              return v11;
            }
          }
        }
      }
    }
    if ( qword_140D06998 )
    {
      ExFreePoolWithTag(*((PVOID *)qword_140D06998 + 2), 0x704D5050u);
      v13 = (PVOID *)qword_140D06998;
      *((_QWORD *)qword_140D06998 + 2) = 0LL;
      ExFreePoolWithTag(v13[1], 0x704D5050u);
      v14 = qword_140D06998;
      *((_QWORD *)qword_140D06998 + 1) = 0LL;
      ExFreePoolWithTag(v14, 0x704D5050u);
      qword_140D06998 = 0LL;
    }
  }
  v11 = -1073741670;
  if ( qword_140D06A70 )
  {
    ExFreePoolWithTag(*((PVOID *)qword_140D06A70 + 1), 0x704D5050u);
    v15 = (PVOID *)qword_140D06A70;
    *((_QWORD *)qword_140D06A70 + 1) = 0LL;
    ExFreePoolWithTag(v15[2], 0x704D5050u);
    v16 = qword_140D06A70;
    *((_QWORD *)qword_140D06A70 + 2) = 0LL;
    ExFreePoolWithTag(v16, 0x704D5050u);
    qword_140D06A70 = 0LL;
  }
  return v11;
}
