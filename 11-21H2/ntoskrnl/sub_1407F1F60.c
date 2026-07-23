/*
 * XREFs of sub_1407F1F60 @ 0x1407F1F60
 * Callers:
 *     sub_1407F0C38 @ 0x1407F0C38 (sub_1407F0C38.c)
 * Callees:
 *     sub_140208AD8 @ 0x140208AD8 (sub_140208AD8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407F1F60(unsigned __int16 *a1, unsigned __int16 *a2)
{
  PVOID *v2; // rbx
  unsigned int v3; // r8d
  unsigned int v4; // ebp
  __int64 Pool2; // r15
  PVOID *v8; // r14
  __int64 result; // rax

  v2 = (PVOID *)(a1 + 4);
  v3 = *a2 + 2;
  v4 = 0xFFFF;
  if ( v3 > 0xFFFF )
  {
    if ( *v2 )
    {
      v8 = (PVOID *)(a1 + 4);
      goto LABEL_7;
    }
  }
  else
  {
    v4 = *a2 + 2;
    if ( *v2 )
    {
      v8 = (PVOID *)(a1 + 4);
      if ( a1[1] >= v3 )
        goto LABEL_7;
    }
  }
  Pool2 = ExAllocatePool2(256LL, v4, 1414616912LL);
  v8 = v2;
  if ( Pool2 )
  {
    if ( *v2 )
      ExFreePoolWithTag(*v2, 0);
    *v2 = (PVOID)Pool2;
    *a1 = 0;
    a1[1] = v4;
  }
LABEL_7:
  result = sub_140208AD8(a1, a2);
  if ( (int)result >= 0 )
    *((_WORD *)*v8 + ((unsigned __int64)*a1 >> 1)) = 0;
  return result;
}
