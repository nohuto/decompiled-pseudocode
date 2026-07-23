/*
 * XREFs of sub_140559C3C @ 0x140559C3C
 * Callers:
 *     sub_140559770 @ 0x140559770 (sub_140559770.c)
 * Callees:
 *     sub_140220664 @ 0x140220664 (sub_140220664.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_140559C3C(__int64 a1, __int64 a2)
{
  char v2; // si
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  struct _KTHREAD *v9; // rax
  bool v10; // zf
  __int64 *i; // rbx
  __int16 v13; // [rsp+28h] [rbp-50h] BYREF
  int v14; // [rsp+2Ah] [rbp-4Eh]
  __int16 v15; // [rsp+2Eh] [rbp-4Ah]
  __int64 v16; // [rsp+30h] [rbp-48h]
  int v17; // [rsp+38h] [rbp-40h]

  v16 = a1;
  v14 = 0;
  v2 = 0;
  v15 = 0;
  v17 = a2;
  v13 = 24;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    v2 = 1;
  }
  v4 = KeGetCurrentThread();
  v5 = 0LL;
  _disable();
  v6 = *((unsigned __int8 *)v4 + 792);
  if ( *((_BYTE *)v4 + 792) || (v6 = sub_14029F6A8((__int64)&qword_140C46F90, (__int64)v4)) != 0 )
  {
    _BitScanForward((unsigned int *)&v7, v6);
    *((_BYTE *)v4 + 792) = v6 & ~(1 << v7);
    _enable();
    v5 = (unsigned __int64)v4 + 96 * v7 + 1696;
    if ( (unsigned __int64)&qword_140C46F90 - qword_140C50630 < 0x8000000000LL )
      v8 = sub_140287F30(*((_QWORD *)v4 + 23));
    else
      v8 = -1;
    *(_DWORD *)(v5 + 8) = v8;
    *(_QWORD *)v5 = (unsigned __int64)&qword_140C46F90 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C46F90, 17LL, 0LL)
    || (LOBYTE(v9) = sub_140220664((signed __int64 *)&qword_140C46F90, 0), (_BYTE)v9) )
  {
    if ( v5 )
      *(_BYTE *)(v5 + 18) = 1;
    for ( i = (__int64 *)qword_140C46FB0; i != &qword_140C46FB0; i = (__int64 *)*i )
      sub_14042A5E0(&v13, a2);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C46F90, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C46F90);
    LOBYTE(v9) = sub_1402AFC00((ULONG_PTR)&qword_140C46F90);
    if ( v2 == 1 )
    {
      v9 = KeGetCurrentThread();
      v10 = (*((_WORD *)v9 + 243))++ == 0xFFFF;
      if ( v10 )
        goto LABEL_25;
    }
  }
  else
  {
    if ( v5 )
      LOBYTE(v9) = sub_140353BB0((ULONG_PTR)&qword_140C46F90, v5);
    if ( v2 == 1 )
    {
      v9 = KeGetCurrentThread();
      v10 = (*((_WORD *)v9 + 243))++ == 0xFFFF;
      if ( v10 )
      {
LABEL_25:
        v9 = (struct _KTHREAD *)((char *)v9 + 152);
        if ( *(struct _KTHREAD **)v9 != v9 )
          LOBYTE(v9) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v9;
}
