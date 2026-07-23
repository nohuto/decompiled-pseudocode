/*
 * XREFs of sub_1407DB734 @ 0x1407DB734
 * Callers:
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     sub_14025D2C4 @ 0x14025D2C4 (sub_14025D2C4.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14035FE5C @ 0x14035FE5C (sub_14035FE5C.c)
 *     sub_14035FF68 @ 0x14035FF68 (sub_14035FF68.c)
 *     sub_1406F80E4 @ 0x1406F80E4 (sub_1406F80E4.c)
 *     sub_14070AC28 @ 0x14070AC28 (sub_14070AC28.c)
 *     sub_14071147C @ 0x14071147C (sub_14071147C.c)
 *     sub_1407D936C @ 0x1407D936C (sub_1407D936C.c)
 *     sub_1407DBF04 @ 0x1407DBF04 (sub_1407DBF04.c)
 */

__int64 __fastcall sub_1407DB734(char a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  void *v6; // rcx

  _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    sub_14071147C((_QWORD *)a2, 3);
    if ( (xmmword_140D06900[0] & 1) != 0 )
      sub_14070AC28(a2, 770);
    result = *(unsigned int *)(a2 + 2172);
    if ( (result & 1) == 0 || *(_QWORD *)(a2 + 2240) )
    {
      --*((_WORD *)CurrentThread + 242);
      sub_1406F80E4((struct _EX_RUNDOWN_REF *)a2, 0LL, 0);
      result = (__int64)sub_1402AC800((__int64)CurrentThread);
    }
  }
  v6 = *(void **)(a2 + 1464);
  if ( !v6 )
    goto LABEL_7;
  if ( v6 != (void *)1 )
  {
    result = ObfDereferenceObject(v6);
LABEL_7:
    *(_QWORD *)(a2 + 1464) = 1LL;
  }
  if ( a1 )
  {
    if ( *(int *)(a2 + 1124) < 0 )
      sub_14025D2C4((__int64)v6);
    sub_1407DBF04(a2);
    sub_14035FF68(a2, 0LL, 1);
    if ( dword_140C4EEF0 )
      sub_1407D936C(a2, 2, 0LL);
    return sub_14035FE5C(a2);
  }
  return result;
}
