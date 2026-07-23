/*
 * XREFs of sub_140A6E9A4 @ 0x140A6E9A4
 * Callers:
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140349670 @ 0x140349670 (sub_140349670.c)
 *     sub_140366C48 @ 0x140366C48 (sub_140366C48.c)
 *     sub_140367B44 @ 0x140367B44 (sub_140367B44.c)
 *     PsChargeProcessPoolQuota @ 0x140367C40 (PsChargeProcessPoolQuota.c)
 *     sub_140461DE4 @ 0x140461DE4 (sub_140461DE4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void *__fastcall sub_140A6E9A4(POOL_TYPE a1, ULONG_PTR a2, __int64 a3, int a4)
{
  POOL_TYPE v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v6; // r14d
  ULONG v7; // esi
  struct _KPROCESS *v8; // rbp
  ULONG_PTR v9; // rax
  void *v10; // rbx
  unsigned __int64 v12; // rax
  ULONG_PTR Amount[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v14) = 0;
  Amount[0] = 0LL;
  v4 = a1 & 0xFFFFFFF7;
  CurrentThread = KeGetCurrentThread();
  v6 = a1 & 8;
  v7 = a3;
  if ( (a1 & 8) == 0 )
    v4 = a1;
  v8 = (struct _KPROCESS *)*((_QWORD *)CurrentThread + 23);
  if ( v8 != PsInitialSystemProcess )
    v4 += 8;
  v9 = sub_140349670(v4, a2, a3, a4);
  v10 = (void *)v9;
  if ( v9 )
  {
    if ( (v4 & 8) == 0 )
      return v10;
    if ( dword_140C11770 )
    {
      v12 = sub_140366C48(v9);
      if ( (unsigned int)sub_140461DE4(v12) )
        return v10;
    }
    sub_140367B44((ULONG_PTR)v10, (unsigned int)v4, 0LL, 1, Amount, &v14);
    if ( PsChargeProcessPoolQuota(v8, (POOL_TYPE)(v4 & 1), Amount[0]) >= 0 )
    {
      sub_140367B44((ULONG_PTR)v10, (unsigned int)v4, (__int64)v8, 0, Amount, &v14);
      ObfReferenceObjectWithTag(v8, v7);
      return v10;
    }
    ExFreePoolWithTag(v10, v7);
    v10 = 0LL;
  }
  if ( !v6 )
    RtlRaiseStatus(-1073741670);
  return v10;
}
