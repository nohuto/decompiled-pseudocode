/*
 * XREFs of MiDeleteInsertedCloneVads @ 0x140A48CB8
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A48954 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D600 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9C0 (KiUnstackDetachProcess.c)
 *     MiReferenceVad @ 0x140275454 (MiReferenceVad.c)
 *     MiLockVad @ 0x14029C7D0 (MiLockVad.c)
 *     MiDeleteCloneZombies @ 0x140367684 (MiDeleteCloneZombies.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     MiDeleteCloneDescriptor @ 0x140663E40 (MiDeleteCloneDescriptor.c)
 *     MiDeleteVad @ 0x1406FA420 (MiDeleteVad.c)
 */

__int64 __fastcall MiDeleteInsertedCloneVads(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int *v3; // rax
  unsigned int *i; // rbx
  unsigned int **v5; // rax
  unsigned int *v6; // rsi
  unsigned int *v7; // rcx
  unsigned int *v8; // rcx
  unsigned int *j; // rax
  unsigned int **v10; // rax
  unsigned int *v11; // rcx
  unsigned int *v12; // rcx
  $115DCDF994C6370D29323EAB0E0C9502 v14; // [rsp+20h] [rbp-48h] BYREF

  memset(&v14, 0, sizeof(v14));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v14);
  *(_BYTE *)(*(_QWORD *)(a1 + 1680) + 341LL) |= 1u;
  v3 = *(unsigned int **)(a1 + 2008);
  i = 0LL;
  while ( v3 )
  {
    i = v3;
    v3 = *(unsigned int **)v3;
  }
  while ( i )
  {
    v5 = (unsigned int **)*((_QWORD *)i + 1);
    v6 = i;
    v7 = i;
    if ( v5 )
    {
      v8 = *v5;
      for ( i = (unsigned int *)*((_QWORD *)i + 1); v8; v8 = *(unsigned int **)v8 )
        i = v8;
    }
    else
    {
      while ( 1 )
      {
        i = (unsigned int *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || *(unsigned int **)i == v7 )
          break;
        v7 = i;
      }
    }
    MiLockVad((__int64)CurrentThread, (__int64)v6);
    MiReferenceVad((__int64)v6);
    MiDeleteVad(v6, 0LL, 0);
  }
  for ( j = *(unsigned int **)(a1 + 1264); j; j = *(unsigned int **)j )
    i = j;
  while ( i )
  {
    *((_QWORD *)i + 6) = 0LL;
    MiDeleteCloneDescriptor((struct _KPROCESS *)a1, (__int64)i);
    v10 = (unsigned int **)*((_QWORD *)i + 1);
    v11 = i;
    if ( v10 )
    {
      v12 = *v10;
      for ( i = (unsigned int *)*((_QWORD *)i + 1); v12; v12 = *(unsigned int **)v12 )
        i = v12;
    }
    else
    {
      while ( 1 )
      {
        i = (unsigned int *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || *(unsigned int **)i == v11 )
          break;
        v11 = i;
      }
    }
  }
  MiDeleteCloneZombies(a1, 0);
  return KiUnstackDetachProcess(&v14);
}
