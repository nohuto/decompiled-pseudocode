/*
 * XREFs of DrvDbDestroyDatabaseNode @ 0x140A6DC00
 * Callers:
 *     DrvDbOpenContext @ 0x140812D10 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140813590 (DrvDbCreateDatabaseNode.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14086648C (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbDispatchDriverDatabase @ 0x140876380 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbUnregisterDatabase @ 0x140A6DBA4 (DrvDbUnregisterDatabase.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1402A9050 (ExDeleteResourceLite.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     DrvDbUnloadDatabaseNode @ 0x140877618 (DrvDbUnloadDatabaseNode.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbDestroyDatabaseNode(__int64 a1, void *a2)
{
  int v4; // esi
  void **v5; // rdx
  void **v6; // rax
  void *v7; // rax
  void *v8; // rdi

  v4 = DrvDbUnloadDatabaseNode(a1, (__int64)a2);
  if ( v4 >= 0 )
  {
    v5 = *(void ***)a2;
    if ( *(_QWORD *)a2 )
    {
      if ( v5[1] != a2 || (v6 = (void **)*((_QWORD *)a2 + 1), *v6 != a2) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = v6;
    }
    v7 = *(void **)(a1 + 32);
    if ( v7 == a2 )
    {
      *(_QWORD *)(a1 + 32) = 0LL;
      v7 = 0LL;
    }
    if ( *(void **)(a1 + 40) == a2 )
      *(_QWORD *)(a1 + 40) = v7;
    v8 = (void *)*((_QWORD *)a2 + 19);
    if ( v8 )
    {
      ExDeleteResourceLite(*((PERESOURCE *)a2 + 19));
      ExFreePoolWithTag(v8, 0);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)a2 + 1);
    RtlFreeUnicodeString((PUNICODE_STRING)a2 + 3);
    ExFreePoolWithTag(a2, 0);
  }
  return (unsigned int)v4;
}
