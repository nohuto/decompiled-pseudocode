/*
 * XREFs of sub_1407021EC @ 0x1407021EC
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_140670488 @ 0x140670488 (sub_140670488.c)
 *     sub_140701F10 @ 0x140701F10 (sub_140701F10.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407021EC(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  PVOID *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  PVOID *v18; // rdx
  void *v19; // rcx

  v2 = *(void **)(a1 + 168);
  if ( v2 )
    ObCloseHandle(v2, 0);
  v3 = *(void **)(a1 + 176);
  if ( v3 )
    ObfDereferenceObject(v3);
  v4 = *(void **)(a1 + 152);
  if ( v4 )
    ObfDereferenceObject(v4);
  v5 = *(void **)(a1 + 128);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x72437350u);
  v6 = *(void **)(a1 + 184);
  if ( v6 )
    ObCloseHandle(v6, 0);
  v7 = *(void **)(a1 + 192);
  if ( v7 )
    ObCloseHandle(v7, 0);
  v8 = *(void **)(a1 + 200);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 208), 0);
  v9 = *(void **)(a1 + 280);
  if ( v9 && v9 != (void *)(a1 + 264) )
    ExFreePoolWithTag(v9, 0);
  v10 = *(void **)(a1 + 296);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = *(PVOID **)(a1 + 376);
  if ( v11 )
  {
    v17 = 0LL;
    if ( *(_DWORD *)(a1 + 388) )
    {
      v18 = *(PVOID **)(a1 + 376);
      do
      {
        if ( v11[v17] )
        {
          ObfDereferenceObjectWithTag(v11[v17], 0x6C4A7350u);
          v11 = *(PVOID **)(a1 + 376);
          v18 = v11;
        }
        ++v17;
      }
      while ( v17 < *(unsigned int *)(a1 + 388) );
      v11 = v18;
    }
    ExFreePoolWithTag(v11, 0x6C4A7350u);
  }
  v12 = *(void **)(a1 + 368);
  if ( v12 )
  {
    memset(v12, 0, *(unsigned int *)(a1 + 384));
    ExFreePoolWithTag(*(PVOID *)(a1 + 368), 0);
  }
  v13 = *(void **)(a1 + 400);
  if ( v13 )
  {
    memset(v13, 0, *(unsigned int *)(a1 + 408));
    ExFreePoolWithTag(*(PVOID *)(a1 + 400), 0);
  }
  v14 = *(_QWORD *)(a1 + 416);
  if ( v14 )
  {
    v19 = *(void **)(v14 + 8);
    if ( v19 || (v19 = *(void **)(v14 + 24)) != 0LL )
      ExFreePoolWithTag(v19, 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 416), 0);
  }
  v15 = *(void **)(a1 + 448);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(a1 + 448) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 232));
  v16 = *(_QWORD *)(a1 + 488);
  if ( v16 )
    PsDestroyProcessParameterOverrides(v16);
}
