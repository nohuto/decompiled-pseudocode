/*
 * XREFs of sub_1407F3718 @ 0x1407F3718
 * Callers:
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 *     sub_1407557F0 @ 0x1407557F0 (sub_1407557F0.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_14036EEAC @ 0x14036EEAC (sub_14036EEAC.c)
 *     sub_140693F68 @ 0x140693F68 (sub_140693F68.c)
 *     sub_1406E8EE8 @ 0x1406E8EE8 (sub_1406E8EE8.c)
 *     sub_1407F336C @ 0x1407F336C (sub_1407F336C.c)
 *     sub_1407F35F8 @ 0x1407F35F8 (sub_1407F35F8.c)
 *     sub_1407F385C @ 0x1407F385C (sub_1407F385C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_1407F3718()
{
  __int64 result; // rax
  __int64 v1; // rbx
  ULONG_PTR *v2; // rdi
  __int64 v3; // rbx
  PVOID v4; // rax
  _RTL_RUN_ONCE v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  PVOID v8; // rax
  int v9; // ebx

  result = sub_1406E8EE8();
  if ( (int)result >= 0 )
  {
    v1 = *((_QWORD *)KeGetCurrentThread() + 23);
    v2 = (ULONG_PTR *)sub_14032A72C(v1);
    result = sub_1407F336C(v2);
    if ( (int)result >= 0 )
    {
      v3 = *(_QWORD *)(v1 + 1368);
      v4 = sub_1402828F0(256, 0x2000uLL, 0x7353694Du);
      if ( v4 )
      {
        *(_QWORD *)(v3 + 760) = 0x10000LL;
        *(_QWORD *)(v3 + 768) = v4;
        *(_DWORD *)(v3 + 4) |= 0x18u;
        sub_1407F35F8(v2, v3 + 192, 1, 0LL);
        v5.Ptr = (PVOID)qword_140C4F608;
        *(_QWORD *)(v3 + 48) = qword_140C4F608;
        v6 = qword_140C4F608 + 0x1FFFFFFFFFLL;
        *(_QWORD *)(v3 + 56) = qword_140C4F608 + 0x1FFFFFFFFFLL;
        result = sub_14036EEAC(v5, v6);
        if ( (int)result >= 0 )
        {
          *(_DWORD *)(v3 + 4) |= 0x80u;
          v7 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
          *(_QWORD *)(v7 + 160) = 0LL;
          *(_QWORD *)(v7 + 168) = 0x2000000LL;
          *(_DWORD *)(v7 + 4) |= 4u;
          v8 = sub_1402828F0(260, 1uLL, 0x6C6F6F50u);
          if ( v8 )
            ExFreePoolWithTag(v8, 0);
          *(_DWORD *)(v3 + 4) |= 1u;
          v9 = sub_1407F385C();
          if ( v9 < 0 )
            sub_140693F68();
          return (unsigned int)v9;
        }
      }
      else
      {
        sub_140693F68();
        return 3221225626LL;
      }
    }
  }
  return result;
}
