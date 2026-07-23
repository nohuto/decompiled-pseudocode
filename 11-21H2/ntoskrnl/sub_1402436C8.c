/*
 * XREFs of sub_1402436C8 @ 0x1402436C8
 * Callers:
 *     sub_1402AC010 @ 0x1402AC010 (sub_1402AC010.c)
 *     PsChargeProcessPoolQuota @ 0x140367C40 (PsChargeProcessPoolQuota.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 * Callees:
 *     sub_140243794 @ 0x140243794 (sub_140243794.c)
 *     sub_14024393C @ 0x14024393C (sub_14024393C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405E039C @ 0x1405E039C (sub_1405E039C.c)
 */

char __fastcall sub_1402436C8(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  int *v7; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rax
  signed __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  char v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h]

  v18 = 0LL;
  v17 = 0;
  v7 = &dword_140C1BF00[14 * a1];
  sub_14024393C(v7, &v17);
  v11 = *(_QWORD *)(a2 + 64);
  if ( a3 + a4 <= v11 )
  {
    LOBYTE(v10) = v17;
    sub_140243794(v7, v10);
    *a5 = v11;
    return 1;
  }
  if ( (unsigned __int8)sub_14042A5E0(a1, *(_QWORD *)(a2 + 64))
    || sub_1405E039C(a1, v7) && (unsigned __int8)sub_14042A5E0(a1, v11) )
  {
    v13 = v18 - v11;
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), v18 - v11);
    LOBYTE(v12) = v17;
    v15 = v13 + v14;
    sub_140243794(v7, v12);
    *a5 = v15;
    return 1;
  }
  LOBYTE(v12) = v17;
  sub_140243794(v7, v12);
  *a5 = v11;
  return 0;
}
