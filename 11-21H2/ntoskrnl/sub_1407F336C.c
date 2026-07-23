/*
 * XREFs of sub_1407F336C @ 0x1407F336C
 * Callers:
 *     sub_1407F3718 @ 0x1407F3718 (sub_1407F3718.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_14036D9B8 @ 0x14036D9B8 (sub_14036D9B8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407F3534 @ 0x1407F3534 (sub_1407F3534.c)
 *     sub_14096DC98 @ 0x14096DC98 (sub_14096DC98.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407F336C(ULONG_PTR *a1)
{
  void *v2; // rbp
  __int64 v3; // r15
  unsigned __int32 v4; // eax
  unsigned __int32 v5; // esi
  unsigned __int64 v6; // rdi
  __int64 *v7; // rbx
  PVOID v8; // rax
  int v9; // eax
  void *CurrentServerSilo; // rax
  LARGE_INTEGER v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int32 v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+44h] [rbp-34h]
  __int64 **v16; // [rsp+48h] [rbp-30h] BYREF
  int v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+54h] [rbp-24h]

  v2 = 0LL;
  v3 = *((_QWORD *)KeGetCurrentThread() + 23);
  v4 = sub_1407F3534();
  v5 = v4;
  if ( v4 == -1 )
    return 3221225495LL;
  v6 = v4 != 0 ? 1024LL : 20LL;
  if ( !(unsigned int)sub_1402821F4(a1, v6, 0LL) )
  {
LABEL_15:
    sub_14096DC98(v5);
    return 3221225495LL;
  }
  v7 = (__int64 *)sub_1402828F0(64, 0x3C0uLL, 0x7353694Du);
  if ( !v7 || (v8 = sub_1402828F0(64, 0x4000uLL, 0x7353694Du), (v2 = v8) == 0LL) )
  {
    sub_140216E18((__int64)a1, v6);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
    }
    goto LABEL_15;
  }
  v7[112] = (__int64)v8;
  v9 = dword_140D3CA30;
  *(_DWORD *)v7 = 1;
  *((_DWORD *)v7 + 22) = v9;
  *((_DWORD *)v7 + 2) = v5;
  v7[111] = KeQueryInterruptTimePrecise(&v12);
  *((_WORD *)v7 + 183) = *(_WORD *)a1;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1[22] + 24)) <= 1 )
    __fastfail(0xEu);
  v7[38] = v6;
  v7[94] = 0LL;
  v7[10] = 0LL;
  v7[3] = (__int64)(v7 + 2);
  v7[2] = (__int64)(v7 + 2);
  *((_DWORD *)v7 + 3) = 1;
  v7[23] = _InterlockedIncrement64(&qword_140C0BAF8);
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  v7[110] = (__int64)CurrentServerSilo;
  if ( CurrentServerSilo )
  {
    ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
    _InterlockedCompareExchange(*((volatile signed __int32 **)sub_140204738(v7[110]) + 165), v5, -1);
  }
  sub_14036D9B8(v3, (__int64)v7);
  *((_BYTE *)v7 + 376) = v7[47] & 0xF8 | 1;
  if ( (DWORD1(xmmword_140D06900[0]) & 0x400000) != 0 )
  {
    v15 = 0;
    v18 = 0;
    v16 = &v13;
    v14 = v5;
    v13 = v7;
    v17 = 12;
    sub_14035EDE4((__int64)&v16, 1u, 0x20400000u, 0x24Bu, 0x401803u);
  }
  return 0LL;
}
