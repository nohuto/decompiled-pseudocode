/*
 * XREFs of atoi @ 0x1403E0CC0
 * Callers:
 *     sub_140A33600 @ 0x140A33600 (sub_140A33600.c)
 *     sub_140A33AD0 @ 0x140A33AD0 (sub_140A33AD0.c)
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 *     sub_140B27364 @ 0x140B27364 (sub_140B27364.c)
 * Callees:
 *     atol @ 0x1403E0CE0 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
