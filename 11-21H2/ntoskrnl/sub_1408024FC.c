/*
 * XREFs of sub_1408024FC @ 0x1408024FC
 * Callers:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 */

__int64 __fastcall sub_1408024FC(unsigned __int64 a1, _QWORD *a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  void *v10; // rcx
  unsigned __int64 v11; // rdi
  PIMAGE_NT_HEADERS v12; // rax
  int v13; // r9d
  unsigned int *v14; // rdx
  unsigned int v15; // r8d
  unsigned __int64 v16; // r10

  CurrentThread = KeGetCurrentThread();
  v7 = -1073741275;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v8 = sub_1402FDA80(a1, 0);
  v9 = v8;
  if ( v8 )
  {
    v10 = (void *)v8[6];
    v11 = a1 - (_QWORD)v10;
    v12 = RtlImageNtHeader(v10);
    v13 = 0;
    if ( v12->FileHeader.NumberOfSections )
    {
      v14 = (DWORD *)((char *)&v12->OptionalHeader.SizeOfInitializedData + v12->FileHeader.SizeOfOptionalHeader);
      while ( 1 )
      {
        v15 = v14[2];
        v16 = v14[1];
        if ( v15 < *v14 )
          v15 = *v14;
        if ( v11 >= v16 && v11 < v15 + (unsigned int)v16 )
          break;
        v14 += 10;
        if ( ++v13 >= (unsigned int)v12->FileHeader.NumberOfSections )
          goto LABEL_11;
      }
      *a3 = v15;
      *a2 = v9[6] + v16;
      v7 = 0;
    }
  }
LABEL_11:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  sub_1402AC800((__int64)CurrentThread);
  return v7;
}
