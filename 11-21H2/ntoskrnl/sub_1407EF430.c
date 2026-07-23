/*
 * XREFs of sub_1407EF430 @ 0x1407EF430
 * Callers:
 *     sub_1407EC2C8 @ 0x1407EC2C8 (sub_1407EC2C8.c)
 *     sub_1407EF258 @ 0x1407EF258 (sub_1407EF258.c)
 *     sub_14081C8E0 @ 0x14081C8E0 (sub_14081C8E0.c)
 * Callees:
 *     sub_140369B48 @ 0x140369B48 (sub_140369B48.c)
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 *     sub_1407EF514 @ 0x1407EF514 (sub_1407EF514.c)
 *     sub_1407EF650 @ 0x1407EF650 (sub_1407EF650.c)
 *     sub_1407EF6BC @ 0x1407EF6BC (sub_1407EF6BC.c)
 *     sub_14081D3C0 @ 0x14081D3C0 (sub_14081D3C0.c)
 */

__int64 __fastcall sub_1407EF430(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  unsigned int Src; // [rsp+40h] [rbp+8h] BYREF

  if ( dword_140C1F3B8 == a1 && a1 != -1 )
    dword_140C1F3BC = a2;
  Src = a2;
  v4 = (const wchar_t *)sub_1407EF6BC(a2);
  sub_140369B48(3LL, (__int64)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  sub_1407EF650(&stru_140011108);
  sub_14075140C(&stru_1400110F8, a1, 0, 4u, &Src);
  sub_14075140C(&stru_1400110F8, a1, 1, 4u, &Src);
  if ( dword_140C1F390 )
  {
    if ( a1 >= dword_140C1F390 )
      sub_14081D3C0(a1);
    if ( dword_140C1F390 )
    {
      if ( a2 )
        _bittestandreset((signed __int32 *)stru_140C1F380.Buffer, a1);
      else
        _bittestandset((signed __int32 *)stru_140C1F380.Buffer, a1);
    }
  }
  return sub_1407EF514();
}
