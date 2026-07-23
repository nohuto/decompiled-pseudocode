/*
 * XREFs of sub_1407B88C0 @ 0x1407B88C0
 * Callers:
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_1406BF9AC @ 0x1406BF9AC (sub_1406BF9AC.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_14070A1B8 @ 0x14070A1B8 (sub_14070A1B8.c)
 *     sub_14079D6B0 @ 0x14079D6B0 (sub_14079D6B0.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 *     sub_140978F40 @ 0x140978F40 (sub_140978F40.c)
 *     sub_140980DD8 @ 0x140980DD8 (sub_140980DD8.c)
 * Callees:
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_1402AC010 @ 0x1402AC010 (sub_1402AC010.c)
 *     sub_14030B440 @ 0x14030B440 (sub_14030B440.c)
 *     sub_14030B538 @ 0x14030B538 (sub_14030B538.c)
 *     sub_14030B6D0 @ 0x14030B6D0 (sub_14030B6D0.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_1407B8A60 @ 0x1407B8A60 (sub_1407B8A60.c)
 *     sub_1407BDB60 @ 0x1407BDB60 (sub_1407BDB60.c)
 *     sub_140977F8C @ 0x140977F8C (sub_140977F8C.c)
 */

__int64 __fastcall sub_1407B88C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 v5; // r15
  int v6; // esi
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR *v11; // rax
  unsigned __int64 v12; // r9
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-28h]

  v2 = *(unsigned __int8 *)(a1 + 32);
  v14 = 0LL;
  v5 = (*(unsigned int *)(a1 + 24) | (unsigned __int64)(v2 << 32)) << 12;
  v13 = 0LL;
  sub_14030B440(a1, (__int64)&v13);
  if ( v14 && (v6 = PsChargeProcessNonPagedPoolQuota(a2, v14), v6 < 0) )
  {
    v14 = 0LL;
    v13 = 0uLL;
  }
  else if ( !*((_QWORD *)&v13 + 1)
         || (PEPROCESS)a2 == PsInitialSystemProcess
         || (v6 = sub_1402AC010(*(_QWORD *)(a2 + 1384), a2, 1, *((unsigned __int64 *)&v13 + 1)), v6 >= 0) )
  {
    if ( !(_QWORD)v13 || (v11 = (ULONG_PTR *)sub_14032A72C(a2), (unsigned int)sub_1402821F4(v11, v12, 128LL)) )
    {
      v7 = *(unsigned int *)(a1 + 52);
      LODWORD(v7) = v7 & 0x7FFFFFFF;
      v8 = v7 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
      if ( v8 >= 0x7FFFFFFFDLL && v8 != 0x7FFFFFFFELL
        || (CurrentThread = KeGetCurrentThread(),
            sub_14030B6D0((__int64)CurrentThread, a2),
            v6 = sub_1407BDB60(a1, v5),
            sub_14030B538((__int64)CurrentThread, a2),
            v6 >= 0) )
      {
        sub_1407B8A60(a1);
        return 0LL;
      }
    }
    else
    {
      v6 = -1073741670;
      *(_QWORD *)&v13 = 0LL;
    }
  }
  else
  {
    v13 = 0uLL;
  }
  sub_140977F8C(&v13);
  return (unsigned int)v6;
}
