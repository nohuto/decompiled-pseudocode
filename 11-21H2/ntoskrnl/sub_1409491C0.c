/*
 * XREFs of sub_1409491C0 @ 0x1409491C0
 * Callers:
 *     sub_140948FB8 @ 0x140948FB8 (sub_140948FB8.c)
 *     sub_140949104 @ 0x140949104 (sub_140949104.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     sub_14076A2CC @ 0x14076A2CC (sub_14076A2CC.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 */

char *__fastcall sub_1409491C0(int a1, __int64 a2, unsigned int *a3, __int64 a4, char *a5)
{
  __int64 v7; // rcx
  char *v8; // r10
  __int64 *v9; // rcx
  int v10; // edx
  __int64 v11; // r8
  char v12; // bl
  __int64 **v13; // rax
  int v14; // eax
  char *v15; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  unsigned int *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v7 = 5LL * a1;
  v8 = (char *)a3 + qword_1400084F0[v7 + 1];
  v9 = (__int64 *)(a4 + qword_1400084F0[v7 + 3]);
  v10 = 0;
  v11 = *v9;
  if ( *v9 )
  {
    v12 = 1;
    if ( *(__int64 **)(v11 + 8) != v9 || (v13 = (__int64 **)v9[1], *v13 != v9) )
      __fastfail(3u);
    *v13 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v13;
    v14 = *((_DWORD *)v8 + 4);
    if ( v14 )
    {
      v10 = v14 - 1;
    }
    else
    {
      v15 = *(char **)v8;
      while ( v15 != v8 )
      {
        v15 = *(char **)v15;
        ++v10;
      }
    }
    *((_DWORD *)v8 + 4) = v10;
    *v9 = 0LL;
    v9[1] = 0LL;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite((PERESOURCE)a2, 1u);
    if ( !--Buffer[3] )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a2 + 104), &Buffer);
      sub_14077B394(Buffer);
    }
    ExReleaseResourceLite((PERESOURCE)a2);
    KeLeaveCriticalRegion();
    sub_14076A2CC((__int64)Buffer, a4, -1);
  }
  else
  {
    v12 = 0;
  }
  result = a5;
  if ( a5 )
    *a5 = v12;
  return result;
}
