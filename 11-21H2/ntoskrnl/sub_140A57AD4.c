/*
 * XREFs of sub_140A57AD4 @ 0x140A57AD4
 * Callers:
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 * Callees:
 *     sub_140A57C10 @ 0x140A57C10 (sub_140A57C10.c)
 */

__int64 sub_140A57AD4()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v1; // edi
  int v2; // ebx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( !*((_DWORD *)CurrentPrcb + 9) )
  {
    qword_140C116C8 = (__int64)&qword_140C116C0;
    qword_140C11718 = (__int64)&qword_140C11710;
    qword_140C11710 = (__int64)&qword_140C11710;
    qword_140C116C0 = (__int64)&qword_140C116C0;
    sub_140A57C10((unsigned int)&unk_140CF9640, 512, 1264, 1717723987, 32, (__int64)&qword_140C11710);
  }
  *((_QWORD *)CurrentPrcb + 273) = &unk_140CF9640;
  *((_QWORD *)CurrentPrcb + 272) = &unk_140CF9640;
  v1 = 16;
  v2 = (_DWORD)CurrentPrcb + 2304;
  do
  {
    sub_140A57C10(v2 + 3072, 0, v1, 1282371408, 256, (__int64)&qword_140C116C0);
    sub_140A57C10(v2, 512, v1, 1282371408, 256, (__int64)&qword_140C116C0);
    result = sub_140A57C10(v2 + 6144, 1, v1, 1282371408, 256, (__int64)&qword_140C116C0);
    v1 += 16;
    v2 += 96;
  }
  while ( v1 < 0x210 );
  return result;
}
