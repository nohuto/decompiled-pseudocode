/*
 * XREFs of sub_1402D6C18 @ 0x1402D6C18
 * Callers:
 *     sub_140757C9C @ 0x140757C9C (sub_140757C9C.c)
 *     sub_14075883C @ 0x14075883C (sub_14075883C.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402D7504 @ 0x1402D7504 (sub_1402D7504.c)
 */

__int64 __fastcall sub_1402D6C18(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 SizeOfImage; // rdi
  PIMAGE_NT_HEADERS v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  WORD Magic; // cx

  v3 = 0;
  SizeOfImage = 0LL;
  v6 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( !v6 )
    goto LABEL_9;
  if ( (a1 & 1) == 0 )
  {
    Magic = v6->OptionalHeader.Magic;
    if ( Magic == 267 || Magic == 523 )
    {
      SizeOfImage = v6->OptionalHeader.SizeOfImage;
      goto LABEL_5;
    }
LABEL_9:
    v3 = -1073741701;
    goto LABEL_5;
  }
  v7 = sub_1402D7504(a1);
  if ( v7 )
    SizeOfImage = *(unsigned int *)(v7 + 64);
LABEL_5:
  result = v3;
  *a2 = SizeOfImage;
  return result;
}
