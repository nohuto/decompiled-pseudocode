/*
 * XREFs of sub_1402F9614 @ 0x1402F9614
 * Callers:
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F8A20 @ 0x1402F8A20 (sub_1402F8A20.c)
 *     sub_1402FBE30 @ 0x1402FBE30 (sub_1402FBE30.c)
 *     SeLockSubjectContext @ 0x140722AE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140723F40 (SeUnlockSubjectContext.c)
 */

__int64 __fastcall sub_1402F9614(
        __int64 a1,
        __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int *a7)
{
  int v7; // esi
  char v10; // r15
  __int64 v11; // rax
  int v13; // r14d
  __int64 v14; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rbp
  _BYTE v17[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = a1;
  v7 = 0;
  v17[0] = 0;
  LOBYTE(v18) = 0;
  v10 = 0;
  v11 = sub_1402FBE30(a2);
  if ( !v11 || (v13 = *(_DWORD *)(v11 + 4), v14 = v11 + 8, v11 == -8) )
  {
    *a7 = -1;
    return (unsigned int)v7;
  }
  if ( a6 )
  {
    v10 = 1;
    if ( a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a4 + 48), 1u);
    }
    else
    {
      SeLockSubjectContext(a3);
    }
  }
  if ( a4 )
  {
    v16 = a5;
    goto LABEL_15;
  }
  if ( !a3->ClientToken )
  {
LABEL_14:
    v16 = *((_QWORD *)a3->PrimaryToken + 138);
LABEL_15:
    v7 = sub_1402F8A20(v16, v14, v17);
    if ( v7 >= 0 )
    {
      if ( v17[0] )
        *a7 = -1;
      else
        *a7 = v13 | 0x1000000;
    }
    goto LABEL_19;
  }
  v16 = *((_QWORD *)a3->ClientToken + 138);
  v7 = sub_1402F8A20(*((_QWORD *)a3->PrimaryToken + 138), v16, &v18);
  if ( v7 >= 0 )
  {
    if ( (_BYTE)v18 )
      goto LABEL_15;
    goto LABEL_14;
  }
LABEL_19:
  if ( v10 )
  {
    if ( a4 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
      KeLeaveCriticalRegion();
    }
    else
    {
      SeUnlockSubjectContext(a3);
    }
  }
  return (unsigned int)v7;
}
