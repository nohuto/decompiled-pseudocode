/*
 * XREFs of sub_1403DF48C @ 0x1403DF48C
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402A1788 @ 0x1402A1788 (sub_1402A1788.c)
 *     sub_14070F320 @ 0x14070F320 (sub_14070F320.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407FCA70 @ 0x1407FCA70 (sub_1407FCA70.c)
 */

__int64 __fastcall sub_1403DF48C(_DWORD *Address, SIZE_T Length, KPROCESSOR_MODE PreviousMode, _DWORD *a4)
{
  SIZE_T v6; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  _QWORD *i; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  unsigned __int16 *v15; // r12

  v6 = (unsigned int)Length;
  if ( !byte_140D068E0 )
    return 3221225897LL;
  if ( PreviousMode && !SeSinglePrivilegeCheck(stru_140D3CAF0, PreviousMode) )
    return 3221225569LL;
  if ( (_DWORD)v6 )
  {
    if ( (((_BYTE)v6 - 4) & 7) != 0 || (unsigned int)v6 < 4 )
      return 3221225476LL;
    v9 = (unsigned int)(v6 - 4) >> 3;
    if ( PreviousMode == 1 )
      ProbeForWrite(Address, v6, 4u);
  }
  else
  {
    v9 = 0;
    Address = 0LL;
  }
  v10 = 0LL;
  for ( i = 0LL; ; i = v13 )
  {
    v12 = sub_1402A1788(i);
    v13 = v12;
    if ( !v12 )
      break;
    v15 = (unsigned __int16 *)sub_14070F320(v12);
    if ( v15 )
    {
      if ( (unsigned int)v10 < v9 )
      {
        Address[2 * v10 + 1] = sub_140287F30(v14);
        Address[2 * v10 + 2] = *v15;
      }
      v10 = (unsigned int)(v10 + 1);
    }
  }
  if ( Address )
    *Address = v10;
  *a4 = 8 * v10 + 4;
  return v9 < (unsigned int)v10 ? 0xC0000023 : 0;
}
