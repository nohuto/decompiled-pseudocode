/*
 * XREFs of sub_140700F70 @ 0x140700F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14028E8E0 @ 0x14028E8E0 (sub_14028E8E0.c)
 *     sub_14028ECC8 @ 0x14028ECC8 (sub_14028ECC8.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_140700F70(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  void *v9; // r14
  int v10; // ebx
  __int64 v11; // rax
  char *v12; // rsi
  unsigned int v13; // edi
  __int64 result; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v19[3]; // [rsp+48h] [rbp-70h] BYREF

  BugCheckParameter1 = 0LL;
  memset(v19, 0, sizeof(v19));
  if ( a2 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - a2 < a3 || !a3 )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  v7 = a2 + a3 - 1;
  v8 = *((_QWORD *)CurrentThread + 23);
  if ( a1 == -1LL )
  {
    v9 = (void *)*((_QWORD *)CurrentThread + 23);
    v10 = 0;
  }
  else
  {
    result = sub_140732D40(a1, 0x77576D4Du, (__int64)&BugCheckParameter1, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v9 = (void *)BugCheckParameter1;
    v10 = 0;
    if ( v8 != BugCheckParameter1 )
    {
      sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v19, v16);
      v10 = 1;
    }
  }
  v11 = sub_14030E7C0(a2, 0, (int *)&BugCheckParameter1);
  v12 = (char *)v11;
  if ( !v11 )
  {
    v13 = -1073741585;
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(v11 + 48) & 0x600000) == 0x600000
    && v7 <= (((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) << 12) | 0xFFF) )
  {
    v15 = sub_14028ECC8(v11);
    if ( v15 <= 1 )
    {
LABEL_18:
      sub_14028E8E0(a2, v7, (__int64)v12, 1);
      v13 = 0;
      goto LABEL_9;
    }
    v17 = (v15 << 12) - 1;
    if ( (v17 & a2) == 0 )
    {
      if ( (v17 & a3) != 0 )
      {
        v13 = -1073741583;
        goto LABEL_9;
      }
      goto LABEL_18;
    }
  }
  v13 = -1073741585;
LABEL_9:
  sub_14032E700(v12);
LABEL_10:
  if ( v10 )
    sub_1402D0930((__int64)v19, 0LL);
  if ( a1 != -1LL )
    ObfDereferenceObjectWithTag(v9, 0x77576D4Du);
  return v13;
}
