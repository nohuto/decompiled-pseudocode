/*
 * XREFs of sub_140613B00 @ 0x140613B00
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

char sub_140613B00()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rax
  __int64 *i; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rdi
  __int64 *j; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  v2 = sub_140604844(264);
  if ( !v2 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v1 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v2 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v5 = *((_DWORD *)v2 + 3);
  if ( (v5 & 0x18) == 0 )
  {
    if ( (v5 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v6 = sub_140628C98(v1, v0, v3, v4);
    goto LABEL_12;
  }
  v6 = retaddr;
LABEL_12:
  v14 = v6;
LABEL_13:
  for ( i = (__int64 *)v2[4]; i != v2 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v14, v0);
  }
LABEL_18:
  CurrentThread = KeGetCurrentThread();
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
  {
    CurrentThread = (struct _KTHREAD *)((char *)CurrentThread + 152);
    if ( *(struct _KTHREAD **)CurrentThread != CurrentThread )
      LOBYTE(CurrentThread) = KiCheckForKernelApcDelivery();
  }
  if ( v2 )
  {
    v10 = v2 + 6;
    for ( j = (__int64 *)v2[6]; j != v10; j = (__int64 *)*j )
    {
      LOBYTE(CurrentThread) = (_BYTE)j - 16;
      if ( j != (__int64 *)16 )
        LOBYTE(CurrentThread) = sub_14042A5E0(&v14, v0);
    }
  }
  return (char)CurrentThread;
}
