/*
 * XREFs of ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C0077CD4
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00A8AE8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     EngFreeMem @ 0x1C0077DB0 (EngFreeMem.c)
 *     GreDeleteSemaphore @ 0x1C0077EE0 (GreDeleteSemaphore.c)
 *     GreDeleteSemaphoreNonTracked @ 0x1C00C4B38 (GreDeleteSemaphoreNonTracked.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MultiUserGreCleanupEngResources(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  int v3; // edx
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdi
  void *v7; // rcx
  _QWORD *v8; // [rsp+30h] [rbp+8h]

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( *(_QWORD *)(v1 + 3216) )
  {
    v2 = (_QWORD *)(v1 + 3200);
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = (_QWORD *)*v2;
        if ( (_QWORD *)*v2 == v2 )
          goto LABEL_11;
        v4 = *((_DWORD *)v8 + 4);
        if ( v4 )
          break;
        EngFreeMem(v8 + 4);
      }
      v3 = v4 - 1;
      if ( v3 )
      {
        v5 = v3 - 1;
        if ( v5 )
        {
          if ( v5 == 2 )
            goto LABEL_4;
        }
        else if ( qword_1C0294910 && (int)qword_1C0294910() >= 0 )
        {
          if ( qword_1C0294918 )
            qword_1C0294918(v8 + 4);
        }
      }
      else
      {
LABEL_4:
        GreDeleteSemaphore((PERESOURCE)(v8 + 4));
      }
    }
  }
LABEL_11:
  if ( *(_QWORD *)(v1 + 3240) )
  {
    v6 = v1 + 3224;
    while ( *(_QWORD *)v6 != v6 )
    {
      *(_DWORD *)(*(_QWORD *)v6 + 16LL) = 1;
      if ( qword_1C0294920 && (int)qword_1C0294920() >= 0 && qword_1C0294928 )
        qword_1C0294928(*(_QWORD *)v6 + 24LL);
    }
  }
  GreDeleteSemaphoreNonTracked(*(PVOID *)(v1 + 3216));
  v7 = *(void **)(v1 + 3240);
  *(_QWORD *)(v1 + 3216) = 0LL;
  GreDeleteSemaphoreNonTracked(v7);
  *(_QWORD *)(v1 + 3240) = 0LL;
}
