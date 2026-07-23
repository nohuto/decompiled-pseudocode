/*
 * XREFs of sub_140758C68 @ 0x140758C68
 * Callers:
 *     sub_140758DB8 @ 0x140758DB8 (sub_140758DB8.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     RtlPcToFileHeader @ 0x1403870E0 (RtlPcToFileHeader.c)
 *     sub_14054E1F4 @ 0x14054E1F4 (sub_14054E1F4.c)
 *     sub_1407589DC @ 0x1407589DC (sub_1407589DC.c)
 *     sub_140759008 @ 0x140759008 (sub_140759008.c)
 *     sub_1407FCA88 @ 0x1407FCA88 (sub_1407FCA88.c)
 */

NTSTATUS __fastcall sub_140758C68(char a1, __int64 a2, __int64 *a3, ULONG *a4)
{
  void *v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS result; // eax
  ULONG64 v10; // rdx
  ULONG64 Size; // [rsp+28h] [rbp-20h] BYREF
  PVOID BaseOfImage; // [rsp+30h] [rbp-18h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp-10h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0;
  OutHeaders = 0LL;
  BaseOfImage = 0LL;
  Size = 0LL;
  v7 = *(void **)(a2 + 88);
  if ( !v7 )
    return -1073741503;
  if ( !a1 )
  {
    RtlPcToFileHeader(v7, &BaseOfImage);
    if ( !BaseOfImage )
      return -1073741275;
LABEL_5:
    result = RtlImageNtHeaderEx(1u, (PVOID)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL), Size, &OutHeaders);
    if ( result >= 0 )
    {
      v10 = Size;
      if ( !Size )
      {
        result = sub_1407FCA88(OutHeaders, &Size);
        v10 = Size;
      }
      if ( result >= 0 )
      {
        if ( a1 == 1
          && v10
          && ((unsigned __int64)BaseOfImage + v10 > 0x7FFFFFFF0000LL || (char *)BaseOfImage + v10 < BaseOfImage) )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          v10 = Size;
        }
        return sub_1407589DC((char *)BaseOfImage, v10, a3, a4);
      }
    }
    return result;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (*(_BYTE *)(*((_QWORD *)CurrentThread + 23) + 992LL) & 1) != 0 )
    return sub_14054E1F4(*((_QWORD *)CurrentThread + 23), *(_QWORD *)(a2 + 88), (void **)a3, a4);
  result = sub_140759008(v7, &BaseOfImage, &Size, &v14);
  if ( result >= 0 )
    goto LABEL_5;
  return result;
}
