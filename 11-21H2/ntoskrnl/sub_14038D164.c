/*
 * XREFs of sub_14038D164 @ 0x14038D164
 * Callers:
 *     sub_14038D0F4 @ 0x14038D0F4 (sub_14038D0F4.c)
 * Callees:
 *     sub_1403B6CE8 @ 0x1403B6CE8 (sub_1403B6CE8.c)
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     sub_140418DB8 @ 0x140418DB8 (sub_140418DB8.c)
 *     sub_140A54238 @ 0x140A54238 (sub_140A54238.c)
 */

__int64 sub_14038D164()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  char v5; // al
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( *((_BYTE *)CurrentPrcb + 141) == 2 )
    __writemsr(0x1A0u, qword_140D06FF8);
  if ( _bittest64((const signed __int64 *)CurrentPrcb + 4404, 0x22u) )
    __writemsr(
      0xC0000103,
      *((unsigned __int8 *)CurrentPrcb + 209) | ((unsigned __int64)*((unsigned __int8 *)CurrentPrcb + 208) << 8));
  if ( *((_WORD *)CurrentPrcb + 882) || (qword_140D06958 & 0x600) != 0 )
    __writemsr(0x48u, *((unsigned __int16 *)CurrentPrcb + 882));
  sub_140418DB8(CurrentPrcb);
  if ( (qword_140D06958 & 0x8000) != 0 )
  {
    v3 = *((_QWORD *)CurrentPrcb + 1440);
    v1 = HIDWORD(v3);
    v2 = 290LL;
    __writemsr(0x122u, v3);
  }
  sub_1403B6CE8(v2, v1);
  v4 = 0LL;
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( *((_BYTE *)CurrentPrcb + 141) == 1 )
  {
    v5 = *((_BYTE *)CurrentPrcb + 64);
    if ( v5 > 15 && v5 != 17 && !(unsigned __int8)HviIsAnyHypervisorPresent(373LL, 0LL) )
    {
      v6 = __readmsr(0xC0011029) | 2;
      v4 = HIDWORD(v6);
      __writemsr(0xC0011029, v6);
    }
  }
  if ( byte_140D0688A && !byte_140D06888 )
  {
    v7 = __readcr3();
    __writecr3(v7 | 2);
  }
  sub_140A54238(CurrentPrcb, v4);
  if ( byte_140D0505C )
  {
    v8 = __readcr4();
    __writecr4(v8 | 0x800000);
  }
  result = (unsigned int)dword_140D06B0C;
  if ( (_DWORD)dword_140D06B0C )
    __writemsr(0x17DAu, (unsigned int)dword_140D06B0C);
  return result;
}
