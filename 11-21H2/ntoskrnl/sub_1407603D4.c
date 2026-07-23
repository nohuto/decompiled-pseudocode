/*
 * XREFs of sub_1407603D4 @ 0x1407603D4
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_14076185C @ 0x14076185C (sub_14076185C.c)
 *     sub_140761C98 @ 0x140761C98 (sub_140761C98.c)
 *     sub_140761D10 @ 0x140761D10 (sub_140761D10.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_1407603D4(PCUNICODE_STRING String1, __int64 a2, __int64 a3, unsigned int a4, __int64 *Object)
{
  __int64 *v5; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 *v9; // rdi
  PVOID *v12; // rbx
  int v13; // ebx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int16 v16; // r8
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // rax

  v5 = Object;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v9 = 0LL;
  *v5 = 0LL;
  while ( 1 )
  {
    v12 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList != &PsLoadedModuleList )
    {
      while ( !RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(v12 + 9), 1u) )
      {
        v12 = (PVOID *)*v12;
        if ( v12 == &PsLoadedModuleList )
          goto LABEL_5;
      }
LABEL_14:
      if ( v9 )
        ObDereferenceObjectDeferDelete(v9);
      v17 = sub_14027B080((unsigned __int64)v12[6]);
      if ( (a4 & 1) != 0 )
      {
        if ( v17 == 1 )
        {
LABEL_18:
          *v5 = (__int64)v12;
          return 272LL;
        }
      }
      else if ( v17 != 1 )
      {
        goto LABEL_18;
      }
      return 3221225496LL;
    }
LABEL_5:
    if ( v9 )
      break;
    if ( !a3 )
      sub_1406F5AF0((__int64)CurrentThread);
    v13 = sub_14076185C(a2, a3, a4, &Object);
    if ( !a3 )
      sub_1406F5B50();
    if ( v13 < 0 )
      return (unsigned int)v13;
    v9 = Object;
    v14 = sub_140287970((__int64)Object);
    v15 = *(_QWORD *)(*(_QWORD *)v14 + 56LL);
    if ( *(__int16 *)(v15 + 46) < v16 && *(_DWORD *)(v15 + 32) == 1 && (a4 & 1) == 0 )
    {
      v13 = -1073741800;
LABEL_31:
      ObDereferenceObjectDeferDelete(v9);
      return (unsigned int)v13;
    }
    if ( (a4 & 0x40000000) != 0 )
    {
      v20 = sub_140761C98(v14);
      v12 = (PVOID *)v20;
      if ( v20 )
        goto LABEL_14;
    }
  }
  v19 = sub_140761D10(v9);
  if ( !v19 )
  {
    v13 = -1073741670;
    goto LABEL_31;
  }
  *v5 = v19;
  return 0LL;
}
