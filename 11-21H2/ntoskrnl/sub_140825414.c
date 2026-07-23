/*
 * XREFs of sub_140825414 @ 0x140825414
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x14020C520 (MmIsThisAnNtAsSystem.c)
 *     sub_140A57C10 @ 0x140A57C10 (sub_140A57C10.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140825414(_QWORD *a1)
{
  BOOLEAN IsThisAnNtAsSystem; // bp
  __int64 Pool2; // rax
  void *v4; // rbx
  __int64 v5; // rax
  void *v6; // rbx
  __int64 result; // rax

  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  a1[265] = &unk_140CF91C0;
  Pool2 = ExAllocatePool2(64LL, 128LL, 1229152847LL);
  v4 = (void *)Pool2;
  if ( Pool2 )
    sub_140A57C10(Pool2, 512, 64, 1229152847, IsThisAnNtAsSystem != 0 ? 64 : 32, (__int64)&qword_140C11710);
  else
    v4 = &unk_140CF91C0;
  a1[264] = v4;
  a1[267] = &unk_140CF9240;
  v5 = ExAllocatePool2(64LL, 128LL, 1296982607LL);
  v6 = (void *)v5;
  if ( v5 )
    sub_140A57C10(v5, 1, 248, 1296982607, IsThisAnNtAsSystem != 0 ? 32 : 16, (__int64)&qword_140C11710);
  else
    v6 = &unk_140CF9240;
  result = 0LL;
  a1[266] = v6;
  return result;
}
